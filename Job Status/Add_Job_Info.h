#pragma once
#include "Lists.h"
#include "Time.h"
#include <string>
#include <iostream>
#include <msclr\marshal_cppstd.h>

namespace JobStatus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading::Tasks;
	using namespace std;

	string serviceOrderNumber;
	string serviceOrderStatus;
	string timeStamp;

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
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
	private: System::Windows::Forms::TextBox^ BackGround;
	private: System::Windows::Forms::ComboBox^ Job_Status;

	private: System::Windows::Forms::TextBox^ Service_Order_Number;
	private: System::Windows::Forms::TextBox^ SO;

	private: System::Windows::Forms::Button^ Add_Job;
	public:

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
			this->Add_Job = (gcnew System::Windows::Forms::Button());
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
			this->BackGround->Size = System::Drawing::Size(526, 226);
			this->BackGround->TabIndex = 1;
			// 
			// Job_Status
			// 
			this->Job_Status->Cursor = System::Windows::Forms::Cursors::Default;
			this->Job_Status->FormattingEnabled = true;
			this->Job_Status->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Complete, GD Done", L"Complete", L"Priority Order", L"Pending for Samsung",
					L"Engineer Report", L"GD Done", L"Re-write Done", L"£24.99"
			});
			this->Job_Status->Location = System::Drawing::Point(335, 48);
			this->Job_Status->Name = L"Job_Status";
			this->Job_Status->Size = System::Drawing::Size(129, 21);
			this->Job_Status->TabIndex = 2;
			this->Job_Status->SelectedIndexChanged += gcnew System::EventHandler(this, &Add_Job_Info::Job_Status_SelectedIndexChanged);
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
			// Add_Job
			// 
			this->Add_Job->Cursor = System::Windows::Forms::Cursors::Default;
			this->Add_Job->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Add_Job->Location = System::Drawing::Point(37, 92);
			this->Add_Job->Name = L"Add_Job";
			this->Add_Job->Size = System::Drawing::Size(427, 74);
			this->Add_Job->TabIndex = 5;
			this->Add_Job->Text = L"Add Job";
			this->Add_Job->UseVisualStyleBackColor = true;
			this->Add_Job->Click += gcnew System::EventHandler(this, &Add_Job_Info::Add_Job_Click);
			// 
			// Add_Job_Info
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(507, 201);
			this->Controls->Add(this->Add_Job);
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
			msclr::interop::marshal_context context;
			String^ service_order_number = Service_Order_Number->Text;
			serviceOrderNumber = context.marshal_as<string>(service_order_number);
		}

		private: System::Void Job_Status_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
		{
			msclr::interop::marshal_context context;
			String^ service_order_status = Job_Status->Text;
			serviceOrderStatus = context.marshal_as<string>(service_order_status);
		}

		private: System::Void Add_Job_Click(System::Object^ sender, System::EventArgs^ e)
		{
			Lists service_order_lists;
			Time t;
			t.setTime();
			msclr::interop::marshal_context context;
			String^ timestamp = (t.timeinfo->tm_hour + ":" + t.timeinfo->tm_min);
			timeStamp = context.marshal_as<string>(timestamp);

			service_Order newSO;
			newSO.serviceOrder_Number = serviceOrderNumber;
			newSO.serviceOrder_Status = serviceOrderStatus;
			newSO.time_Stamp = timeStamp;
			service_order_lists.service_Order_List.push_back(newSO);
			this->Close();
		}		
	};	
}