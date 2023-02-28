#pragma once
#include "home.h"
#include "create_account.h"

namespace BarangayPopulationRecord {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
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
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ cbShowPassword;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cbShowPassword = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(147, 274);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(218, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Log-In";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &login::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(43, 173);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(43, 216);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password:";
			// 
			// txtUsername
			// 
			this->txtUsername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUsername->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtUsername->Location = System::Drawing::Point(147, 170);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(218, 26);
			this->txtUsername->TabIndex = 4;
			this->txtUsername->TextChanged += gcnew System::EventHandler(this, &login::txtUsername_TextChanged);
			// 
			// txtPassword
			// 
			this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtPassword->Location = System::Drawing::Point(147, 213);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(218, 26);
			this->txtPassword->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(138, 79);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(234, 56);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Welcome";
			this->label3->Click += gcnew System::EventHandler(this, &login::label3_Click);
			// 
			// cbShowPassword
			// 
			this->cbShowPassword->AutoSize = true;
			this->cbShowPassword->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbShowPassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->cbShowPassword->Location = System::Drawing::Point(148, 245);
			this->cbShowPassword->Name = L"cbShowPassword";
			this->cbShowPassword->Size = System::Drawing::Size(116, 19);
			this->cbShowPassword->TabIndex = 7;
			this->cbShowPassword->Text = L"Show Password";
			this->cbShowPassword->UseVisualStyleBackColor = true;
			this->cbShowPassword->CheckedChanged += gcnew System::EventHandler(this, &login::checkBox1_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Lime;
			this->label4->Location = System::Drawing::Point(332, 412);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 18);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Create Account";
			this->label4->Click += gcnew System::EventHandler(this, &login::label4_Click);
			this->label4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &login::label4_MouseClick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MidnightBlue;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->cbShowPassword);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->txtPassword);
			this->panel1->Controls->Add(this->txtUsername);
			this->panel1->Location = System::Drawing::Point(-1, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(462, 443);
			this->panel1->TabIndex = 9;
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(459, 440);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"login";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		// GLOBAL CONNECTION
		String^ strConnection = "server=localhost;database=barangaypopulationrecord;uid=root;password=1234";
		MySqlConnection^ conn = gcnew MySqlConnection(strConnection);

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		// ACCOUNT VALIDATION
		int isTrue = 0;
		String^ username = "";
		String^ password = "";

		try {
			String^ strRead = "SELECT * FROM admin_account";
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strRead, conn);

			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);

			for (int i = 0; i < 1; i++) {

				username = dt->Rows[i]->ItemArray[1]->ToString();
				password = dt->Rows[i]->ItemArray[2]->ToString();

				if (txtUsername->Text == username && txtPassword->Text == password) {
					home^ ho = gcnew home();
					ho->Show();
					Hide();
					isTrue = 1;
				}

			}

			String^ strRead_user = "SELECT * FROM user_account";
			MySqlDataAdapter^ adapter_user = gcnew MySqlDataAdapter(strRead_user, conn);

			DataTable^ dt_user = gcnew DataTable();
			adapter_user->Fill(dt_user);

			for (int i = 0; i < dt_user->Rows->Count; i++) {

				username = dt_user->Rows[i]->ItemArray[1]->ToString();
				password = dt_user->Rows[i]->ItemArray[2]->ToString();

				if (txtUsername->Text == username && txtPassword->Text == password) {
					home^ ho = gcnew home();
					ho->Show();
					Hide();
					isTrue = 1;
				}

			}



		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to read data " + e);
		}

		if (isTrue == 0) {
			MessageBox::Show("NO ACCOUNT FOUND!");
		}


	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		if (cbShowPassword->Checked) {
			txtPassword->PasswordChar = 0;
		}
		else {
			txtPassword->PasswordChar = 1;
		}

	}
private: System::Void login_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	//create_account ^ ca = gcnew create_account(this);
	//ca->Show();
	//Hide();

}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtUsername_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
