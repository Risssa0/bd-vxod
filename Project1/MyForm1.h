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
	/// ������ ��� MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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

	protected:

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Chocolate;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(570, 117);
			this->panel1->TabIndex = 0;
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
			this->button1->BackColor = System::Drawing::Color::Chocolate;
			this->button1->Location = System::Drawing::Point(381, 345);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 27);
			this->button1->TabIndex = 2;
			this->button1->Text = L"��������";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(87, 123);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBoxPersonID);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(87, 168);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(148, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBoxName);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(87, 212);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(148, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBoxSurname);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(87, 259);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(148, 20);
			this->textBox4->TabIndex = 6;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBoxComplect);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(87, 303);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(148, 20);
			this->textBox5->TabIndex = 7;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBoxFIO);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(87, 345);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(149, 20);
			this->textBox6->TabIndex = 8;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBoxSum);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(72, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(428, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"���������� � �������: Person";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 171);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"�����";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm1::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 215);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"��������";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(0, 262);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"������������";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 306);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"�.�.�";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 348);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(33, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"����";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ClientSize = System::Drawing::Size(564, 439);
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
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		sqlite3* db;
		char* errorMessage = nullptr;

		int rc = sqlite3_open("C:\\Users\\Ivan\\source\\repos\\bd-enter-master\\guiSQLiteStudio1.db", &db);
		if (rc != SQLITE_OK) {
			MessageBox::Show("������ ��� �������� ���� ������!");
		}
		else {
			MessageBox::Show("���� ������ ������� �������!");
			String^ personID = textBox1->Text;
			String^ name = textBox2->Text;
			String^ surname = textBox3->Text;
			String^ complect = textBox4->Text;
			String^ fio = textBox5->Text;
			String^ sum = textBox6->Text;

			char* charPersonID = static_cast<char*>(Marshal::StringToHGlobalAnsi(personID).ToPointer());
			char* charName = static_cast<char*>(Marshal::StringToHGlobalAnsi(name).ToPointer());
			char* charSurname = static_cast<char*>(Marshal::StringToHGlobalAnsi(surname).ToPointer());
			char* charComplect = static_cast<char*>(Marshal::StringToHGlobalAnsi(complect).ToPointer());
			char* charFIO = static_cast<char*>(Marshal::StringToHGlobalAnsi(fio).ToPointer());
			char* charSum = static_cast<char*>(Marshal::StringToHGlobalAnsi(sum).ToPointer());

			String^ query = "INSERT INTO Person (PersonID, Name, Surname, Complect, FIO, Sum) VALUES ('" + personID + "', '" + name + "', '" + surname + "', '" + complect + "', '" + fio + "', '" + sum + "');";
			std::string queryStr = msclr::interop::marshal_as<std::string>(query);

			rc = sqlite3_exec(db, queryStr.c_str(), NULL, 0, &errorMessage);

			if (rc != SQLITE_OK) {
				MessageBox::Show("������ ��� ���������� SQL-�������: " + gcnew String(errorMessage));
			}
			else {
				MessageBox::Show("������ ������� ��������� � ���� ������!");
			}

			sqlite3_close(db);
			Marshal::FreeHGlobal(IntPtr(charPersonID));
			Marshal::FreeHGlobal(IntPtr(charName));
			Marshal::FreeHGlobal(IntPtr(charSurname));
			Marshal::FreeHGlobal(IntPtr(charComplect));
			Marshal::FreeHGlobal(IntPtr(charFIO));
			Marshal::FreeHGlobal(IntPtr(charSum));
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
};
}
