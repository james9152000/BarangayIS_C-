#pragma once

namespace BarangayPopulationRecord {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for loading_bar
	/// </summary>
	public ref class loading_bar : public System::Windows::Forms::Form
	{
	public:

		Form^ home_form;

		loading_bar(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		loading_bar(Form^ homeF)
		{

			home_form = homeF;

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~loading_bar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ProgressBar^ pb;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblDot;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pb = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblDot = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// pb
			// 
			this->pb->BackColor = System::Drawing::Color::White;
			this->pb->ForeColor = System::Drawing::Color::Red;
			this->pb->Location = System::Drawing::Point(66, 206);
			this->pb->MarqueeAnimationSpeed = 2000;
			this->pb->Name = L"pb";
			this->pb->Size = System::Drawing::Size(703, 38);
			this->pb->Step = 7;
			this->pb->Style = System::Windows::Forms::ProgressBarStyle::Marquee;
			this->pb->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(52, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 80);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Loading";
			// 
			// lblDot
			// 
			this->lblDot->AutoSize = true;
			this->lblDot->Font = (gcnew System::Drawing::Font(L"Impact", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDot->Location = System::Drawing::Point(273, 114);
			this->lblDot->Name = L"lblDot";
			this->lblDot->Size = System::Drawing::Size(70, 80);
			this->lblDot->TabIndex = 2;
			this->lblDot->Text = L"...";
			this->lblDot->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &loading_bar::timer1_Tick);
			// 
			// loading_bar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(829, 483);
			this->Controls->Add(this->lblDot);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pb);
			this->Name = L"loading_bar";
			this->Text = L"loading_bar";
			this->Load += gcnew System::EventHandler(this, &loading_bar::loading_bar_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int^ timerCounter = 0;

	private: System::Void loading_bar_Load(System::Object^ sender, System::EventArgs^ e) {

		timer1->Start();

	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		timerCounter = (System::Int32)timerCounter + 12;
		if ((System::Int32)timerCounter < 100) {
			pb->Value = (System::Int32)timerCounter;
		}
		else {
			timer1->Stop();
			home_form->Show();
			Close();
		}
	}
};
}
