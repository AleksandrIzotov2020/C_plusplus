#pragma once

namespace Proj1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ обПриложенииToolStripMenuItem;
	private: System::Windows::Forms::Button^ buttonViewer;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ таблицаНаблюдателяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ таблицаОбъектаToolStripMenuItem;
	private: System::Windows::Forms::ListBox^ Результат;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->таблицаНаблюдателяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->таблицаОбъектаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обПриложенииToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonViewer = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Результат = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 190);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(319, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Старт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->менюToolStripMenuItem,
					this->обПриложенииToolStripMenuItem, this->toolStripMenuItem1, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(992, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->таблицаНаблюдателяToolStripMenuItem,
					this->таблицаОбъектаToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->менюToolStripMenuItem->Text = L"Меню";
			// 
			// таблицаНаблюдателяToolStripMenuItem
			// 
			this->таблицаНаблюдателяToolStripMenuItem->Name = L"таблицаНаблюдателяToolStripMenuItem";
			this->таблицаНаблюдателяToolStripMenuItem->Size = System::Drawing::Size(247, 26);
			this->таблицаНаблюдателяToolStripMenuItem->Text = L"Таблица наблюдателя";
			this->таблицаНаблюдателяToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::таблицаНаблюдателяToolStripMenuItem_Click);
			// 
			// таблицаОбъектаToolStripMenuItem
			// 
			this->таблицаОбъектаToolStripMenuItem->Name = L"таблицаОбъектаToolStripMenuItem";
			this->таблицаОбъектаToolStripMenuItem->Size = System::Drawing::Size(247, 26);
			this->таблицаОбъектаToolStripMenuItem->Text = L"Таблица Объекта";
			this->таблицаОбъектаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::таблицаОбъектаToolStripMenuItem_Click);
			// 
			// обПриложенииToolStripMenuItem
			// 
			this->обПриложенииToolStripMenuItem->Name = L"обПриложенииToolStripMenuItem";
			this->обПриложенииToolStripMenuItem->Size = System::Drawing::Size(130, 24);
			this->обПриложенииToolStripMenuItem->Text = L"О Приложении";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(14, 24);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// buttonViewer
			// 
			this->buttonViewer->Location = System::Drawing::Point(662, 190);
			this->buttonViewer->Name = L"buttonViewer";
			this->buttonViewer->Size = System::Drawing::Size(319, 47);
			this->buttonViewer->TabIndex = 2;
			this->buttonViewer->Text = L"Ввод данных наблюдателя";
			this->buttonViewer->UseVisualStyleBackColor = true;
			this->buttonViewer->Click += gcnew System::EventHandler(this, &MyForm::buttonViewer_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(337, 190);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(319, 47);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Ввод данных объекта";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::buttonObject_Click);
			// 
			// Результат
			// 
			this->Результат->FormattingEnabled = true;
			this->Результат->ItemHeight = 16;
			this->Результат->Location = System::Drawing::Point(12, 36);
			this->Результат->Name = L"Результат";
			this->Результат->Size = System::Drawing::Size(969, 148);
			this->Результат->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(992, 251);
			this->Controls->Add(this->Результат);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->buttonViewer);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Приложение ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonViewer_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonObject_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void таблицаНаблюдателяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void таблицаОбъектаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};

}
