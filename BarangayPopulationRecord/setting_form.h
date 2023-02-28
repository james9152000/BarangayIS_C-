#pragma once
#include "loading_bar.h"

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
	/// Summary for setting_form
	/// </summary>
	public ref class setting_form : public System::Windows::Forms::Form
	{
	public:

		Form^ home_object;

		setting_form(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		setting_form(Form^ home)
		{
			home_object = home;

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~setting_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ imgLogo;
	protected:

	protected:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lblImageLocation;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtTextLogo;


	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ txtPurok;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ComboBox^ cbPurok;
	private: System::Windows::Forms::TextBox^ txtUpdatePurok;

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
			this->imgLogo = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblImageLocation = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtTextLogo = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPurok = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->cbPurok = (gcnew System::Windows::Forms::ComboBox());
			this->txtUpdatePurok = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLogo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// imgLogo
			// 
			this->imgLogo->BackColor = System::Drawing::Color::Gray;
			this->imgLogo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->imgLogo->Location = System::Drawing::Point(226, 87);
			this->imgLogo->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->imgLogo->Name = L"imgLogo";
			this->imgLogo->Size = System::Drawing::Size(138, 82);
			this->imgLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgLogo->TabIndex = 2;
			this->imgLogo->TabStop = false;
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(226, 176);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 28);
			this->button2->TabIndex = 27;
			this->button2->Text = L"insert";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &setting_form::button2_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(335, 500);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 35);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &setting_form::button1_Click);
			// 
			// lblImageLocation
			// 
			this->lblImageLocation->AutoSize = true;
			this->lblImageLocation->Location = System::Drawing::Point(233, 71);
			this->lblImageLocation->Name = L"lblImageLocation";
			this->lblImageLocation->Size = System::Drawing::Size(112, 13);
			this->lblImageLocation->TabIndex = 29;
			this->lblImageLocation->Text = L"Image current location";
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(723, 13);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 28);
			this->button3->TabIndex = 30;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &setting_form::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 22);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Select Logo Image";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(461, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 22);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Set Text Logo";
			// 
			// txtTextLogo
			// 
			this->txtTextLogo->Location = System::Drawing::Point(636, 102);
			this->txtTextLogo->Name = L"txtTextLogo";
			this->txtTextLogo->Size = System::Drawing::Size(191, 20);
			this->txtTextLogo->TabIndex = 33;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(139, 22);
			this->label3->TabIndex = 35;
			this->label3->Text = L"Set Purok Here";
			// 
			// txtPurok
			// 
			this->txtPurok->Location = System::Drawing::Point(223, 244);
			this->txtPurok->Name = L"txtPurok";
			this->txtPurok->Size = System::Drawing::Size(144, 20);
			this->txtPurok->TabIndex = 37;
			this->txtPurok->TextChanged += gcnew System::EventHandler(this, &setting_form::txtPurok_TextChanged);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->Location = System::Drawing::Point(222, 271);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(144, 28);
			this->button4->TabIndex = 38;
			this->button4->Text = L"Add";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &setting_form::button4_Click);
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->Location = System::Drawing::Point(223, 340);
			this->button5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(144, 28);
			this->button5->TabIndex = 39;
			this->button5->Text = L"Change";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &setting_form::button5_Click);
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button6->Location = System::Drawing::Point(223, 376);
			this->button6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(144, 28);
			this->button6->TabIndex = 40;
			this->button6->Text = L"Delete";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(348, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 41);
			this->label5->TabIndex = 41;
			this->label5->Text = L"Setting";
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(636, 129);
			this->button7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(191, 28);
			this->button7->TabIndex = 42;
			this->button7->Text = L"Set";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBox1->Location = System::Drawing::Point(0, 58);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(865, 2);
			this->pictureBox1->TabIndex = 43;
			this->pictureBox1->TabStop = false;
			// 
			// cbPurok
			// 
			this->cbPurok->FormattingEnabled = true;
			this->cbPurok->Location = System::Drawing::Point(73, 312);
			this->cbPurok->Name = L"cbPurok";
			this->cbPurok->Size = System::Drawing::Size(121, 21);
			this->cbPurok->TabIndex = 44;
			this->cbPurok->SelectedIndexChanged += gcnew System::EventHandler(this, &setting_form::cbPurok_SelectedIndexChanged);
			// 
			// txtUpdatePurok
			// 
			this->txtUpdatePurok->Location = System::Drawing::Point(222, 313);
			this->txtUpdatePurok->Name = L"txtUpdatePurok";
			this->txtUpdatePurok->Size = System::Drawing::Size(145, 20);
			this->txtUpdatePurok->TabIndex = 45;
			// 
			// setting_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(863, 550);
			this->Controls->Add(this->txtUpdatePurok);
			this->Controls->Add(this->cbPurok);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->txtPurok);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtTextLogo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->lblImageLocation);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->imgLogo);
			this->Name = L"setting_form";
			this->Text = L"setting_form";
			this->Load += gcnew System::EventHandler(this, &setting_form::setting_form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLogo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ strConnection = "server=localhost;database=barangaypopulationrecord;uid=root;password=1234";
		MySqlConnection^ conn = gcnew MySqlConnection(strConnection);

		void readImageLogo() {
			try {
				conn->Open();
				String^ strRead = "SELECT image, image_location, text_logo FROM setting";
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strRead, conn);

				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);

				array<unsigned char>^ image = (array<unsigned char>^)dt->Rows[0]->ItemArray[0];
				MemoryStream^ ms = gcnew MemoryStream(image);
				imgLogo->Image = Image::FromStream(ms);
				lblImageLocation->Text = dt->Rows[0]->ItemArray[1]->ToString();
				txtTextLogo->Text = dt->Rows[0]->ItemArray[2]->ToString();
				conn->Close();

			}
			catch (Exception^ e) {
				MessageBox::Show("Failed to set Logo " + e);
				conn->Close();
			}
		}


	


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "PNG file *.png|*.png|JPG file *.jpg|*.jpg|ALL files *.*|*.*";

		if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK) {
			imgLogo->ImageLocation = ofd->FileName;
			lblImageLocation->Text = ofd->FileName;
			
		}

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		array<unsigned char>^ image;
		String^ image_location = lblImageLocation->Text;

		try {
			FileStream^ fs = gcnew FileStream(image_location, FileMode::Open, FileAccess::Read);
			BinaryReader^ br = gcnew BinaryReader(fs);
			image = br->ReadBytes(fs->Length);

		}
		catch (Exception^ e) {
			MessageBox::Show("FileStream error " + e);
		}

		try {
			conn->Open();
			String^ strInsert = "UPDATE setting SET image=@image, image_location=@image_location, text_logo=@txtTextLogo WHERE id = '"+"1"+"' ";
			MySqlCommand^ cmd = gcnew MySqlCommand(strInsert, conn);
			cmd->Parameters->AddWithValue("@image", image);
			cmd->Parameters->AddWithValue("@image_location", image_location);
			cmd->Parameters->AddWithValue("@txtTextLogo", txtTextLogo->Text);
			cmd->ExecuteNonQuery();
			MessageBox::Show("Success to update");
			
			conn->Close();

			loading_bar^ l = gcnew loading_bar(home_object);
			l->Show();

		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to update image " + e);
			conn->Close();
		}

	}

		   void readPurok(){

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

private: System::Void setting_form_Load(System::Object^ sender, System::EventArgs^ e) {

	readImageLogo();
	readPurok();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	home_object->Show();
	
	

	Hide();

}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		conn->Open();
		String^ strInsert = "INSERT INTO allpurok(purok_name) VALUES(@purok)";
		MySqlCommand^ cmd = gcnew MySqlCommand(strInsert, conn);
		cmd->Parameters->AddWithValue("@purok", txtPurok->Text);
		cmd->ExecuteNonQuery();
		MessageBox::Show("Success to add purok");
		readPurok();
		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show("Error in adding purok!!!!! " + e);
		conn->Close();
	} 

}



private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	int^ getId;

	try {

		conn->Open();
		String^ strSelect = "SELECT id FROM allpurok WHERE purok_name = '"+ cbPurok->Text +"' ";
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(strSelect, conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		getId = (System::Int32)dt->Rows[0]->ItemArray[0];
		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show("Error in reading id " + e);
		conn->Close();
	}


	try {
		conn->Open();
		String^ strUpdate = "UPDATE allpurok SET purok_name = @purok WHERE id = '"+ getId +"' ";
		MySqlCommand^ cmd = gcnew MySqlCommand(strUpdate, conn);
		cmd->Parameters->AddWithValue("@purok", txtUpdatePurok->Text);
		cmd->ExecuteNonQuery();
		conn->Close();
		MessageBox::Show("Success to Update");
		cbPurok->Items->Clear();
		readPurok();
	}
	catch (Exception^ e) {
		conn->Close();
		MessageBox::Show("Failed to Update " + e);
	}

}
private: System::Void cbPurok_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	txtUpdatePurok->Text = cbPurok->Text;

}
private: System::Void txtPurok_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
} 
