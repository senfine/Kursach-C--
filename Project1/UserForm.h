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
	/// Сводка для UserForm
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	public:
		UserForm(String^ log)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->log1 = log;
		}
	private: System::Windows::Forms::Label^  label5;
	public:
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ListBox^  listBox4;
	private: System::Windows::Forms::ListBox^  listBox5;
	private: System::Windows::Forms::ListBox^  listBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
			 String^ log1;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~UserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ connectionInfo = "datasource=localhost;port=3306;username=root;password=52423242r;database=cursach";
	public:	 System::String^ log;
	protected:
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(11, 61);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 95);
			this->listBox1->TabIndex = 5;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(137, 61);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(405, 95);
			this->listBox2->TabIndex = 6;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(548, 61);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(53, 95);
			this->listBox3->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(225, 401);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(376, 56);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UserForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Предмет";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(136, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Баллы";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(545, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Ритм";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label1->Location = System::Drawing::Point(254, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 25);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Мои баллы";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label5->Location = System::Drawing::Point(6, 172);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(162, 25);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Расписание на";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Понедельник", L"Вторник", L"Среда", L"Четверг",
					L"Пятница"
			});
			this->comboBox1->Location = System::Drawing::Point(174, 176);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 15;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(11, 233);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(53, 160);
			this->listBox4->TabIndex = 16;
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->Location = System::Drawing::Point(70, 233);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(149, 160);
			this->listBox5->TabIndex = 17;
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->Location = System::Drawing::Point(225, 233);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(376, 160);
			this->listBox6->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 217);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"№";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(70, 217);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Начало";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(224, 217);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Предмет";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(489, 401);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(42, 20);
			this->textBox1->TabIndex = 22;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(551, 422);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(50, 20);
			this->textBox2->TabIndex = 23;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(11, 401);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(208, 56);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Показать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UserForm::button1_Click_1);
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(616, 469);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->listBox6);
			this->Controls->Add(this->listBox5);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Name = L"UserForm";
			this->Text = L"UserForm";
			this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
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

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void UserForm_Load(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Hide();
	textBox2->Hide();
	String^ logs = log1;

	listBox1->Items->Clear();	listBox2->Items->Clear();	listBox3->Items->Clear();
	MySqlDataReader^ dataReader = ExecuteQuery("SELECT lesson, marks, class from marks WHERE login = '" + logs + "'");
	if (dataReader != nullptr)
	{
		while (dataReader->Read())
		{
			listBox1->Items->Add(dataReader->GetString(0));
			listBox2->Items->Add(dataReader->GetString(1));
			System::String^ a = dataReader->GetString(1);
			double ritm = 0;
			for (int i = 0; i < a->Length; i++)
			{
				ritm += (int)a[i] - 48;
			}
			ritm = ritm * 1.125;
			listBox3->Items->Add(ritm);
			textBox1->Text = dataReader->GetString(2);
		}
	}

	MySqlDataReader^ dataReader1 = ExecuteQuery("SELECT number, time from raspisanie");
	if (dataReader1 != nullptr)
	{
		while (dataReader1->Read())
		{
			listBox4->Items->Add(dataReader1->GetString(0));
			listBox5->Items->Add(dataReader1->GetString(1));
		}
	}

	time_t timeObj = time(nullptr);
	tm aTime;
	localtime_s(&aTime, &timeObj);
	int dayz = aTime.tm_wday;
	if (dayz == 1) { comboBox1->Text = "Понедельник";	textBox2->Text = "Monday";	}
	else if (dayz == 2) {	comboBox1->Text = "Вторник";	textBox2->Text = "Tuesday";	}
	else if (dayz == 3) {	comboBox1->Text = "Среда";	textBox2->Text = "Wednesday";	}
	else if (dayz == 4) { comboBox1->Text = "Четверг";	textBox2->Text = "Thursday";	}
	else if (dayz == 5) {	comboBox1->Text = "Пятница";	textBox2->Text = "Friday";	}
	else if ((dayz == 0) || (dayz == 6)) {		comboBox1->Text = "Понедельник";	textBox2->Text = "Monday";	}

	MySqlDataReader^ dataReader2 = ExecuteQuery("SELECT lesson from timetable WHERE day = '" + textBox2->Text + "' AND class = '" + textBox1->Text + "'");
	if (dataReader2 != nullptr)
	{
		while (dataReader2->Read())
		{
			listBox6->Items->Add(dataReader2->GetString(0));
		}
	}
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->Text == "Понедельник") {	textBox2->Text = "Monday"; }
	else if (comboBox1->Text == "Вторник") {	textBox2->Text = "Tuesday"; }
	else if (comboBox1->Text == "Среда") {	textBox2->Text = "Wednesday"; }
	else if (comboBox1->Text == "Четверг") {	textBox2->Text = "Thursday"; }
	else if (comboBox1->Text == "Пятница") {	textBox2->Text = "Friday"; }
	listBox6->Items->Clear();
	MySqlDataReader^ dataReader2 = ExecuteQuery("SELECT lesson from timetable WHERE day = '" + textBox2->Text + "' AND class = '" + textBox1->Text + "'");
	if (dataReader2 != nullptr)
	{
		while (dataReader2->Read())
		{
			listBox6->Items->Add(dataReader2->GetString(0));
		}
	}
}
};
}
