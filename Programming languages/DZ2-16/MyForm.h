 #pragma once
//#include "EditForm.h"
#include "About.h"

namespace dz2_16 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::ListBox^  listBox1;
	protected:
		int iSearch_costs = 0;
		int iSearch_reviews = 0;
		int iSearch_districts = 0;

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;

	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  оПрограммеToolStripMenuItem;



	private:




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 44);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(172, 277);
			this->listBox1->TabIndex = 0;
			this->listBox1->DoubleClick += gcnew System::EventHandler(this, &MyForm::listBox1_DoubleClick);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Районы:";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"jkh files (*.jkh)|*jkh";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"jkh";
			this->saveFileDialog1->Filter = L"jkh files (*.jkh)|*jkh";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(208, 44);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(551, 278);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(207, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Информация:";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->button15);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(783, 143);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(191, 131);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Редактирование списка районов";
			this->groupBox1->Visible = false;
			// 
			// button15
			// 
			this->button15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button15->Location = System::Drawing::Point(98, 45);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(87, 37);
			this->button15->TabIndex = 11;
			this->button15->Text = L"Поиск";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button10
			// 
			this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->button10->Location = System::Drawing::Point(6, 88);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(89, 37);
			this->button10->TabIndex = 10;
			this->button10->Text = L"Изменить выбранный";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click_1);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(98, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 37);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Удалить выбранный";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->button1->Location = System::Drawing::Point(6, 45);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 37);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(6, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(179, 20);
			this->textBox1->TabIndex = 7;
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->button14);
			this->groupBox2->Controls->Add(this->button13);
			this->groupBox2->Controls->Add(this->button12);
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->listBox3);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->listBox2);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Enabled = false;
			this->groupBox2->Location = System::Drawing::Point(12, 348);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(962, 286);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Редактировать информацию";
			this->groupBox2->Visible = false;
			// 
			// button14
			// 
			this->button14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button14->Location = System::Drawing::Point(854, 197);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(102, 78);
			this->button14->TabIndex = 17;
			this->button14->Text = L"Удалить выбранный";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button13
			// 
			this->button13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->button13->Location = System::Drawing::Point(753, 197);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(95, 78);
			this->button13->TabIndex = 16;
			this->button13->Text = L"Поиск";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->button12->Location = System::Drawing::Point(638, 197);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(109, 78);
			this->button12->TabIndex = 15;
			this->button12->Text = L"Изменить выбранный";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->button11->Location = System::Drawing::Point(532, 197);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(100, 78);
			this->button11->TabIndex = 14;
			this->button11->Text = L"Добавить";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->Location = System::Drawing::Point(532, 158);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(424, 33);
			this->textBox3->TabIndex = 13;
			// 
			// listBox3
			// 
			this->listBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(532, 57);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(424, 95);
			this->listBox3->TabIndex = 12;
			this->listBox3->DoubleClick += gcnew System::EventHandler(this, &MyForm::listBox3_DoubleClick);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(529, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Отзывы:";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(427, 197);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 47);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Поиск";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(62, 197);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(198, 47);
			this->textBox2->TabIndex = 7;
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->button6->Location = System::Drawing::Point(62, 249);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(440, 26);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Удалить выбранный";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(346, 197);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 47);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Изменить выбранный";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(265, 197);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 47);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Добавить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Расходы:";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(62, 57);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(440, 134);
			this->listBox2->TabIndex = 2;
			this->listBox2->DoubleClick += gcnew System::EventHandler(this, &MyForm::listBox2_DoubleClick);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(62, 24);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1316134912, 2328, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Бюджет:";
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Location = System::Drawing::Point(783, 44);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(191, 91);
			this->groupBox3->TabIndex = 11;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"База данных";
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button8->Location = System::Drawing::Point(6, 51);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(179, 23);
			this->button8->TabIndex = 1;
			this->button8->Text = L"Сохранить";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button7->Location = System::Drawing::Point(6, 19);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(179, 23);
			this->button7->TabIndex = 0;
			this->button7->Text = L"Загрузить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(783, 287);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(191, 34);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Редактировать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(1041, 100);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(816, 180);
			this->richTextBox2->TabIndex = 15;
			this->richTextBox2->Text = L"";
			this->richTextBox2->Visible = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->оПрограммеToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(994, 24);
			this->menuStrip1->TabIndex = 16;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(994, 647);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(1010, 377);
			this->Name = L"MyForm";
			this->Text = L"ЖКХ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void SaveChanges()
	{
		richTextBox1->Text = "Бюджет: \t\t" + numericUpDown1->Text;
		richTextBox1->Text += "\n\nРасходы:";
		for (int i = 0; i < listBox2->Items->Count; i++)
			richTextBox1->Text += "\n\t\t" + listBox2->Items[i];

		richTextBox1->Text += "\n\nОтзывы:";
		for (int i = 0; i < listBox3->Items->Count; i++)
			richTextBox1->Text += "\n\t\t" + listBox3->Items[i];
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		listBox1->Items->Add(textBox1->Text);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (listBox1->SelectedIndex == -1) {
			MessageBox::Show("Не выбран элемент", "Ошибка");
		}
		else 
			listBox1->Items->Remove(listBox1->SelectedItem);
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		if (button3->Text == "Применить изменения")
		{
			SaveChanges();

			MinimumSize = System::Drawing::Size(1010,377);
			Width = 1010;
			Height = 377;

			button3->Text = "Редактировать";
			button3->Font = gcnew System::Drawing::Font(this->Font, FontStyle::Regular);

			groupBox1->Visible = false;
			groupBox2->Enabled = false;
			groupBox2->Visible = false;

			button3->Anchor= static_cast<AnchorStyles>(AnchorStyles::Top | AnchorStyles::Left |AnchorStyles::Bottom | AnchorStyles::Right);
			richTextBox1->Anchor = static_cast<AnchorStyles>(AnchorStyles::Top | AnchorStyles::Left | AnchorStyles::Bottom);
			listBox1->Anchor = static_cast<AnchorStyles>(AnchorStyles::Top | AnchorStyles::Left | AnchorStyles::Bottom);
		}
		else
		{
			//Элементы в нормальный размер приводим
			Width = 1010;
			Height = 377;
			
			button3->Anchor = static_cast<AnchorStyles>(AnchorStyles::Top | AnchorStyles::Left | AnchorStyles::Right);
			richTextBox1->Anchor = static_cast<AnchorStyles>(AnchorStyles::Top | AnchorStyles::Left);
			listBox1->Anchor = static_cast<AnchorStyles>(AnchorStyles::Top | AnchorStyles::Left);

			MinimumSize = System::Drawing::Size(1010, 686);
			Width = 1010;
			Height = 686;

			button3->Text = "Применить изменения";
			button3->Font = gcnew System::Drawing::Font(this->Font, FontStyle::Bold);

			groupBox1->Visible = true;
			groupBox2->Enabled = true;
			groupBox2->Visible = true;
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		listBox2->Items->Add(textBox2->Text);
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		int i = listBox2->SelectedIndex;
		if (i == -1) {
			MessageBox::Show("Не выбран элемент", "Ошибка");
		}
		else {
			listBox2->Items->RemoveAt(i);
			listBox2->Items->Insert(i, textBox2->Text);
		}
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		if (listBox2->SelectedIndex == -1) {
			MessageBox::Show("Не выбран элемент", "Ошибка");
		}
		else 
		listBox2->Items->Remove(listBox2->SelectedItem);
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		for (int i = iSearch_costs; i < listBox2->Items->Count; i++) {
			String ^str = listBox2->Items[i]->ToString();
			if (str->Contains(textBox2->Text)) {
				listBox2->SetSelected(i, true);
				iSearch_costs = i + 1;
				break;
			}
		}
		if (iSearch_costs >= listBox2->Items->Count)
			iSearch_costs = 0;
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {

		Height = 717;
		Width = 782;
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		listBox3->Items->Add(textBox3->Text);
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		int i = listBox3->SelectedIndex;
		if (i == -1) {
			MessageBox::Show("Не выбран элемент", "Ошибка");
		}
		else {
			listBox3->Items->RemoveAt(i);
			listBox3->Items->Insert(i, textBox3->Text);
		}
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		for (int i = iSearch_reviews; i < listBox3->Items->Count; i++) {
			String ^str = listBox3->Items[i]->ToString();
			if (str->Contains(textBox3->Text)) {
				listBox3->SetSelected(i, true);
				iSearch_reviews = i + 1;
				break;
			}
		}
		if (iSearch_reviews >= listBox3->Items->Count)
			iSearch_reviews = 0;
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		if (listBox3->SelectedIndex == -1) {
			MessageBox::Show("Не выбран элемент", "Ошибка");
		}
		else
		listBox3->Items->Remove(listBox3->SelectedItem);
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		Width = 1010;
		Height = 377;
		button3->Anchor = static_cast<AnchorStyles>(AnchorStyles::Top | AnchorStyles::Left | AnchorStyles::Bottom | AnchorStyles::Right);
		richTextBox1->Anchor = static_cast<AnchorStyles>(AnchorStyles::Top | AnchorStyles::Left | AnchorStyles::Bottom);
		listBox1->Anchor = static_cast<AnchorStyles>(AnchorStyles::Top | AnchorStyles::Left | AnchorStyles::Bottom);

		SaveChanges();
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			richTextBox1->Clear();
			richTextBox2->Clear();
			listBox1->Items->Clear();
			listBox2->Items->Clear();
			listBox3->Items->Clear();

			richTextBox2->LoadFile(openFileDialog1->FileName);

			listBox1->Items->Clear();
			int count_districts = Convert::ToInt32(richTextBox2->Lines[0]);
			for (int i = 1; i < count_districts + 1; i++)
				listBox1->Items->Add(richTextBox2->Lines[i]);

			numericUpDown1->Value = Convert::ToInt64(richTextBox2->Lines[count_districts + 1]);

			int count_costs = Convert::ToInt32(richTextBox2->Lines[count_districts + 2]);
			for (int i = count_districts + 3; i < count_districts + count_costs + 3; i++)
				listBox2->Items->Add(richTextBox2->Lines[i]);

			int count_reviews = Convert::ToInt32(richTextBox2->Lines[count_districts + count_costs + 3]);
			for (int i = count_districts + count_costs + 4; i < count_districts + count_reviews + count_costs + 4; i++)
				listBox3->Items->Add(richTextBox2->Lines[i]);

			SaveChanges();

			Text = "ЖКХ - " + openFileDialog1->FileName;
		}
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			richTextBox2->Clear();
			richTextBox2->Text += listBox1->Items->Count;
			for (int i = 0; i < listBox1->Items->Count; i++)
				richTextBox2->Text += "\n" + listBox1->Items[i];

			richTextBox2->Text += "\n" + numericUpDown1->Text;

			richTextBox2->Text += "\n" + listBox2->Items->Count;
			for (int i = 0; i < listBox2->Items->Count; i++)
				richTextBox2->Text += "\n" + listBox2->Items[i];

			richTextBox2->Text += "\n" + listBox3->Items->Count;
			for (int i = 0; i < listBox3->Items->Count; i++)
				richTextBox2->Text += "\n" + listBox3->Items[i];

			richTextBox2->SaveFile(saveFileDialog1->FileName);
			Text = "ЖКХ - " + saveFileDialog1->FileName;
		}
	}
	private: System::Void button10_Click_1(System::Object^  sender, System::EventArgs^  e) {
		int i = listBox1->SelectedIndex;
		if (i == -1) {
			MessageBox::Show("Не выбран элемент", "Ошибка");
		}
		else {
			listBox1->Items->RemoveAt(i);
			listBox1->Items->Insert(i, textBox1->Text);
		}
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		for (int i = iSearch_districts; i < listBox1->Items->Count; i++) {
			String ^str = listBox1->Items[i]->ToString();
			if (str->Contains(textBox1->Text)) {
				listBox1->SetSelected(i, true);
				iSearch_districts = i + 1;
				break;
			}
		}
		if (iSearch_districts >= listBox1->Items->Count)
			iSearch_districts = 0;
	}
	private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		About ^ Form_About = gcnew About;
		Form_About->Show();
	}
	private: System::Void listBox1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		if (listBox1->SelectedIndex != -1)
			textBox1->Text = listBox1->SelectedItem->ToString();
	}
	private: System::Void listBox2_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		if (listBox2->SelectedIndex != -1)
			textBox2->Text = listBox2->SelectedItem->ToString();
	}
	private: System::Void listBox3_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		if (listBox3->SelectedIndex != -1)
			textBox3->Text = listBox3->SelectedItem->ToString();
	}
};
}

