#pragma once
#include "MySqlWork.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace MySqlWorkNameSpace;

	/// <summary>
	/// Сводка для addteacher
	/// </summary>
	public ref class addteacher : public System::Windows::Forms::Form
	{
	public:
		addteacher(void)
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
		~addteacher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ connectionInfo = "datasource=localhost;port=3306;username=root;password=52423242r;database=cursach";
	private: System::Windows::Forms::Button^  button2;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(375, 181);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 59);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Сюдым";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &addteacher::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 59);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &addteacher::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 139);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Введите имя";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Выберите предмет";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Введите пароль";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Введите логин";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(12, 115);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(490, 21);
			this->comboBox1->TabIndex = 15;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 155);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(490, 20);
			this->textBox4->TabIndex = 14;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 76);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(490, 20);
			this->textBox2->TabIndex = 13;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(490, 20);
			this->textBox1->TabIndex = 12;
			// 
			// addteacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(514, 261);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"addteacher";
			this->Text = L"addteacher";
			this->Load += gcnew System::EventHandler(this, &addteacher::addteacher_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		MySqlDataReader^ ExecuteQuery(String^ query)
		{
			MySqlConnection^ connection = gcnew MySqlConnection(connectionInfo);
			MySqlCommand^ connectionCmd = gcnew MySqlCommand(query, connection);
			MySqlDataReader^ dataReader;

			try
			{
				connection->Open();
				dataReader = connectionCmd->ExecuteReader();

				if (dataReader->HasRows)
				{
					return dataReader;
				}
				else
				{
					return nullptr;
				}

				dataReader->Close();
			}
			catch (Exception^ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

	private: System::Void addteacher_Load(System::Object^  sender, System::EventArgs^  e) {
		MySqlDataReader^ dataReader = ExecuteQuery("SELECT lesson_name from lessons");
		if (dataReader != nullptr)
		{
			while (dataReader->Read())
			{
				comboBox1->Items->Add(dataReader->GetString(0));
			}
		}
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text != "" && textBox2->Text != "" && textBox4->Text != "" && comboBox1->Text != "")
	{
		MySqlDataReader^ dataReader = MySqlWork::ExecuteQuery("SELECT * FROM users WHERE login='" + textBox1->Text + "'");
		if (dataReader == nullptr) {
			MySqlWork::ExecuteQuery("INSERT INTO users(login,password,role) VALUES('" + textBox1->Text + "','" + MySqlWork::GetHash(textBox2->Text) + "','teacher')");
			MySqlWork::ExecuteQuery("INSERT INTO teacher(login,name,lessons) VALUES('" + textBox1->Text + "','" + textBox4->Text + "', '" + comboBox1->Text + "')");
			MySqlWork::ExecuteQuery("INSERT INTO studgroup(teacher_login) VALUES('" + textBox1->Text + "')");
			MessageBox::Show("Пользователь зарегистрирован");
			//this->Close();
		}
		else
		{
			MessageBox::Show("Данное имя пользователя занято");
		}
	}
	else
	{
		MessageBox::Show("Поля не должны быть пустыми");
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}
