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
	/// ������ ��� MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::BlueViolet;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-44, -7);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(920, 148);
			this->panel1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(204, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(600, 55);
			this->label2->TabIndex = 1;
			this->label2->Text = L"����� � �������: Person";
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
			this->button1->Location = System::Drawing::Point(573, 506);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 33);
			this->button1->TabIndex = 13;
			this->button1->Text = L"�����";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::BlueViolet;
			this->button2->Location = System::Drawing::Point(748, 506);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 33);
			this->button2->TabIndex = 17;
			this->button2->Text = L"�����";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->PersonID,
					this->name, this->Surname, this->Comlpect, this->FIO, this->Sum
			});
			this->dataGridView1->Location = System::Drawing::Point(224, 160);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(643, 340);
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
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ClientSize = System::Drawing::Size(874, 551);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm4";
			this->Text = L"MyForm4";
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

		int rc = sqlite3_open("C:\\Users\\Ivan\\source\\repos\\bd-vxod\\guiSQLiteStudio1.db", &db);
		if (rc != SQLITE_OK) {
			MessageBox::Show("������ ��� �������� ���� ������!");
		}
		else {
			MessageBox::Show("���� ������ ������� �������!");

			String^ personID = textBox1->Text;

			// ����������� �������� PersonID � ������ � ������� ANSI
			char* charPersonID = static_cast<char*>(Marshal::StringToHGlobalAnsi(personID).ToPointer());

			// ��������� SQL-������ ��� ������ ������
			String^ query = "SELECT * FROM Person WHERE PersonID = '" + personID + "';";
			std::string queryStr = msclr::interop::marshal_as<std::string>(query);

			// ��������� SQL-������
			sqlite3_stmt* stmt;
			int rc = sqlite3_prepare_v2(db, queryStr.c_str(), -1, &stmt, NULL);

			// ������������ ��������� ���������� �������
			if (rc != SQLITE_OK) {
				MessageBox::Show("������ ��� ���������� SQL-�������!");
			}
			else {
				// ���� ������ �������, ������� �� ������ � DataGridView
				if (sqlite3_step(stmt) == SQLITE_ROW) {
					// �������� �������� �� ������� ������
					String^ personID = gcnew String((char*)sqlite3_column_text(stmt, 0));
					String^ name = gcnew String((char*)sqlite3_column_text(stmt, 1));
					String^ surname = gcnew String((char*)sqlite3_column_text(stmt, 2));
					String^ complect = gcnew String((char*)sqlite3_column_text(stmt, 3));
					String^ fio = gcnew String((char*)sqlite3_column_text(stmt, 4));
					String^ sum = gcnew String((char*)sqlite3_column_text(stmt, 5));

					// ��������� ����� ������ � DataGridView
					dataGridView1->Rows->Add(personID, name, surname, complect, fio, sum);
				}
				else {
					// ���� ������ �� �������, ������� ��������� �� ������
					MessageBox::Show("������ � ��������� PersonID �� �������!");
				}

				// ������� �������������� ������
				sqlite3_finalize(stmt);
			}

			// ...

			// ������� ���������� ������
			Marshal::FreeHGlobal(IntPtr(charPersonID));
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
};
}

