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
	/// Summary for add_data
	/// </summary>
	public ref class add_data : public System::Windows::Forms::Form
	{
	public:
		
		Form^ obj;
		
		add_data(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		add_data(Form^ population)
		{

			obj = population;
	
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~add_data()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ cbPurok;
	private: System::Windows::Forms::DateTimePicker^ dateBirth;
	private: System::Windows::Forms::ComboBox^ cbGender;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::PictureBox^ pictureBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;


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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cbPurok = (gcnew System::Windows::Forms::ComboBox());
			this->dateBirth = (gcnew System::Windows::Forms::DateTimePicker());
			this->cbGender = (gcnew System::Windows::Forms::ComboBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(47, 167);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 28);
			this->button2->TabIndex = 26;
			this->button2->Text = L"insert";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &add_data::button2_Click);
			// 
			// button1
			// 
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::RoyalBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(112, 408);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 39);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &add_data::button1_Click);
			// 
			// cbPurok
			// 
			this->cbPurok->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbPurok->FormattingEnabled = true;
			this->cbPurok->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Select Purok" });
			this->cbPurok->Location = System::Drawing::Point(112, 365);
			this->cbPurok->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->cbPurok->Name = L"cbPurok";
			this->cbPurok->Size = System::Drawing::Size(223, 24);
			this->cbPurok->TabIndex = 24;
			this->cbPurok->SelectedIndexChanged += gcnew System::EventHandler(this, &add_data::cbPurok_SelectedIndexChanged);
			// 
			// dateBirth
			// 
			this->dateBirth->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateBirth->Location = System::Drawing::Point(112, 321);
			this->dateBirth->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dateBirth->Name = L"dateBirth";
			this->dateBirth->Size = System::Drawing::Size(223, 22);
			this->dateBirth->TabIndex = 23;
			this->dateBirth->Value = System::DateTime(2000, 1, 1, 0, 0, 0, 0);
			// 
			// cbGender
			// 
			this->cbGender->FormattingEnabled = true;
			this->cbGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->cbGender->Location = System::Drawing::Point(112, 277);
			this->cbGender->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->cbGender->Name = L"cbGender";
			this->cbGender->Size = System::Drawing::Size(223, 24);
			this->cbGender->TabIndex = 22;
			this->cbGender->Text = L"Select Gender";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(112, 236);
			this->txtName->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(223, 22);
			this->txtName->TabIndex = 21;
			// 
			// pictureBox
			// 
			this->pictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox->Location = System::Drawing::Point(47, 30);
			this->pictureBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(146, 128);
			this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox->TabIndex = 20;
			this->pictureBox->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(43, 366);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 16);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Purok :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(43, 324);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 16);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Birth :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(43, 280);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 16);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Gender :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(43, 237);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 16);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Name :";
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(292, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 34);
			this->button3->TabIndex = 31;
			this->button3->Text = L"Close";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &add_data::button3_Click);
			// 
			// add_data
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ClientSize = System::Drawing::Size(390, 493);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->cbPurok);
			this->Controls->Add(this->dateBirth);
			this->Controls->Add(this->cbGender);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->pictureBox);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"add_data";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"add_data";
			this->Load += gcnew System::EventHandler(this, &add_data::add_data_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ strConnection = "server=localhost;database=barangaypopulationrecord;uid=root;password=1234";
		MySqlConnection^ conn = gcnew MySqlConnection(strConnection);

		void readConnection() {
			try {
				conn->Open();
				MessageBox::Show("Have Connection");
				conn->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show("No Connection");
				conn->Close();
			}
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ name = txtName->Text;
		String^ gender = cbGender->SelectedItem->ToString();
		String^ birth = dateBirth->Text;;
		String^ purok = cbPurok->SelectedItem->ToString();
		array<unsigned char>^ image;

		String^ imageLocation = pictureBox->ImageLocation;

		try {
			FileStream^ fs = gcnew FileStream(imageLocation, FileMode::Open, FileAccess::Read);
			BinaryReader^ br = gcnew BinaryReader(fs);
			image = br->ReadBytes(fs->Length);
		}
		catch (Exception^ e) {

		}

		try {
			conn->Open();
			String^ strInsert = "INSERT INTO allpeople(name, gender, birth, purok, image, image_location) VALUES(@name, @gender, @birth, @purok, @image, @image_location)";
			MySqlCommand^ cmd = gcnew MySqlCommand(strInsert, conn);
			cmd->Parameters->AddWithValue("@name", name);
			cmd->Parameters->AddWithValue("@gender", gender);
			cmd->Parameters->AddWithValue("@birth", birth);
			cmd->Parameters->AddWithValue("@purok", purok);
			cmd->Parameters->AddWithValue("@image", image);
			cmd->Parameters->AddWithValue("@image_location", imageLocation);

			cmd->ExecuteNonQuery();
			MessageBox::Show("Success to add");

			pictureBox->ImageLocation = nullptr;
			txtName->Text = "";
			cbGender->Text = "Select Gender";
			dateBirth->Text = "1/1/2000";
			cbPurok->Text = "Select Purok";

			conn->Close();

		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to add" + e);
			conn->Close();
		}


	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	ofd->Filter = "PNG file *.png|*.png|JPG file *.jpg|*.jpg|All files *.*|*.*";

	if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK) {
		pictureBox->ImageLocation = ofd->FileName;
	}

}
private: System::Void add_data_Load(System::Object^ sender, System::EventArgs^ e) {

	cbPurok->SelectedIndex = 0;

	try {
		String^ strRead = "SELECT purok_name FROM allpurok";
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strRead, conn);

		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);

		for (int i = 0; i < dt->Rows->Count; i++) {
			
			cbPurok->Items->Add(dt->Rows[i]->ItemArray[0]->ToString());
			
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to read data " + e);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	obj->Show();
	
	Hide();

}

private: System::Void cbPurok_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
