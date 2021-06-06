//This program was written by Kamil Jusis (B00344208)

#include "stdafx.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	JobStatus::Main_Menu mainForm;
	Application::Run(% mainForm);
}