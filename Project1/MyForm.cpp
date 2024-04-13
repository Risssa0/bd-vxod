#include "MyForm.h" // Include the header file of your WinForms form
#include <sqlite3.h> // Include the SQLite header file
#include <stdio.h>

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Project1::MyForm form; //WinFormsTest - имя вашего проекта 
    Application::Run(% form);
}