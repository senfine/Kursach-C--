#pragma once
#include "MySqlWork.h"
#include "DirectorForm.h"
#include "TeachForm.h"
#include "UserForm.h"
#include "MyForm.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySqlWorkNameSpace;

	/// <summary>
	/// Сводка для login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
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
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ userLogin;
	private: String^ userRole;
	private: bool isLogin = false;
	private: DirectorForm^ newDirectorForm;
	private: MyForm^ newFormes;
	private: TeachForm^ newTeach;
	private: UserForm^ newUser;
	private: MyForm^ newMyForm;

	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::CheckBox^  checkBox1;




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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(426, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 117);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(426, 20);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите пароль";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Введите логин";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(185, 59);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Тудым";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &login::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(253, 186);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(185, 59);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Сюдым-Сюдым";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &login::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label5->Location = System::Drawing::Point(148, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(176, 25);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Личный кабинет";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(12, 143);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(114, 17);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"Показать пароль";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &login::checkBox1_CheckedChanged);
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(450, 262);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"login";
			this->Text = L"login";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool loginInto(String^ login, String^ pass)
		{
				String^ query = "SELECT * FROM users WHERE login = '" + login + "'";
				MySqlDataReader^ dataReader = MySqlWork::ExecuteQuery(query);
				if (dataReader != nullptr)
				{
					dataReader->Read();
					if (login == dataReader->GetString(0) && MySqlWork::GetHash(pass) == dataReader->GetString(1))
					{
						userLogin = login;
						userRole = dataReader->GetString(2);
						return true;
					}
				}
			return false;
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ login = textBox1->Text->ToString();
		String^ password = textBox2->Text->ToString();
		if (loginInto(login, password))
		{
			isLogin = true;
			/*HideLoginForm();*/
			if (userRole == "admin")
			{
				newDirectorForm = gcnew DirectorForm(this->textBox1->Text);
				newDirectorForm->Show();
			}
			else if (userRole == "teacher")
			{
				newTeach = gcnew TeachForm(this->textBox1->Text);
				newTeach->Show();
			}
			else
			{
				newUser = gcnew UserForm(this->textBox1->Text);
				newUser->Show();
			}
		}
		else
		{
			MessageBox::Show("Неверный логин или пароль");
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
	//newMyForm = gcnew MyForm();
	//newMyForm->Show();
}
private: System::Void login_Load(System::Object^  sender, System::EventArgs^  e) {
	textBox2->UseSystemPasswordChar = true;
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox1->Checked == true)
	{
		textBox2->UseSystemPasswordChar = false;
	}
	else
	{
		textBox2->UseSystemPasswordChar = true;
	}
}
};
}
