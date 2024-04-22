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
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
			button1->Enabled = false;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label9;


	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
	private:
		bool isDragging = false;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button4;
		   Point startPoint;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::BlueViolet;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(566, 117);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel1_Paint);
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::panel1_MouseDown_1);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::panel1_MouseMove_1);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::panel1_MouseUp_1);
			// 
			// button3
			// 
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->button3->Location = System::Drawing::Point(521, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(45, 40);
			this->button3->TabIndex = 17;
			this->button3->Text = L"X";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(545, 39);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Добавление в таблицу: Person";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::BlueViolet;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(329, 429);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 31);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(129, 125);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBoxPersonID);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(129, 167);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(148, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBoxName);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(129, 212);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(148, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBoxSurname);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(129, 259);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(148, 20);
			this->textBox4->TabIndex = 6;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBoxComplect);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(129, 305);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(148, 20);
			this->textBox5->TabIndex = 7;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBoxFIO);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(128, 347);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(149, 20);
			this->textBox6->TabIndex = 8;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBoxSum);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(12, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(12, 171);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Марка";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm1::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(12, 213);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Название";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm1::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(7, 262);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Комплектация";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(12, 306);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 16);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Ф.И.О";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(12, 348);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 16);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Цена";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::BlueViolet;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(463, 428);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 31);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Black;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(285, 123);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(271, 261);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->WaitOnLoad = true;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(12, 389);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(78, 16);
			this->label9->TabIndex = 17;
			this->label9->Text = L"addres_id";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm1::label9_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(128, 388);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(147, 21);
			this->comboBox1->TabIndex = 18;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::BlueViolet;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(3, 428);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(117, 31);
			this->button4->TabIndex = 19;
			this->button4->Text = L"Получить адреса";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(568, 471);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
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
			String^ name = textBox2->Text;
			String^ surname = textBox3->Text;
			String^ complect = textBox4->Text;
			String^ fio = textBox5->Text;	
			String^ sum = textBox6->Text;
			String^ address_id = comboBox1->Text;

			char* charid = static_cast<char*>(Marshal::StringToHGlobalAnsi(id).ToPointer());
			char* charName = static_cast<char*>(Marshal::StringToHGlobalAnsi(name).ToPointer());
			char* charSurname = static_cast<char*>(Marshal::StringToHGlobalAnsi(surname).ToPointer());
			char* charComplect = static_cast<char*>(Marshal::StringToHGlobalAnsi(complect).ToPointer());
			char* charFIO = static_cast<char*>(Marshal::StringToHGlobalAnsi(fio).ToPointer());
			char* charSum = static_cast<char*>(Marshal::StringToHGlobalAnsi(sum).ToPointer());
			char* charaddress_id = static_cast<char*>(Marshal::StringToHGlobalAnsi(address_id).ToPointer());

			String^ query = "INSERT INTO Person (id, Name, Surname, Complect, FIO, Sum, address_id)"
				" VALUES ('" + id + "', '" + name + "', '" + surname + "', '" + complect + "', '" + fio + "', '" + sum + "', '" + address_id + "');";
			std::string queryStr = msclr::interop::marshal_as<std::string>(query);

			rc = sqlite3_exec(db, queryStr.c_str(), NULL, 0, &errorMessage);

			if (rc != SQLITE_OK) {
				MessageBox::Show("Ошибка при выполнении SQL-запроса: " + gcnew String(errorMessage));
			}
			else {
				MessageBox::Show("Данные успешно добавлены в базу данных!");
			}

			sqlite3_close(db);

			Marshal::FreeHGlobal(IntPtr(charid));
			Marshal::FreeHGlobal(IntPtr(charName));
			Marshal::FreeHGlobal(IntPtr(charSurname));
			Marshal::FreeHGlobal(IntPtr(charComplect));
			Marshal::FreeHGlobal(IntPtr(charFIO));
			Marshal::FreeHGlobal(IntPtr(charSum));
			Marshal::FreeHGlobal(IntPtr(charaddress_id));

		}
		
	}

private: System::Void textBoxPersonID(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxName(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxSurname(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxComplect(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxFIO(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxSum(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Owner->Show();
	this->Close();
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();

}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void panel1_MouseDown_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left) {
		isDragging = true;
		startPoint = e->Location;
	}
}
private: System::Void panel1_MouseMove_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (isDragging) {
		Point newLocation;
		newLocation.X = this->Location.X + (e->Location.X - startPoint.X);
		newLocation.Y = this->Location.Y + (e->Location.Y - startPoint.Y);

		// You might not need bounds checking for the form itself
		// unless you want to restrict movement within the screen

		this->Location = newLocation;
	}
}
private: System::Void panel1_MouseUp_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	isDragging = false;

}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	// Включить кнопку button1, если пользователь выбрал список
	button1->Enabled = true;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ query = "SELECT id FROM Address;";
	std::string queryStr = msclr::interop::marshal_as<std::string>(query);

	sqlite3* db;
	char* errorMessage = nullptr;
	int rc = sqlite3_open("C:\\Users\\Ivan\\source\\repos\\bd-vxod\\guiSQLiteStudio1.db", &db);

	// Выполняем SQL-запрос
	sqlite3_stmt* stmt;
	rc = sqlite3_prepare_v2(db, queryStr.c_str(), -1, &stmt, NULL);

	// Обрабатываем результат выполнения запроса
	if (rc != SQLITE_OK) {
		MessageBox::Show("Ошибка при подготовке SQL-запроса!");
		sqlite3_close(db);
		return;
	}

	// Очищаем ComboBox
	comboBox1->Items->Clear();

	// Итерируемся по результатам запроса и выводим данные в ComboBox
	while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
		// Получаем значение id из текущей строки
		String^ id = gcnew String((char*)sqlite3_column_text(stmt, 0));

		// Добавляем id в ComboBox
		comboBox1->Items->Add(id);
	}

	// Очищаем подготовленный запрос
	sqlite3_finalize(stmt);

	// Закрываем базу данных
	sqlite3_close(db);
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	// Отключить кнопку button1
	button1->Enabled = false;
}

};
}
