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
	/// Summary for create_account
	/// </summary>
	public ref class create_account : public System::Windows::Forms::Form
	{
	public:

		Form^ login_back;

		create_account(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		create_account(Form^ login)
		{

			login_back = login;

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~create_account()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtMasterCode;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::PictureBox^ imgGet;


	private: System::Windows::Forms::Button^ btnInsert;

	private: System::Windows::Forms::Button^ button2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtMasterCode = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->imgGet = (gcnew System::Windows::Forms::PictureBox());
			this->btnInsert = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgGet))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(232, 162);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username :";
			// 
			// txtUsername
			// 
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsername->Location = System::Drawing::Point(356, 159);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(100, 25);
			this->txtUsername->TabIndex = 1;
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(356, 202);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(100, 25);
			this->txtPassword->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(232, 207);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password :";
			// 
			// txtMasterCode
			// 
			this->txtMasterCode->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMasterCode->Location = System::Drawing::Point(356, 259);
			this->txtMasterCode->Name = L"txtMasterCode";
			this->txtMasterCode->Size = System::Drawing::Size(100, 25);
			this->txtMasterCode->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(232, 262);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Master Code :";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(357, 232);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(53, 17);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Show";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// imgGet
			// 
			this->imgGet->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->imgGet->Location = System::Drawing::Point(235, 24);
			this->imgGet->Name = L"imgGet";
			this->imgGet->Size = System::Drawing::Size(119, 85);
			this->imgGet->TabIndex = 7;
			this->imgGet->TabStop = false;
			// 
			// btnInsert
			// 
			this->btnInsert->Location = System::Drawing::Point(235, 115);
			this->btnInsert->Name = L"btnInsert";
			this->btnInsert->Size = System::Drawing::Size(119, 23);
			this->btnInsert->TabIndex = 8;
			this->btnInsert->Text = L"Insert";
			this->btnInsert->UseVisualStyleBackColor = true;
			this->btnInsert->Click += gcnew System::EventHandler(this, &create_account::btnInsert_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(235, 341);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(221, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Create";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &create_account::button2_Click);
			// 
			// create_account
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 525);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnInsert);
			this->Controls->Add(this->imgGet);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->txtMasterCode);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label1);
			this->Name = L"create_account";
			this->Text = L"create_account";
			this->Load += gcnew System::EventHandler(this, &create_account::create_account_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgGet))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool haveAdmin;

		String^ strConnection = "server=localhost;database=barangaypopulationrecord;uid=root;password=1234";
		MySqlConnection^ conn = gcnew MySqlConnection(strConnection);

		void readConnection() {

			try {
				conn->Open();
				
				conn->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show("No Connection " + e);
				conn->Close();
			}

		}

	private: System::Void create_account_Load(System::Object^ sender, System::EventArgs^ e) {

		readConnection();

		try {
			conn->Open();
			String^ strSelect = "SELECT id FROM admin_account";
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strSelect, conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			
			if (dt->Rows->Count > 0) {
				MessageBox::Show("Already have admin account ");
				haveAdmin = true;
				btnInsert->Enabled = false;
			}
			else {
				MessageBox::Show("No admin Account ");
				haveAdmin = false;
				
			}
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("Error in reading admin account " + e);
		}

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (haveAdmin == false) {
		String^ username = txtUsername->Text;
		String^ password = txtPassword->Text;
		String^ master_code = txtMasterCode->Text;
		array<unsigned char>^ image;
		String^ image_location = imgGet->ImageLocation;

		try {
			FileStream^ fs = gcnew FileStream(image_location, FileMode::Open, FileAccess::Read);
			BinaryReader^ br = gcnew BinaryReader(fs);
			image = br->ReadBytes(fs->Length);
		}
		catch (Exception^ e) {

		}

		try {
			conn->Open();
			String^ strInsert = "INSERT INTO admin_account(username, password, master_code, image, image_location) VALUE(@username, @password, @master_code, @image, @image_location)";
			MySqlCommand^ cmd = gcnew MySqlCommand(strInsert, conn);
			cmd->Parameters->AddWithValue("@username", username);
			cmd->Parameters->AddWithValue("@password", password);
			cmd->Parameters->AddWithValue("@master_code", master_code);
			cmd->Parameters->AddWithValue("@image", image);
			cmd->Parameters->AddWithValue("@image_location", image_location);
			cmd->ExecuteNonQuery();
			MessageBox::Show("Success to create admin account");
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to create admin account " + e);
			conn->Close();
		}

	} // THIS IS OF ADMIN ACCOUNT
	else {

		try {

			String^ username = txtUsername->Text;
			String^ password = txtPassword->Text;


			conn->Open();
			String^ strInsert = "INSERT INTO user_account(username, password) VALUE(@username, @password)";
			MySqlCommand^ cmd = gcnew MySqlCommand(strInsert, conn);
			cmd->Parameters->AddWithValue("@username", username);
			cmd->Parameters->AddWithValue("@password", password);

			cmd->ExecuteNonQuery();
			MessageBox::Show("Success to create account");
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to create account " + e);
			conn->Close();
		}


		// THIS IS FOR USER ACCOUNT
	}

}
private: System::Void btnInsert_Click(System::Object^ sender, System::EventArgs^ e) {

	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	ofd->Filter = "PNG files *.png|*.png|JPG files *.jpg|*.jpg|ALL files *.*|*.*";

	if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK) {
		imgGet->ImageLocation = ofd->FileName;
	}
}
};
}
