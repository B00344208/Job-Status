#pragma once
#include "Lists.h"
#include <string>
#include <iostream>

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
			this->BackGround->Size = System::Drawing::Size(1347, 630);
			this->BackGround->TabIndex = 1;
			// 
			// display_Box
			// 
			this->display_Box->CheckOnClick = true;
			this->display_Box->FormattingEnabled = true;
			this->display_Box->Location = System::Drawing::Point(436, 51);
			this->display_Box->Name = L"display_Box";
			this->display_Box->Size = System::Drawing::Size(631, 289);
			this->display_Box->TabIndex = 3;
			// 
			// Main_Menu
			// 
			this->Main_Menu->Cursor = System::Windows::Forms::Cursors::Default;
			this->Main_Menu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Main_Menu->Location = System::Drawing::Point(1072, 482);
			this->Main_Menu->Name = L"Main_Menu";
			this->Main_Menu->Size = System::Drawing::Size(129, 74);
			this->Main_Menu->TabIndex = 7;
			this->Main_Menu->Text = L"Main Menu";
			this->Main_Menu->UseVisualStyleBackColor = true;
			this->Main_Menu->Click += gcnew System::EventHandler(this, &Display_Job_Info::Main_Menu_Click);
			// 
			// Display_SO_List
			// 
			this->Display_SO_List->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->Display_SO_List->Location = System::Drawing::Point(714, 482);
			this->Display_SO_List->Name = L"Display_SO_List";
			this->Display_SO_List->Size = System::Drawing::Size(175, 74);
			this->Display_SO_List->TabIndex = 8;
			this->Display_SO_List->Text = L"Display";
			this->Display_SO_List->UseVisualStyleBackColor = true;
			this->Display_SO_List->Click += gcnew System::EventHandler(this, &Display_Job_Info::Display_SO_List_Click);
			// 
			// Display_Job_Info
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1347, 629);
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
	};
}
