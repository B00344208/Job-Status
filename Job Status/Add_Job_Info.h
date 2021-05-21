#pragma once

namespace JobStatus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Add_Job_Info
	/// </summary>
	public ref class Add_Job_Info : public System::Windows::Forms::Form
	{
	public:
		Add_Job_Info(void)
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
		~Add_Job_Info()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ BackGround;
	private: System::Windows::Forms::ComboBox^ Job_Status;

	private: System::Windows::Forms::TextBox^ Service_Order_Number;
	private: System::Windows::Forms::TextBox^ SO;

	public: String^ serviceOrder;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->BackGround = (gcnew System::Windows::Forms::TextBox());
			this->Job_Status = (gcnew System::Windows::Forms::ComboBox());
			this->Service_Order_Number = (gcnew System::Windows::Forms::TextBox());
			this->SO = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// BackGround
			// 
			this->BackGround->BackColor = System::Drawing::Color::Firebrick;
			this->BackGround->Cursor = System::Windows::Forms::Cursors::No;
			this->BackGround->Enabled = false;
			this->BackGround->Location = System::Drawing::Point(0, 0);
			this->BackGround->Multiline = true;
			this->BackGround->Name = L"BackGround";
			this->BackGround->Size = System::Drawing::Size(1349, 731);
			this->BackGround->TabIndex = 1;
			// 
			// Job_Status
			// 
			this->Job_Status->FormattingEnabled = true;
			this->Job_Status->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Complete, GD Done", L"Complete", L"Priority Order",
					L"Pending for Samsung", L"Engineer Report", L"GD Done", L"Re-write Done"
			});
			this->Job_Status->Location = System::Drawing::Point(335, 48);
			this->Job_Status->Name = L"Job_Status";
			this->Job_Status->Size = System::Drawing::Size(129, 21);
			this->Job_Status->TabIndex = 2;
			// 
			// Service_Order_Number
			// 
			this->Service_Order_Number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Service_Order_Number->Location = System::Drawing::Point(194, 48);
			this->Service_Order_Number->MaxLength = 10;
			this->Service_Order_Number->Name = L"Service_Order_Number";
			this->Service_Order_Number->Size = System::Drawing::Size(100, 22);
			this->Service_Order_Number->TabIndex = 3;
			this->Service_Order_Number->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Service_Order_Number->TextChanged += gcnew System::EventHandler(this, &Add_Job_Info::Service_Order_Number_TextChanged);
			this->Service_Order_Number->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Add_Job_Info::Service_Order_Number_KeyPress);
			// 
			// SO
			// 
			this->SO->Enabled = false;
			this->SO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SO->ForeColor = System::Drawing::SystemColors::WindowText;
			this->SO->Location = System::Drawing::Point(37, 48);
			this->SO->Name = L"SO";
			this->SO->Size = System::Drawing::Size(151, 22);
			this->SO->TabIndex = 4;
			this->SO->Text = L"Service Order Number:";
			this->SO->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Add_Job_Info
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1350, 729);
			this->Controls->Add(this->SO);
			this->Controls->Add(this->Service_Order_Number);
			this->Controls->Add(this->Job_Status);
			this->Controls->Add(this->BackGround);
			this->Name = L"Add_Job_Info";
			this->Text = L"Add_Job_Info";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void Service_Order_Number_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
		{
			if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
		}
		private: System::Void Service_Order_Number_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			serviceOrder = Service_Order_Number->Text;
		}
	};
}
