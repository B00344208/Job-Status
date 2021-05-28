#pragma once
#include "Add_Job_Info.h"
#include "Display_Job_Info.h"
#include "Save_File.h"
#include "Load_File.h"

namespace JobStatus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main_Menu
	/// </summary>
	public ref class Main_Menu : public System::Windows::Forms::Form
	{
	public:
		Main_Menu(void)
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
		~Main_Menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ BackGround;
	private: System::Windows::Forms::TextBox^ Title;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ Save_File;
	private: System::Windows::Forms::Button^ Load_File;
	private: System::Windows::Forms::Button^ Exit_App;
	private: System::Windows::Forms::Button^ Add_Job_Information;
	private: System::Windows::Forms::Button^ Display_All_Jobs;
	protected:

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
			this->Title = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Save_File = (gcnew System::Windows::Forms::Button());
			this->Load_File = (gcnew System::Windows::Forms::Button());
			this->Exit_App = (gcnew System::Windows::Forms::Button());
			this->Add_Job_Information = (gcnew System::Windows::Forms::Button());
			this->Display_All_Jobs = (gcnew System::Windows::Forms::Button());
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
			this->BackGround->TabIndex = 0;
			// 
			// Title
			// 
			this->Title->BackColor = System::Drawing::SystemColors::MenuText;
			this->Title->Enabled = false;
			this->Title->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->ForeColor = System::Drawing::SystemColors::Info;
			this->Title->Location = System::Drawing::Point(381, 53);
			this->Title->Multiline = true;
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(526, 127);
			this->Title->TabIndex = 4;
			this->Title->Text = L"\r\nJob Status";
			this->Title->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 595);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(240, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"Created by: Kamil Jusis (B00344208)";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Save_File
			// 
			this->Save_File->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F));
			this->Save_File->Location = System::Drawing::Point(381, 312);
			this->Save_File->Name = L"Save_File";
			this->Save_File->Size = System::Drawing::Size(250, 75);
			this->Save_File->TabIndex = 9;
			this->Save_File->Text = L"Save File";
			this->Save_File->UseVisualStyleBackColor = true;
			this->Save_File->Click += gcnew System::EventHandler(this, &Main_Menu::Save_File_Click);
			// 
			// Load_File
			// 
			this->Load_File->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F));
			this->Load_File->Location = System::Drawing::Point(657, 312);
			this->Load_File->Name = L"Load_File";
			this->Load_File->Size = System::Drawing::Size(250, 75);
			this->Load_File->TabIndex = 10;
			this->Load_File->Text = L"Load File";
			this->Load_File->UseVisualStyleBackColor = true;
			this->Load_File->Click += gcnew System::EventHandler(this, &Main_Menu::Load_File_Click);
			// 
			// Exit_App
			// 
			this->Exit_App->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit_App->Location = System::Drawing::Point(381, 412);
			this->Exit_App->Name = L"Exit_App";
			this->Exit_App->Size = System::Drawing::Size(526, 75);
			this->Exit_App->TabIndex = 11;
			this->Exit_App->Text = L"Exit App";
			this->Exit_App->UseVisualStyleBackColor = true;
			this->Exit_App->Click += gcnew System::EventHandler(this, &Main_Menu::Exit_App_Click);
			// 
			// Add_Job_Information
			// 
			this->Add_Job_Information->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Add_Job_Information->Location = System::Drawing::Point(381, 212);
			this->Add_Job_Information->Name = L"Add_Job_Information";
			this->Add_Job_Information->Size = System::Drawing::Size(250, 75);
			this->Add_Job_Information->TabIndex = 7;
			this->Add_Job_Information->Text = L"Add Job Information";
			this->Add_Job_Information->UseVisualStyleBackColor = true;
			this->Add_Job_Information->Click += gcnew System::EventHandler(this, &Main_Menu::Add_Job_Information_Click);
			// 
			// Display_All_Jobs
			// 
			this->Display_All_Jobs->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Display_All_Jobs->Location = System::Drawing::Point(657, 212);
			this->Display_All_Jobs->Name = L"Display_All_Jobs";
			this->Display_All_Jobs->Size = System::Drawing::Size(250, 75);
			this->Display_All_Jobs->TabIndex = 8;
			this->Display_All_Jobs->Text = L"Display All Jobs";
			this->Display_All_Jobs->UseVisualStyleBackColor = true;
			this->Display_All_Jobs->Click += gcnew System::EventHandler(this, &Main_Menu::Display_All_Jobs_Click);
			// 
			// Main_Menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1347, 629);
			this->Controls->Add(this->Exit_App);
			this->Controls->Add(this->Load_File);
			this->Controls->Add(this->Save_File);
			this->Controls->Add(this->Display_All_Jobs);
			this->Controls->Add(this->Add_Job_Information);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Title);
			this->Controls->Add(this->BackGround);
			this->Name = L"Main_Menu";
			this->Text = L"Main_Menu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

		private: System::Void Add_Job_Information_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Hide();
			JobStatus::Add_Job_Info addJobForm;
			addJobForm.ShowDialog();
			this->Show();
		}

		private: System::Void Display_All_Jobs_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Hide();
			JobStatus::Display_Job_Info displayJobForm;
			displayJobForm.ShowDialog();
			this->Show();
		}

		private: System::Void Save_File_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Hide();
			JobStatus::Save_File saveForm;
			saveForm.ShowDialog();
			this->Show();
		}

		private: System::Void Load_File_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Hide();
			JobStatus::Load_File loadForm;
			loadForm.ShowDialog();
			this->Show();
		}

		private: System::Void Exit_App_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Close();
		}

	};
}
