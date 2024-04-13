#pragma once
#include "sqlite3.h"
#include <msclr/marshal.h>
namespace Project1 {

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

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
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
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Chocolate;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(570, 117);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->button1->BackColor = System::Drawing::Color::Chocolate;
			this->button1->Location = System::Drawing::Point(377, 377);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 27);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Да";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(39, 146);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(151, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBoxPersonID);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(39, 182);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(151, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBoxName);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(40, 233);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(149, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBoxSurname);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(42, 276);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(147, 20);
			this->textBox4->TabIndex = 6;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBoxComplect);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(40, 307);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(148, 20);
			this->textBox5->TabIndex = 7;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBoxFIO);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(40, 345);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(149, 20);
			this->textBox6->TabIndex = 8;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBoxSum);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ClientSize = System::Drawing::Size(564, 439);
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
};
}
