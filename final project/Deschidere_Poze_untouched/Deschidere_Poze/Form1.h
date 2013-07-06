#pragma once

#include <math.h>
#include "Bloc.h"
#include <stdio.h>
#include <Windows.h>


namespace Deschidere_Poze {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this ->generatorRandom = (gcnew System::Random());			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  uploadPoza1;
	protected: 

	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox6;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;
	private: System::Windows::Forms::Button^  uploadPoza2;

	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::Button^  pixelRandom;
	private: System::Windows::Forms::Button^  pixelStar;
	private: System::Windows::Forms::Button^  pixelR_S;

			 //functii
	private: System::Random^ generatorRandom;
	 
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label3;

	private: System::Drawing::Bitmap^ poza1;
	private: System::Drawing::Bitmap^ poza2;

	private: System::Windows::Forms::ListView^  listView1;

	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;

	private: System::Windows::Forms::Button^  buttonEuclid;

	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ListView^  listView3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::ColumnHeader^  columnHeader9;

	private: System::Collections::Generic::List<Point> puncteStarDP;
	private: System::Collections::Generic::List<Point> puncteStarDS;
	private: System::Collections::Generic::List<Point> puncteStarDV;
	private: System::Collections::Generic::List<Point> puncteStarDO;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ListBox^  listBox5;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  buttonMinkowski;
	private: System::Windows::Forms::Button^  buttonBrayCurtis;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;

	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::ListBox^  listBox7;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::ListBox^  listBox6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;

	private: System::Windows::Forms::RadioButton^  radioButtonList3;
	private: System::Windows::Forms::RadioButton^  radioButtonList2;
	private: System::Windows::Forms::RadioButton^  radioButtonList1;

	private: System::Windows::Forms::ComboBox^  comboBoxBlockSize;
	private: System::Windows::Forms::RadioButton^  radioButtonBlocuri;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::ColumnHeader^  columnHeader2;
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->uploadPoza1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->uploadPoza2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pixelRandom = (gcnew System::Windows::Forms::Button());
			this->pixelStar = (gcnew System::Windows::Forms::Button());
			this->pixelR_S = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->buttonEuclid = (gcnew System::Windows::Forms::Button());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->buttonMinkowski = (gcnew System::Windows::Forms::Button());
			this->buttonBrayCurtis = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->listBox7 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBoxBlockSize = (gcnew System::Windows::Forms::ComboBox());
			this->radioButtonBlocuri = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonList2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonList1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonList3 = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar2))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->SuspendLayout();
			// 
			// columnHeader2
			// 
			columnHeader2->Text = L"Pixel Coord.";
			columnHeader2->Width = 112;
			// 
			// uploadPoza1
			// 
			this->uploadPoza1->Location = System::Drawing::Point(717, 19);
			this->uploadPoza1->Name = L"uploadPoza1";
			this->uploadPoza1->Size = System::Drawing::Size(115, 23);
			this->uploadPoza1->TabIndex = 0;
			this->uploadPoza1->Text = L"Upload photo 1";
			this->uploadPoza1->UseVisualStyleBackColor = true;
			this->uploadPoza1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(41, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(650, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(173, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Photo 1 Dimensions";
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 200);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(480, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Photo 2 Dimensions";
			// 
			// pictureBox6
			// 
			this->pictureBox6->ErrorImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.ErrorImage")));
			this->pictureBox6->Location = System::Drawing::Point(0, 0);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(200, 200);
			this->pictureBox6->TabIndex = 9;
			this->pictureBox6->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Poza|*.bmp;*.jpg;*.png|All Files|*.*";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			this->openFileDialog2->Filter = L"Poza|*.bmp;*.jpg;*.png|All Files|*.*";
			// 
			// uploadPoza2
			// 
			this->uploadPoza2->Location = System::Drawing::Point(717, 47);
			this->uploadPoza2->Name = L"uploadPoza2";
			this->uploadPoza2->Size = System::Drawing::Size(115, 24);
			this->uploadPoza2->TabIndex = 14;
			this->uploadPoza2->Text = L"Upload photo 2";
			this->uploadPoza2->UseVisualStyleBackColor = true;
			this->uploadPoza2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(41, 51);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(650, 20);
			this->textBox2->TabIndex = 15;
			// 
			// pixelRandom
			// 
			this->pixelRandom->Location = System::Drawing::Point(14, 18);
			this->pixelRandom->Name = L"pixelRandom";
			this->pixelRandom->Size = System::Drawing::Size(79, 24);
			this->pixelRandom->TabIndex = 18;
			this->pixelRandom->Text = L"PixelRandom";
			this->pixelRandom->UseVisualStyleBackColor = true;
			this->pixelRandom->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// pixelStar
			// 
			this->pixelStar->Location = System::Drawing::Point(302, 19);
			this->pixelStar->Name = L"pixelStar";
			this->pixelStar->Size = System::Drawing::Size(79, 23);
			this->pixelStar->TabIndex = 19;
			this->pixelStar->Text = L"PixelStar";
			this->pixelStar->UseVisualStyleBackColor = true;
			this->pixelStar->Click += gcnew System::EventHandler(this, &Form1::pixelStar_Click);
			// 
			// pixelR_S
			// 
			this->pixelR_S->Location = System::Drawing::Point(612, 18);
			this->pixelR_S->Name = L"pixelR_S";
			this->pixelR_S->Size = System::Drawing::Size(79, 23);
			this->pixelR_S->TabIndex = 20;
			this->pixelR_S->Text = L"PixelR+S";
			this->pixelR_S->UseVisualStyleBackColor = true;
			this->pixelR_S->Click += gcnew System::EventHandler(this, &Form1::pixelR_S_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->BackColor = System::Drawing::Color::White;
			this->trackBar1->Location = System::Drawing::Point(96, 34);
			this->trackBar1->Maximum = 700;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(192, 45);
			this->trackBar1->TabIndex = 23;
			this->trackBar1->Value = 1;
			this->trackBar1->ValueChanged += gcnew System::EventHandler(this, &Form1::trackBar1_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(111, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 13);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Choose the number of pixels";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->columnHeader1, this->columnHeader3, 
				this->columnHeader4});
			this->listView1->Location = System::Drawing::Point(14, 85);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(274, 195);
			this->listView1->TabIndex = 25;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Pixel Coord.";
			this->columnHeader1->Width = 81;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Pixel 1 Value";
			this->columnHeader3->Width = 96;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Pixel 2 Value";
			this->columnHeader4->Width = 91;
			// 
			// buttonEuclid
			// 
			this->buttonEuclid->Location = System::Drawing::Point(19, 20);
			this->buttonEuclid->Name = L"buttonEuclid";
			this->buttonEuclid->Size = System::Drawing::Size(132, 24);
			this->buttonEuclid->TabIndex = 26;
			this->buttonEuclid->Text = L"Euclid Distance";
			this->buttonEuclid->UseVisualStyleBackColor = true;
			this->buttonEuclid->Click += gcnew System::EventHandler(this, &Form1::buttonEuclid_Click);
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {columnHeader2, this->columnHeader5, 
				this->columnHeader6});
			this->listView2->Location = System::Drawing::Point(302, 85);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(304, 195);
			this->listView2->TabIndex = 28;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Pixel 1 Value";
			this->columnHeader5->Width = 86;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Pixel 2 Value";
			this->columnHeader6->Width = 98;
			// 
			// listView3
			// 
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->columnHeader7, this->columnHeader8, 
				this->columnHeader9});
			this->listView3->Location = System::Drawing::Point(612, 85);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(254, 195);
			this->listView3->TabIndex = 29;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Pixel Coord.";
			this->columnHeader7->Width = 84;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Pixel 1 Value";
			this->columnHeader8->Width = 79;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Pixel 2 Value";
			this->columnHeader9->Width = 86;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(61, 58);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Result:";
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->Location = System::Drawing::Point(0, 0);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(123, 173);
			this->listBox5->TabIndex = 31;
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(121, 109);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(210, 210);
			this->panel1->TabIndex = 32;
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->Controls->Add(this->pictureBox6);
			this->panel2->Location = System::Drawing::Point(429, 111);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(210, 210);
			this->panel2->TabIndex = 33;
			// 
			// buttonMinkowski
			// 
			this->buttonMinkowski->Location = System::Drawing::Point(230, 20);
			this->buttonMinkowski->Name = L"buttonMinkowski";
			this->buttonMinkowski->Size = System::Drawing::Size(122, 25);
			this->buttonMinkowski->TabIndex = 34;
			this->buttonMinkowski->Text = L"Minkowski Distance";
			this->buttonMinkowski->UseVisualStyleBackColor = true;
			this->buttonMinkowski->Click += gcnew System::EventHandler(this, &Form1::buttonMinkowski_Click);
			// 
			// buttonBrayCurtis
			// 
			this->buttonBrayCurtis->Location = System::Drawing::Point(500, 20);
			this->buttonBrayCurtis->Name = L"buttonBrayCurtis";
			this->buttonBrayCurtis->Size = System::Drawing::Size(118, 24);
			this->buttonBrayCurtis->TabIndex = 35;
			this->buttonBrayCurtis->Text = L"Bray - Curtis Distance";
			this->buttonBrayCurtis->UseVisualStyleBackColor = true;
			this->buttonBrayCurtis->Click += gcnew System::EventHandler(this, &Form1::buttonBrayCurtis_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(261, 58);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Result:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(530, 58);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Result:";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Location = System::Drawing::Point(2, 8);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(880, 480);
			this->tabControl1->TabIndex = 39;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Transparent;
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->uploadPoza1);
			this->tabPage1->Controls->Add(this->uploadPoza2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(872, 454);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Upload Photos";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->Controls->Add(this->pixelRandom);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->trackBar1);
			this->tabPage2->Controls->Add(this->listView1);
			this->tabPage2->Controls->Add(this->pixelStar);
			this->tabPage2->Controls->Add(this->listView2);
			this->tabPage2->Controls->Add(this->pixelR_S);
			this->tabPage2->Controls->Add(this->listView3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(872, 454);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Choose Values";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->Controls->Add(this->listBox7);
			this->tabPage3->Controls->Add(this->groupBox2);
			this->tabPage3->Controls->Add(this->groupBox1);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->trackBar2);
			this->tabPage3->Controls->Add(this->panel5);
			this->tabPage3->Controls->Add(this->panel4);
			this->tabPage3->Controls->Add(this->panel3);
			this->tabPage3->Controls->Add(this->buttonEuclid);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->buttonBrayCurtis);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->buttonMinkowski);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(872, 454);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Matching Detection";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// listBox7
			// 
			this->listBox7->FormattingEnabled = true;
			this->listBox7->Location = System::Drawing::Point(500, 81);
			this->listBox7->Name = L"listBox7";
			this->listBox7->Size = System::Drawing::Size(123, 173);
			this->listBox7->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->comboBoxBlockSize);
			this->groupBox2->Controls->Add(this->radioButtonBlocuri);
			this->groupBox2->Location = System::Drawing::Point(678, 177);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(143, 108);
			this->groupBox2->TabIndex = 50;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Choose a block of pixels";
			// 
			// comboBoxBlockSize
			// 
			this->comboBoxBlockSize->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxBlockSize->FormattingEnabled = true;
			this->comboBoxBlockSize->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"16x16", L"32x32", L"64x64", L"128x128"});
			this->comboBoxBlockSize->Location = System::Drawing::Point(15, 58);
			this->comboBoxBlockSize->Name = L"comboBoxBlockSize";
			this->comboBoxBlockSize->Size = System::Drawing::Size(121, 21);
			this->comboBoxBlockSize->TabIndex = 48;
			// 
			// radioButtonBlocuri
			// 
			this->radioButtonBlocuri->AutoSize = true;
			this->radioButtonBlocuri->Location = System::Drawing::Point(8, 35);
			this->radioButtonBlocuri->Name = L"radioButtonBlocuri";
			this->radioButtonBlocuri->Size = System::Drawing::Size(57, 17);
			this->radioButtonBlocuri->TabIndex = 47;
			this->radioButtonBlocuri->TabStop = true;
			this->radioButtonBlocuri->Text = L"Blocks";
			this->radioButtonBlocuri->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButtonList2);
			this->groupBox1->Controls->Add(this->radioButtonList1);
			this->groupBox1->Controls->Add(this->radioButtonList3);
			this->groupBox1->Location = System::Drawing::Point(678, 20);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(143, 140);
			this->groupBox1->TabIndex = 49;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Choose one list of values";
			// 
			// radioButtonList2
			// 
			this->radioButtonList2->AutoSize = true;
			this->radioButtonList2->Location = System::Drawing::Point(15, 70);
			this->radioButtonList2->Name = L"radioButtonList2";
			this->radioButtonList2->Size = System::Drawing::Size(69, 17);
			this->radioButtonList2->TabIndex = 45;
			this->radioButtonList2->TabStop = true;
			this->radioButtonList2->Text = L"Pixel Star";
			this->radioButtonList2->UseVisualStyleBackColor = true;
			// 
			// radioButtonList1
			// 
			this->radioButtonList1->AutoSize = true;
			this->radioButtonList1->Location = System::Drawing::Point(15, 38);
			this->radioButtonList1->Name = L"radioButtonList1";
			this->radioButtonList1->Size = System::Drawing::Size(90, 17);
			this->radioButtonList1->TabIndex = 44;
			this->radioButtonList1->TabStop = true;
			this->radioButtonList1->Text = L"Pixel Random";
			this->radioButtonList1->UseVisualStyleBackColor = true;
			// 
			// radioButtonList3
			// 
			this->radioButtonList3->AutoSize = true;
			this->radioButtonList3->Location = System::Drawing::Point(15, 102);
			this->radioButtonList3->Name = L"radioButtonList3";
			this->radioButtonList3->Size = System::Drawing::Size(121, 17);
			this->radioButtonList3->TabIndex = 46;
			this->radioButtonList3->TabStop = true;
			this->radioButtonList3->Text = L"Pixel Random + Star";
			this->radioButtonList3->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(390, 29);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(83, 13);
			this->label7->TabIndex = 43;
			this->label7->Text = L"Numerical Order";
			// 
			// trackBar2
			// 
			this->trackBar2->BackColor = System::Drawing::Color::White;
			this->trackBar2->Location = System::Drawing::Point(371, 58);
			this->trackBar2->Maximum = 3;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(100, 45);
			this->trackBar2->TabIndex = 42;
			this->trackBar2->Value = 1;
			this->trackBar2->ValueChanged += gcnew System::EventHandler(this, &Form1::trackBar2_ValueChanged);
			// 
			// panel5
			// 
			this->panel5->Location = System::Drawing::Point(500, 81);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(123, 182);
			this->panel5->TabIndex = 41;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->listBox6);
			this->panel4->Location = System::Drawing::Point(230, 82);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(123, 181);
			this->panel4->TabIndex = 40;
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->Location = System::Drawing::Point(0, 1);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(123, 173);
			this->listBox6->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->listBox5);
			this->panel3->Location = System::Drawing::Point(25, 85);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(126, 179);
			this->panel3->TabIndex = 39;
			// 
			// tabPage5
			// 
			this->tabPage5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage5.BackgroundImage")));
			this->tabPage5->Controls->Add(this->richTextBox2);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(872, 454);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Help";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::White;
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Location = System::Drawing::Point(191, 20);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(524, 344);
			this->richTextBox2->TabIndex = 40;
			this->richTextBox2->Text = resources->GetString(L"richTextBox2.Text");
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 462);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"Image Matching";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar2))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 
				 openFileDialog1->FileName="";
				 if (openFileDialog1->ShowDialog()==System::Windows::Forms::DialogResult::OK)
					 //daca nu a dat Cancel utilizatorul
				 {
					 textBox1->Text=openFileDialog1->FileName; //pentru a vizualiza de unde am selectat
					 poza1 = gcnew Bitmap(openFileDialog1->FileName); 
					 
					 label1->Text=poza1->Width + " x " + poza1->Height;
					 
					// listBox1->Items->Clear();

					 for (int ii=0; ii<poza1->Height; ii++)
					 {
						 for (int i=0; i<poza1->Width; i++)
						 {
							//Color pixel = poza1->GetPixel(x,y);
							//listBox1->Items->Add("["+x+","+y+"]: "+pixel.R+","+pixel.G+","+pixel.B);

						 }
					 }

					 pictureBox1->Image = poza1;
					 pictureBox1->Width = poza1->Width;
					 pictureBox1->Height = poza1->Height;

				 }

			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
				 openFileDialog2->FileName="";
				 if (openFileDialog2->ShowDialog()==System::Windows::Forms::DialogResult::OK)
				 {
					 textBox2->Text=openFileDialog2->FileName; 
					 poza2 = gcnew Bitmap(openFileDialog2->FileName);
					 //am definit o var "poza" de tip Bitmap = a carui nume e filname returnat de fisierul din opendialog
			
					 label2->Text=poza2->Width + " x " + poza2->Height;

					 for (int ii=0; ii<poza2->Height; ii++)
					  {

						  for (int i=0; i<poza2->Width; i++)
							 {
								//Color pixel2 = poza2->GetPixel(x,y);
								//listBox2->Items->Add("["+x+","+y+"]: "+pixel2.R+","+pixel2.G+","+pixel2.B);
							 }
						 }
					 pictureBox6->Image = poza2;
					 pictureBox6->Width = poza2->Width;
					 pictureBox6->Height = poza2->Height;
				 }

			 }

private: List<Bloc^>^ ImpartePoza (System::Drawing::Bitmap^ imagine, int dimX, int dimY)
		 {
			 List<Bloc^>^ result = gcnew List<Bloc^>();

			 int widthMultiplu = imagine->Width / dimX * dimX;
			 int heightMultiplu = imagine->Height / dimY * dimY;

			 int blocuriX = widthMultiplu / dimX; //cate blocuri pe x
			 int blocuriY = heightMultiplu / dimY; //cate blocuri pe y

	         for (int y = 0; y < blocuriY; y++)
             {
                 for (int x = 0; x < blocuriX; x++)
                 {
                     Bloc^ bloc = gcnew Bloc();
                     bloc->x = x;
                     bloc->y = y;
					 bloc->image = gcnew Bitmap(dimX, dimY, System::Drawing::Imaging::PixelFormat::Format24bppRgb);
                     result->Add(bloc); 
					 //result e un vector unidimensional care tine, practic, toate blocurile
                 }
             }

			  //imparte poza in blocuri
             for (int x = 0; x < widthMultiplu; x++)
             {
                 for (int y = 0; y < heightMultiplu; y++)
                 {
                     int xBloc = x / dimX, yBloc = y / dimY; //in care bloc vine pixelul

                     int blocX = x % dimX, blocY = y % dimY; 
					 //coordonatele din bloc al pixelului care nu vor depasi dimX, dimY

                     Bloc^ blocCurent = result[yBloc * blocuriX + xBloc]; 
					//calculez coordonata unidimensionala a blocului
                    //daca am 5x10 blocuri si vreau sa aflu blocul de la coordonatele 0,1
                    //voi avea practic blocul 5*1 + 0 = 5, blocul cu index 5 (adica al 6-lea bloc pentru ca incepe de la 0 indexarea)
                     Color pixel = imagine->GetPixel(x, y);
                     blocCurent->image->SetPixel(blocX, blocY, pixel);
                 }
             }

			 return result;
		 }
		 
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (poza1 == nullptr && poza2== nullptr)
			 {
				 MessageBox::Show("You haven't selected a picture!","Error", MessageBoxButtons::OKCancel);
				 return;
			 }
			 else if (poza1 == nullptr)
			 {
				 MessageBox::Show("You haven't selected the first picture!","Error", MessageBoxButtons::OKCancel);
				 return;
			 }
			 else if (poza2 == nullptr)
			 {
				 MessageBox::Show("You haven't selected the second picture!","Error", MessageBoxButtons::OKCancel);
				 return;
			 }

			 
			listView1->Items->Clear();
			List<Point> puncteRandom; //memoreaza o lista de coordonate random din poze

			 for (int i = 0; i < trackBar1->Value; i++) 
			 {
				 puncteRandom.Add(Point(
					generatorRandom->Next(0, poza1->Width - 1), 
					generatorRandom->Next(0, poza1->Height - 1 )
					));
			 }

			 //pixelC1 coordonate de la punctulCurent pt poza 1
			 //pixelC2 coordonatele de la punctulCurent pt poza2
			 
			 for (int j = 0; j <puncteRandom.Count; j++)
			 {
				 Point punctCurent = puncteRandom[j];
				 Color pixelC1 = poza1->GetPixel(punctCurent.X, punctCurent.Y);
				 Color pixelC2 = poza2->GetPixel(punctCurent.X, punctCurent.Y);
				 ListViewItem^ randCurent = listView1->Items->Add(punctCurent.X+","+punctCurent.Y);
				 randCurent->SubItems->Add (pixelC1.R+","+pixelC1.G+","+pixelC1.B) ;
				 randCurent->SubItems->Add (pixelC2.R+","+pixelC2.G+","+pixelC2.B) ;						 
			 }
					
		 }//end of button3 = PixelRandom

private: System::Void pixelStar_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (poza1 == nullptr && poza2== nullptr)
			 {
				 MessageBox::Show("You haven't selected a picture!","Error", MessageBoxButtons::OKCancel);
				 return;
			 }
			 else if (poza1 == nullptr)
			 {
				 MessageBox::Show("You haven't selected the first picture!","Error", MessageBoxButtons::OKCancel);
				 return;
			 }
			 else if (poza2 == nullptr)
			 {
				 MessageBox::Show("You haven't selected the second picture!","Error", MessageBoxButtons::OKCancel);
				 return;
			 }


			 			 	//calculate the performance
LARGE_INTEGER startTime, endTime, freq;
QueryPerformanceFrequency(&freq);
QueryPerformanceCounter(&startTime);




			for (int p=0; p<poza1->Width; p+=1)
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
				}//orizontala mijloc
		
			for (int j = 0; j <puncteStarDP.Count; j++)
			 {		
					 Point punctCurent = puncteStarDP[j];
					 Color pixelC1 = poza1->GetPixel(punctCurent.X, punctCurent.Y);
					 Color pixelC2 = poza2->GetPixel(punctCurent.X, punctCurent.Y);		

					 ListViewItem^ randCurent = listView2->Items->Add(punctCurent.X+","+punctCurent.Y);
					 randCurent->SubItems->Add (pixelC1.R+","+pixelC1.G+","+pixelC1.B) ;
					 randCurent->SubItems->Add (pixelC2.R+","+pixelC2.G+","+pixelC2.B) ;				 
			 }


			 for (int j = 0; j <puncteStarDS.Count; j++)
				 {
					 Point punctCurent1 = puncteStarDS[j];
					 Color pixelC3 = poza1->GetPixel(punctCurent1.X, punctCurent1.Y);
					 Color pixelC4 = poza2->GetPixel(punctCurent1.X, punctCurent1.Y);
					 ListViewItem^ randCurent1 = listView2->Items->Add(punctCurent1.X+","+punctCurent1.Y);
					 randCurent1->SubItems->Add (pixelC3.R+","+pixelC3.G+","+pixelC3.B) ;
					 randCurent1->SubItems->Add (pixelC4.R+","+pixelC4.G+","+pixelC4.B) ;
					 
				 }


			for (int j = 0; j <puncteStarDV.Count; j++)
				 {
					 Point punctCurent2 = puncteStarDV[j];
					 Color pixelC5 = poza1->GetPixel(punctCurent2.X, punctCurent2.Y);
					 Color pixelC6 = poza2->GetPixel(punctCurent2.X, punctCurent2.Y);
					 ListViewItem^ randCurent2 = listView2->Items->Add(punctCurent2.X+","+punctCurent2.Y);
					 randCurent2->SubItems->Add (pixelC5.R+","+pixelC5.G+","+pixelC5.B) ;
					 randCurent2->SubItems->Add (pixelC6.R+","+pixelC6.G+","+pixelC6.B) ;
					 
				 }

			for (int j = 0; j <puncteStarDO.Count; j++)
				 {
					 Point punctCurent3 = puncteStarDO[j];
					 Color pixelC7 = poza1->GetPixel(punctCurent3.X, punctCurent3.Y);
					 Color pixelC8 = poza2->GetPixel(punctCurent3.X, punctCurent3.Y);

					 ListViewItem^ randCurent3 = listView2->Items->Add(punctCurent3.X+","+punctCurent3.Y);
					 randCurent3->SubItems->Add (pixelC7.R+","+pixelC7.G+","+pixelC7.B) ;
					 randCurent3->SubItems->Add (pixelC8.R+","+pixelC8.G+","+pixelC8.B) ;
					 
				 }


QueryPerformanceCounter(&endTime);


//print the time

char Char_Array[100];
String ^ t;
sprintf(Char_Array,"%f",((endTime.QuadPart - startTime.QuadPart)/

(double)freq.QuadPart));
t=gcnew String(Char_Array);
MessageBox::Show(t, "My Application", MessageBoxButtons::YesNo,MessageBoxIcon::Question);




		 }//end of button Pixel Star

private: System::Void pixelR_S_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (poza1 == nullptr && poza2== nullptr)
			 {
				 MessageBox::Show("You haven't selected a picture!","Error", MessageBoxButtons::OKCancel);
				 return;
			 }
			 else if (poza1 == nullptr)
			 {
				 MessageBox::Show("You haven't selected the first picture!","Error", MessageBoxButtons::OKCancel);
				 return;
			 }
			 else if (poza2 == nullptr)
			 {
				 MessageBox::Show("You haven't selected the second picture!","Error", MessageBoxButtons::OKCancel);
				 return;
			 }
 
			listView3->Items->Clear();
			List<Point> puncteR_S; 

			/*Valori cu metoda Random */
	    	for (int i = 0; i < trackBar1->Value; i++) 
				{
					 puncteR_S.Add(Point(
						generatorRandom->Next(0, poza1->Width - 1), 
						generatorRandom->Next(0, poza1->Height - 1 )
						));
				}

			 for (int j = 0; j <puncteR_S.Count; j++)
				 {
					 Point punctCurent = puncteR_S[j];
					 Color pixelC1 = poza1->GetPixel(punctCurent.X, punctCurent.Y);
					 Color pixelC2 = poza2->GetPixel(punctCurent.X, punctCurent.Y);
					 ListViewItem^ randCurent = listView3->Items->Add(punctCurent.X+","+punctCurent.Y);
					 randCurent->SubItems->Add (pixelC1.R+","+pixelC1.G+","+pixelC1.B) ;
					 randCurent->SubItems->Add (pixelC2.R+","+pixelC2.G+","+pixelC2.B) ;		 
				 }
			/* Valori  cu metoda Star*/

			List<Point> puncteStarDDP;
			List<Point> puncteStarDDS;
			List<Point> puncteStarDDV;
			List<Point> puncteStarDDO;
			for (int dp=0; dp<poza1->Width; dp+=1)
				{
					for (int dpp=0; dpp<poza1->Height; dpp+=1)
					{
						if (dp==dpp)
							puncteStarDDP.Add(Point(
							dp,
							dpp								
							));
					}
				}//diagonala principala

			for (int ds=0; ds<poza1->Width; ds+=1)
				{
					for (int dss=0; dss<poza1->Height; dss+=1)
					{
						if (dss==poza1->Height+1-ds)
							puncteStarDDS.Add(Point(
							ds,
							dss								
							));
					}
				}//diagonala secundara

			for (int vm=0; vm<poza1->Width; vm+=1)
				{
					for (int vvm=0; vvm<poza1->Height/2; vvm+=1)
					{
						puncteStarDDV.Add(Point(
							vm,
							vvm=poza1->Width/2								
							));
					}
				}//verticala mijloc

			for (int om=0; om<poza1->Width/2; om+=1)
				{
					for (int oom=0; oom<poza1->Height; oom+=1)
					{
						
							puncteStarDDO.Add(Point(
							om=poza1->Height/2,
							oom								
							));
					}
				}//orizontala mijloc


			for (int j = 0; j <puncteStarDDP.Count; j++)
			 {		
					 Point punctCurent = puncteStarDDP[j];
					 Color pixelC1 = poza1->GetPixel(punctCurent.X, punctCurent.Y);
					 Color pixelC2 = poza2->GetPixel(punctCurent.X, punctCurent.Y);		

					 ListViewItem^ randCurent = listView3->Items->Add(punctCurent.X+","+punctCurent.Y);
					 randCurent->SubItems->Add (pixelC1.R+","+pixelC1.G+","+pixelC1.B) ;
					 randCurent->SubItems->Add (pixelC2.R+","+pixelC2.G+","+pixelC2.B) ;				 
			 }

			 for (int j = 0; j <puncteStarDDS.Count; j++)
				 {
					 Point punctCurent1 = puncteStarDDS[j];
					 Color pixelC3 = poza1->GetPixel(punctCurent1.X, punctCurent1.Y);
					 Color pixelC4 = poza2->GetPixel(punctCurent1.X, punctCurent1.Y);
					 ListViewItem^ randCurent1 = listView3->Items->Add(punctCurent1.X+","+punctCurent1.Y);
					 randCurent1->SubItems->Add (pixelC3.R+","+pixelC3.G+","+pixelC3.B) ;
					 randCurent1->SubItems->Add (pixelC4.R+","+pixelC4.G+","+pixelC4.B) ;
					 
				 }

			for (int j = 0; j <puncteStarDDV.Count; j++)
				 {
					 Point punctCurent2 = puncteStarDDV[j];
					 Color pixelC5 = poza1->GetPixel(punctCurent2.X, punctCurent2.Y);
					 Color pixelC6 = poza2->GetPixel(punctCurent2.X, punctCurent2.Y);
					 ListViewItem^ randCurent2 = listView3->Items->Add(punctCurent2.X+","+punctCurent2.Y);
					 randCurent2->SubItems->Add (pixelC5.R+","+pixelC5.G+","+pixelC5.B) ;
					 randCurent2->SubItems->Add (pixelC6.R+","+pixelC6.G+","+pixelC6.B) ;
					 
				 }


			for (int j = 0; j <puncteStarDDO.Count; j++)
				 {
					 Point punctCurent3 = puncteStarDDO[j];
					 Color pixelC7 = poza1->GetPixel(punctCurent3.X, punctCurent3.Y);
					 Color pixelC8 = poza2->GetPixel(punctCurent3.X, punctCurent3.Y);

					 ListViewItem^ randCurent3 = listView3->Items->Add(punctCurent3.X+","+punctCurent3.Y);
					 randCurent3->SubItems->Add (pixelC7.R+","+pixelC7.G+","+pixelC7.B) ;
					 randCurent3->SubItems->Add (pixelC8.R+","+pixelC8.G+","+pixelC8.B) ;
					 
				 }

		 }//end button R+S

private: System::Void trackBar1_ValueChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			 label3->Text = trackBar1->Value.ToString();
		 }

private: System::Void DistantaEuclid(System::Windows::Forms::ListView^ listView)
		 {
			 listBox5->Items->Clear();
			 System::String^ delimStr =",";
			 array<Char>^del = delimStr->ToCharArray();

			 double distEuclid = 0;

			 for (int i=0; i < listView->Items->Count; i++)
			 {
				System::String^ c0 = listView->Items[i]->SubItems[0]->Text->ToString();
				System::String^ c1 = listView->Items[i]->SubItems[1]->Text->ToString();
				System::String^ c2 = listView->Items[i]->SubItems[2]->Text->ToString();
				
				//get valori coordonate pixeli [x,y]
				array<System::String^>^ coord = c0->Split(del);
				System::Collections::IEnumerator^ myEnum0 = coord->GetEnumerator();
				int coordonate[4];
				int c=0;
				while (myEnum0->MoveNext())
				{
					System::String^ d = safe_cast<String^>(myEnum0->Current);
					c++;
					coordonate[c] = int::Parse(d);
				}

				//get RGB like int for c1
				array<System::String^>^ sir = c1->Split(del);
				System::Collections::IEnumerator^ myEnum = sir->GetEnumerator();
				int culoare1[4];
				int j=0;
				while(myEnum->MoveNext())
				{
					System::String^ s = safe_cast<String^>(myEnum->Current);
					j++;
					culoare1[j] = int::Parse(s);
				}

				//get RBG like int for c2
				array<System::String^>^ sir2 = c2->Split(del);
				System::Collections::IEnumerator^ myEnum2 = sir2->GetEnumerator();
				int culoare2[4];
				j=0;
				while(myEnum2->MoveNext())
				{
					System::String^ s = safe_cast<String^>(myEnum2->Current);
					 j++;
					 culoare2[j] = int::Parse(s);
				}

				//calculate euclidian between c1, c2
				double dist=0;
				for (int k=1; k<4; k++)
				{
					dist += (culoare1[k]-culoare2[k])*(culoare1[k]-culoare2[k]);
				}
				 distEuclid = sqrt(dist);
				 
				 listBox5->Items->Add(distEuclid);	

			 Graphics^ graphics = Graphics::FromImage(poza1);
			 Pen^ creion = gcnew Pen(Color::Red);

			  if(distEuclid != 0)
				{
					 //desenare pe o poza la coordonatele un apar diferentele
					 graphics->DrawRectangle(creion, coordonate[1], coordonate[2], 10, 10);
				}
			 }
		 }

private: int GetBlockSize() 
		 {
			 if (comboBoxBlockSize->SelectedItem == "32x32") {return 32;}
			 if (comboBoxBlockSize->SelectedItem == "64x64") {return 64;}
			 if (comboBoxBlockSize->SelectedItem == "128x128") {return 128;}

			 return 16;
		 }


private: System::Void buttonEuclid_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (radioButtonList1->Checked)
			 {
				 this->DistantaEuclid(listView1);
			 }
			 if (radioButtonList2->Checked)
			 {
				 this->DistantaEuclid(listView2);
			 }
			 if (radioButtonList3->Checked)
			 {
				 this->DistantaEuclid(listView3);
			 }
			 if (radioButtonBlocuri->Checked)
			 {
				 if (poza1 == nullptr && poza2== nullptr)
				 {
					 MessageBox::Show("You haven't selected a picture!","Error", MessageBoxButtons::OKCancel);
					 return;
				 }
				 else if (poza1 == nullptr)
				 {
					 MessageBox::Show("You haven't selected the first picture!","Error", MessageBoxButtons::OKCancel);
					 return;
				 }
				 else if (poza2 == nullptr)
				 {
					 MessageBox::Show("You haven't selected the second picture!","Error", MessageBoxButtons::OKCancel);
					 return;
				 }
				 /* dimensiunea este in functie de varianta aleasa in GetBlockSize (varianta bifata 
				 din combolist)*/
				 int dim = this->GetBlockSize();
				 //blocuri1 memoreaza valorile din poza 1 iar blocuri2 valorile blocurilor din poza2
				 List<Bloc^>^ blocuri1 = ImpartePoza(this->poza1, dim, dim);
				 List<Bloc^>^ blocuri2 = ImpartePoza(this->poza2, dim, dim);

				 listBox5->Items->Clear();

				 for (int i = 0; i < blocuri1->Count; i++)
				 {
					 /*este adaugata in listBox5 media distantelor valorilor din blocuri1 respectiv 
					 valorile din blocuri2*/
					 listBox5->Items->Add(this->DistantaMedieEuclidian(
						 blocuri1[i]->image,
						 blocuri2[i]->image
						 ));
				 }
			 }
			
		 } //end buton Euclid


private: System::Void trackBar2_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 label7->Text = trackBar2->Value.ToString();
		 }

private: System::Void DistantaMinkowski(System::Windows::Forms::ListView^ listView) 
		 {
			 listBox6->Items->Clear();
			 System::String^ delimStr =",";
			 array<Char>^del = delimStr->ToCharArray();
				
			 double distMink = 0;

			 if(trackBar2->Value == 0)
			 {
				 MessageBox::Show("You must choose and order", "Error",MessageBoxButtons::OKCancel);
				 return;
			 }

			 for (int i=0; i < listView->Items->Count; i++)
			 {
				System::String^ c0 = listView->Items[i]->SubItems[0]->Text->ToString();
				System::String^ c1 = listView->Items[i]->SubItems[1]->Text->ToString();
				System::String^ c2 = listView->Items[i]->SubItems[2]->Text->ToString();
				
				//get valori coordonate pixeli [x,y]
				array<System::String^>^ coord = c0->Split(del);
				System::Collections::IEnumerator^ myEnum0 = coord->GetEnumerator();
				int coordonate[4];
				int c=0;
				while (myEnum0->MoveNext())
				{
					System::String^ d = safe_cast<String^>(myEnum0->Current);
					c++;
					coordonate[c] = int::Parse(d);
				}

				//get RGB like int for c1
				array<System::String^>^ sir = c1->Split(del);
				System::Collections::IEnumerator^ myEnum = sir->GetEnumerator();
				int culoare1[4];
				int j=0;
				while(myEnum->MoveNext())
				{
					System::String^ s = safe_cast<String^>(myEnum->Current);
					 j++;
					 culoare1[j] = int::Parse(s);
				}

				//get RBG like int for c2
				array<System::String^>^ sir2 = c2->Split(del);
				System::Collections::IEnumerator^ myEnum2 = sir2->GetEnumerator();
				int culoare2[4];
				j=0;
				while(myEnum2->MoveNext())
				{
					System::String^ s = safe_cast<String^>(myEnum2->Current);
					 j++;
					 culoare2[j] = int::Parse(s);
				}

				//calculate minkowski between c1, c2
				for (int t = 0; t <= trackBar2->Value; t++) 
				{
					double dist=0;
					for (int k=1; k<4; k++)
					{
						dist += pow(abs(culoare1[k]-culoare2[k]),(double)t);
					}
					
					distMink = pow(dist,(double)1/t);
				}//trackbar3
				listBox6->Items->Add(distMink);	

				Graphics^ graphics = Graphics::FromImage(poza1);
				Pen^ creion = gcnew Pen(Color::Green);

				if(distMink != 0)
					{
						graphics->DrawEllipse(creion, coordonate[1], coordonate[2], 15,15);
					}
			 }
		 }
private: System::Void buttonMinkowski_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (radioButtonList1->Checked)
			 {
				 this->DistantaMinkowski(listView1);
			 }
			 if (radioButtonList2->Checked)
			 {
				 this->DistantaMinkowski(listView2);
			 }
			 if (radioButtonList3->Checked)
			 {
				 this->DistantaMinkowski(listView3);
			 }
			 if (radioButtonBlocuri->Checked)
			 {
				 if (poza1 == nullptr && poza2== nullptr)
				 {
					 MessageBox::Show("You haven't selected a picture!","Error", MessageBoxButtons::OKCancel);
					 return;
				 }
				 else if (poza1 == nullptr)
				 {
					 MessageBox::Show("You haven't selected the first picture!","Error", MessageBoxButtons::OKCancel);
					 return;
				 }
				 else if (poza2 == nullptr)
				 {
					 MessageBox::Show("You haven't selected the second picture!","Error", MessageBoxButtons::OKCancel);
					 return;
				 }
				 int dim = this->GetBlockSize();
				 List<Bloc^>^ blocuri1 = ImpartePoza(this->poza1, dim, dim);
				 List<Bloc^>^ blocuri2 = ImpartePoza(this->poza2, dim, dim);

				 listBox6->Items->Clear();

				 for (int i = 0; i < blocuri1->Count; i++)
				 {
					 listBox6->Items->Add(this->DistantaMedieMink(
						 blocuri1[i]->image,
						 blocuri2[i]->image,
						 this->trackBar2->Value
						 ));
				 }
			 }
		 }//end button Minkowski

private: System::Void DistantaBrayCurtis(System::Windows::Forms::ListView^ listView)
		 {
			listBox7->Items->Clear();
			 System::String^ delimStr =",";
			 array<Char>^del = delimStr->ToCharArray();
			
			 double distBC = 0;
		 
			 for (int i=0; i<listView->Items->Count; i++)
			 {
			    System::String^ c0 = listView->Items[i]->SubItems[0]->Text->ToString();
				System::String^ c1 = listView->Items[i]->SubItems[1]->Text->ToString();
			    System::String^ c2 = listView->Items[i]->SubItems[2]->Text->ToString();

				//get valori coordonate pixeli [x,y]
				array<System::String^>^ coord = c0->Split(del);
				System::Collections::IEnumerator^ myEnum0 = coord->GetEnumerator();
				int coordonate[4];
				int c=0;
				while (myEnum0->MoveNext())
				{
					System::String^ d = safe_cast<String^>(myEnum0->Current);
					c++;
					coordonate[c] = int::Parse(d);
				}

				//get RGB like int for c1
				array<System::String^>^ sir = c1->Split(del);
				System::Collections::IEnumerator^ myEnum = sir->GetEnumerator();
				int culoare1[4];
				int j=0;
				while(myEnum->MoveNext())
				{
					System::String^ s = safe_cast<String^>(myEnum->Current);
					 j++;
					 culoare1[j] = int::Parse(s);
				}

				//get RBG like int for c2
				array<System::String^>^ sir2 = c2->Split(del);
				System::Collections::IEnumerator^ myEnum2 = sir2->GetEnumerator();
				int culoare2[4];
				j=0;
				while(myEnum2->MoveNext())
				{
					System::String^ s = safe_cast<String^>(myEnum2->Current);
					 j++;
					 culoare2[j] = int::Parse(s);
				}
				//calculate Bray-Curtis between c1, c2
				double dist1 = 0;
				double dist2 = 0;
				for (int k=1; k<4; k++)
				{
					dist1 += abs (culoare1[k] - culoare2[k]);
					dist2 += culoare1[k]+ culoare2[k];
				}
				distBC = dist1 / dist2;
				listBox7->Items->Add(distBC);	
			   
				Graphics^ graphics = Graphics::FromImage(poza1);
			    Pen^ creion = gcnew Pen(Color::Yellow);

			    if(distBC!= 0)
				 {
					graphics->DrawRectangle(creion, coordonate[1], coordonate[2], 20, 30);
				 }
			}
		 }
private: System::Void buttonBrayCurtis_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 if (radioButtonList1->Checked)
			 {
				 this->DistantaBrayCurtis(listView1);
			 }
			 if (radioButtonList2->Checked)
			 {
				 this->DistantaBrayCurtis(listView2);
			 }
			 if (radioButtonList3->Checked)
			 {
				 this->DistantaBrayCurtis(listView3);
			 }
			 if (radioButtonBlocuri->Checked)
			 {
				 if (poza1 == nullptr && poza2== nullptr)
				 {
					 MessageBox::Show("You haven't selected a picture!","Error", MessageBoxButtons::OKCancel);
					 return;
				 }
				 else if (poza1 == nullptr)
				 {
					 MessageBox::Show("You haven't selected the first picture!","Error", MessageBoxButtons::OKCancel);
					 return;
				 }
				 else if (poza2 == nullptr)
				 {
					 MessageBox::Show("You haven't selected the second picture!","Error", MessageBoxButtons::OKCancel);
					 return;
				 }
				 int dim = this->GetBlockSize();
				 List<Bloc^>^ blocuri1 = ImpartePoza(this->poza1, dim, dim);
				 List<Bloc^>^ blocuri2 = ImpartePoza(this->poza2, dim, dim);

				 listBox7->Items->Clear();

				 for (int i = 0; i < blocuri1->Count; i++)
				 {
					 listBox7->Items->Add(this->DistantaMedieBC(
						 blocuri1[i]->image,
						 blocuri2[i]->image
						 ));
				 }
			 }
						 
		 }//end button Bray - Curtis

private: double DistantaMedieEuclidian(System::Drawing::Bitmap^ poza1, System::Drawing::Bitmap^ poza2)
		 {
			 double distanta = 0;
			 for (int x = 0; x < poza1->Width; x++) 
			 {
				 for (int y = 0; y < poza1->Height; y++)
				 {
					 Color pixel1 = poza1->GetPixel(x, y);
					 Color pixel2 = poza2->GetPixel(x, y);

					 distanta += Math::Sqrt(
                            (pixel2.R - pixel1.R) * (pixel2.R - pixel1.R) +
                            (pixel2.G - pixel1.G) * (pixel2.G - pixel1.G) +
                            (pixel2.B - pixel1.B) * (pixel2.B - pixel1.B)
                            );
				 }

			 }
			 distanta /= poza1->Width * poza1->Height;

			 //Graphics^ graphics = Graphics::FromImage(poza1);
			 //Pen^ creion = gcnew Pen(Color::Red);
			 //if(distanta != 0)
				//{
				//	graphics->DrawRectangle(creion, Bloc^x, Bloc^y, 10, 10);
				//}

			 return distanta;

		 }//end distMedie Euclid
 private: double DistantaMedieMink(System::Drawing::Bitmap^ poza1, System::Drawing::Bitmap^ poza2, int t)
		 {
			 double distanta = 0;
			 double distanta1 = 0;
			 for (int x = 0; x < poza1->Width; x++) 
			 {
				 for (int y = 0; y < poza1->Height; y++)
				 {
					 Color pixel1 = poza1->GetPixel(x, y);
					 Color pixel2 = poza2->GetPixel(x, y);

					 distanta1 = 
						 Math::Pow(abs(pixel2.R - pixel1.R),t) +
						 Math::Pow(abs(pixel2.G - pixel1.G),t) +
						 Math::Pow(abs(pixel2.B - pixel1.B),t);

					 distanta += Math::Pow(distanta1,(double)1/t); //le adun sa pot face apoi media
				 }

			 }
			 distanta /= poza1->Width * poza1->Height;

			 return distanta;

		 }//end disMedie Mink
  private: double DistantaMedieBC(System::Drawing::Bitmap^ poza1, System::Drawing::Bitmap^ poza2)
		 {
			 double distanta = 0;
			 double distanta1 = 0;
			 double distanta2 = 0;
			 for (int x = 0; x < poza1->Width; x++) 
			 {
				 for (int y = 0; y < poza1->Height; y++)
				 {
					 Color pixel1 = poza1->GetPixel(x, y);
					 Color pixel2 = poza2->GetPixel(x, y);

					 distanta1 = (
                             abs(pixel2.R - pixel1.R) +
							 abs(pixel2.G - pixel1.G)+ 
							 abs(pixel2.B - pixel1.B) 
                            );
					 distanta2 = (
                            (pixel2.R + pixel1.R) + 
                            (pixel2.G + pixel1.G) + 
                            (pixel2.B + pixel1.B) ) 
                            ;
					distanta += distanta1 / distanta2;
				 }

			 }
			 distanta /= poza1->Width * poza1->Height;
			 return distanta;

		 }//end distMedie bc

private: System::Void buttonBlocuri_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			
		 }//end button Blocuri

};
}

 