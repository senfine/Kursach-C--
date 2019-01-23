#pragma once
#include "MySqlWork.h"
#include <time.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace MySql::Data::MySqlClient;
	using namespace MySqlWorkNameSpace;

	/// <summary>
	/// Сводка для Timetable
	/// </summary>
	public ref class Timetable : public System::Windows::Forms::Form
	{
	public:
		Timetable(String^ log)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->log1 = log;
		}
	public:
		String^ log1;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Timetable()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ connectionInfo = "datasource=localhost;port=3306;username=root;password=52423242r;database=cursach";
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Понедельник", L"Вторник", L"Среда", L"Четверг",
					L"Пятница"
			});
			this->comboBox1->Location = System::Drawing::Point(180, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(265, 21);
			this->comboBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Расписание на";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 83);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(41, 121);
			this->listBox1->TabIndex = 2;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(59, 83);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(48, 121);
			this->listBox2->TabIndex = 3;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(113, 83);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(332, 121);
			this->listBox3->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"№";
			this->label2->Click += gcnew System::EventHandler(this, &Timetable::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(56, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Начало";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(110, 67);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Предмет";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(59, 37);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(386, 21);
			this->comboBox2->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Группа";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 210);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 47);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Показать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Timetable::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(312, 210);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 47);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Сюдым";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Timetable::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(113, 184);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(41, 20);
			this->textBox2->TabIndex = 13;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(160, 210);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(146, 47);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Добавить / Удалить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Timetable::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 210);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(142, 47);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Добавить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Timetable::button4_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(12, 148);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(433, 21);
			this->comboBox3->TabIndex = 16;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(12, 96);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(433, 21);
			this->comboBox4->TabIndex = 17;
			this->comboBox4->Click += gcnew System::EventHandler(this, &Timetable::comboBox4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(14, 83);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(263, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Выберите предмет (при удалении не обязательно)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(14, 132);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Выберите № пары";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(180, 210);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(89, 47);
			this->button5->TabIndex = 20;
			this->button5->Text = L"Удалить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Timetable::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(312, 210);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(133, 47);
			this->button6->TabIndex = 21;
			this->button6->Text = L"Сюдым";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Timetable::button6_Click);
			// 
			// Timetable
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(457, 269);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button5);
			this->Name = L"Timetable";
			this->Text = L"Timetable";
			this->Load += gcnew System::EventHandler(this, &Timetable::Timetable_Load);
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
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->Text == "Понедельник") { textBox2->Text = "Monday"; }
	else if (comboBox1->Text == "Вторник") { textBox2->Text = "Tuesday"; }
	else if (comboBox1->Text == "Среда") { textBox2->Text = "Wednesday"; }
	else if (comboBox1->Text == "Четверг") { textBox2->Text = "Thursday"; }
	else if (comboBox1->Text == "Пятница") { textBox2->Text = "Friday"; }
	listBox3->Items->Clear();
	if (comboBox2->Text != "")
	{
		MySqlDataReader^ dataReader2 = ExecuteQuery("SELECT lesson from timetable WHERE day = '" + textBox2->Text + "' AND class = '" + comboBox2->Text + "' ORDER BY number ASC");
		if (dataReader2 != nullptr)
		{
			while (dataReader2->Read())
			{
				listBox3->Items->Add(dataReader2->GetString(0));
			}
			//listBox3->Items->Add(listBox3->Items->Count);
			//int ab = listBox3->Items->Count;
		}
	}
	else
	{
		MessageBox::Show("Вы не выбрали группу");
	}
}
private: System::Void Timetable_Load(System::Object^  sender, System::EventArgs^  e) {
	if (log1 != "admin")
	{
		button3->Hide();
	}
	textBox2->Hide();
	button4->Hide();
	button6->Hide();
	button5->Hide();
	label6->Hide();
	label7->Hide();
	comboBox3->Hide();
	comboBox4->Hide();
	time_t timeObj = time(nullptr);
	tm aTime;
	localtime_s(&aTime, &timeObj);
	int dayz = aTime.tm_wday;
	if (dayz == 1) { comboBox1->Text = "Понедельник";	textBox2->Text = "Monday"; }
	else if (dayz == 2) { comboBox1->Text = "Вторник";	textBox2->Text = "Tuesday"; }
	else if (dayz == 3) { comboBox1->Text = "Среда";	textBox2->Text = "Wednesday"; }
	else if (dayz == 4) { comboBox1->Text = "Четверг";	textBox2->Text = "Thursday"; }
	else if (dayz == 5) { comboBox1->Text = "Пятница";	textBox2->Text = "Friday"; }
	else if ((dayz == 0) || (dayz == 6)) { comboBox1->Text = "Понедельник";	textBox2->Text = "Monday"; }

	MySqlDataReader^ dataReader1 = ExecuteQuery("SELECT number, time from raspisanie");
	if (dataReader1 != nullptr)
	{
		while (dataReader1->Read())
		{
			listBox1->Items->Add(dataReader1->GetString(0));
			listBox2->Items->Add(dataReader1->GetString(1));
		}
	}

	MySqlDataReader^ dataReader4 = ExecuteQuery("SELECT number FROM raspisanie");
	if (dataReader4 != nullptr)
	{
		while (dataReader4->Read())
		{
			comboBox3->Items->Add(dataReader4->GetString(0));
		}
	}

	MySqlDataReader^ dataReader = ExecuteQuery("SELECT class from groups");
	if (dataReader != nullptr)
	{
		while (dataReader->Read())
		{
			comboBox2->Items->Add(dataReader->GetString(0));
		}
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	listBox1->Hide();
	listBox2->Hide();
	listBox3->Hide();
	label2->Hide();
	label3->Hide();
	label4->Hide();
	button1->Hide();
	button2->Hide();
	button3->Hide();
	button6->Show();
	button5->Show();
	button4->Show();
	label6->Show();
	label7->Show();
	comboBox3->Show();
	comboBox4->Show();
}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (comboBox1->Text != "" && comboBox2->Text != "" && comboBox3->Text != "" && comboBox4->Text != "")
		{
			MySqlDataReader^ dataReader = MySqlWork::ExecuteQuery("SELECT * FROM timetable WHERE day='" + textBox2->Text + "' AND class='" + comboBox2->Text + "' AND number='" + comboBox3->Text + "'");
			if (dataReader == nullptr) 
			{
				MySqlWork::ExecuteQuery("INSERT INTO timetable(day,class,number,lesson) VALUES('" + textBox2->Text + "', '" + comboBox2->Text + "', '" + comboBox3->Text + "', '" + comboBox4->Text + "')");
				MessageBox::Show("Занятие успешно добавлено");
			}
			else
			{
				MySqlWork::ExecuteQuery("UPDATE timetable SET lesson='" + comboBox4->Text + "' WHERE day='" + textBox2->Text + "' AND class='" + comboBox2->Text + "' AND number='" + comboBox3->Text + "'");
				MessageBox::Show("Занятие успешно добавлено");
			}
		}
		else
		{
			MessageBox::Show("Поля не должны быть пустыми");
		}
	}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	button4->Hide();
	button6->Hide();
	button5->Hide();
	label6->Hide();
	label7->Hide();
	comboBox3->Hide();
	comboBox4->Hide();
	listBox1->Show();
	button2->Show();
	listBox2->Show();
	listBox3->Show();
	label2->Show();
	label3->Show();
	label4->Show();
	button1->Show();
	button3->Show();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->Text != "" && comboBox2->Text != "" && comboBox3->Text != "")
	{
		MySqlDataReader^ dataReader = MySqlWork::ExecuteQuery("SELECT * FROM timetable WHERE day='" + textBox2->Text + "' AND class='" + comboBox2->Text + "' AND number='" + comboBox3->Text + "'");
		if (dataReader != nullptr)
		{
			System::String^ a = comboBox3->Text;
			int sred = 0;
			for (int i = 0; i < a->Length; i++)
			{
				sred += (int)a[i] - 48;
			}
			sred = sred / a->Length;
			if (sred >= listBox3->Items->Count)
			{
				
				MySqlWork::ExecuteQuery("DELETE FROM timetable WHERE day='" + textBox2->Text + "' AND class='" + comboBox2->Text + "' AND number='" + comboBox3->Text + "'");
				MessageBox::Show("Занятие успешно удалено");
			}
			else if (sred < listBox3->Items->Count)
			{
				MySqlWork::ExecuteQuery("UPDATE timetable SET lesson='pause' WHERE day='" + textBox2->Text + "' AND class='" + comboBox2->Text + "' AND number='" + comboBox3->Text + "'");
				MessageBox::Show("Занятие успешно удалено");
			}
		}
		else
		{
			MessageBox::Show("В это время у этой группы нет занятия");
		}
	}
	else
	{
		MessageBox::Show("Поля не должны быть пустыми");
	}
}
private: System::Void comboBox4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox2->Text != "") {
		comboBox4->Items->Clear();
		MySqlDataReader^ dataReader3 = ExecuteQuery("SELECT lessons FROM class WHERE class='" + comboBox2->Text + "'");
		if (dataReader3 != nullptr)
		{
			while (dataReader3->Read())
			{
				comboBox4->Items->Add(dataReader3->GetString(0));
			}
		}
	}
	else
	{
		MessageBox::Show("Вы не выбрали группу");
	}
}
};
}
