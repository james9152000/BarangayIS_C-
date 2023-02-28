#pragma once


namespace BarangayPopulationRecord {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;

	/// <summary>
	/// Summary for barangay_record
	/// </summary>
	public ref class barangay_record : public System::Windows::Forms::Form
	{
	public:

		Form^ back_home;

		barangay_record(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
		barangay_record(Form^ home)
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
		~barangay_record()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ tableAll;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ txtCase;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cbCases;
	private: System::Windows::Forms::Label^ lblPurok;
	private: System::Windows::Forms::Label^ lblBirth;
	private: System::Windows::Forms::Label^ lblGender;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txtAddCase;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtCaseName;
	private: System::Windows::Forms::TextBox^ txtGetCaseName;



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
			this->tableAll = (gcnew System::Windows::Forms::DataGridView());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtCaseName = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtAddCase = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->txtGetCaseName = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txtCase = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbCases = (gcnew System::Windows::Forms::ComboBox());
			this->lblPurok = (gcnew System::Windows::Forms::Label());
			this->lblBirth = (gcnew System::Windows::Forms::Label());
			this->lblGender = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tableAll))->BeginInit();
			this->panel5->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(1173, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 46);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Back to Home";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &barangay_record::button1_Click);
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
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::Gray;
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
			this->tableAll->Location = System::Drawing::Point(712, 95);
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
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::Silver;
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
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::White;
			this->tableAll->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->tableAll->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			this->tableAll->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::Silver;
			this->tableAll->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->tableAll->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tableAll->Size = System::Drawing::Size(577, 552);
			this->tableAll->TabIndex = 1;
			this->tableAll->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &barangay_record::tableAll_CellClick);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Controls->Add(this->label1);
			this->panel5->Controls->Add(this->cbCases);
			this->panel5->Controls->Add(this->lblPurok);
			this->panel5->Controls->Add(this->lblBirth);
			this->panel5->Controls->Add(this->lblGender);
			this->panel5->Controls->Add(this->lblName);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->pictureBox);
			this->panel5->Location = System::Drawing::Point(16, 12);
			this->panel5->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(665, 210);
			this->panel5->TabIndex = 7;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &barangay_record::panel5_Paint);
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(13, 228);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(668, 422);
			this->tabControl1->TabIndex = 12;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->txtCaseName);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->txtAddCase);
			this->tabPage1->Location = System::Drawing::Point(4, 28);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(660, 390);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Add Case";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 34);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 16);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Case Name :";
			// 
			// txtCaseName
			// 
			this->txtCaseName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtCaseName->Location = System::Drawing::Point(115, 31);
			this->txtCaseName->Name = L"txtCaseName";
			this->txtCaseName->Size = System::Drawing::Size(199, 22);
			this->txtCaseName->TabIndex = 14;
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(489, 73);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 35);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &barangay_record::button2_Click);
			// 
			// txtAddCase
			// 
			this->txtAddCase->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtAddCase->Location = System::Drawing::Point(20, 79);
			this->txtAddCase->Multiline = true;
			this->txtAddCase->Name = L"txtAddCase";
			this->txtAddCase->Size = System::Drawing::Size(444, 296);
			this->txtAddCase->TabIndex = 12;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::White;
			this->tabPage2->Controls->Add(this->txtGetCaseName);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->txtCase);
			this->tabPage2->Location = System::Drawing::Point(4, 28);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(660, 390);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Case Record";
			// 
			// txtGetCaseName
			// 
			this->txtGetCaseName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtGetCaseName->Location = System::Drawing::Point(19, 21);
			this->txtGetCaseName->Name = L"txtGetCaseName";
			this->txtGetCaseName->Size = System::Drawing::Size(205, 22);
			this->txtGetCaseName->TabIndex = 14;
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(489, 97);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(124, 32);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Delete";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &barangay_record::button4_Click);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(489, 59);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(124, 32);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &barangay_record::button3_Click);
			// 
			// txtCase
			// 
			this->txtCase->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtCase->Location = System::Drawing::Point(19, 59);
			this->txtCase->Multiline = true;
			this->txtCase->Name = L"txtCase";
			this->txtCase->Size = System::Drawing::Size(428, 314);
			this->txtCase->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(175, 155);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 19);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Cases :";
			// 
			// cbCases
			// 
			this->cbCases->FormattingEnabled = true;
			this->cbCases->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Cases" });
			this->cbCases->Location = System::Drawing::Point(256, 156);
			this->cbCases->Name = L"cbCases";
			this->cbCases->Size = System::Drawing::Size(121, 21);
			this->cbCases->TabIndex = 9;
			this->cbCases->SelectedIndexChanged += gcnew System::EventHandler(this, &barangay_record::cbCases_SelectedIndexChanged);
			// 
			// lblPurok
			// 
			this->lblPurok->AutoSize = true;
			this->lblPurok->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPurok->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lblPurok->Location = System::Drawing::Point(254, 118);
			this->lblPurok->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblPurok->Name = L"lblPurok";
			this->lblPurok->Size = System::Drawing::Size(32, 18);
			this->lblPurok->TabIndex = 8;
			this->lblPurok->Text = L"text";
			// 
			// lblBirth
			// 
			this->lblBirth->AutoSize = true;
			this->lblBirth->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBirth->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lblBirth->Location = System::Drawing::Point(254, 85);
			this->lblBirth->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblBirth->Name = L"lblBirth";
			this->lblBirth->Size = System::Drawing::Size(32, 18);
			this->lblBirth->TabIndex = 7;
			this->lblBirth->Text = L"text";
			// 
			// lblGender
			// 
			this->lblGender->AutoSize = true;
			this->lblGender->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGender->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lblGender->Location = System::Drawing::Point(254, 54);
			this->lblGender->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblGender->Name = L"lblGender";
			this->lblGender->Size = System::Drawing::Size(32, 18);
			this->lblGender->TabIndex = 6;
			this->lblGender->Text = L"text";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lblName->Location = System::Drawing::Point(254, 23);
			this->lblName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(32, 18);
			this->lblName->TabIndex = 5;
			this->lblName->Text = L"text";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(175, 119);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 19);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Purok :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(175, 85);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Birth :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(175, 54);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Gender :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(175, 23);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name :";
			// 
			// pictureBox
			// 
			this->pictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox->Location = System::Drawing::Point(14, 16);
			this->pictureBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(141, 122);
			this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox->TabIndex = 0;
			this->pictureBox->TabStop = false;
			// 
			// barangay_record
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(1310, 659);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->tableAll);
			this->Controls->Add(this->button1);
			this->Name = L"barangay_record";
			this->Text = L"barangay_record";
			this->Load += gcnew System::EventHandler(this, &barangay_record::barangay_record_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tableAll))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		// for connection
		String^ strConnection = "server=localhost;database=barangaypopulationrecord;uid=root;password=1234";
		MySqlConnection^ conn = gcnew MySqlConnection(strConnection);

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
				conn->Close();
			}
		}

		void readCaseId() { // get in the database if the person have record

			cbCases->Items->Clear();
			cbCases->Items->Add("Select Case");

			String^ personId = tableAll->Rows[tableAll->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

			try {
				conn->Open();
				String^ strSelect = "SELECT case_name FROM cases WHERE person_id = '" + personId + "'";
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strSelect, conn);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);

				for (int i = 0; i < dt->Rows->Count; i++) {
					cbCases->Items->Add(dt->Rows[i]->ItemArray[0]->ToString());
				}
				cbCases->SelectedIndex = 0;
				conn->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show("have problem in readCaseId " + e);
				conn->Close();
			}

		}

		void readCases() { // select person case and show it into the textbox
			try {
				conn->Open();
				String^ strSelect = "SELECT case_name, person_case FROM cases WHERE case_name = '" + cbCases->Text + "'";

				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strSelect, conn);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				txtGetCaseName->Text = dt->Rows[0]->ItemArray[0]->ToString();
				txtCase->Text = dt->Rows[0]->ItemArray[1]->ToString();
				conn->Close();

			}
			catch (Exception^ e) {
				conn->Close();
				MessageBox::Show("Failed to read case  " + e);
			}
		}
		

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		Hide();
		back_home->Show();

	}
	private: System::Void barangay_record_Load(System::Object^ sender, System::EventArgs^ e) {

		readData();
		readCaseId();

	}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	   //  String^ strSelect = "SELECT case FROM cases WHERE id = '" + 3 + "'";



private: System::Void cbCases_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	if (cbCases->Text->Equals("Select Case")) {

	}
	else {
		readCases();
	}

}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ personId = tableAll->Rows[tableAll->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try {
		conn->Open();
		String^ strInsert = "INSERT INTO cases(case_name, person_id, person_case) VALUES(@case_name, @person_id, @person_case)";
		MySqlCommand^ cmd = gcnew MySqlCommand(strInsert, conn);
		cmd->Parameters->AddWithValue("@person_id", personId);
		cmd->Parameters->AddWithValue("@person_case", txtAddCase->Text);
		cmd->Parameters->AddWithValue("@case_name", txtCaseName->Text);
		cmd->ExecuteNonQuery();
		MessageBox::Show("Success to add case");
		
		readData();
		readCaseId();

		cbCases->SelectedIndex = 0;

		txtCaseName->Text = "";
		txtAddCase->Text = "";

		conn->Close();

	}
	catch (Exception^ e) {
		MessageBox::Show("Error in adding case " + e);
		conn->Close();
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

	readCaseId();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		conn->Open();

		String^ strUpdate = "UPDATE cases SET case_name = @case_name, person_case = @person_case WHERE case_name = '"+cbCases->Text+"'";
		MySqlCommand^ cmd = gcnew MySqlCommand(strUpdate, conn);
		cmd->Parameters->AddWithValue("@case_name", txtGetCaseName->Text);
		cmd->Parameters->AddWithValue("@person_case", txtCase->Text);
		cmd->ExecuteNonQuery();
		MessageBox::Show("Success to update ");

		readData();
		readCaseId();

		cbCases->SelectedIndex = 0;

		txtGetCaseName->Text = "";
		txtCase->Text = "";

		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to update " + e);
		conn->Close();
	}

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		conn->Open();
		String^ strDelete = "DELETE FROM cases WHERE case_name = '"+cbCases->Text+"'";
		MySqlCommand^ cmd = gcnew MySqlCommand(strDelete, conn);
		cmd->ExecuteNonQuery();
		MessageBox::Show("Success to Delete");

		readData();
		readCaseId();

		cbCases->SelectedIndex = 0;

		txtGetCaseName->Text = "";
		txtCase->Text = "";

		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to delete");
		conn->Close();
	}

}
};
}
