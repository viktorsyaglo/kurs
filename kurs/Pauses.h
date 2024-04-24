#pragma once
#include "UserProfile.h"

namespace kurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Pauses
	/// </summary>
	public ref class Pauses : public System::Windows::Forms::Form
	{
	public:
		Pauses(UserProfile^ user)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			label2->Text = "ID=" + user->id + ", Login =" + user->login + ", Password =" + user->password;

		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Pauses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	protected:

	protected:


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(124, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(360, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"»нформаци€ о пользовател€х";
			this->label1->Click += gcnew System::EventHandler(this, &Pauses::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// Pauses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(585, 404);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Pauses";
			this->Text = L"Inf";
			this->Load += gcnew System::EventHandler(this, &Pauses::Pauses_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Pauses_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
