#pragma once
#include "add_data.h"

namespace BarangayPopulationRecord {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for population
	/// </summary>
	public ref class population : public System::Windows::Forms::Form
	{
	public:

		Form^ back_home;

		population(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		population(Form^ home)
		{
			back_home = home;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~population()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ lblName;
	private: System::Windows::Forms::TextBox^ lblGender;
	private: System::Windows::Forms::TextBox^ lblBirth;
	private: System::Windows::Forms::TextBox^ lblPurok;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ComboBox^ cbGender;
	private: System::Windows::Forms::DateTimePicker^ dateBirth;
	private: System::Windows::Forms::ComboBox^ cbPurok;
	public: System::Windows::Forms::Label^ lblImageLocation;
	private:


	private: System::Windows::Forms::DataGridView^ table;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ txtSearch;

	private: System::Windows::Forms::Button^ button6;
	public: System::Windows::Forms::Button^ btnRefresh;
	private: System::Windows::Forms::ComboBox^ cbPurokFilter;
	public:

	public:
	private:









	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::TextBox());
			this->lblGender = (gcnew System::Windows::Forms::TextBox());
			this->lblBirth = (gcnew System::Windows::Forms::TextBox());
			this->lblPurok = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->cbGender = (gcnew System::Windows::Forms::ComboBox());
			this->dateBirth = (gcnew System::Windows::Forms::DateTimePicker());
			this->cbPurok = (gcnew System::Windows::Forms::ComboBox());
			this->lblImageLocation = (gcnew System::Windows::Forms::Label());
			this->table = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->cbPurokFilter = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::RoyalBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(-2, 533);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(360, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &population::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::RoyalBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(-7, 586);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(365, 42);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &population::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::RoyalBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(-2, 480);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(360, 42);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &population::button3_Click);
			// 
			// pictureBox
			// 
			this->pictureBox->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox->Location = System::Drawing::Point(12, 69);
			this->pictureBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(146, 128);
			this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox->TabIndex = 4;
			this->pictureBox->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(16, 286);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Name :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(16, 326);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Gender :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(16, 368);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Birth :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(16, 411);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Purok :";
			// 
			// lblName
			// 
			this->lblName->Location = System::Drawing::Point(85, 283);
			this->lblName->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(149, 22);
			this->lblName->TabIndex = 13;
			// 
			// lblGender
			// 
			this->lblGender->Location = System::Drawing::Point(85, 323);
			this->lblGender->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->lblGender->Name = L"lblGender";
			this->lblGender->ReadOnly = true;
			this->lblGender->Size = System::Drawing::Size(149, 22);
			this->lblGender->TabIndex = 14;
			// 
			// lblBirth
			// 
			this->lblBirth->Location = System::Drawing::Point(85, 365);
			this->lblBirth->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->lblBirth->Name = L"lblBirth";
			this->lblBirth->ReadOnly = true;
			this->lblBirth->Size = System::Drawing::Size(149, 22);
			this->lblBirth->TabIndex = 15;
			// 
			// lblPurok
			// 
			this->lblPurok->Location = System::Drawing::Point(85, 408);
			this->lblPurok->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->lblPurok->Name = L"lblPurok";
			this->lblPurok->ReadOnly = true;
			this->lblPurok->Size = System::Drawing::Size(149, 22);
			this->lblPurok->TabIndex = 16;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(12, 203);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(146, 28);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Change";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &population::button4_Click);
			// 
			// cbGender
			// 
			this->cbGender->FormattingEnabled = true;
			this->cbGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->cbGender->Location = System::Drawing::Point(240, 323);
			this->cbGender->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->cbGender->Name = L"cbGender";
			this->cbGender->Size = System::Drawing::Size(110, 24);
			this->cbGender->TabIndex = 23;
			this->cbGender->Text = L"Select Gender";
			// 
			// dateBirth
			// 
			this->dateBirth->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateBirth->Location = System::Drawing::Point(240, 365);
			this->dateBirth->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dateBirth->Name = L"dateBirth";
			this->dateBirth->Size = System::Drawing::Size(110, 22);
			this->dateBirth->TabIndex = 24;
			// 
			// cbPurok
			// 
			this->cbPurok->FormattingEnabled = true;
			this->cbPurok->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Luwasan", L"Partida 1", L"Partida 2" });
			this->cbPurok->Location = System::Drawing::Point(240, 408);
			this->cbPurok->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->cbPurok->Name = L"cbPurok";
			this->cbPurok->Size = System::Drawing::Size(110, 24);
			this->cbPurok->TabIndex = 25;
			this->cbPurok->Text = L"Select Purok";
			// 
			// lblImageLocation
			// 
			this->lblImageLocation->AutoSize = true;
			this->lblImageLocation->Location = System::Drawing::Point(164, 69);
			this->lblImageLocation->Name = L"lblImageLocation";
			this->lblImageLocation->Size = System::Drawing::Size(144, 16);
			this->lblImageLocation->TabIndex = 27;
			this->lblImageLocation->Text = L"Invisible Image Location";
			this->lblImageLocation->Visible = false;
			// 
			// table
			// 
			this->table->AllowUserToAddRows = false;
			this->table->AllowUserToDeleteRows = false;
			this->table->AllowUserToResizeColumns = false;
			this->table->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->table->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->table->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->table->BackgroundColor = System::Drawing::Color::White;
			this->table->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->table->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Padding = System::Windows::Forms::Padding(5);
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->table->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table->Location = System::Drawing::Point(353, 69);
			this->table->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->table->MultiSelect = false;
			this->table->Name = L"table";
			this->table->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->table->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->table->RowHeadersVisible = false;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::White;
			this->table->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->table->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			this->table->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::Silver;
			this->table->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->table->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->table->Size = System::Drawing::Size(692, 559);
			this->table->TabIndex = 28;
			this->table->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &population::table_CellClick_1);
			// 
			// button5
			// 
			this->button5->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(533, 21);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 30);
			this->button5->TabIndex = 30;
			this->button5->Text = L"Search";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// txtSearch
			// 
			this->txtSearch->Location = System::Drawing::Point(353, 25);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(164, 22);
			this->txtSearch->TabIndex = 29;
			this->txtSearch->TextChanged += gcnew System::EventHandler(this, &population::textBox1_TextChanged);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(970, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 39);
			this->button6->TabIndex = 31;
			this->button6->Text = L"Back";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &population::button6_Click);
			// 
			// btnRefresh
			// 
			this->btnRefresh->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnRefresh->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnRefresh->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnRefresh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRefresh->ForeColor = System::Drawing::Color::White;
			this->btnRefresh->Location = System::Drawing::Point(766, 22);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(75, 30);
			this->btnRefresh->TabIndex = 32;
			this->btnRefresh->Text = L"Refresh";
			this->btnRefresh->UseVisualStyleBackColor = true;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &population::btnRefresh_Click);
			// 
			// cbPurokFilter
			// 
			this->cbPurokFilter->DisplayMember = L"All Purok";
			this->cbPurokFilter->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbPurokFilter->FormattingEnabled = true;
			this->cbPurokFilter->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"All" });
			this->cbPurokFilter->Location = System::Drawing::Point(626, 24);
			this->cbPurokFilter->Name = L"cbPurokFilter";
			this->cbPurokFilter->Size = System::Drawing::Size(121, 24);
			this->cbPurokFilter->TabIndex = 33;
			this->cbPurokFilter->SelectedIndexChanged += gcnew System::EventHandler(this, &population::comboBox1_SelectedIndexChanged);
			// 
			// population
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ClientSize = System::Drawing::Size(1058, 639);
			this->Controls->Add(this->cbPurokFilter);
			this->Controls->Add(this->btnRefresh);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->table);
			this->Controls->Add(this->lblImageLocation);
			this->Controls->Add(this->cbPurok);
			this->Controls->Add(this->dateBirth);
			this->Controls->Add(this->cbGender);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->lblPurok);
			this->Controls->Add(this->lblBirth);
			this->Controls->Add(this->lblGender);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"population";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"population";
			this->Load += gcnew System::EventHandler(this, &population::population_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	String^ strConnection = "server=localhost;database=barangaypopulationrecord;uid=root;password=1234";
	MySqlConnection^ conn = gcnew MySqlConnection(strConnection);

	public: void readData() {

		try {
			conn->Open();
			String^ strRead = "SELECT id, name, gender, birth, purok FROM allpeople";
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strRead, conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			table->DataSource = dt;

			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("Error in reading data into the database " + e);
			conn->Close();
		}

	}

	 void updateData() {

		String^ strId = table->Rows[table->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
		String^ name = lblName->Text;
		String^ gender = cbGender->Text;
		String^ birth = dateBirth->Text;
		String^ purok = cbPurok->Text;
		array<unsigned char>^ image;
		String^ imageLocation = lblImageLocation->Text;

		try {
			FileStream^ fs = gcnew FileStream(imageLocation, FileMode::Open, FileAccess::Read);
			BinaryReader^ br = gcnew BinaryReader(fs);
			image = br->ReadBytes(fs->Length);
		}
		catch (Exception^ e) {

		}

		try {
			conn->Open();
			String^ strUpdate = "UPDATE allpeople SET name=@name, gender=@gender, birth=@birth, purok=@purok, image=@image, image_location=@image_location WHERE id = " + strId;
			MySqlCommand^ cmd = gcnew MySqlCommand(strUpdate, conn);
			cmd->Parameters->AddWithValue("@name", name);
			cmd->Parameters->AddWithValue("@gender", gender);
			cmd->Parameters->AddWithValue("@birth", birth);
			cmd->Parameters->AddWithValue("@purok", purok);
			cmd->Parameters->AddWithValue("@image", image);
			cmd->Parameters->AddWithValue("@image_location", imageLocation);
			cmd->ExecuteNonQuery();
			MessageBox::Show("Success to update data");
			conn->Close();

			readData();
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to update data");
			conn->Close();
		}

	}

	void deleteData() {

		String^ strId = table->Rows[table->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

		try {
			conn->Open();
			String^ strDelete = "DELETE FROM allpeople WHERE id = " + strId;
			MySqlCommand^ cmd = gcnew MySqlCommand(strDelete, conn);
			cmd->ExecuteNonQuery();
			MessageBox::Show("Success to delete data");
			conn->Close();
			readData();
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to delete data " + e);
			conn->Close();
		}

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		add_data^ a = gcnew add_data(this);
		
		a->Show();
		

	}
private: System::Void population_Load(System::Object^ sender, System::EventArgs^ e) {

	readData();

	try {
		String^ strRead = "SELECT purok_name FROM allpurok";
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strRead, conn);

		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);

		for (int i = 0; i < dt->Rows->Count; i++) {

			cbPurokFilter->Items->Add(dt->Rows[i]->ItemArray[0]->ToString());

		}

		cbPurokFilter->SelectedIndex = 0;

	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to read data " + e);
	}


	
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	updateData();

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	ofd->Filter = "PNG file *.png|*.png|JPG file *.jpg|*.jpg|ALL files *.*|*.*";

	if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK) {
		pictureBox->ImageLocation = ofd->FileName;
		lblImageLocation->Text = pictureBox->ImageLocation;
	}

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show(pictureBox->ImageLocation);

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	deleteData();
}
private: System::Void table_CellClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	String^ strId = table->Rows[table->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try {

		conn->Open();
		pictureBox->Image = nullptr;
		//String^ strSelect = "SELECT image FROM allpeople WHERE id = " + strId;
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT image, image_location FROM allpeople WHERE id = " + strId, conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);

		array<unsigned char>^ image = (array<unsigned char>^)dt->Rows[0]->ItemArray[0];

		MemoryStream^ ms = gcnew MemoryStream(image);
		pictureBox->Image = Image::FromStream(ms);
		lblImageLocation->Text = dt->Rows[0]->ItemArray[1]->ToString();
		conn->Close();

	}
	catch (Exception^ e) {

		conn->Close();
	}

	lblName->Text = table->Rows[table->CurrentCell->RowIndex]->Cells[1]->Value->ToString();
	lblGender->Text = table->Rows[table->CurrentCell->RowIndex]->Cells[2]->Value->ToString();
	lblBirth->Text = table->Rows[table->CurrentCell->RowIndex]->Cells[3]->Value->ToString();
	lblPurok->Text = table->Rows[table->CurrentCell->RowIndex]->Cells[4]->Value->ToString();

	cbGender->Text = table->Rows[table->CurrentCell->RowIndex]->Cells[2]->Value->ToString();
	dateBirth->Text = table->Rows[table->CurrentCell->RowIndex]->Cells[3]->Value->ToString();
	cbPurok->Text = table->Rows[table->CurrentCell->RowIndex]->Cells[4]->Value->ToString();


}


private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	Hide();
	back_home->Show();
	

}
public: System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {

	readData();

}

		   public: void searchValue(String^ valueSearch, String^ purok) {
			   if (purok->Equals("All")) {
				   try {
					   conn->Open();
					   String^ strSearch = "SELECT id, name, gender, birth, purok FROM allpeople WHERE CONCAT (id, name, gender, birth, purok)  LIKE '%" + valueSearch + "%'";
					   MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strSearch, conn);

					   DataTable^ dt = gcnew DataTable();
					   adapter->Fill(dt);
					   table->DataSource = dt;

					   conn->Close();
				   }
				   catch (Exception^ e) {
					   MessageBox::Show("Error in searching data " + e);
				   }
			   }
			   else {
				   try {
					   conn->Open();              
					   String^ strSearch = "SELECT id, name, gender, birth, purok FROM allpeople WHERE CONCAT (id, name, gender, birth, purok)  LIKE '%" + valueSearch + "%' AND purok = '" + purok + "'";
					   MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strSearch, conn);

					   DataTable^ dt = gcnew DataTable();
					   adapter->Fill(dt);
					   table->DataSource = dt;

					   conn->Close();
				   }
				   catch (Exception^ e) {
					   MessageBox::Show("Error in searching data " + e);
				   }
			   }

		   }

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	String^ value = txtSearch->Text;
	String^ purok = cbPurokFilter->Text;
	searchValue(value, purok);

}

	   void readFiltePurok() {

		   try {
			   conn->Open();
			   String^ strRead = "SELECT id, name, gender, birth, purok FROM allpeople WHERE purok = '" + cbPurokFilter->Text + "' ";
			   MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strRead, conn);

			   DataTable^ dt = gcnew DataTable();
			   adapter->Fill(dt);
			   table->DataSource = dt;

			   conn->Close();

		   }
		   catch (Exception^ e) {
			   conn->Close();
			   MessageBox::Show("Failed " + e);
		   }

	   }

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	if (cbPurokFilter->Text->Equals("All")) {
		readData();
	}
	else {
		readFiltePurok();
	}

}
};
}
