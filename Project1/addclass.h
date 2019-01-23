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
	/// Сводка для addclass
	/// </summary>
	public ref class addclass : public System::Windows::Forms::Form
	{
	public:
		addclass(void)
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
		~addclass()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ connectionInfo = "datasource=localhost;port=3306;username=root;password=52423242r;database=cursach";
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox12;
	private: System::Windows::Forms::ComboBox^  comboBox11;
	private: System::Windows::Forms::ComboBox^  comboBox10;
	private: System::Windows::Forms::ComboBox^  comboBox9;
	private: System::Windows::Forms::ComboBox^  comboBox8;
	private: System::Windows::Forms::ComboBox^  comboBox7;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox13;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 224);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(373, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Готово";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &addclass::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Выберите специальность и курс";
			// 
			// comboBox12
			// 
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Location = System::Drawing::Point(265, 156);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(120, 21);
			this->comboBox12->TabIndex = 33;
			// 
			// comboBox11
			// 
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Location = System::Drawing::Point(265, 129);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(120, 21);
			this->comboBox11->TabIndex = 32;
			// 
			// comboBox10
			// 
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Location = System::Drawing::Point(265, 102);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(120, 21);
			this->comboBox10->TabIndex = 31;
			// 
			// comboBox9
			// 
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Location = System::Drawing::Point(139, 156);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(120, 21);
			this->comboBox9->TabIndex = 30;
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(139, 183);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(120, 21);
			this->comboBox8->TabIndex = 29;
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(139, 129);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(120, 21);
			this->comboBox7->TabIndex = 28;
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(139, 102);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(120, 21);
			this->comboBox6->TabIndex = 27;
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(12, 183);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(120, 21);
			this->comboBox5->TabIndex = 26;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(12, 156);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(120, 21);
			this->comboBox4->TabIndex = 25;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(12, 129);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(120, 21);
			this->comboBox3->TabIndex = 24;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(12, 102);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(120, 21);
			this->comboBox2->TabIndex = 23;
			this->comboBox2->Click += gcnew System::EventHandler(this, &addclass::comboBox2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 13);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Выберите предметы";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(265, 183);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 23);
			this->button2->TabIndex = 35;
			this->button2->Text = L"Сюдым";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &addclass::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"BIS", L"PS", L"IVT" });
			this->comboBox1->Location = System::Drawing::Point(12, 25);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(374, 21);
			this->comboBox1->TabIndex = 36;
			// 
			// comboBox13
			// 
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"11", L"12", L"21", L"22", L"31", L"32", L"41",
					L"42", L"51", L"52"
			});
			this->comboBox13->Location = System::Drawing::Point(12, 52);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(373, 21);
			this->comboBox13->TabIndex = 37;
			this->comboBox13->SelectedIndexChanged += gcnew System::EventHandler(this, &addclass::comboBox13_SelectedIndexChanged);
			// 
			// addclass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(400, 282);
			this->Controls->Add(this->comboBox13);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox12);
			this->Controls->Add(this->comboBox11);
			this->Controls->Add(this->comboBox10);
			this->Controls->Add(this->comboBox9);
			this->Controls->Add(this->comboBox8);
			this->Controls->Add(this->comboBox7);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"addclass";
			this->Text = L"addclass";
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
		if (comboBox1->Text != "" && comboBox13->Text != "")
		{
			MySqlDataReader^ dataReader = MySqlWork::ExecuteQuery("SELECT * FROM groups WHERE class='" + comboBox1->Text + "" + comboBox13->Text + "'");
			if (dataReader == nullptr) {
				MySqlWork::ExecuteQuery("INSERT INTO groups(class) VALUES('" + comboBox1->Text + "" + comboBox13->Text + "')");
				if (comboBox2->Text != "")
				{
					MySqlWork::ExecuteQuery("INSERT INTO class(class,lessons) VALUES('" + comboBox1->Text + "" + comboBox13->Text + "', '" + comboBox2->Text + "')");
				}
				if (comboBox3->Text != "")
				{
					MySqlWork::ExecuteQuery("INSERT INTO class(class,lessons) VALUES('" + comboBox1->Text + "" + comboBox13->Text + "', '" + comboBox3->Text + "')");
				}
				if (comboBox4->Text != "")
				{
					MySqlWork::ExecuteQuery("INSERT INTO class(class,lessons) VALUES('" + comboBox1->Text + "" + comboBox13->Text + "', '" + comboBox4->Text + "')");
				}
				if (comboBox5->Text != "")
				{
					MySqlWork::ExecuteQuery("INSERT INTO class(class,lessons) VALUES('" + comboBox1->Text + "" + comboBox13->Text + "', '" + comboBox5->Text + "')");
				}
				if (comboBox6->Text != "")
				{
					MySqlWork::ExecuteQuery("INSERT INTO class(class,lessons) VALUES('" + comboBox1->Text + "" + comboBox13->Text + "', '" + comboBox6->Text + "')");
				}
				if (comboBox7->Text != "")
				{
					MySqlWork::ExecuteQuery("INSERT INTO class(class,lessons) VALUES('" + comboBox1->Text + "" + comboBox13->Text + "', '" + comboBox7->Text + "')");
				}
				if (comboBox8->Text != "")
				{
					MySqlWork::ExecuteQuery("INSERT INTO class(class,lessons) VALUES('" + comboBox1->Text + "" + comboBox13->Text + "', '" + comboBox8->Text + "')");
				}
				if (comboBox9->Text != "")
				{
					MySqlWork::ExecuteQuery("INSERT INTO class(class,lessons) VALUES('" + comboBox1->Text + "" + comboBox13->Text + "', '" + comboBox9->Text + "')");
				}
				if (comboBox10->Text != "")
				{
					MySqlWork::ExecuteQuery("INSERT INTO class(class,lessons) VALUES('" + comboBox1->Text + "" + comboBox13->Text + "', '" + comboBox10->Text + "')");
				}
				if (comboBox11->Text != "")
				{
					MySqlWork::ExecuteQuery("INSERT INTO class(class,lessons) VALUES('" + comboBox1->Text + "" + comboBox13->Text + "', '" + comboBox11->Text + "')");
				}
				if (comboBox12->Text != "")
				{
					MySqlWork::ExecuteQuery("INSERT INTO class(class,lessons) VALUES('" + comboBox1->Text + "" + comboBox13->Text + "', '" + comboBox12->Text + "')");
				}
				MessageBox::Show("Группа создана");
				//this->Close();
			}
			else
			{
				MessageBox::Show("Такая группа уже существует");
			}
		}
		else
		{
			MessageBox::Show("Поля не должны быть пустыми");
		}
	}
	private: System::Void comboBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		comboBox2->Items->Clear();	comboBox3->Items->Clear();	comboBox4->Items->Clear();	comboBox5->Items->Clear();	comboBox6->Items->Clear();	comboBox7->Items->Clear();	comboBox8->Items->Clear();	comboBox9->Items->Clear();	comboBox10->Items->Clear();	comboBox11->Items->Clear();	comboBox12->Items->Clear();
		MySqlDataReader^ dataReader1 = ExecuteQuery("SELECT lesson_name from lessons");
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
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void comboBox13_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
