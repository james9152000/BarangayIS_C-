#pragma once
#include "population.h"
#include "setting_form.h"
#include "barangay_record.h"
#include "account_form.h"

namespace BarangayPopulationRecord {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for home
	/// </summary>
	public ref class home : public System::Windows::Forms::Form
	{
	public:
		home(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ imgLogo;

	private: System::Windows::Forms::Label^ lblTotalPopulation;

	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::DataGridView^ tableAll;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox;

	private: System::Windows::Forms::Label^ lblPurok;
	private: System::Windows::Forms::Label^ lblBirth;
	private: System::Windows::Forms::Label^ lblGender;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ lblTotalMale;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ lblTotalFemale;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtSearch;


	private: System::Windows::Forms::Label^ txtTextLogo;



	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;



	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::ComboBox^ cbPurok;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ lblCurrentTotalFemale;
	private: System::Windows::Forms::Label^ lblCurrentTotalMale;
	private: System::Windows::Forms::Label^ lblCurrentTotalPeople;
	private: System::Windows::Forms::Label^ lblCurrentPurok;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;





	private: System::Windows::Forms::PictureBox^ pictureBox11;













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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(home::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->imgLogo = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lblTotalPopulation = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tableAll = (gcnew System::Windows::Forms::DataGridView());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->lblPurok = (gcnew System::Windows::Forms::Label());
			this->lblBirth = (gcnew System::Windows::Forms::Label());
			this->lblGender = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->lblTotalMale = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->lblTotalFemale = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->txtTextLogo = (gcnew System::Windows::Forms::Label());
			this->cbPurok = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->lblCurrentTotalFemale = (gcnew System::Windows::Forms::Label());
			this->lblCurrentTotalMale = (gcnew System::Windows::Forms::Label());
			this->lblCurrentTotalPeople = (gcnew System::Windows::Forms::Label());
			this->lblCurrentPurok = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLogo))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tableAll))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(12, 283);
			this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(259, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Manage Record";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &home::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MidnightBlue;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->imgLogo);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(286, 659);
			this->panel1->TabIndex = 2;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::White;
			this->pictureBox5->Location = System::Drawing::Point(-2, 189);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(239, 1);
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(12, 469);
			this->button7->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(259, 43);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Exit";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &home::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(12, 406);
			this->button6->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(259, 43);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Setting";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &home::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(12, 344);
			this->button5->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(259, 43);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Blotter Record";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &home::button5_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(12, 225);
			this->button3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(259, 43);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Account";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &home::button3_Click);
			// 
			// imgLogo
			// 
			this->imgLogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->imgLogo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->imgLogo->Location = System::Drawing::Point(19, 16);
			this->imgLogo->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->imgLogo->Name = L"imgLogo";
			this->imgLogo->Size = System::Drawing::Size(133, 122);
			this->imgLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgLogo->TabIndex = 1;
			this->imgLogo->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->lblTotalPopulation);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Location = System::Drawing::Point(816, 67);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(230, 175);
			this->panel2->TabIndex = 3;
			// 
			// lblTotalPopulation
			// 
			this->lblTotalPopulation->AutoSize = true;
			this->lblTotalPopulation->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalPopulation->ForeColor = System::Drawing::Color::White;
			this->lblTotalPopulation->Location = System::Drawing::Point(102, 67);
			this->lblTotalPopulation->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblTotalPopulation->Name = L"lblTotalPopulation";
			this->lblTotalPopulation->Size = System::Drawing::Size(51, 55);
			this->lblTotalPopulation->TabIndex = 1;
			this->lblTotalPopulation->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(46, 15);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Total Population";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(13, 54);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(60, 85);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Controls->Add(this->tableAll);
			this->panel4->Location = System::Drawing::Point(317, 285);
			this->panel4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(581, 332);
			this->panel4->TabIndex = 5;
			// 
			// tableAll
			// 
			this->tableAll->AllowUserToAddRows = false;
			this->tableAll->AllowUserToDeleteRows = false;
			this->tableAll->AllowUserToResizeColumns = false;
			this->tableAll->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tableAll->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->tableAll->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tableAll->BackgroundColor = System::Drawing::Color::White;
			this->tableAll->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tableAll->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::CornflowerBlue;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Padding = System::Windows::Forms::Padding(7);
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::Transparent;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::Transparent;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tableAll->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->tableAll->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tableAll->GridColor = System::Drawing::Color::White;
			this->tableAll->Location = System::Drawing::Point(2, -1);
			this->tableAll->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->tableAll->MultiSelect = false;
			this->tableAll->Name = L"tableAll";
			this->tableAll->ReadOnly = true;
			this->tableAll->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::CornflowerBlue;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tableAll->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->tableAll->RowHeadersVisible = false;
			this->tableAll->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::CornflowerBlue;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::White;
			this->tableAll->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->tableAll->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			this->tableAll->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::Silver;
			this->tableAll->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->tableAll->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tableAll->Size = System::Drawing::Size(577, 333);
			this->tableAll->TabIndex = 0;
			this->tableAll->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &home::tableAll_CellClick);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel5->Controls->Add(this->lblPurok);
			this->panel5->Controls->Add(this->lblBirth);
			this->panel5->Controls->Add(this->lblGender);
			this->panel5->Controls->Add(this->lblName);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->pictureBox);
			this->panel5->Location = System::Drawing::Point(317, 67);
			this->panel5->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(485, 175);
			this->panel5->TabIndex = 6;
			// 
			// lblPurok
			// 
			this->lblPurok->AutoSize = true;
			this->lblPurok->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPurok->ForeColor = System::Drawing::Color::White;
			this->lblPurok->Location = System::Drawing::Point(254, 118);
			this->lblPurok->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblPurok->Name = L"lblPurok";
			this->lblPurok->Size = System::Drawing::Size(37, 19);
			this->lblPurok->TabIndex = 8;
			this->lblPurok->Text = L"text";
			// 
			// lblBirth
			// 
			this->lblBirth->AutoSize = true;
			this->lblBirth->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBirth->ForeColor = System::Drawing::Color::White;
			this->lblBirth->Location = System::Drawing::Point(254, 85);
			this->lblBirth->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblBirth->Name = L"lblBirth";
			this->lblBirth->Size = System::Drawing::Size(37, 19);
			this->lblBirth->TabIndex = 7;
			this->lblBirth->Text = L"text";
			// 
			// lblGender
			// 
			this->lblGender->AutoSize = true;
			this->lblGender->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGender->ForeColor = System::Drawing::Color::White;
			this->lblGender->Location = System::Drawing::Point(254, 54);
			this->lblGender->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblGender->Name = L"lblGender";
			this->lblGender->Size = System::Drawing::Size(37, 19);
			this->lblGender->TabIndex = 6;
			this->lblGender->Text = L"text";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->ForeColor = System::Drawing::Color::White;
			this->lblName->Location = System::Drawing::Point(254, 23);
			this->lblName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(37, 19);
			this->lblName->TabIndex = 5;
			this->lblName->Text = L"text";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(175, 119);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Purok :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(175, 85);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Birth :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(175, 54);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Gender :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(175, 23);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name :";
			// 
			// pictureBox
			// 
			this->pictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox->Location = System::Drawing::Point(14, 21);
			this->pictureBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(141, 146);
			this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox->TabIndex = 0;
			this->pictureBox->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->dataGridView1);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->lblTotalMale);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Location = System::Drawing::Point(1050, 67);
			this->panel3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(210, 84);
			this->panel3->TabIndex = 7;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(258, 166);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(36, 37);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Blue;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(13, 40);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(47, 29);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// lblTotalMale
			// 
			this->lblTotalMale->AutoSize = true;
			this->lblTotalMale->BackColor = System::Drawing::Color::Transparent;
			this->lblTotalMale->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalMale->ForeColor = System::Drawing::Color::White;
			this->lblTotalMale->Location = System::Drawing::Point(92, 33);
			this->lblTotalMale->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblTotalMale->Name = L"lblTotalMale";
			this->lblTotalMale->Size = System::Drawing::Size(39, 42);
			this->lblTotalMale->TabIndex = 1;
			this->lblTotalMale->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(69, 11);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 18);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Total Male";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::DeepPink;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->pictureBox4);
			this->panel6->Controls->Add(this->dataGridView2);
			this->panel6->Controls->Add(this->lblTotalFemale);
			this->panel6->Controls->Add(this->label9);
			this->panel6->Location = System::Drawing::Point(1050, 157);
			this->panel6->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(210, 86);
			this->panel6->TabIndex = 8;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Fuchsia;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(11, 41);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(53, 35);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 14;
			this->pictureBox4->TabStop = false;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(258, 166);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(36, 37);
			this->dataGridView2->TabIndex = 5;
			this->dataGridView2->Visible = false;
			// 
			// lblTotalFemale
			// 
			this->lblTotalFemale->AutoSize = true;
			this->lblTotalFemale->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalFemale->ForeColor = System::Drawing::Color::White;
			this->lblTotalFemale->Location = System::Drawing::Point(97, 35);
			this->lblTotalFemale->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblTotalFemale->Name = L"lblTotalFemale";
			this->lblTotalFemale->Size = System::Drawing::Size(39, 42);
			this->lblTotalFemale->TabIndex = 1;
			this->lblTotalFemale->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(61, 10);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 18);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Total Female";
			// 
			// txtSearch
			// 
			this->txtSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtSearch->Location = System::Drawing::Point(317, 252);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(164, 20);
			this->txtSearch->TabIndex = 9;
			this->txtSearch->TextChanged += gcnew System::EventHandler(this, &home::txtSearch_TextChanged);
			// 
			// txtTextLogo
			// 
			this->txtTextLogo->AutoSize = true;
			this->txtTextLogo->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTextLogo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtTextLogo->Location = System::Drawing::Point(311, 18);
			this->txtTextLogo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->txtTextLogo->Name = L"txtTextLogo";
			this->txtTextLogo->Size = System::Drawing::Size(396, 32);
			this->txtTextLogo->TabIndex = 9;
			this->txtTextLogo->Text = L"Barangay Population System";
			// 
			// cbPurok
			// 
			this->cbPurok->DisplayMember = L"All Purok";
			this->cbPurok->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbPurok->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbPurok->FormattingEnabled = true;
			this->cbPurok->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"All" });
			this->cbPurok->Location = System::Drawing::Point(539, 250);
			this->cbPurok->Name = L"cbPurok";
			this->cbPurok->Size = System::Drawing::Size(121, 22);
			this->cbPurok->TabIndex = 13;
			this->cbPurok->SelectedIndexChanged += gcnew System::EventHandler(this, &home::cbPurok_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label6->Location = System::Drawing::Point(90, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 18);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Purok :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label8->Location = System::Drawing::Point(90, 50);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 18);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Total People :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label11->Location = System::Drawing::Point(90, 88);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(86, 18);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Total Male :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label12->Location = System::Drawing::Point(90, 129);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(105, 18);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Total Female :";
			// 
			// lblCurrentTotalFemale
			// 
			this->lblCurrentTotalFemale->AutoSize = true;
			this->lblCurrentTotalFemale->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCurrentTotalFemale->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lblCurrentTotalFemale->Location = System::Drawing::Point(205, 129);
			this->lblCurrentTotalFemale->Name = L"lblCurrentTotalFemale";
			this->lblCurrentTotalFemale->Size = System::Drawing::Size(75, 19);
			this->lblCurrentTotalFemale->TabIndex = 21;
			this->lblCurrentTotalFemale->Text = L"text here";
			// 
			// lblCurrentTotalMale
			// 
			this->lblCurrentTotalMale->AutoSize = true;
			this->lblCurrentTotalMale->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCurrentTotalMale->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lblCurrentTotalMale->Location = System::Drawing::Point(205, 88);
			this->lblCurrentTotalMale->Name = L"lblCurrentTotalMale";
			this->lblCurrentTotalMale->Size = System::Drawing::Size(75, 19);
			this->lblCurrentTotalMale->TabIndex = 20;
			this->lblCurrentTotalMale->Text = L"text here";
			// 
			// lblCurrentTotalPeople
			// 
			this->lblCurrentTotalPeople->AutoSize = true;
			this->lblCurrentTotalPeople->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCurrentTotalPeople->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lblCurrentTotalPeople->Location = System::Drawing::Point(205, 50);
			this->lblCurrentTotalPeople->Name = L"lblCurrentTotalPeople";
			this->lblCurrentTotalPeople->Size = System::Drawing::Size(75, 19);
			this->lblCurrentTotalPeople->TabIndex = 19;
			this->lblCurrentTotalPeople->Text = L"text here";
			// 
			// lblCurrentPurok
			// 
			this->lblCurrentPurok->AutoSize = true;
			this->lblCurrentPurok->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCurrentPurok->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lblCurrentPurok->Location = System::Drawing::Point(205, 12);
			this->lblCurrentPurok->Name = L"lblCurrentPurok";
			this->lblCurrentPurok->Size = System::Drawing::Size(75, 19);
			this->lblCurrentPurok->TabIndex = 18;
			this->lblCurrentPurok->Text = L"text here";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Controls->Add(this->pictureBox1);
			this->panel7->Controls->Add(this->lblCurrentPurok);
			this->panel7->Controls->Add(this->lblCurrentTotalFemale);
			this->panel7->Controls->Add(this->label6);
			this->panel7->Controls->Add(this->lblCurrentTotalMale);
			this->panel7->Controls->Add(this->label8);
			this->panel7->Controls->Add(this->lblCurrentTotalPeople);
			this->panel7->Controls->Add(this->label11);
			this->panel7->Controls->Add(this->label12);
			this->panel7->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel7->Location = System::Drawing::Point(919, 285);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(340, 332);
			this->panel7->TabIndex = 22;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::MidnightBlue;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(85, 332);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(487, 248);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(34, 24);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 14;
			this->pictureBox11->TabStop = false;
			// 
			// home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1260, 659);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->cbPurok);
			this->Controls->Add(this->txtTextLogo);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->MaximizeBox = false;
			this->Name = L"home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &home::home_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLogo))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tableAll))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// for connection
		String^ strConnection = "server=localhost;database=barangaypopulationrecord;uid=root;password=1234";
		MySqlConnection^ conn = gcnew MySqlConnection(strConnection);

		void readTotalPopulation() { 
			conn->Open();
			String^ strRead = "SELECT id FROM allpeople";
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strRead, conn);

			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
		
			int^ total = dt->Rows->Count;
			lblTotalPopulation->Text = total->ToString();
			conn->Close();
		}

		void readTotalMale() {
			String^ strRead = "SELECT gender FROM allpeople WHERE gender = '"+"Male"+"'";
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strRead, conn);

			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			
			int^ total = dt->Rows->Count;
			lblTotalMale->Text = total->ToString();
			conn->Close();
		}

		void readTotalFemale() {
			String^ strRead = "SELECT gender FROM allpeople WHERE gender = '"+"Female"+"'";
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strRead, conn);

			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			
			int^ total = dt->Rows->Count;
			lblTotalFemale->Text = total->ToString();
			conn->Close();
		}

		void readTotalPurokFemale() {

			
			try {
				String^ strRead = "SELECT gender FROM allpeople WHERE gender = '" + "Female" + "' AND purok = '" + cbPurok->Text +"' ";
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strRead, conn);

				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				

				 int^ total = dt->Rows->Count;
				 lblCurrentTotalFemale->Text = total->ToString();

				conn->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show("Error in getting total female " + e);
				Close();
			}
		}

		void readTotalPurokMale() {


			try {
				String^ strRead = "SELECT gender FROM allpeople WHERE gender = '" + "Male" + "' AND purok = '" + cbPurok->Text + "' ";
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strRead, conn);

				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				

				int^ total = dt->Rows->Count;
				lblCurrentTotalMale->Text = total->ToString();

				conn->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show("Error in getting total Male " + e);
				Close();
			}
		}

		void readData() {
			try {
				conn->Open();
				String^ strRead = "SELECT id, name, gender, birth, purok FROM allpeople";
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strRead, conn);

				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				tableAll->DataSource = dt;

				conn->Close();
			}
			catch (Exception^ e) {

			}
		}

		void readFiltePurok() {

			

			try {
				conn->Open();
				String^ strRead = "SELECT id, name, gender, birth, purok FROM allpeople WHERE purok = '"+ cbPurok->Text +"' ";
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strRead, conn);
				
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				tableAll->DataSource = dt;
			    
				int^ total = tableAll->RowCount;
				lblCurrentTotalPeople->Text = total->ToString();

				conn->Close();
				
			}
			catch (Exception^ e) {
				conn->Close();
				MessageBox::Show("Failed " + e);
		 }
			

		}

		void readImageLogo() {
			try {
				conn->Open();
				String^ strRead = "SELECT image, text_logo FROM setting";
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strRead, conn);

				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				
				array<unsigned char>^ image = (array<unsigned char>^)dt->Rows[0]->ItemArray[0];
				MemoryStream^ ms = gcnew MemoryStream(image);
				imgLogo->Image = Image::FromStream(ms);
				txtTextLogo->Text = dt->Rows[0]->ItemArray[1]->ToString();
				conn->Close();

			}
			catch (Exception^ e) {
				MessageBox::Show("Failed to set Logo " + e);
				conn->Close();
			}
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		population^ ppl = gcnew population(this);
		ppl->Show();
		Hide();

	}

	private: System::Void home_Load(System::Object^ sender, System::EventArgs^ e) {

		readTotalPopulation();
		readData();
		readTotalMale();
		readTotalFemale();
		readImageLogo();
		

		
		try {
			String^ strRead = "SELECT purok_name FROM allpurok";
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strRead, conn);

			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);

			for (int i = 0; i < dt->Rows->Count; i++) {

				cbPurok->Items->Add(dt->Rows[i]->ItemArray[0]->ToString());

			}

			cbPurok->SelectedIndex = 0;

		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to read data " + e);
		}

}
private: System::Void tableAll_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {


	String^ strId = tableAll->Rows[tableAll->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try {

		conn->Open();
		pictureBox->Image = nullptr;
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT image FROM allpeople WHERE id = " + strId, conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);

		array<unsigned char>^ image = (array<unsigned char>^)dt->Rows[0]->ItemArray[0];

		MemoryStream^ ms = gcnew MemoryStream(image);
		pictureBox->Image = Image::FromStream(ms);
		
		conn->Close();

	}
	catch (Exception^ e) {

		conn->Close();
	}
	
	lblName->Text = tableAll->Rows[tableAll->CurrentCell->RowIndex]->Cells[1]->Value->ToString();
	lblGender->Text = tableAll->Rows[tableAll->CurrentCell->RowIndex]->Cells[2]->Value->ToString();
	lblBirth->Text = tableAll->Rows[tableAll->CurrentCell->RowIndex]->Cells[3]->Value->ToString();
	lblPurok->Text = tableAll->Rows[tableAll->CurrentCell->RowIndex]->Cells[4]->Value->ToString();


}



private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	account_form^ af = gcnew account_form(this);
	af->Show();
	Hide();

}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	setting_form^ s = gcnew setting_form(this);
	s->Show();
	Hide();

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	Application::Exit();

}

	   void readCurrentTotalFemale() {
		   String^ strRead = "SELECT gender FROM allpeople WHERE gender = '" + "Female" + "'";
		   MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strRead, conn);

		   DataTable^ dt = gcnew DataTable();
		   adapter->Fill(dt);
		 
		   int^ total = dt->Rows->Count;
		   lblCurrentTotalFemale->Text = total->ToString();
		   conn->Close();
	   }
	   void readCurrentTotalMale() {
		   String^ strRead = "SELECT gender FROM allpeople WHERE gender = '" + "Male" + "'";
		   MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strRead, conn);

		   DataTable^ dt = gcnew DataTable();
		   adapter->Fill(dt);
		 
		   int^ total = dt->Rows->Count;
		   lblCurrentTotalMale->Text = total->ToString();
		   conn->Close();
	   }

private: System::Void cbPurok_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
	

	if (cbPurok->Text->Equals("All")) {
		readData();
		lblCurrentPurok->Text = cbPurok->Text;
		lblCurrentTotalPeople->Text = lblTotalPopulation->Text;
		readCurrentTotalFemale();
		readCurrentTotalMale();
		
	}
	else {
		readFiltePurok();
		lblCurrentPurok->Text = cbPurok->Text;
		readTotalPurokFemale();
		readTotalPurokMale();
	}
	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	
	barangay_record^ br = gcnew barangay_record(this);
	br->Show();
	Hide();
	

}


	   public: void searchValue(String^ valueSearch, String^ purok) {
		   if (purok->Equals("All")) {
			   try {
				   conn->Open();               // CONCAT(`id`, `name`, `gender`, `birth`, `purok`)
				   String^ strSearch = "SELECT id, name, gender, birth, purok FROM allpeople WHERE CONCAT (id, name, gender, birth, purok)  LIKE '%" + valueSearch + "%'";
				   MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strSearch, conn);

				   DataTable^ dt = gcnew DataTable();
				   adapter->Fill(dt);
				   tableAll->DataSource = dt;

				   conn->Close();
			   }
			   catch (Exception^ e) {
				   MessageBox::Show("Error in searching data " + e);
			   }
		   }
		   else {

			   try {
				   conn->Open();               // CONCAT(`id`, `name`, `gender`, `birth`, `purok`)
				   String^ strSearch = "SELECT id, name, gender, birth, purok FROM allpeople WHERE CONCAT (id, name, gender, birth, purok)  LIKE '%" + valueSearch + "%' AND purok = '" + purok + "'";
				   MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strSearch, conn);

				   DataTable^ dt = gcnew DataTable();
				   adapter->Fill(dt);
				   tableAll->DataSource = dt;

				   conn->Close();
			   }
			   catch (Exception^ e) {
				   MessageBox::Show("Error in searching data " + e);
			   }
		   }

	   }

private: System::Void txtSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	String^ value = txtSearch->Text;
	String^ purok = cbPurok->Text;
	searchValue(value, purok);

}




};
}

