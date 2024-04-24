#pragma once
#include "Matc.h"
#include "Istor.h"
namespace kurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для User
	/// </summary>
	public ref class User : public System::Windows::Forms::Form
	{
	public:
		int id;
		String^ login;
		String^ password;
	public:
		User(void)
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
		~User()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(68, 54);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 66);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Что такое сквош\?";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &User::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(254, 54);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(168, 66);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Что такое теннис\?";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &User::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(121, 141);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(223, 66);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Создать матч";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &User::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(121, 223);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(223, 66);
			this->button4->TabIndex = 3;
			this->button4->Text = L"История матчей";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &User::button4_Click);
			// 
			// User
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(487, 359);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"User";
			this->Text = L"User";
			this->Load += gcnew System::EventHandler(this, &User::User_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ message = "Сквош - это ыолмр"; // Текст сообщения
		String^ caption = "Что такое сквош"; // Заголовок окна сообщения

		MessageBox::Show(message, caption);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ message = "теннис - это"; // Текст сообщения
	String^ caption = "Что такое теннис?"; // Заголовок окна сообщения

	MessageBox::Show(message, caption);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Matc^ formMatc = gcnew Matc();  // Создание экземпляра формы Admin
	formMatc->Show();  // Отображение формы Admin
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Istor^ formIstor = gcnew Istor();  // Создание экземпляра формы Admin
	formIstor->Show();  // Отображение формы Admin
}
private: System::Void User_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
