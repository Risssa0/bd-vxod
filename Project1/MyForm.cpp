#include "MyForm.h" // Include the header file of your WinForms form
#include <sqlite3.h> // Include the SQLite header file
#include <stdio.h>

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Project1::MyForm form; //WinFormsTest - ��� ������ ������� 
    Application::Run(% form);

    sqlite3* db;
    int rc = sqlite3_open("guiSQLiteStudio1.db", &db);

    if (rc) {
        // ���� ��������� ������ ��� �������� ���� ������ 
        fprintf(stderr, "�� ������� ������� ���� ������: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }
    else {
        // ���� ������ ������� ������� 
        printf("���� ������ ������� �������");

        // ����� �� ������ ��������� �������� � ����� ������, ��������, ��������� �������, ��������� ������ � �.�. 

        sqlite3_close(db); // �� �������� ������� ���������� � ����� ������ ����� ������������� 
        return 0;
    }
}