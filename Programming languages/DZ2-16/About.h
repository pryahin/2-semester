#pragma once

namespace dz2_16 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для About
	/// </summary>
	public ref class About : public System::Windows::Forms::Form
	{
	public:
		About(void)
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
		~About()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Загрузка дынных", L"Сохранение данных", L"Добавление элементов",
					L"Изменение элементов", L"Поиск элементов", L"Удаление элементов"
			});
			this->listBox1->Location = System::Drawing::Point(12, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(156, 381);
			this->listBox1->TabIndex = 0;
			this->listBox1->Click += gcnew System::EventHandler(this, &About::listBox1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->Location = System::Drawing::Point(174, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(353, 381);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"Для загрузки базы данных, в разделе \"База данных\" нажмите на кнопку \"Загрузить\", "
				L"выберите файл формата \".jkh\", и нажмите \"Открыть\".";
			// 
			// About
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 398);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->listBox1);
			this->MaximizeBox = false;
			this->Name = L"About";
			this->Text = L"About";
			this->Load += gcnew System::EventHandler(this, &About::About_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listBox1_Click(System::Object^  sender, System::EventArgs^  e) {

		switch (listBox1->SelectedIndex)
		{
		case 0: richTextBox1->Text = "Для загрузки базы данных, в разделе \"База данных\" нажмите на кнопку \"Загрузить\", выберите файл формата \".jkh\", и нажмите \"Открыть\"."; break;
		case 1: richTextBox1->Text = "Для сохранения базы данных, в разделе \"База данных\" нажмите на кнопку \"Сохранить\", введите название файла, и нажмите \"Сохранить\". Если вы делали изменения, не забудьте их применить."; break;
		case 2: richTextBox1->Text = "Для начала нажмите на кнопку \"Редактировать\".\nРядом с каждым блоком редактирования есть поле для ввода данных. Введите в это поле название элемента, который хотите добавить, и нажмите кнопку на \"Добавить\".\nПосле всех изменений нажмите на кнопку \"Применить изменения\"."; break;
		case 3: richTextBox1->Text = "Для начала нажмите на кнопку \"Редактировать\".\nВыберите элемент, который хотите изменить. Рядом с каждым блоком редактирования есть поле для ввода данных. Введите в это поле, то, что должно остаться после редактирования, и нажмите на кнопку \"Изменить выбранный\". Для удобства, по двойному клику по нужному элементу, он будет копироваться в поле ввода.\nПосле всех изменений нажмите на кнопку \"Применить изменения\"."; break;
		case 4: richTextBox1->Text = "Для начала нажмите на кнопку \"Редактировать\".\nРядом с каждым блоком редактирования есть поле для ввода данных. Введите в это поле название элемента, который хотите найти, и нажмите кнопку \"Поиск\".\nПосле всех изменений нажмите на кнопку \"Применить изменения\"."; break;
		case 5: richTextBox1->Text = "Для начала нажмите на кнопку \"Редактировать\".\nВыберите элемент, который хотите удалить, и нажмите на кнопку \"Удалить выбранный\".\nПосле всех изменений нажмите на кнопку \"Применить изменения\"."; break;
		default:
			break;
		}
	}
	private: System::Void About_Load(System::Object^  sender, System::EventArgs^  e) {
		listBox1->SetSelected(0, true);
	}
	};
}
