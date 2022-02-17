#pragma once
#include<math.h>
#include<stdlib.h>
int Matrix[50][50];
int Row, Column;

namespace Z5 {

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(460, 246);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод данных матрицы";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(354, 43);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(124, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(230, 42);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 20);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Количество столбцов";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(6, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Количество строк";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(100, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(260, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Матрица Matrix[row, column]";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(100, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Задайте размер матрицы";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 90);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 40;
			this->dataGridView1->RowTemplate->Height = 20;
			this->dataGridView1->Size = System::Drawing::Size(448, 150);
			this->dataGridView1->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->checkBox3);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Location = System::Drawing::Point(12, 258);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(460, 126);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Задание";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(354, 55);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 2;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(409, 19);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(45, 20);
			this->textBox4->TabIndex = 2;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(354, 91);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 2;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(354, 19);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(45, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->Visible = false;
			// 
			// checkBox3
			// 
			this->checkBox3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->checkBox3->Location = System::Drawing::Point(9, 86);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(345, 30);
			this->checkBox3->TabIndex = 0;
			this->checkBox3->Text = L"Найти сумму произведения четных чисел первой строки и произведения положительных "
				L"чисел третьего столбца";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->Visible = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->checkBox2->Location = System::Drawing::Point(9, 50);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(345, 30);
			this->checkBox2->TabIndex = 0;
			this->checkBox2->Text = L"Найти сумму элементов, расположенных по периметру";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->Visible = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->checkBox1->Location = System::Drawing::Point(9, 14);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(345, 30);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Найти количество элементов, больше заданного числа ";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 390);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 40);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Создать таблицу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(119, 390);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Перенос данных из массива в таблицу";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(372, 390);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(245, 390);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(120, 40);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Выполнить задания";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 442);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"Двумерный массив";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion
		//Создание таблицы
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if ((textBox1->Text != "") && (textBox2->Text != ""))
		{
			if ((Convert::ToInt32(textBox1->Text) <= 50 && Convert::ToInt32(textBox1->Text) >= 1) &&
				(Convert::ToInt32(textBox2->Text) <= 50 && Convert::ToInt32(textBox2->Text) >= 1))
			{
				Row = Convert::ToInt32(textBox1->Text);
				Column = Convert::ToInt32(textBox2->Text);
				dataGridView1->Columns->Clear();
				dataGridView1->ColumnCount = Column;
				dataGridView1->RowCount = Row;
				checkBox1->Visible = true;
				checkBox2->Visible = true;
				checkBox3->Visible = true;
				textBox3->Visible = true;
				textBox4->Visible = true;
				textBox5->Visible = true;
				textBox6->Visible = true;
				button2->Visible = true;
			}
			else
			{
				MessageBox::Show(
					"Введите число от 1 до 50",
					"Ошибка ввода данных",
					MessageBoxButtons::OK,
					MessageBoxIcon::Exclamation);
			}
		}
		else
		{
			MessageBox::Show(
				"Заполните данные",
				"Ошибка ввода данных",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
		}
	}
	catch (System::FormatException^ ex)
	{
		MessageBox::Show(
			"Введите необходимые данные",
			"Ошибка ввода данных",
			MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation);
	}
}
	   //Перенос данных
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Column; j++)
		{
			Matrix[i][j] = rand() % 20 - 10;
			dataGridView1->Rows[i]->Cells[j]->Value = Matrix[i][j];
		}
	}
	button4->Visible = true;
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
}
	   //Выход
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int Count_1 = 0, Summ_2 = 0, Summ_3 = 0, t1_Summ_3 = 1, t2_Summ_3 = 1;
	try
	{
		if (checkBox1->Checked == true)
		{
			for (int i = 0; i < Row; i++)
			{
				for (int j = 0; j < Column; j++)
				{
					if (Matrix[i][j] > Convert::ToInt32(textBox3->Text))
					{
						Count_1++;
					}
				}
			}
			textBox4->Text = Convert::ToString(Count_1);
		}
	}
	catch (System::FormatException^ ex)
	{
		MessageBox::Show(
			"Введите необходимые данные",
			"Ошибка ввода данных",
			MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation);
	}
	if (checkBox2->Checked == true)
	{
		for (int i = 0; i < Row; i++) { Summ_2 += Matrix[i][0]; Summ_2 += Matrix[i][Column]; }
		for (int j = 1; j < Column; j++) { Summ_2 += Matrix[0][j]; Summ_2 += Matrix[Row][j]; }
		textBox5->Text = Convert::ToString(Summ_2);
	}
	if (checkBox3->Checked == true)
	{
		for (int j = 0; j < Column; j++)
		{
			if (Matrix[0][j] % 2 == 0)
			{
				t1_Summ_3 *= Matrix[0][j];
			}
		}
		for (int i = 0; i < Row; i++)
		{
			if (Matrix[i][2] > 0)
			{
				t2_Summ_3 *= Matrix[i][2];
			}
		}
		Summ_3 = t1_Summ_3 + t2_Summ_3;
		textBox6->Text = Convert::ToString(Summ_3);
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		textBox3->Text = "";
		textBox4->Text = "";
		textBox3->ReadOnly = false;
	}
	else
	{
		textBox3->Text = "";
		textBox4->Text = "";
		textBox3->ReadOnly = true;
	}
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox5->Text = "";
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox3->Checked == true)
	{
		if (Row != 4 || Column != 4)
		{
			MessageBox::Show(
				"Необходима матрица размером 4*4",
				"Ошибка ввода данных",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
			checkBox3->Checked = false;
		}
	}
	else
	{
		textBox6->Text = "";
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Columns->Clear();
	textBox3->Text = ""; textBox3->Visible = false;
	textBox4->Text = ""; textBox4->Visible = false;
	textBox5->Text = ""; textBox5->Visible = false;
	textBox6->Text = ""; textBox6->Visible = false;
	checkBox1->Checked = false; checkBox1->Visible = false;
	checkBox2->Checked = false; checkBox2->Visible = false;
	checkBox3->Checked = false; checkBox3->Visible = false;
	button2->Visible = false;
	button4->Visible = false;
}
};
}
