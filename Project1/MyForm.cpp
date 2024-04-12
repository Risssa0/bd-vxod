#include "MyForm.h" // Include the header file of your WinForms form
#include <sqlite3.h> // Include the SQLite header file
#include <stdio.h>

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Project1::MyForm form; //WinFormsTest - им€ вашего проекта 
    Application::Run(% form);

    sqlite3* db;
    int rc = sqlite3_open("guiSQLiteStudio1.db", &db);

    if (rc) {
        // ≈сли произошла ошибка при открытии базы данных 
        fprintf(stderr, "Ќе удалось открыть базу данных: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }
    else {
        // Ѕаза данных успешно открыта 
        printf("Ѕаза данных успешно открыта");

        // ƒалее вы можете выполн€ть операции с базой данных, например, создавать таблицы, вставл€ть данные и т.д. 

        sqlite3_close(db); // Ќе забудьте закрыть соединение с базой данных после использовани€ 
        return 0;
    }
}