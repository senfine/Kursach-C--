#pragma once
#include "MySqlWork.h"
#include "adduser.h"
#include "deluser.h"
#include "addteacher.h"
#include "delteacher.h"
#include "addclass.h"
#include "addlesson.h"
#include "Timetable.h"
#include "lessonadd.h"

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
	/// Сводка для DirectorForm
	/// </summary>
	public ref class DirectorForm : public System::Windows::Forms::Form
	{
	public:
		DirectorForm(String^ log)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->log1 = log;
		}
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	public:
	public:
		String^ log1;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~DirectorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: adduser^ newAdUser;
	private: deluser^ newDelUser;
	private: addteacher^ newAdTeacher;
	private: delteacher^ newDelTeacher;
	private: addclass^ newAdClass;
	private: Timetable^ newTTable;
	private: addlesson^ newAddlesson;
	private: lessonadd^ newLessonAdd;
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Расписание занятий";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DirectorForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(179, 9);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 60);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Добавить специальность и курс";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DirectorForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(22, 72);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 60);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Добавить студента";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &DirectorForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(179, 72);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(151, 60);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Добавить преподавателя";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &DirectorForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(22, 136);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 60);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Удалить студента";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &DirectorForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(179, 136);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(151, 60);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Изменить преподавателя";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &DirectorForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(335, 136);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(150, 60);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Сюдым";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &DirectorForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(23, 202);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(461, 65);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Сюдым-Сюдым";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &DirectorForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(335, 9);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(149, 60);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Добавить предмет";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &DirectorForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(335, 72);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(149, 60);
			this->button10->TabIndex = 9;
			this->button10->Text = L"Добавить предмет для курса";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &DirectorForm::button10_Click);
			// 
			// DirectorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 280);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"DirectorForm";
			this->Text = L"DirectorForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	newAdUser = gcnew adduser();
	newAdUser->Show();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	newAdClass = gcnew addclass();
	newAdClass->Show();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	newDelUser = gcnew deluser();
	newDelUser->Show();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	newAdTeacher = gcnew addteacher();
	newAdTeacher->Show();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	newDelTeacher = gcnew delteacher();
	newDelTeacher->Show();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	newTTable = gcnew Timetable(this->log1);
	newTTable->Show();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	newAddlesson = gcnew addlesson();
	newAddlesson->Show();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	newLessonAdd = gcnew lessonadd();
	newLessonAdd->Show();
}
};
}
