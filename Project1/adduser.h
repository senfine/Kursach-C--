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
	/// Сводка для adduser
	/// </summary>
	public ref class adduser : public System::Windows::Forms::Form
	{
	public:
		adduser(void)
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
		~adduser()
		{
			if (components)
			{
				delete components;
			}
		}

	private: String^ connectionInfo = "datasource=localhost;port=3306;username=root;password=52423242r;database=cursach";
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::TextBox^  textBox4;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;













	private: System::Windows::Forms::ListBox^  listBox1;


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
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(409, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(409, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 143);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(409, 20);
			this->textBox4->TabIndex = 3;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(12, 103);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(409, 21);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &adduser::comboBox1_SelectedIndexChanged);
			this->comboBox1->Click += gcnew System::EventHandler(this, &adduser::comboBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Введите логин";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Введите пароль";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Выберите группу";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 127);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Введите имя";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 169);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 59);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &adduser::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(294, 169);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 59);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Сюдым";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &adduser::button2_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(294, 25);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(127, 134);
			this->listBox1->TabIndex = 25;
			// 
			// adduser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(438, 243);
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
			this->Controls->Add(this->listBox1);
			this->Name = L"adduser";
			this->Text = L"adduser";
			this->Load += gcnew System::EventHandler(this, &adduser::adduser_Load);
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

private: System::Void comboBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void adduser_Load(System::Object^  sender, System::EventArgs^  e) {
	listBox1->Hide();
	MySqlDataReader^ dataReader = ExecuteQuery("SELECT class from groups");
	if (dataReader != nullptr)
	{
		while (dataReader->Read())
		{
			comboBox1->Items->Add(dataReader->GetString(0));
		}
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void comboBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	/*comboBox2->Items->Clear();	comboBox3->Items->Clear();	comboBox4->Items->Clear();	comboBox5->Items->Clear();	comboBox6->Items->Clear();	comboBox7->Items->Clear();	comboBox8->Items->Clear();	comboBox9->Items->Clear();	comboBox10->Items->Clear();	comboBox11->Items->Clear();	comboBox12->Items->Clear();
	MySqlDataReader^ dataReader1 = ExecuteQuery("SELECT lessons from class WHERE class = '" + comboBox1->Text + "'");
	if (dataReader1 != nullptr)
	{
		while (dataReader1->Read())
		{
			comboBox2->Items->Add(dataReader1->GetString(0));
			comboBox3->Items->Add(dataReader1->GetString(0));
			comboBox4->Items->Add(dataReader1->GetString(0));
			comboBox5->Items->Add(dataReader1->GetString(0));
			comboBox6->Items->Add(dataReader1->GetString(0));
			comboBox7->Items->Add(dataReader1->GetString(0));
			comboBox8->Items->Add(dataReader1->GetString(0));
			comboBox9->Items->Add(dataReader1->GetString(0));
			comboBox10->Items->Add(dataReader1->GetString(0));
			comboBox11->Items->Add(dataReader1->GetString(0));
			comboBox12->Items->Add(dataReader1->GetString(0));
		}
	}*/
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text != "" && textBox2->Text != "" && textBox4->Text != "" && comboBox1->Text != "")
	{
		MySqlDataReader^ dataReader = MySqlWork::ExecuteQuery("SELECT * FROM users INNER JOIN studenty ON users.login=studenty.login WHERE users.login='" + textBox1->Text + "'");
		MySqlDataReader^ dataReader1 = ExecuteQuery("SELECT lessons from class WHERE class = '" + comboBox1->Text + "'");
		if (dataReader == nullptr) {
			MySqlWork::ExecuteQuery("INSERT INTO users(login,password,role) VALUES('" + textBox1->Text + "','" + MySqlWork::GetHash(textBox2->Text) + "','student')");
			MySqlWork::ExecuteQuery("INSERT INTO studenty(login,name,class) VALUES('" + textBox1->Text + "','" + textBox4->Text + "', '" + comboBox1->Text + "')");
			for (int i=0; i<listBox1->Items->Count; i++)
			{
				MySqlWork::ExecuteQuery("INSERT INTO marks(login,class,lesson,name) VALUES('" + textBox1->Text + "', '" + comboBox1->Text + "', '" + listBox1->Items[i] + "','" + textBox4->Text + "')");
			}
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
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	listBox1->Items->Clear();
	MySqlDataReader^ dataReader1 = ExecuteQuery("SELECT lessons from class WHERE class = '" + comboBox1->Text + "'");
	if (dataReader1 != nullptr)
	{
		while (dataReader1->Read())
		{
			listBox1->Items->Add(dataReader1->GetString(0));
		}
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
