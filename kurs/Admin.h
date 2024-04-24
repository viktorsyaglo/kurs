#pragma once
#include "Pauses.h"
#include "Istor.h"
#include "Otzivi.h"


namespace kurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Admin()
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

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(168, 44);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 75);
			this->button1->TabIndex = 0;
			this->button1->Text = L"»стори€ игр";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Admin::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(168, 125);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(170, 75);
			this->button2->TabIndex = 1;
			this->button2->Text = L"»нформаци€ о пользовател€х";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Admin::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(168, 215);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(170, 75);
			this->button3->TabIndex = 2;
			this->button3->Text = L"ќтзывы";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Admin::button3_Click);
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 362);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Admin";
			this->Text = L"Admin";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		UserProfile^ user = gcnew UserProfile;

		Pauses^ formPauses = gcnew Pauses(user);  // —оздание экземпл€ра формы Admin
		formPauses->Show();  // ќтображение формы Admin
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Istor^ formIstor = gcnew Istor();  // —оздание экземпл€ра формы Admin
		formIstor->Show();  // ќтображение формы Admin
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Otzivi^ formOtzivi = gcnew Otzivi();  // —оздание экземпл€ра формы Admin
		formOtzivi->Show();  // ќтображение формы Admin
	}
};
}
