#pragma once
#include "LK.h"
#include "Admin.h"
#include "UserProfile.h";

namespace kurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Сводка для Autor
	/// </summary>
	public ref class Autor : public System::Windows::Forms::Form
	{
	public:
		Autor(void)
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
		~Autor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(172, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 55);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Войти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Autor::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(172, 306);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(195, 55);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Зарегистрироваться";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Autor::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(229, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Логин";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(219, 147);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Пароль";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(195, 88);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 40);
			this->textBox1->TabIndex = 4;
			//this->textBox1->TextChanged += gcnew System::EventHandler(this, &Autor::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(195, 179);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(150, 40);
			this->textBox2->TabIndex = 5;
			// 
			// Autor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(523, 432);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Autor";
			this->Text = L"Autor";
			this->Load += gcnew System::EventHandler(this, &Autor::Autor_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Autor_Load(System::Object^ sender, System::EventArgs^ e) {
	}

		   public: UserProfile ^ user = nullptr;
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ login = this->textBox1->Text;
	String^ password = this->textBox2->Text;

	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=scores;Integrated Security=True;Encrypt=False";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ sqlQuery = "SELECT * FROM users WHERE login=@login AND password =@pwd;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@login", login);
		command.Parameters->AddWithValue("@pwd", password);

		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
			user = gcnew UserProfile;
			user->id = reader->GetInt32(0);
			user->login = reader->GetString(1);
			user->password = reader->GetString(2);
			user->name = reader->GetString(3);
			user->surname = reader->GetString(4);
			user->gender = reader->GetString(5);

			MessageBox::Show(" Found user " + user->login);
		//	this->Close();
		}
		else {
			MessageBox::Show("Неправильный пароль");
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to connect");
	}
	LK^ formLK = gcnew LK();  // Создание экземпляра формы LK
	formLK->Show();  // Отображение формы LK
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Admin^ formAdmin = gcnew Admin();  // Создание экземпляра формы Admin
	formAdmin->Show();  // Отображение формы Admin
}

};
}

