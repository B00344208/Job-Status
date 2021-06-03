#pragma once
#include "Lists.h"
#include <string>
#include <iostream>
#include <algorithm>

namespace JobStatus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading::Tasks;
	using namespace std;

	/// <summary>
	/// Summary for Display_Job_Info
	/// </summary>
	public ref class Display_Job_Info : public System::Windows::Forms::Form
	{
	public:
		Display_Job_Info(void)
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
		~Display_Job_Info()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ BackGround;
	private: System::Windows::Forms::CheckedListBox^ display_Box;

	private:

	private: System::Windows::Forms::Button^ Main_Menu;
	private: System::Windows::Forms::Button^ Display_SO_List;
	private: System::Windows::Forms::ComboBox^ Job_Status;
	private: System::Windows::Forms::Button^ Update_SO_Status;
	private: System::Windows::Forms::Button^ Sort_By_Date;
	private: System::Windows::Forms::TextBox^ textBox1;


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
			this->BackGround = (gcnew System::Windows::Forms::TextBox());
			this->display_Box = (gcnew System::Windows::Forms::CheckedListBox());
			this->Main_Menu = (gcnew System::Windows::Forms::Button());
			this->Display_SO_List = (gcnew System::Windows::Forms::Button());
			this->Job_Status = (gcnew System::Windows::Forms::ComboBox());
			this->Update_SO_Status = (gcnew System::Windows::Forms::Button());
			this->Sort_By_Date = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// BackGround
			// 
			this->BackGround->BackColor = System::Drawing::Color::Firebrick;
			this->BackGround->Cursor = System::Windows::Forms::Cursors::No;
			this->BackGround->Enabled = false;
			this->BackGround->Location = System::Drawing::Point(0, -1);
			this->BackGround->Multiline = true;
			this->BackGround->Name = L"BackGround";
			this->BackGround->Size = System::Drawing::Size(773, 443);
			this->BackGround->TabIndex = 1;
			// 
			// display_Box
			// 
			this->display_Box->CheckOnClick = true;
			this->display_Box->FormattingEnabled = true;
			this->display_Box->Location = System::Drawing::Point(27, 25);
			this->display_Box->Name = L"display_Box";
			this->display_Box->Size = System::Drawing::Size(520, 289);
			this->display_Box->TabIndex = 3;
			// 
			// Main_Menu
			// 
			this->Main_Menu->Cursor = System::Windows::Forms::Cursors::Default;
			this->Main_Menu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Main_Menu->Location = System::Drawing::Point(417, 339);
			this->Main_Menu->Name = L"Main_Menu";
			this->Main_Menu->Size = System::Drawing::Size(327, 74);
			this->Main_Menu->TabIndex = 7;
			this->Main_Menu->Text = L"Main Menu";
			this->Main_Menu->UseVisualStyleBackColor = true;
			this->Main_Menu->Click += gcnew System::EventHandler(this, &Display_Job_Info::Main_Menu_Click);
			// 
			// Display_SO_List
			// 
			this->Display_SO_List->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->Display_SO_List->Location = System::Drawing::Point(27, 339);
			this->Display_SO_List->Name = L"Display_SO_List";
			this->Display_SO_List->Size = System::Drawing::Size(175, 74);
			this->Display_SO_List->TabIndex = 8;
			this->Display_SO_List->Text = L"Display";
			this->Display_SO_List->UseVisualStyleBackColor = true;
			this->Display_SO_List->Click += gcnew System::EventHandler(this, &Display_Job_Info::Display_SO_List_Click);
			// 
			// Job_Status
			// 
			this->Job_Status->Cursor = System::Windows::Forms::Cursors::Default;
			this->Job_Status->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Job_Status->FormattingEnabled = true;
			this->Job_Status->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Complete, GD Done", L"Complete", L"Priority Order",
					L"Pending for Samsung", L"Engineer Report", L"GD Done", L"Re-write Done", L"£24.99"
			});
			this->Job_Status->Location = System::Drawing::Point(569, 101);
			this->Job_Status->Name = L"Job_Status";
			this->Job_Status->Size = System::Drawing::Size(175, 21);
			this->Job_Status->TabIndex = 9;
			// 
			// Update_SO_Status
			// 
			this->Update_SO_Status->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->Update_SO_Status->Location = System::Drawing::Point(569, 144);
			this->Update_SO_Status->Name = L"Update_SO_Status";
			this->Update_SO_Status->Size = System::Drawing::Size(175, 74);
			this->Update_SO_Status->TabIndex = 10;
			this->Update_SO_Status->Text = L"Update SO Status";
			this->Update_SO_Status->UseVisualStyleBackColor = true;
			this->Update_SO_Status->Click += gcnew System::EventHandler(this, &Display_Job_Info::Update_SO_Status_Click);
			// 
			// Sort_By_Date
			// 
			this->Sort_By_Date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->Sort_By_Date->Location = System::Drawing::Point(221, 339);
			this->Sort_By_Date->Name = L"Sort_By_Date";
			this->Sort_By_Date->Size = System::Drawing::Size(176, 74);
			this->Sort_By_Date->TabIndex = 11;
			this->Sort_By_Date->Text = L"Sort By Date";
			this->Sort_By_Date->UseVisualStyleBackColor = true;
			this->Sort_By_Date->Click += gcnew System::EventHandler(this, &Display_Job_Info::Sort_By_Date_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->textBox1->Location = System::Drawing::Point(569, 25);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(175, 70);
			this->textBox1->TabIndex = 12;
			this->textBox1->Text = L"Update SO Status";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Display_Job_Info
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(773, 442);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Sort_By_Date);
			this->Controls->Add(this->Update_SO_Status);
			this->Controls->Add(this->Job_Status);
			this->Controls->Add(this->Display_SO_List);
			this->Controls->Add(this->Main_Menu);
			this->Controls->Add(this->display_Box);
			this->Controls->Add(this->BackGround);
			this->Name = L"Display_Job_Info";
			this->Text = L"Display_Job_Info";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void Main_Menu_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Close();
		}

		private: System::Void Display_SO_List_Click(System::Object^ sender, System::EventArgs^ e)
		{
			display_Box->Items->Clear();
			display_Box->BeginUpdate();
			for each (newSO in service_order_lists.service_Order_List)
			{
				String^ SO_Number = gcnew String(newSO.GetserviceOrder_Number().c_str());
				String^ SO_TimeStamp = gcnew String(newSO.Gettime_Stamp().c_str());
				String^ SO_Status = gcnew String(newSO.GetserviceOrder_Status().c_str());
				display_Box->Items->Add("SO: " + SO_Number + "	Time Stamp: " + SO_TimeStamp + "	Status: " + SO_Status);
			}
			display_Box->EndUpdate();
		}

		private: System::Void Sort_By_Date_Click(System::Object^ sender, System::EventArgs^ e)
		{
			sort(service_order_lists.service_Order_List.begin(), service_order_lists.service_Order_List.end(), newSO.Gettime_Stamp());
		}

		private: System::Void Update_SO_Status_Click(System::Object^ sender, System::EventArgs^ e)
		{
			String^ Si = display_Box->Text;
			string si;
			ClrStringToStdString(si, Si);


			for (list<service_Order>::iterator it = service_order_lists.service_Order_List.begin(); it != service_order_lists.service_Order_List.end(); ++it)
			{	
				if (it->GetserviceOrder_Number() == si)
				{
					service_order_lists.service_Order_List.erase(it);
				}
			}
		}

		static void ClrStringToStdString(string& outStr, String^ str) //Converts Windows managed Strings to std unmanaged strings
		{
			IntPtr ansiStr = Marshal::StringToHGlobalAnsi(str);
			outStr = (const char*)ansiStr.ToPointer();
			Marshal::FreeHGlobal(ansiStr);
		}
	};
}
