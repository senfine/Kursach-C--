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
	/// Сводка для lessonadd
	/// </summary>
	public ref class lessonadd : public System::Windows::Forms::Form
	{
	public:
		lessonadd(void)
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
		~lessonadd()
		{
			if (components)
			{
				delete components;
			}
		}
			private: String^ connectionInfo = "datasource=localhost;port=3306;username=root;password=52423242r;database=cursach";
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 119);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &lessonadd::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(230, 119);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Сюдым";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &lessonadd::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(12, 42);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(345, 21);
			this->comboBox1->TabIndex = 2;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(12, 92);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(345, 21);
			this->comboBox2->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Выберите специальность";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Выберите предмет";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 119);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(124, 43);
			this->listBox1->TabIndex = 6;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(230, 124);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(127, 43);
			this->listBox2->TabIndex = 7;
			// 
			// lessonadd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(369, 179);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->listBox2);
			this->Name = L"lessonadd";
			this->Text = L"lessonadd";
			this->Load += gcnew System::EventHandler(this, &lessonadd::lessonadd_Load);
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

	private: System::Void lessonadd_Load(System::Object^  sender, System::EventArgs^  e) {
		listBox1->Hide();
		listBox2->Hide();
		MySqlDataReader^ dataReader = ExecuteQuery("SELECT class from groups");
		if (dataReader != nullptr)
		{
			while (dataReader->Read())
			{
				comboBox1->Items->Add(dataReader->GetString(0));
			}
		}
		MySqlDataReader^ dataReader1 = ExecuteQuery("SELECT lesson_name from lessons");
		if (dataReader1 != nullptr)
		{
			while (dataReader1->Read())
			{
				comboBox2->Items->Add(dataReader1->GetString(0));
			}
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->Text != "" && comboBox2->Text != "")
	{
		MySqlDataReader^ dataReader2 = ExecuteQuery("SELECT login, name from studenty WHERE class = '" + comboBox1->Text + "'");
		if (dataReader2 != nullptr)
		{
			while (dataReader2->Read())
			{
				listBox1->Items->Add(dataReader2->GetString(0));
				listBox2->Items->Add(dataReader2->GetString(1));
			}
		}
		MySqlDataReader^ dataReader = MySqlWork::ExecuteQuery("SELECT * FROM class WHERE class='" + comboBox1->Text + "' AND lessons='" + comboBox2->Text + "'");
		//MySqlDataReader^ dataReader1 = ExecuteQuery("SELECT lessons from class WHERE class = '" + comboBox1->Text + "'");
			if (dataReader == nullptr) {
			MySqlWork::ExecuteQuery("INSERT INTO class(class,lessons) VALUES('" + comboBox1->Text + "','" + comboBox2->Text + "')");
			for (int i = 0; i < listBox1->Items->Count; i++)
			{
				MySqlWork::ExecuteQuery("INSERT INTO marks(login,class,lesson,name) VALUES('" + listBox1->Items[i] + "', '" + comboBox1->Text + "', '" + comboBox2->Text + "','" + listBox2->Items[i] + "')");
			}
			MessageBox::Show("Предмет добавлен");
			//this->Close();
		}
		else
		{
			MessageBox::Show("Такой предмет уже есть у этой группы");
		}
	}
	else
	{
		MessageBox::Show("Поля не должны быть пустыми");
	}
}
};
}
