#pragma once

namespace dz2_16 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� About
	/// </summary>
	public ref class About : public System::Windows::Forms::Form
	{
	public:
		About(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
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
				L"�������� ������", L"���������� ������", L"���������� ���������",
					L"��������� ���������", L"����� ���������", L"�������� ���������"
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
			this->richTextBox1->Text = L"��� �������� ���� ������, � ������� \"���� ������\" ������� �� ������ \"���������\", "
				L"�������� ���� ������� \".jkh\", � ������� \"�������\".";
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
		case 0: richTextBox1->Text = "��� �������� ���� ������, � ������� \"���� ������\" ������� �� ������ \"���������\", �������� ���� ������� \".jkh\", � ������� \"�������\"."; break;
		case 1: richTextBox1->Text = "��� ���������� ���� ������, � ������� \"���� ������\" ������� �� ������ \"���������\", ������� �������� �����, � ������� \"���������\". ���� �� ������ ���������, �� �������� �� ���������."; break;
		case 2: richTextBox1->Text = "��� ������ ������� �� ������ \"�������������\".\n����� � ������ ������ �������������� ���� ���� ��� ����� ������. ������� � ��� ���� �������� ��������, ������� ������ ��������, � ������� ������ �� \"��������\".\n����� ���� ��������� ������� �� ������ \"��������� ���������\"."; break;
		case 3: richTextBox1->Text = "��� ������ ������� �� ������ \"�������������\".\n�������� �������, ������� ������ ��������. ����� � ������ ������ �������������� ���� ���� ��� ����� ������. ������� � ��� ����, ��, ��� ������ �������� ����� ��������������, � ������� �� ������ \"�������� ���������\". ��� ��������, �� �������� ����� �� ������� ��������, �� ����� ������������ � ���� �����.\n����� ���� ��������� ������� �� ������ \"��������� ���������\"."; break;
		case 4: richTextBox1->Text = "��� ������ ������� �� ������ \"�������������\".\n����� � ������ ������ �������������� ���� ���� ��� ����� ������. ������� � ��� ���� �������� ��������, ������� ������ �����, � ������� ������ \"�����\".\n����� ���� ��������� ������� �� ������ \"��������� ���������\"."; break;
		case 5: richTextBox1->Text = "��� ������ ������� �� ������ \"�������������\".\n�������� �������, ������� ������ �������, � ������� �� ������ \"������� ���������\".\n����� ���� ��������� ������� �� ������ \"��������� ���������\"."; break;
		default:
			break;
		}
	}
	private: System::Void About_Load(System::Object^  sender, System::EventArgs^  e) {
		listBox1->SetSelected(0, true);
	}
	};
}
