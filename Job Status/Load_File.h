#pragma once
#include "Lists.h"
#include <string>
#include <string.h>
#include <iostream>
#include <fstream>

namespace JobStatus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Load_File
	/// </summary>
	public ref class Load_File : public System::Windows::Forms::Form
	{
	public:
		Load_File(void)
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
		~Load_File()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ BackGround;
	private: System::Windows::Forms::TextBox^ Date_Load_Explanation;

	private: System::Windows::Forms::TextBox^ Job_Date;
	private: System::Windows::Forms::Button^ Load_File_Date;


	private: System::Windows::Forms::Button^ Main_Menu;


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
			this->Date_Load_Explanation = (gcnew System::Windows::Forms::TextBox());
			this->Job_Date = (gcnew System::Windows::Forms::TextBox());
			this->Load_File_Date = (gcnew System::Windows::Forms::Button());
			this->Main_Menu = (gcnew System::Windows::Forms::Button());
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
			this->BackGround->Size = System::Drawing::Size(512, 182);
			this->BackGround->TabIndex = 1;
			// 
			// Date_Load_Explanation
			// 
			this->Date_Load_Explanation->Enabled = false;
			this->Date_Load_Explanation->Location = System::Drawing::Point(37, 36);
			this->Date_Load_Explanation->Name = L"Date_Load_Explanation";
			this->Date_Load_Explanation->Size = System::Drawing::Size(263, 20);
			this->Date_Load_Explanation->TabIndex = 2;
			this->Date_Load_Explanation->Text = L"Write the date that you would like to load (dd.mm.yyyy)";
			// 
			// Job_Date
			// 
			this->Job_Date->Location = System::Drawing::Point(327, 36);
			this->Job_Date->MaxLength = 10;
			this->Job_Date->Name = L"Job_Date";
			this->Job_Date->Size = System::Drawing::Size(142, 20);
			this->Job_Date->TabIndex = 3;
			this->Job_Date->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Load_File::Job_Date_KeyPress);
			// 
			// Load_File_Date
			// 
			this->Load_File_Date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->Load_File_Date->Location = System::Drawing::Point(37, 79);
			this->Load_File_Date->Name = L"Load_File_Date";
			this->Load_File_Date->Size = System::Drawing::Size(263, 73);
			this->Load_File_Date->TabIndex = 4;
			this->Load_File_Date->Text = L"Load File";
			this->Load_File_Date->UseVisualStyleBackColor = true;
			this->Load_File_Date->Click += gcnew System::EventHandler(this, &Load_File::Load_File_Date_Click);
			// 
			// Main_Menu
			// 
			this->Main_Menu->Cursor = System::Windows::Forms::Cursors::Default;
			this->Main_Menu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Main_Menu->Location = System::Drawing::Point(327, 78);
			this->Main_Menu->Name = L"Main_Menu";
			this->Main_Menu->Size = System::Drawing::Size(142, 74);
			this->Main_Menu->TabIndex = 7;
			this->Main_Menu->Text = L"Main Menu";
			this->Main_Menu->UseVisualStyleBackColor = true;
			this->Main_Menu->Click += gcnew System::EventHandler(this, &Load_File::Main_Menu_Click);
			// 
			// Load_File
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(511, 181);
			this->Controls->Add(this->Main_Menu);
			this->Controls->Add(this->Load_File_Date);
			this->Controls->Add(this->Job_Date);
			this->Controls->Add(this->Date_Load_Explanation);
			this->Controls->Add(this->BackGround);
			this->Name = L"Load_File";
			this->Text = L"Load_File";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void Job_Date_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
		{
			if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08 && e->KeyChar != '.')
				e->Handled = true; //This is to ensure that numbers and full stops can be written in the textbox

			//if (e->KeyChar == '.')
				//e->Handled = true; //This is to ensure that full stops can be written in the textbox
		}

		private: System::Void Load_File_Date_Click(System::Object^ sender, System::EventArgs^ e)
		{
			string dateStamp;
			String^ datestamp = Job_Date->Text;

			ClrStringToStdString(dateStamp, datestamp);
			string loadName = dateStamp;

			fstream file;
			file.open("../Service Order/" + loadName + ".txt", ios::in);

			while (file)
			{
				file >> newSO.SetserviceOrder_Number(serviceOrderNumber);
				file >> newSO.Settime_Stamp(timeStamp);
				file >> newSO.SetserviceOrder_Status(serviceOrderStatus);
				service_order_lists.service_Order_List.push_back(newSO);
			}

			file.close();

			this->Close();
		}

		private: System::Void Main_Menu_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Close();
		}

		static void ClrStringToStdString(string& outStr, String^ str)
		{
			IntPtr ansiStr = Marshal::StringToHGlobalAnsi(str);
			outStr = (const char*)ansiStr.ToPointer();
			Marshal::FreeHGlobal(ansiStr);
		}
	};
}
