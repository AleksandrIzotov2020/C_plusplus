#pragma once

namespace Proj1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для objectForm
	/// </summary>
	public ref class objectForm : public System::Windows::Forms::Form
	{
	public:
		objectForm(void)
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
		~objectForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ Speed1;
	private: System::Windows::Forms::TextBox^ Speed2;
	private: System::Windows::Forms::TextBox^ Course3;
	private: System::Windows::Forms::TextBox^ Course4;
	private: System::Windows::Forms::TextBox^ Time5;
	private: System::Windows::Forms::TextBox^ Time6;






	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ Acceleration;
	private: System::Windows::Forms::TextBox^ Ampl_course;
	private: System::Windows::Forms::TextBox^ Period_course;



	private: System::Windows::Forms::TextBox^ Dist_to_obj;

	private: System::Windows::Forms::TextBox^ Bearing;
	private: System::Windows::Forms::TextBox^ Err_speed;
	private: System::Windows::Forms::CheckBox^ CheckZigzag;



	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ обПриложенииToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ главнаяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ таблицаНаблюдателяToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(objectForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Speed1 = (gcnew System::Windows::Forms::TextBox());
			this->Speed2 = (gcnew System::Windows::Forms::TextBox());
			this->Course3 = (gcnew System::Windows::Forms::TextBox());
			this->Course4 = (gcnew System::Windows::Forms::TextBox());
			this->Time5 = (gcnew System::Windows::Forms::TextBox());
			this->Time6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->Acceleration = (gcnew System::Windows::Forms::TextBox());
			this->Ampl_course = (gcnew System::Windows::Forms::TextBox());
			this->Period_course = (gcnew System::Windows::Forms::TextBox());
			this->Dist_to_obj = (gcnew System::Windows::Forms::TextBox());
			this->Bearing = (gcnew System::Windows::Forms::TextBox());
			this->Err_speed = (gcnew System::Windows::Forms::TextBox());
			this->CheckZigzag = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->главнаяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->таблицаНаблюдателяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обПриложенииToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(215, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Пеленг на объкет (град)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(274, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Дистанция до объекта (метры)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(450, 97);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 23);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Галс 2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(350, 97);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 23);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Галс 1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(227, 22);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Скорость объекта (м/сек)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(177, 22);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Курс объекта (град)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 179);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(161, 22);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Время галса (сек)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(12, 210);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(334, 22);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Скорость поворота объекта (град/сек)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(12, 238);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(256, 22);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Ускорение объекта (м/сек^2)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(12, 266);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(298, 22);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Амплитуда рысканья курса (град)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(12, 294);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(257, 22);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Период рысканья курса (сек)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(12, 322);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(317, 22);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Ошибка удержания скорости(м/сек)";
			// 
			// Speed1
			// 
			this->Speed1->Location = System::Drawing::Point(354, 123);
			this->Speed1->Name = L"Speed1";
			this->Speed1->Size = System::Drawing::Size(94, 22);
			this->Speed1->TabIndex = 21;
			this->Speed1->Text = L"0";
			this->Speed1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Speed1->TextChanged += gcnew System::EventHandler(this, &objectForm::Speed1_TextChanged);
			// 
			// Speed2
			// 
			this->Speed2->Location = System::Drawing::Point(454, 123);
			this->Speed2->Name = L"Speed2";
			this->Speed2->Size = System::Drawing::Size(94, 22);
			this->Speed2->TabIndex = 22;
			this->Speed2->Text = L"0";
			this->Speed2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Speed2->TextChanged += gcnew System::EventHandler(this, &objectForm::Speed2_TextChanged);
			// 
			// Course3
			// 
			this->Course3->Location = System::Drawing::Point(354, 151);
			this->Course3->Name = L"Course3";
			this->Course3->Size = System::Drawing::Size(94, 22);
			this->Course3->TabIndex = 23;
			this->Course3->Text = L"0";
			this->Course3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Course3->TextChanged += gcnew System::EventHandler(this, &objectForm::Course3_TextChanged);
			// 
			// Course4
			// 
			this->Course4->Location = System::Drawing::Point(454, 151);
			this->Course4->Name = L"Course4";
			this->Course4->Size = System::Drawing::Size(94, 22);
			this->Course4->TabIndex = 24;
			this->Course4->Text = L"0";
			this->Course4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Course4->TextChanged += gcnew System::EventHandler(this, &objectForm::Course4_TextChanged);
			// 
			// Time5
			// 
			this->Time5->Location = System::Drawing::Point(354, 179);
			this->Time5->Name = L"Time5";
			this->Time5->Size = System::Drawing::Size(94, 22);
			this->Time5->TabIndex = 25;
			this->Time5->Text = L"0";
			this->Time5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Time5->TextChanged += gcnew System::EventHandler(this, &objectForm::Time5_TextChanged);
			// 
			// Time6
			// 
			this->Time6->Location = System::Drawing::Point(454, 179);
			this->Time6->Name = L"Time6";
			this->Time6->Size = System::Drawing::Size(94, 22);
			this->Time6->TabIndex = 26;
			this->Time6->Text = L"0";
			this->Time6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Time6->TextChanged += gcnew System::EventHandler(this, &objectForm::Time6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(354, 210);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(194, 22);
			this->textBox7->TabIndex = 27;
			this->textBox7->Text = L"0";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &objectForm::textBox7_TextChanged);
			// 
			// Acceleration
			// 
			this->Acceleration->Location = System::Drawing::Point(354, 238);
			this->Acceleration->Name = L"Acceleration";
			this->Acceleration->Size = System::Drawing::Size(194, 22);
			this->Acceleration->TabIndex = 28;
			this->Acceleration->Text = L"0";
			this->Acceleration->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Acceleration->TextChanged += gcnew System::EventHandler(this, &objectForm::Acceleration_TextChanged);
			// 
			// Ampl_course
			// 
			this->Ampl_course->Location = System::Drawing::Point(354, 266);
			this->Ampl_course->Name = L"Ampl_course";
			this->Ampl_course->Size = System::Drawing::Size(194, 22);
			this->Ampl_course->TabIndex = 29;
			this->Ampl_course->Text = L"0";
			this->Ampl_course->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Ampl_course->TextChanged += gcnew System::EventHandler(this, &objectForm::Ampl_course_TextChanged);
			// 
			// Period_course
			// 
			this->Period_course->Location = System::Drawing::Point(354, 294);
			this->Period_course->Name = L"Period_course";
			this->Period_course->Size = System::Drawing::Size(194, 22);
			this->Period_course->TabIndex = 30;
			this->Period_course->Text = L"0";
			this->Period_course->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Period_course->TextChanged += gcnew System::EventHandler(this, &objectForm::Period_course_TextChanged);
			// 
			// Dist_to_obj
			// 
			this->Dist_to_obj->Location = System::Drawing::Point(354, 72);
			this->Dist_to_obj->Name = L"Dist_to_obj";
			this->Dist_to_obj->Size = System::Drawing::Size(194, 22);
			this->Dist_to_obj->TabIndex = 31;
			this->Dist_to_obj->Text = L"0";
			this->Dist_to_obj->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Dist_to_obj->TextChanged += gcnew System::EventHandler(this, &objectForm::Dist_to_obj_TextChanged);
			// 
			// Bearing
			// 
			this->Bearing->Location = System::Drawing::Point(354, 44);
			this->Bearing->Name = L"Bearing";
			this->Bearing->Size = System::Drawing::Size(194, 22);
			this->Bearing->TabIndex = 32;
			this->Bearing->Text = L"0";
			this->Bearing->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Bearing->TextChanged += gcnew System::EventHandler(this, &objectForm::Bearing_TextChanged);
			// 
			// Err_speed
			// 
			this->Err_speed->Location = System::Drawing::Point(354, 322);
			this->Err_speed->Name = L"Err_speed";
			this->Err_speed->Size = System::Drawing::Size(194, 22);
			this->Err_speed->TabIndex = 33;
			this->Err_speed->Text = L"0";
			this->Err_speed->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Err_speed->TextChanged += gcnew System::EventHandler(this, &objectForm::Err_speed_TextChanged);
			// 
			// CheckZigzag
			// 
			this->CheckZigzag->AutoSize = true;
			this->CheckZigzag->Location = System::Drawing::Point(16, 348);
			this->CheckZigzag->Name = L"CheckZigzag";
			this->CheckZigzag->Size = System::Drawing::Size(158, 21);
			this->CheckZigzag->TabIndex = 34;
			this->CheckZigzag->Text = L"Движение зигзагом";
			this->CheckZigzag->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->менюToolStripMenuItem,
					this->обПриложенииToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(560, 28);
			this->menuStrip1->TabIndex = 35;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->главнаяToolStripMenuItem,
					this->таблицаНаблюдателяToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->менюToolStripMenuItem->Text = L"Меню";
			// 
			// главнаяToolStripMenuItem
			// 
			this->главнаяToolStripMenuItem->Name = L"главнаяToolStripMenuItem";
			this->главнаяToolStripMenuItem->Size = System::Drawing::Size(247, 26);
			this->главнаяToolStripMenuItem->Text = L"Главная";
			this->главнаяToolStripMenuItem->Click += gcnew System::EventHandler(this, &objectForm::главнаяToolStripMenuItem_Click);
			// 
			// таблицаНаблюдателяToolStripMenuItem
			// 
			this->таблицаНаблюдателяToolStripMenuItem->Name = L"таблицаНаблюдателяToolStripMenuItem";
			this->таблицаНаблюдателяToolStripMenuItem->Size = System::Drawing::Size(247, 26);
			this->таблицаНаблюдателяToolStripMenuItem->Text = L"Таблица наблюдателя";
			this->таблицаНаблюдателяToolStripMenuItem->Click += gcnew System::EventHandler(this, &objectForm::таблицаНаблюдателяToolStripMenuItem_Click);
			// 
			// обПриложенииToolStripMenuItem
			// 
			this->обПриложенииToolStripMenuItem->Name = L"обПриложенииToolStripMenuItem";
			this->обПриложенииToolStripMenuItem->Size = System::Drawing::Size(128, 24);
			this->обПриложенииToolStripMenuItem->Text = L"О приложении";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &objectForm::выходToolStripMenuItem_Click);
			// 
			// objectForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(560, 378);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->CheckZigzag);
			this->Controls->Add(this->Err_speed);
			this->Controls->Add(this->Bearing);
			this->Controls->Add(this->Dist_to_obj);
			this->Controls->Add(this->Period_course);
			this->Controls->Add(this->Ampl_course);
			this->Controls->Add(this->Acceleration);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->Time6);
			this->Controls->Add(this->Time5);
			this->Controls->Add(this->Course4);
			this->Controls->Add(this->Course3);
			this->Controls->Add(this->Speed2);
			this->Controls->Add(this->Speed1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(578, 425);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(578, 425);
			this->Name = L"objectForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Параметры движения объекта";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void главнаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void таблицаНаблюдателяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Bearing_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Dist_to_obj_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Acceleration_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Ampl_course_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Period_course_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Err_speed_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Speed1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Speed2_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Course3_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Course4_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Time5_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Time6_TextChanged(System::Object^ sender, System::EventArgs^ e);
};
}
