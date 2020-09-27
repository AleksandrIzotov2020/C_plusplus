#pragma once

namespace Proj1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для viewerForm
	/// </summary>
	public ref class viewerForm : public System::Windows::Forms::Form
	{

	public:
		viewerForm(void)
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
		~viewerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textSpeedN1;
	private: System::Windows::Forms::TextBox^ textSpeedN2;
	private: System::Windows::Forms::TextBox^ textSpeedN3;
	private: System::Windows::Forms::TextBox^ textCourse1;
	private: System::Windows::Forms::TextBox^ textCourse2;
	private: System::Windows::Forms::TextBox^ textCourse3;
	private: System::Windows::Forms::TextBox^ textTime1;
	private: System::Windows::Forms::TextBox^ textTime2;
	private: System::Windows::Forms::TextBox^ textTime3;
	private: System::Windows::Forms::TextBox^ SpeedTURN;










	private: System::Windows::Forms::TextBox^ textAcc;
	private: System::Windows::Forms::TextBox^ textAmpl;
	private: System::Windows::Forms::TextBox^ textPeriod;
	private: System::Windows::Forms::TextBox^ textErrCourse;
	private: System::Windows::Forms::TextBox^ textErrSpeed;






	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ обПриложенииToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ главнаяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ таблицаОбъектаToolStripMenuItem;
	private: System::Windows::Forms::Button^ buttonValue;
	protected:




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(viewerForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textSpeedN1 = (gcnew System::Windows::Forms::TextBox());
			this->textSpeedN2 = (gcnew System::Windows::Forms::TextBox());
			this->textSpeedN3 = (gcnew System::Windows::Forms::TextBox());
			this->textCourse1 = (gcnew System::Windows::Forms::TextBox());
			this->textCourse2 = (gcnew System::Windows::Forms::TextBox());
			this->textCourse3 = (gcnew System::Windows::Forms::TextBox());
			this->textTime1 = (gcnew System::Windows::Forms::TextBox());
			this->textTime2 = (gcnew System::Windows::Forms::TextBox());
			this->textTime3 = (gcnew System::Windows::Forms::TextBox());
			this->SpeedTURN = (gcnew System::Windows::Forms::TextBox());
			this->textAcc = (gcnew System::Windows::Forms::TextBox());
			this->textAmpl = (gcnew System::Windows::Forms::TextBox());
			this->textPeriod = (gcnew System::Windows::Forms::TextBox());
			this->textErrCourse = (gcnew System::Windows::Forms::TextBox());
			this->textErrSpeed = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->главнаяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->таблицаОбъектаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обПриложенииToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonValue = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(10, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Скорость ПЛ (м/сек)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(346, 36);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 23);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Галс 1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(490, 36);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 23);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Галс 3";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(418, 36);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 23);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Галс 2";
			// 
			// textSpeedN1
			// 
			this->textSpeedN1->Location = System::Drawing::Point(350, 62);
			this->textSpeedN1->Name = L"textSpeedN1";
			this->textSpeedN1->Size = System::Drawing::Size(62, 22);
			this->textSpeedN1->TabIndex = 7;
			this->textSpeedN1->Text = L"0";
			this->textSpeedN1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textSpeedN1->TextChanged += gcnew System::EventHandler(this, &viewerForm::textSpeedN1_TextChanged);
			// 
			// textSpeedN2
			// 
			this->textSpeedN2->Location = System::Drawing::Point(418, 62);
			this->textSpeedN2->Name = L"textSpeedN2";
			this->textSpeedN2->Size = System::Drawing::Size(62, 22);
			this->textSpeedN2->TabIndex = 8;
			this->textSpeedN2->Text = L"0";
			this->textSpeedN2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textSpeedN2->TextChanged += gcnew System::EventHandler(this, &viewerForm::textBox2_TextChanged);
			// 
			// textSpeedN3
			// 
			this->textSpeedN3->Location = System::Drawing::Point(486, 62);
			this->textSpeedN3->Name = L"textSpeedN3";
			this->textSpeedN3->Size = System::Drawing::Size(62, 22);
			this->textSpeedN3->TabIndex = 9;
			this->textSpeedN3->Text = L"0";
			this->textSpeedN3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textSpeedN3->TextChanged += gcnew System::EventHandler(this, &viewerForm::textSpeedN3_TextChanged);
			// 
			// textCourse1
			// 
			this->textCourse1->Location = System::Drawing::Point(350, 90);
			this->textCourse1->Name = L"textCourse1";
			this->textCourse1->Size = System::Drawing::Size(62, 22);
			this->textCourse1->TabIndex = 10;
			this->textCourse1->Text = L"0";
			this->textCourse1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textCourse1->TextChanged += gcnew System::EventHandler(this, &viewerForm::textCourse1_TextChanged);
			// 
			// textCourse2
			// 
			this->textCourse2->Location = System::Drawing::Point(418, 90);
			this->textCourse2->Name = L"textCourse2";
			this->textCourse2->Size = System::Drawing::Size(62, 22);
			this->textCourse2->TabIndex = 11;
			this->textCourse2->Text = L"0";
			this->textCourse2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textCourse2->TextChanged += gcnew System::EventHandler(this, &viewerForm::textCourse2_TextChanged);
			// 
			// textCourse3
			// 
			this->textCourse3->Location = System::Drawing::Point(486, 90);
			this->textCourse3->Name = L"textCourse3";
			this->textCourse3->Size = System::Drawing::Size(62, 22);
			this->textCourse3->TabIndex = 12;
			this->textCourse3->Text = L"0";
			this->textCourse3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textCourse3->TextChanged += gcnew System::EventHandler(this, &viewerForm::textCourse3_TextChanged);
			// 
			// textTime1
			// 
			this->textTime1->Location = System::Drawing::Point(350, 118);
			this->textTime1->Name = L"textTime1";
			this->textTime1->Size = System::Drawing::Size(62, 22);
			this->textTime1->TabIndex = 13;
			this->textTime1->Text = L"0";
			this->textTime1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textTime1->TextChanged += gcnew System::EventHandler(this, &viewerForm::textTime1_TextChanged);
			// 
			// textTime2
			// 
			this->textTime2->Location = System::Drawing::Point(418, 118);
			this->textTime2->Name = L"textTime2";
			this->textTime2->Size = System::Drawing::Size(62, 22);
			this->textTime2->TabIndex = 14;
			this->textTime2->Text = L"0";
			this->textTime2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textTime2->TextChanged += gcnew System::EventHandler(this, &viewerForm::textTime2_TextChanged);
			// 
			// textTime3
			// 
			this->textTime3->Location = System::Drawing::Point(486, 118);
			this->textTime3->Name = L"textTime3";
			this->textTime3->Size = System::Drawing::Size(62, 22);
			this->textTime3->TabIndex = 15;
			this->textTime3->Text = L"0";
			this->textTime3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textTime3->TextChanged += gcnew System::EventHandler(this, &viewerForm::textTime3_TextChanged);
			// 
			// SpeedTURN
			// 
			this->SpeedTURN->Location = System::Drawing::Point(350, 146);
			this->SpeedTURN->Name = L"SpeedTURN";
			this->SpeedTURN->Size = System::Drawing::Size(198, 22);
			this->SpeedTURN->TabIndex = 16;
			this->SpeedTURN->Text = L"0";
			this->SpeedTURN->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->SpeedTURN->TextChanged += gcnew System::EventHandler(this, &viewerForm::textBox10_TextChanged);
			// 
			// textAcc
			// 
			this->textAcc->Location = System::Drawing::Point(350, 174);
			this->textAcc->Name = L"textAcc";
			this->textAcc->Size = System::Drawing::Size(198, 22);
			this->textAcc->TabIndex = 17;
			this->textAcc->Text = L"0";
			this->textAcc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textAcc->TextChanged += gcnew System::EventHandler(this, &viewerForm::textAcc_TextChanged);
			// 
			// textAmpl
			// 
			this->textAmpl->Location = System::Drawing::Point(350, 202);
			this->textAmpl->Name = L"textAmpl";
			this->textAmpl->Size = System::Drawing::Size(198, 22);
			this->textAmpl->TabIndex = 18;
			this->textAmpl->Text = L"0";
			this->textAmpl->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textAmpl->TextChanged += gcnew System::EventHandler(this, &viewerForm::textAmpl_TextChanged);
			// 
			// textPeriod
			// 
			this->textPeriod->Location = System::Drawing::Point(350, 230);
			this->textPeriod->Name = L"textPeriod";
			this->textPeriod->Size = System::Drawing::Size(198, 22);
			this->textPeriod->TabIndex = 19;
			this->textPeriod->Text = L"0";
			this->textPeriod->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textPeriod->TextChanged += gcnew System::EventHandler(this, &viewerForm::textPeriod_TextChanged);
			// 
			// textErrCourse
			// 
			this->textErrCourse->Location = System::Drawing::Point(350, 258);
			this->textErrCourse->Name = L"textErrCourse";
			this->textErrCourse->Size = System::Drawing::Size(198, 22);
			this->textErrCourse->TabIndex = 20;
			this->textErrCourse->Text = L"0";
			this->textErrCourse->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textErrCourse->TextChanged += gcnew System::EventHandler(this, &viewerForm::textErrCourse_TextChanged);
			// 
			// textErrSpeed
			// 
			this->textErrSpeed->Location = System::Drawing::Point(350, 286);
			this->textErrSpeed->Name = L"textErrSpeed";
			this->textErrSpeed->Size = System::Drawing::Size(198, 22);
			this->textErrSpeed->TabIndex = 21;
			this->textErrSpeed->Text = L"0";
			this->textErrSpeed->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textErrSpeed->TextChanged += gcnew System::EventHandler(this, &viewerForm::textErrSpeed_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(10, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 22);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Курс ПЛ (град)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(10, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(161, 22);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Время галса (сек)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(10, 146);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(302, 22);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Скорость поворота ПЛ (град/мин)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(10, 174);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(217, 22);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Ускорение ПЛ (м/сек^2)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(10, 202);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(298, 22);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Амплитуда рысканья курса (град)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(10, 230);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(257, 22);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Период рысканья курса (сек)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(10, 258);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(300, 22);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Ошибка определения курса (град)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(10, 286);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(322, 22);
			this->label12->TabIndex = 29;
			this->label12->Text = L"Ошибка удержания скорости (м/сек)";
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
			this->menuStrip1->Size = System::Drawing::Size(560, 30);
			this->menuStrip1->TabIndex = 30;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->главнаяToolStripMenuItem,
					this->таблицаОбъектаToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(65, 26);
			this->менюToolStripMenuItem->Text = L"Меню";
			// 
			// главнаяToolStripMenuItem
			// 
			this->главнаяToolStripMenuItem->Name = L"главнаяToolStripMenuItem";
			this->главнаяToolStripMenuItem->Size = System::Drawing::Size(211, 26);
			this->главнаяToolStripMenuItem->Text = L"Главная";
			this->главнаяToolStripMenuItem->Click += gcnew System::EventHandler(this, &viewerForm::главнаяToolStripMenuItem_Click);
			// 
			// таблицаОбъектаToolStripMenuItem
			// 
			this->таблицаОбъектаToolStripMenuItem->Name = L"таблицаОбъектаToolStripMenuItem";
			this->таблицаОбъектаToolStripMenuItem->Size = System::Drawing::Size(211, 26);
			this->таблицаОбъектаToolStripMenuItem->Text = L"Таблица объекта";
			this->таблицаОбъектаToolStripMenuItem->Click += gcnew System::EventHandler(this, &viewerForm::таблицаОбъектаToolStripMenuItem_Click);
			// 
			// обПриложенииToolStripMenuItem
			// 
			this->обПриложенииToolStripMenuItem->Name = L"обПриложенииToolStripMenuItem";
			this->обПриложенииToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->обПриложенииToolStripMenuItem->Text = L"О приложении";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 26);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &viewerForm::выходToolStripMenuItem_Click);
			// 
			// buttonValue
			// 
			this->buttonValue->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonValue->Location = System::Drawing::Point(14, 313);
			this->buttonValue->Name = L"buttonValue";
			this->buttonValue->Size = System::Drawing::Size(213, 36);
			this->buttonValue->TabIndex = 31;
			this->buttonValue->Text = L"Установить значения";
			this->buttonValue->UseVisualStyleBackColor = true;
			this->buttonValue->Click += gcnew System::EventHandler(this, &viewerForm::buttonValue_Click);
			// 
			// viewerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(560, 361);
			this->Controls->Add(this->buttonValue);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textErrSpeed);
			this->Controls->Add(this->textErrCourse);
			this->Controls->Add(this->textPeriod);
			this->Controls->Add(this->textAmpl);
			this->Controls->Add(this->textAcc);
			this->Controls->Add(this->SpeedTURN);
			this->Controls->Add(this->textTime3);
			this->Controls->Add(this->textTime2);
			this->Controls->Add(this->textTime1);
			this->Controls->Add(this->textCourse3);
			this->Controls->Add(this->textCourse2);
			this->Controls->Add(this->textCourse1);
			this->Controls->Add(this->textSpeedN3);
			this->Controls->Add(this->textSpeedN2);
			this->Controls->Add(this->textSpeedN1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"viewerForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Параметры движения ПЛ";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void главнаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void таблицаОбъектаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textSpeedN1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textSpeedN3_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textCourse1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textCourse2_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textCourse3_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textTime1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textTime2_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textTime3_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textAcc_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textAmpl_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textPeriod_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textErrCourse_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textErrSpeed_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonValue_Click(System::Object^ sender, System::EventArgs^ e);
};
}
