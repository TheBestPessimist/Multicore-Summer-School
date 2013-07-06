#include <cuda.h>
#include <Windows.h>
			/*for (int p=0; p<poza1->Width; p+=1)
				{
					for (int pp=0; pp<poza1->Height; pp+=1)
					{
						if (p==pp)
							puncteStarDP.Add(Point(
							p,
							pp								
							));
					}
				}//diagonala principala

			for (int s=0; s<poza1->Width; s+=1)
				{
					for (int ss=0; ss<poza1->Height; ss+=1)
					{
						if (ss==poza1->Height+1-s)
							puncteStarDS.Add(Point(
							s,
							ss								
							));
					}
				}//diagonala secundara

			for (int v=0; v<poza1->Width; v+=1)
				{
					for (int vv=0; vv<poza1->Height/2; vv+=1)
					{
						puncteStarDV.Add(Point(
							v,
							vv=poza1->Width/2								
							));
					}
				}//verticala mijloc

			for (int o=0; o<poza1->Width/2; o+=1)
				{
					for (int oo=0; oo<poza1->Height; oo+=1)
					{
						
							puncteStarDO.Add(Point(
							o=poza1->Height/2,
							oo								
							));
					}
				}//orizontala mijloc*/


//------------------------------------DLLEXPORTS----------------------------------------------	
extern "C"
{
	__declspec(dllexport) void pixelStarCallF(int *,int *, int *, int *, int *,int *, int*, int*, int , int*, int*, int*, int*);
	__declspec(dllexport) void randCallF(int, int , int *, int *);
}
//------------------------------------ENDDLLEXPORTS-------------------------------------------				
//------------------------------------KERNELS-------------------------------------------------
__device__ int my_rand()
{
  int r[100000];
  int i;
  int seed = 1354681;
  r[0] = seed;
  for (i=1; i<31; i++) {
	 r[i] = (16807LL * r[i-1]) % 2147483647;
	 if (r[i] < 0) {
		r[i] += 2147483647;
	 }
  }
  for (i=31; i<34; i++) {
	 r[i] = r[i-31];
  }
  for (i=34; i<344; i++) {
	 r[i] = r[i-31] + r[i-3];
  }
	i=334;
	r[i] = r[i-31] + r[i-3];
  i=((unsigned int)r[i])>>1;
  return i;
}
__global__ void pixelStar_kernel(int *DPx, int *DPy, int *DSx, int *DSy, int *DVx,int *DVy, int *DOx,int *DOy, int W, int *k1, int *k2, int *k3, int *k4)
{
	int 	i=blockIdx.x * blockDim.x + threadIdx.x;
	int	j=blockIdx.y * blockDim.y + threadIdx.y;
	if(i==0&&j==0){
		*k1=0, *k2=0, *k3=0, *k4=0;
	}
	 __syncthreads();
	if(i<(W-1) && j<(W-1))
	{
		if(i==j)
		{
			DPx[i]=i;
			DPy[j]=j;
		}
		//__syncthreads();
	   if(j==(W-1-i))
	   {
	   	DSx[i]=W+1-i;
		   DSy[i]=j;
   	}
		//__syncthreads();
		if(j==W/2)
		{
			DVx[i]=i;
			DVy[i]=j;
		}
		//__syncthreads();
		if(i==W/2)
		{
			DOx[j]=i;
			DOy[j]=j;
		}
	}
}
__global__ void pixalRandom_kernel(int W, int *PRx, int *PRy, int tbv)
{
	int i=blockIdx.x*blockDim.x+threadIdx.x;
	if(i<tbv)
	{
		PRx[i] = my_rand() % (W-1) +1 ;
		PRy[i] = my_rand() % (W-1) +1 ;
	}
}
//------------------------------------ENDKERNELS----------------------------------------------

//------------------------------------KERNELCALLS---------------------------------------------
void pixelStarCallF(int *DPx, int *DPy, int *DSx, int *DSy, int *DVx,int *DVy, int*DOx,int*DOy, int W, int*k1, int*k2, int*k3, int*k4)
{
	int *dk1, *dk2, *dk3, *dk4;
	int *dDPx, *dDSx, *dDVx, *dDOx;
	int *dDPy, *dDSy, *dDVy, *dDOy;
	cudaMalloc((void**)&dk1, sizeof(int));
	cudaMalloc((void**)&dk2, sizeof(int));
	cudaMalloc((void**)&dk3, sizeof(int));
	cudaMalloc((void**)&dk4, sizeof(int));
	cudaMalloc((void**)&dDPx, W*sizeof(int));
	cudaMalloc((void**)&dDPy, W*sizeof(int));
	cudaMalloc((void**)&dDSx, W*sizeof(int));
	cudaMalloc((void**)&dDSy, W*sizeof(int));
	cudaMalloc((void**)&dDVx, W*sizeof(int));
	cudaMalloc((void**)&dDVy, W*sizeof(int));
	cudaMalloc((void**)&dDOx, W*sizeof(int));
	cudaMalloc((void**)&dDOy, W*sizeof(int));
	
   int bdim=W/32+1;
	dim3 blocks(bdim,bdim,1);
	dim3 threads(32,32,1);
	pixelStar_kernel<<<blocks, threads>>>(dDPx, dDPy, dDSx,dDSy, dDVx,dDVy, dDOx,dDOy, W, dk1, dk2, dk3, dk4);
	cudaDeviceSynchronize();
	
	cudaMemcpy(DPx, dDPx, W*sizeof(int), cudaMemcpyDeviceToHost);
	cudaMemcpy(DPy, dDPy, W*sizeof(int), cudaMemcpyDeviceToHost);
	cudaMemcpy(DSx, dDSx, W*sizeof(int), cudaMemcpyDeviceToHost);
	cudaMemcpy(DSy, dDSy, W*sizeof(int), cudaMemcpyDeviceToHost);
	cudaMemcpy(DVx, dDVx, W*sizeof(int), cudaMemcpyDeviceToHost);
	cudaMemcpy(DVy, dDVy, W*sizeof(int), cudaMemcpyDeviceToHost);
	cudaMemcpy(DOx, dDOx, W*sizeof(int), cudaMemcpyDeviceToHost);
	cudaMemcpy(DOy, dDOy, W*sizeof(int), cudaMemcpyDeviceToHost);
	cudaMemcpy(k1, dk1, sizeof(int), cudaMemcpyDeviceToHost);
	cudaMemcpy(k2, dk2, sizeof(int), cudaMemcpyDeviceToHost);
	cudaMemcpy(k3, dk3, sizeof(int), cudaMemcpyDeviceToHost);
	cudaMemcpy(k4, dk4, sizeof(int), cudaMemcpyDeviceToHost);
	
	cudaFree(dk1);
	cudaFree(dk2);
	cudaFree(dk3);
	cudaFree(dk4);
	cudaFree(dDPx);
	cudaFree(dDPy);
	cudaFree(dDSx);
	cudaFree(dDSy);
	cudaFree(dDVx);
	cudaFree(dDVy);
	cudaFree(dDOx);
	cudaFree(dDOy);
}
void randCallF(int W,int tbv, int *PRx, int *PRy)
{
	int *dPRx, *dPRy;
	cudaMalloc((void**)&dPRx, tbv*sizeof(int));
	cudaMalloc((void**)&dPRy, tbv*sizeof(int));
	
	pixalRandom_kernel<<<(tbv/1024)+1,1024>>>( W, dPRx, dPRy, tbv); 
	
	cudaMemcpy(PRx, dPRx, tbv*sizeof(int), cudaMemcpyDeviceToHost);
	cudaMemcpy(PRy, dPRy, tbv*sizeof(int), cudaMemcpyDeviceToHost);
	
	cudaFree(dPRx);
	cudaFree(dPRy);
}
//------------------------------------ENDKERNELCALLS------------------------------------------