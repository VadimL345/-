#pragma once
#include "file.h" 
#include "cstring"
namespace Project4 {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	protected:

	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ПІБ працівника";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(326, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Стать";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(404, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Вік";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(220, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Посада";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(170, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(200, 46);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(317, 48);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(57, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(397, 49);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(29, 20);
			this->textBox4->TabIndex = 7;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 146);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(312, 199);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(362, 146);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(305, 199);
			this->richTextBox2->TabIndex = 9;
			this->richTextBox2->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 104);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 36);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Записати дані про працівника у файл";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Window;
			this->textBox5->Location = System::Drawing::Point(153, 120);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(85, 20);
			this->textBox5->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(162, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Назва файлу:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(362, 106);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(169, 34);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Зберегти дані про працівників-песіонерів у файл";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(555, 104);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Назва файлу:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(546, 120);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(85, 20);
			this->textBox6->TabIndex = 14;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(679, 354);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->BackColor = SystemColors::Window;
		this->textBox2->BackColor = SystemColors::Window;
		this->textBox3->BackColor = SystemColors::Window;
		this->textBox4->BackColor = SystemColors::Window;
		this->textBox4->BackColor = SystemColors::Window;
		this->textBox5->BackColor = SystemColors::Window;
		try
		{
			// Отримання значень з компонентів форми


			// Перевірка валідності введених даних
			if (this->textBox1->Text == "" || this->textBox2->Text == "" || this->textBox3->Text == "" || this->textBox4->Text == "" || this->textBox5->Text == "")
				throw exception("Заповніть всі поля!");
			Int32 res;
			if(!Int32::TryParse(this->textBox4->Text, res) || res > 100)
				throw runtime_error("Некоректні дані! Введіть будь ласка ціле число до 100!");
			else if (Convert::ToInt32(this->textBox4->Text) < 0)
				throw runtime_error("Вік не може бути від'ємним!");

			if (!File::Exists(this->textBox5->Text + ".bin"))
				throw runtime_error("Файлу з таким іменем не існує!");
			Employee^ employee = gcnew Employee;
			employee->name = this->textBox1->Text;
			employee->position = this->textBox2->Text;
			employee->gender = this->textBox3->Text;
			employee->age = Convert::ToInt32(this->textBox4->Text);


			// Збереження даних у бінарний файл
			file File(this->textBox5->Text + ".bin");
			File.SaveToFile(employee);
			File.DisplayFile(richTextBox1);
			this->textBox1->Text = "";
			this->textBox2->Text = "";
			this->textBox3->Text = "";
			this->textBox4->Text = "";
			MessageBox::Show("Дані успішно збережені!");
		}
		catch (const exception& ex)
		{
			if (strcmp(ex.what(), "Заповніть всі поля!") == 0) {
				if (this->textBox1->Text == "")
					this->textBox1->BackColor = Color::Red;
				if (this->textBox2->Text == "")
					this->textBox2->BackColor = Color::Red;
				if (this->textBox3->Text == "")
					this->textBox3->BackColor = Color::Red;
				if (this->textBox4->Text == "")
					this->textBox4->BackColor = Color::Red;
				if (this->textBox5->Text == "")
					this->textBox5->BackColor = Color::Red;
			}

			else if (strcmp(ex.what(),"Вік не може бути від'ємним!") == 0 || strcmp(ex.what(), "Некоректні дані! Введіть будь ласка ціле число до 100!") == 0) {
				this->textBox4->BackColor = Color::Red;
				this->textBox4->Text = "";
			}
			else {
				this->textBox5->BackColor = Color::Red;
				this->textBox5->Text = "";
			}
			MessageBox::Show(gcnew String(ex.what()));
		}
		catch (...)
		{
			MessageBox::Show(gcnew String("Дані введено не коректно!"));
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (!File::Exists(this->textBox6->Text + ".bin"))
			throw exception("Файлу з таким іменем не існує!");
		FileStream^ fileStream = gcnew FileStream(this->textBox6->Text + ".bin", FileMode::Truncate);
		fileStream->Close();
		file File(this->textBox5->Text + ".bin");
		file newFile(this->textBox6->Text + ".bin");
		cli::array<Employee^>^ Arr = gcnew cli::array<Employee^>(File.GetSize());
		for (int i = 0; i < File.GetSize(); i++)
			Arr[i] = gcnew Employee;
		
		File.ReadFile(Arr);
		for (int i = 0; i < File.GetSize(); i++)
			if (Arr[i]->age >= 60) {
				newFile.SaveToFile(Arr[i]);
			}
		newFile.DisplayFile(richTextBox2);
		MessageBox::Show("Дані про працівників-пенсіонерів успішно збережені!");
	}
	catch (const exception& ex)
	{
		this->textBox6->Text = "";
		MessageBox::Show(gcnew String(ex.what()));
	}
	catch (...)
	{
		MessageBox::Show(gcnew String("Дані введено не коректно!"));
	}
}
};
}

