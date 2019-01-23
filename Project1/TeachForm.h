#pragma once
#include "MySqlWork.h"
#include "Timetable.h"

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
	/// Сводка для TeachForm
	/// </summary>
	public ref class TeachForm : public System::Windows::Forms::Form
	{
	public:
		TeachForm(String^ log)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->log1 = log;
		}
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button1;


	public:
		String^ log1;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~TeachForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ connectionInfo = "datasource=localhost;port=3306;username=root;password=52423242r;database=cursach";
	private: Timetable^ newTTable;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ListBox^  listBox4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 25);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(185, 186);
			this->listBox1->TabIndex = 3;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &TeachForm::listBox1_SelectedIndexChanged);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(200, 25);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(45, 186);
			this->listBox2->TabIndex = 4;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &TeachForm::listBox2_SelectedIndexChanged);
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(248, 25);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(236, 186);
			this->listBox3->TabIndex = 5;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &TeachForm::listBox3_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 243);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(266, 20);
			this->textBox1->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 227);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Добавить баллы";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 269);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Отправить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &TeachForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(456, 227);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(105, 60);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Сюдым";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &TeachForm::button4_Click);
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(487, 25);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(74, 186);
			this->listBox4->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 13);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Фамилия Имя Отчество студента";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(198, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Курс";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(245, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Баллы";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(484, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Ритм";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(456, 267);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(36, 20);
			this->textBox4->TabIndex = 24;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(345, 267);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(38, 20);
			this->textBox5->TabIndex = 25;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(345, 227);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 60);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Расписание";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TeachForm::button1_Click_1);
			// 
			// TeachForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(573, 303);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox4);
			this->Name = L"TeachForm";
			this->Text = L"TeachForm";
			this->Load += gcnew System::EventHandler(this, &TeachForm::TeachForm_Load);
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

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void TeachForm_Load(System::Object^  sender, System::EventArgs^  e) {
		textBox4->Hide();
		textBox5->Hide();
		String^ logs = log1;
		MySqlDataReader^ dataReader1 = ExecuteQuery("SELECT lessons FROM teacher WHERE login = '" + logs + "'");
		if (dataReader1 != nullptr)
		{
			while (dataReader1->Read())
			{
				textBox5->Text = (dataReader1->GetString(0));
			}
		}
		listBox1->Items->Clear();			listBox2->Items->Clear();			listBox3->Items->Clear();			listBox4->Items->Clear();
		MySqlDataReader^ dataReader = ExecuteQuery("SELECT name, class, marks from marks WHERE lesson = '" + textBox5->Text + "'");
		if (dataReader != nullptr)
		{
			while (dataReader->Read())
			{
				listBox1->Items->Add(dataReader->GetString(0));
				listBox2->Items->Add(dataReader->GetString(1));
				listBox3->Items->Add(dataReader->GetString(2));
				System::String^ a = dataReader->GetString(2);
				double ritm = 0;
				for (int i = 0; i < a->Length; i++)
				{
					ritm += (int)a[i] - 48;
				}
				ritm = ritm * 1.125;
				listBox4->Items->Add(ritm);
			}
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
public: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
public: System::Void listBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (listBox3->SelectedIndex >= 0) {
		textBox1->Text = listBox3->SelectedItem->ToString();
	}
	/*int curItem33 = listBox3->SelectedIndex;
	listBox2->SetSelected(curItem33, true);
	listBox1->SetSelected(curItem33, true);*/
}
public: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ curItem3 = listBox3->SelectedItem->ToString();
	String^ curItem2 = listBox2->SelectedItem->ToString();
	String^ curItem = listBox1->SelectedItem->ToString();
		MySqlDataReader^ dataReader = ExecuteQuery("SELECT name, class, marks from marks WHERE class='" + curItem2 + "' AND name='" + curItem + "' AND lesson='" + textBox5->Text + "'");
		if (dataReader != nullptr)
		{
			while (dataReader->Read())
			{
				textBox1->Text = (dataReader->GetString(2));
			}
		}
		else
		{
			MessageBox::Show("Такого студента в этой группе нет!");
		}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (listBox3->SelectedIndex >= 0)
	{
		System::String^ markss = textBox1->Text;
		for (int i = 0; i < markss->Length; i++)
		{
			int BC = (int)markss[i] - 48;
			if (BC > 9)
			{
				MessageBox::Show("Оценка не может быть больше 5!");
				return;
			}
			if (BC < 1)
			{
				MessageBox::Show("Оценка не может быть меньше 1!");
				return;
			}
		}
		String^ curItem3 = listBox3->SelectedItem->ToString();
		int curItem33 = listBox3->SelectedIndex;
		String^ curItem2 = listBox2->Items[curItem33]->ToString();
		String^ curItem = listBox1->Items[curItem33]->ToString();
		if (textBox1->Text != "")
		{
			ExecuteQuery("UPDATE marks SET marks = '" + textBox1->Text + "' WHERE name = '" + curItem + "' AND lesson = '" + textBox5->Text + "' AND class = '" + curItem2 + "'");
			//listBox1->ClearSelected();
			MessageBox::Show("Сохранение прошло успешно");
			//this->Close();
		}
		else
		{
			MessageBox::Show("Все поля обязательны для заполения");
		}
	}
	else
	{
		MessageBox::Show("Выберите строку с оценками");
	}
	listBox1->Items->Clear();			listBox2->Items->Clear();			listBox3->Items->Clear();			listBox4->Items->Clear();
	MySqlDataReader^ dataReader = ExecuteQuery("SELECT name, class, marks from marks WHERE lesson = '" + textBox5->Text + "'");
	if (dataReader != nullptr)
	{
		while (dataReader->Read())
		{
			listBox1->Items->Add(dataReader->GetString(0));
			listBox2->Items->Add(dataReader->GetString(1));
			listBox3->Items->Add(dataReader->GetString(2));
			System::String^ a = dataReader->GetString(2);
			double ritm = 0;
			for (int i = 0; i < a->Length; i++)
			{
				ritm += (int)a[i] - 48;
			}
			ritm = ritm * 1.125;
			listBox4->Items->Add(ritm);
		}
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	newTTable = gcnew Timetable(this->log1);
	newTTable->Show();
}
};
}
