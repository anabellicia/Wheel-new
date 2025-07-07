#pragma once
#include "WheelArray.h"
#include "time.h"

namespace Laba3 {

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
	private: WheelArray* Array;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			srand(time(0));
			Array = new WheelArray[2];
			updateElementList();
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
	private: System::Windows::Forms::Button^ setSizeButton;
	protected:

	private: System::Windows::Forms::ListBox^ console;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::NumericUpDown^ arraySizeField;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ arrayIndexField1;


	private: System::Windows::Forms::Button^ clearArrayButton;
	private: System::Windows::Forms::Button^ showArrayButton;


	private: System::Windows::Forms::Button^ rangeFieldButton;
	private: System::Windows::Forms::TextBox^ kField;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ startKField;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ randomFillButton;




	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ elemList;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ elemIndexField;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::NumericUpDown^ countField;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ xField;
	private: System::Windows::Forms::TextBox^ yField;


	private: System::Windows::Forms::TextBox^ heightField;

	private: System::Windows::Forms::TextBox^ radiusField;
	private: System::Windows::Forms::Button^ compareArraysButton;
	private: System::Windows::Forms::Button^ setElemButton;




	private: System::Windows::Forms::Button^ setIndexButton;

	private: System::Windows::Forms::Button^ removeButton;
	private: System::Windows::Forms::Button^ pushButton;



	private: System::Windows::Forms::Button^ appendButton;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	private: System::Windows::Forms::Button^ redrawButton;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->setSizeButton = (gcnew System::Windows::Forms::Button());
			this->console = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->compareArraysButton = (gcnew System::Windows::Forms::Button());
			this->arraySizeField = (gcnew System::Windows::Forms::NumericUpDown());
			this->showArrayButton = (gcnew System::Windows::Forms::Button());
			this->clearArrayButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rangeFieldButton = (gcnew System::Windows::Forms::Button());
			this->kField = (gcnew System::Windows::Forms::TextBox());
			this->arrayIndexField1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->startKField = (gcnew System::Windows::Forms::TextBox());
			this->randomFillButton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->setElemButton = (gcnew System::Windows::Forms::Button());
			this->setIndexButton = (gcnew System::Windows::Forms::Button());
			this->removeButton = (gcnew System::Windows::Forms::Button());
			this->pushButton = (gcnew System::Windows::Forms::Button());
			this->appendButton = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->countField = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->xField = (gcnew System::Windows::Forms::TextBox());
			this->yField = (gcnew System::Windows::Forms::TextBox());
			this->heightField = (gcnew System::Windows::Forms::TextBox());
			this->radiusField = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->elemIndexField = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->elemList = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->redrawButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arraySizeField))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrayIndexField1))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->countField))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// setSizeButton
			// 
			this->setSizeButton->Location = System::Drawing::Point(6, 68);
			this->setSizeButton->Name = L"setSizeButton";
			this->setSizeButton->Size = System::Drawing::Size(188, 23);
			this->setSizeButton->TabIndex = 0;
			this->setSizeButton->Text = L"Задать размер";
			this->setSizeButton->UseVisualStyleBackColor = true;
			this->setSizeButton->Click += gcnew System::EventHandler(this, &MyForm::setSizeButton_Click);
			// 
			// console
			// 
			this->console->BackColor = System::Drawing::Color::White;
			this->console->FormattingEnabled = true;
			this->console->Location = System::Drawing::Point(426, 14);
			this->console->Name = L"console";
			this->console->Size = System::Drawing::Size(201, 329);
			this->console->TabIndex = 1;
			this->console->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::console_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->compareArraysButton);
			this->groupBox1->Controls->Add(this->arraySizeField);
			this->groupBox1->Controls->Add(this->showArrayButton);
			this->groupBox1->Controls->Add(this->clearArrayButton);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->rangeFieldButton);
			this->groupBox1->Controls->Add(this->kField);
			this->groupBox1->Controls->Add(this->arrayIndexField1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->setSizeButton);
			this->groupBox1->Controls->Add(this->startKField);
			this->groupBox1->Controls->Add(this->randomFillButton);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->ForeColor = System::Drawing::Color::Purple;
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 271);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Операции над объектом-массивом";
			// 
			// compareArraysButton
			// 
			this->compareArraysButton->Location = System::Drawing::Point(6, 238);
			this->compareArraysButton->Name = L"compareArraysButton";
			this->compareArraysButton->Size = System::Drawing::Size(188, 23);
			this->compareArraysButton->TabIndex = 18;
			this->compareArraysButton->Text = L"Сравнить массивы";
			this->compareArraysButton->UseVisualStyleBackColor = true;
			this->compareArraysButton->Click += gcnew System::EventHandler(this, &MyForm::compareArraysButton_Click);
			// 
			// arraySizeField
			// 
			this->arraySizeField->Location = System::Drawing::Point(119, 44);
			this->arraySizeField->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { -1981284353, -1966660860, 0, 0 });
			this->arraySizeField->Name = L"arraySizeField";
			this->arraySizeField->Size = System::Drawing::Size(75, 20);
			this->arraySizeField->TabIndex = 5;
			// 
			// showArrayButton
			// 
			this->showArrayButton->Location = System::Drawing::Point(6, 209);
			this->showArrayButton->Name = L"showArrayButton";
			this->showArrayButton->Size = System::Drawing::Size(188, 23);
			this->showArrayButton->TabIndex = 16;
			this->showArrayButton->Text = L"Посмотреть элементы";
			this->showArrayButton->UseVisualStyleBackColor = true;
			this->showArrayButton->Click += gcnew System::EventHandler(this, &MyForm::showArrayButton_Click);
			// 
			// clearArrayButton
			// 
			this->clearArrayButton->Location = System::Drawing::Point(6, 179);
			this->clearArrayButton->Name = L"clearArrayButton";
			this->clearArrayButton->Size = System::Drawing::Size(188, 23);
			this->clearArrayButton->TabIndex = 17;
			this->clearArrayButton->Text = L"Очистить массив";
			this->clearArrayButton->UseVisualStyleBackColor = true;
			this->clearArrayButton->Click += gcnew System::EventHandler(this, &MyForm::clearArrayButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Размер массива";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Индекс массива";
			// 
			// rangeFieldButton
			// 
			this->rangeFieldButton->Location = System::Drawing::Point(6, 151);
			this->rangeFieldButton->Name = L"rangeFieldButton";
			this->rangeFieldButton->Size = System::Drawing::Size(188, 23);
			this->rangeFieldButton->TabIndex = 15;
			this->rangeFieldButton->Text = L"Задать с шагом";
			this->rangeFieldButton->UseVisualStyleBackColor = true;
			this->rangeFieldButton->Click += gcnew System::EventHandler(this, &MyForm::rangeFieldButton_Click);
			// 
			// kField
			// 
			this->kField->Location = System::Drawing::Point(124, 125);
			this->kField->Name = L"kField";
			this->kField->Size = System::Drawing::Size(70, 20);
			this->kField->TabIndex = 14;
			this->kField->Text = L"0";
			// 
			// arrayIndexField1
			// 
			this->arrayIndexField1->Location = System::Drawing::Point(119, 18);
			this->arrayIndexField1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->arrayIndexField1->Name = L"arrayIndexField1";
			this->arrayIndexField1->Size = System::Drawing::Size(75, 20);
			this->arrayIndexField1->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(105, 128);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"K";
			// 
			// startKField
			// 
			this->startKField->Location = System::Drawing::Point(33, 125);
			this->startKField->Name = L"startKField";
			this->startKField->Size = System::Drawing::Size(66, 20);
			this->startKField->TabIndex = 12;
			this->startKField->Text = L"0";
			// 
			// randomFillButton
			// 
			this->randomFillButton->Location = System::Drawing::Point(6, 95);
			this->randomFillButton->Name = L"randomFillButton";
			this->randomFillButton->Size = System::Drawing::Size(188, 23);
			this->randomFillButton->TabIndex = 8;
			this->randomFillButton->Text = L"Заполнить случайно";
			this->randomFillButton->UseVisualStyleBackColor = true;
			this->randomFillButton->Click += gcnew System::EventHandler(this, &MyForm::randomFillButton_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 128);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"X1";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->setElemButton);
			this->groupBox3->Controls->Add(this->setIndexButton);
			this->groupBox3->Controls->Add(this->removeButton);
			this->groupBox3->Controls->Add(this->pushButton);
			this->groupBox3->Controls->Add(this->appendButton);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->countField);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->xField);
			this->groupBox3->Controls->Add(this->yField);
			this->groupBox3->Controls->Add(this->heightField);
			this->groupBox3->Controls->Add(this->radiusField);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->elemIndexField);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->elemList);
			this->groupBox3->ForeColor = System::Drawing::Color::Purple;
			this->groupBox3->Location = System::Drawing::Point(219, 13);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 331);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Операции над элементами";
			// 
			// setElemButton
			// 
			this->setElemButton->Location = System::Drawing::Point(6, 297);
			this->setElemButton->Name = L"setElemButton";
			this->setElemButton->Size = System::Drawing::Size(188, 23);
			this->setElemButton->TabIndex = 19;
			this->setElemButton->Text = L"Задать по списку";
			this->setElemButton->UseVisualStyleBackColor = true;
			this->setElemButton->Click += gcnew System::EventHandler(this, &MyForm::setElemButton_Click);
			// 
			// setIndexButton
			// 
			this->setIndexButton->Location = System::Drawing::Point(6, 267);
			this->setIndexButton->Name = L"setIndexButton";
			this->setIndexButton->Size = System::Drawing::Size(188, 23);
			this->setIndexButton->TabIndex = 18;
			this->setIndexButton->Text = L"Задать по индексу";
			this->setIndexButton->UseVisualStyleBackColor = true;
			this->setIndexButton->Click += gcnew System::EventHandler(this, &MyForm::setIndexButton_Click);
			// 
			// removeButton
			// 
			this->removeButton->Location = System::Drawing::Point(6, 237);
			this->removeButton->Name = L"removeButton";
			this->removeButton->Size = System::Drawing::Size(188, 23);
			this->removeButton->TabIndex = 17;
			this->removeButton->Text = L"Удалить по индексу";
			this->removeButton->UseVisualStyleBackColor = true;
			this->removeButton->Click += gcnew System::EventHandler(this, &MyForm::removeButton_Click);
			// 
			// pushButton
			// 
			this->pushButton->Location = System::Drawing::Point(6, 208);
			this->pushButton->Name = L"pushButton";
			this->pushButton->Size = System::Drawing::Size(188, 23);
			this->pushButton->TabIndex = 16;
			this->pushButton->Text = L"Вставить по индексу";
			this->pushButton->UseVisualStyleBackColor = true;
			this->pushButton->Click += gcnew System::EventHandler(this, &MyForm::pushButton_Click);
			// 
			// appendButton
			// 
			this->appendButton->Location = System::Drawing::Point(6, 178);
			this->appendButton->Name = L"appendButton";
			this->appendButton->Size = System::Drawing::Size(188, 23);
			this->appendButton->TabIndex = 15;
			this->appendButton->Text = L"Вставить в конец";
			this->appendButton->UseVisualStyleBackColor = true;
			this->appendButton->Click += gcnew System::EventHandler(this, &MyForm::appendButton_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(103, 155);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(14, 13);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Y";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 155);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(14, 13);
			this->label11->TabIndex = 13;
			this->label11->Text = L"X";
			// 
			// countField
			// 
			this->countField->Location = System::Drawing::Point(105, 122);
			this->countField->Name = L"countField";
			this->countField->Size = System::Drawing::Size(89, 20);
			this->countField->TabIndex = 12;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 124);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(68, 13);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Кол-во спиц";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 100);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(86, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Толщина обода";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 73);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Радиус";
			// 
			// xField
			// 
			this->xField->Location = System::Drawing::Point(23, 152);
			this->xField->Name = L"xField";
			this->xField->Size = System::Drawing::Size(71, 20);
			this->xField->TabIndex = 8;
			this->xField->Text = L"0";
			// 
			// yField
			// 
			this->yField->Location = System::Drawing::Point(123, 152);
			this->yField->Name = L"yField";
			this->yField->Size = System::Drawing::Size(71, 20);
			this->yField->TabIndex = 7;
			this->yField->Text = L"0";
			// 
			// heightField
			// 
			this->heightField->Location = System::Drawing::Point(105, 96);
			this->heightField->Name = L"heightField";
			this->heightField->Size = System::Drawing::Size(89, 20);
			this->heightField->TabIndex = 5;
			this->heightField->Text = L"1";
			// 
			// radiusField
			// 
			this->radiusField->Location = System::Drawing::Point(105, 70);
			this->radiusField->Name = L"radiusField";
			this->radiusField->Size = System::Drawing::Size(89, 20);
			this->radiusField->TabIndex = 4;
			this->radiusField->Text = L"1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Номер элемента";
			// 
			// elemIndexField
			// 
			this->elemIndexField->Location = System::Drawing::Point(105, 17);
			this->elemIndexField->Name = L"elemIndexField";
			this->elemIndexField->Size = System::Drawing::Size(89, 20);
			this->elemIndexField->TabIndex = 2;
			this->elemIndexField->Text = L"0;1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 47);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Или элемент";
			// 
			// elemList
			// 
			this->elemList->FormattingEnabled = true;
			this->elemList->Location = System::Drawing::Point(105, 44);
			this->elemList->Name = L"elemList";
			this->elemList->Size = System::Drawing::Size(89, 21);
			this->elemList->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(12, 348);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(614, 211);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Paint);
			// 
			// redrawButton
			// 
			this->redrawButton->BackColor = System::Drawing::Color::MediumOrchid;
			this->redrawButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->redrawButton->Location = System::Drawing::Point(12, 289);
			this->redrawButton->Name = L"redrawButton";
			this->redrawButton->Size = System::Drawing::Size(200, 52);
			this->redrawButton->TabIndex = 6;
			this->redrawButton->Text = L"Нарисовать";
			this->redrawButton->UseVisualStyleBackColor = false;
			this->redrawButton->Click += gcnew System::EventHandler(this, &MyForm::redrawButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(639, 571);
			this->Controls->Add(this->redrawButton);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->console);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arraySizeField))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrayIndexField1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->countField))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void updateElementList() {
		elemList->Items->Clear();
		String^ str;
		for (unsigned int i = 0; i < 2; i++) {
			for (unsigned int j = 0; j < Array[i].Length(); j++) {
				str = "(" + i.ToString() + ";" + j.ToString() + ") = {";
				str += "R=" + Array[i][j].GetR().ToString() + "; ";
				str += "H=" + Array[i][j].GetH().ToString() + "; ";
				str += "N=" + Array[i][j].GetN().ToString() + "}";
				elemList->Items->Add(str);
			}
		}
	}
	private: System::Void setSizeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			unsigned int index = Convert::ToUInt32(arrayIndexField1->Text);
			unsigned int size = Convert::ToUInt32(arraySizeField->Text);

			Array[index].Length(size);
		}
		catch (char const* e) {
			console->Items->Add(gcnew System::String(e));
		}
		updateElementList();
	}
	private: System::Void randomFillButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			unsigned int index = Convert::ToUInt32(arrayIndexField1->Text);
			for (unsigned int i = 0; i < Array[index].Length(); i++) {
				Array[index][i].SetR((float)rand() / RAND_MAX * 60 + 15);
				Array[index][i].SetH((float)rand() / RAND_MAX * 50 + 1);
				Array[index][i].SetN((float)rand() / RAND_MAX * 10 + 3);
				Array[index][i].SetXY((float)rand() / RAND_MAX * 500 + 50, (float)rand() / RAND_MAX * 150 + 50);
			}
		}
		catch (char const* e) {
			console->Items->Add(gcnew System::String(e));
		}
		updateElementList();
	}
	private: System::Void rangeFieldButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			unsigned int index = Convert::ToUInt32(arrayIndexField1->Text);
			float x1 = Convert::ToDouble(startKField->Text);
			float k = Convert::ToDouble(kField->Text);
			for (unsigned int i = 0; i < Array[index].Length(); i++) {
				Array[index][i].SetR(x1 + i * k / 2);
				Array[index][i].SetH(1);
				Array[index][i].SetN(x1 + i * k / 4);
				Array[index][i].SetXY(x1 + i * k * 2, x1 + i * k);
			}
		}
		catch (char const* e) {
			console->Items->Add(gcnew System::String(e));
		}
		updateElementList();
	}
	private: System::Void clearArrayButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			unsigned int index = Convert::ToUInt32(arrayIndexField1->Text);
			Array[index].Clear();
		}
		catch (char const* e) {
			console->Items->Add(gcnew System::String(e));
		}
		updateElementList();
	}
	private: System::Void showArrayButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			unsigned int index = Convert::ToUInt32(arrayIndexField1->Text);
			console->Items->Add("Массив №" + index.ToString());
			for (unsigned int i = 0; i < Array[index].Length(); i++) {
				String^ str = index.ToString() + "; " + i.ToString() + " :: ";
				str += "{R=" + Array[index][i].GetR().ToString() + ";";
				str += "H=" + Array[index][i].GetH().ToString() + ";";
				str += "N=" + Array[index][i].GetN().ToString() + "}";
				console->Items->Add(str);
			}
		}
		catch (char const* e) {
			console->Items->Add(gcnew System::String(e));
		}
	}
	private: System::Void compareArraysButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Array[0] == Array[1])
			console->Items->Add("Массивы идентичны!");
		else
			console->Items->Add("Массивы не идентичны!");
	}
	private: System::Void appendButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ str = elemIndexField->Text;
			int del = str->IndexOf(";");
			if (del >= 0)
				str = str->Substring(0, del);
			unsigned int ArrayIndex = Convert::ToUInt32(str);
			unsigned int ElementIndex = Array[ArrayIndex].Length();
			Array[ArrayIndex].Push(Wheel());
			Array[ArrayIndex][ElementIndex].SetR(Convert::ToDouble(radiusField->Text));
			Array[ArrayIndex][ElementIndex].SetH(Convert::ToDouble(heightField->Text));
			Array[ArrayIndex][ElementIndex].SetN(Convert::ToDouble(countField->Text));
			Array[ArrayIndex][ElementIndex].SetXY(Convert::ToDouble(xField->Text), Convert::ToDouble(yField->Text));
		}
		catch (char const* e) {
			console->Items->Add(gcnew System::String(e));
		}
		updateElementList();
	}
	private: System::Void pushButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ str = elemIndexField->Text;
			if (str->IndexOf(";") < 0)
				throw "Некорректный индекс";
			unsigned int ArrayIndex = Convert::ToUInt32(str->Substring(0, str->IndexOf(";")));
			unsigned int ElementIndex = Convert::ToUInt32(str->Substring(str->IndexOf(";") + 1));
			Array[ArrayIndex].Push(ElementIndex, Wheel());
			Array[ArrayIndex][ElementIndex].SetR(Convert::ToDouble(radiusField->Text));
			Array[ArrayIndex][ElementIndex].SetH(Convert::ToDouble(heightField->Text));
			Array[ArrayIndex][ElementIndex].SetN(Convert::ToDouble(countField->Text));
			Array[ArrayIndex][ElementIndex].SetXY(Convert::ToDouble(xField->Text), Convert::ToDouble(yField->Text));
		}
		catch (char const* e) {
			console->Items->Add(gcnew System::String(e));
		}
		updateElementList();
	}
	private: System::Void removeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ str = elemIndexField->Text;
			if (str->IndexOf(";") < 0)
				throw "Некорректный индекс";
			unsigned int ArrayIndex = Convert::ToUInt32(str->Substring(0, str->IndexOf(";")));
			unsigned int ElementIndex = Convert::ToUInt32(str->Substring(str->IndexOf(";") + 1));
			Array[ArrayIndex].Remove(ElementIndex);
		}
		catch (char const* e) {
			console->Items->Add(gcnew System::String(e));
		}
		updateElementList();
	}
	private: System::Void setIndexButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ str = elemIndexField->Text;
			if (str->IndexOf(";") < 0)
				throw "Некорректный индекс";
			unsigned int ArrayIndex = Convert::ToUInt32(str->Substring(0, str->IndexOf(";")));
			unsigned int ElementIndex = Convert::ToUInt32(str->Substring(str->IndexOf(";") + 1));
			Array[ArrayIndex][ElementIndex].SetR(Convert::ToDouble(radiusField->Text));
			Array[ArrayIndex][ElementIndex].SetH(Convert::ToDouble(heightField->Text));
			Array[ArrayIndex][ElementIndex].SetN(Convert::ToDouble(countField->Text));
			Array[ArrayIndex][ElementIndex].SetXY(Convert::ToDouble(xField->Text), Convert::ToDouble(yField->Text));
		}
		catch (char const* e) {
			console->Items->Add(gcnew System::String(e));
		}
		updateElementList();
	}
	private: System::Void setElemButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			unsigned int ArrayIndex = 0;
			unsigned int ElementIndex = elemList->SelectedIndex;
			if (ElementIndex >= Array[0].Length()) {
				ElementIndex -= Array[0].Length();
				ArrayIndex = 1;
				if (ElementIndex >= Array[1].Length())
					throw "Неверный элемент";
			}
			Array[ArrayIndex][ElementIndex].SetR(Convert::ToDouble(radiusField->Text));
			Array[ArrayIndex][ElementIndex].SetH(Convert::ToDouble(heightField->Text));
			Array[ArrayIndex][ElementIndex].SetN(Convert::ToDouble(countField->Text));
			Array[ArrayIndex][ElementIndex].SetXY(Convert::ToDouble(xField->Text), Convert::ToDouble(yField->Text));
		}
		catch (char const* e) {
			console->Items->Add(gcnew System::String(e));
		}
		updateElementList();
	}
	private: System::Void redrawButton_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Refresh();
	}

	private: System::Void Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		for (unsigned int j = 0; j < Array[0].Length(); j++) {
			Array[0][j].Draw(e, System::Drawing::Pens::Blue);
		}

		for (unsigned int j = 0; j < Array[1].Length(); j++) {
			Array[1][j].Draw(e, System::Drawing::Pens::Red);
		}
	}
	private: System::Void console_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
