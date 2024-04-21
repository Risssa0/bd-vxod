#pragma once
#include "sqlite3.h"
#include <msclr/marshal.h>
#include <string>
#include <msclr/marshal_cppstd.h>
namespace Project1 {
	using namespace System::Runtime::InteropServices;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PersonID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Comlpect;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FIO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ addres_id;
	private: System::Windows::Forms::Button^ button3;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
	private:
		bool isDragging = false;
		Point startPoint;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->PersonID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Comlpect = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FIO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->addres_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::BlueViolet;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-44, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1067, 138);
			this->panel1->TabIndex = 2;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm4::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm4::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm4::panel1_MouseUp);
			// 
			// button3
			// 
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->button3->Location = System::Drawing::Point(1024, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(45, 40);
			this->button3->TabIndex = 19;
			this->button3->Text = L"X";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm4::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(257, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(645, 64);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Поиск в таблице: Person";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm4::label2_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(12, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"ID";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(50, 162);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 20);
			this->textBox1->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::BlueViolet;
			this->button1->Location = System::Drawing::Point(706, 506);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 33);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Найти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::BlueViolet;
			this->button2->Location = System::Drawing::Point(898, 506);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 33);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->PersonID,
					this->name, this->Surname, this->Comlpect, this->FIO, this->Sum, this->addres_id
			});
			this->dataGridView1->Location = System::Drawing::Point(224, 160);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(744, 340);
			this->dataGridView1->TabIndex = 18;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm4::dataGridView1_CellContentClick_1);
			// 
			// PersonID
			// 
			this->PersonID->HeaderText = L"PersonID";
			this->PersonID->Name = L"PersonID";
			this->PersonID->ReadOnly = true;
			// 
			// name
			// 
			this->name->HeaderText = L"name";
			this->name->Name = L"name";
			// 
			// Surname
			// 
			this->Surname->HeaderText = L"Surname";
			this->Surname->Name = L"Surname";
			// 
			// Comlpect
			// 
			this->Comlpect->HeaderText = L"Comlpect";
			this->Comlpect->Name = L"Comlpect";
			// 
			// FIO
			// 
			this->FIO->HeaderText = L"FIO";
			this->FIO->Name = L"FIO";
			// 
			// Sum
			// 
			this->Sum->HeaderText = L"Sum";
			this->Sum->Name = L"Sum";
			// 
			// addres_id
			// 
			this->addres_id->HeaderText = L"addres_id";
			this->addres_id->Name = L"addres_id";
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1024, 551);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm4";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		sqlite3* db;
		char* errorMessage = nullptr;

		int rc = sqlite3_open("C:\\Users\\Ivan\\source\\repos\\bd-vxod\\guiSQLiteStudio1.db", &db);// ТУТ ВАШЕ РАСПОЛОЖЕНИЕ БД, КОТОРУЮ Я ВАМ СКИНУ))!!!!!!!!!!!!!
		if (rc != SQLITE_OK) {
			MessageBox::Show("Ошибка при открытии базы данных!");
		}
		else {
			

			String^ id = textBox1->Text;

			// Преобразуем значение PersonID в строку в формате ANSI
			char* charid = static_cast<char*>(Marshal::StringToHGlobalAnsi(id).ToPointer());

			// Формируем SQL-запрос для поиска строки
			String^ query = "SELECT * FROM Person WHERE id = '" + id + "';";
			std::string queryStr = msclr::interop::marshal_as<std::string>(query);

			// Выполняем SQL-запрос
			sqlite3_stmt* stmt;
			int rc = sqlite3_prepare_v2(db, queryStr.c_str(), -1, &stmt, NULL);

			// Обрабатываем результат выполнения запроса
			if (rc != SQLITE_OK) {
				MessageBox::Show("Ошибка при подготовке SQL-запроса!");
			}
			else {
				// Если строка найдена, выводим ее данные в DataGridView
				if (sqlite3_step(stmt) == SQLITE_ROW) {
					// Получаем значения из текущей строки
					String^ id = gcnew String((char*)sqlite3_column_text(stmt, 0));
					String^ name = gcnew String((char*)sqlite3_column_text(stmt, 1));
					String^ surname = gcnew String((char*)sqlite3_column_text(stmt, 2));
					String^ complect = gcnew String((char*)sqlite3_column_text(stmt, 3));
					String^ fio = gcnew String((char*)sqlite3_column_text(stmt, 4));
					String^ sum = gcnew String((char*)sqlite3_column_text(stmt, 5));
					String^ address_id = gcnew String((char*)sqlite3_column_text(stmt, 6));

					// Добавляем новую строку в DataGridView
					dataGridView1->Rows->Add(id, name, surname, complect, fio, sum, address_id);
				}
				else {
					// Если строка не найдена, выводим сообщение об ошибке
					MessageBox::Show("Строка с указанным id не найдена!");
				}

				// Очищаем подготовленный запрос
				sqlite3_finalize(stmt);
			}

			// ...

			// Очищаем выделенную память
			Marshal::FreeHGlobal(IntPtr(charid));
		}
	};
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show();
		this->Close();
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left) {
		isDragging = true;
		startPoint = e->Location;
	}
}
private: System::Void panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (isDragging) {
		Point newLocation;
		newLocation.X = this->Location.X + (e->Location.X - startPoint.X);
		newLocation.Y = this->Location.Y + (e->Location.Y - startPoint.Y);

		// You might not need bounds checking for the form itself
		// unless you want to restrict movement within the screen

		this->Location = newLocation;
	}
}
private: System::Void panel1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	isDragging = false;

}
};
}

