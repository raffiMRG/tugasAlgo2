#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for sequentSeach
	/// </summary>
	public ref class sequentSeach : public System::Windows::Forms::Form
	{
	public:
		sequentSeach(void)
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
		~sequentSeach()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ formInput;
	private: System::Windows::Forms::TextBox^ Hasil;


	private: System::Windows::Forms::Button^ sort;

	private: System::Windows::Forms::TextBox^ inputUser;




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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->inputUser = (gcnew System::Windows::Forms::TextBox());
			this->sort = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->formInput = (gcnew System::Windows::Forms::TextBox());
			this->Hasil = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->inputUser);
			this->panel1->Controls->Add(this->sort);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(205, 482);
			this->panel1->TabIndex = 0;
			// 
			// inputUser
			// 
			this->inputUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->inputUser->Location = System::Drawing::Point(18, 109);
			this->inputUser->Name = L"inputUser";
			this->inputUser->Size = System::Drawing::Size(172, 30);
			this->inputUser->TabIndex = 3;
			// 
			// sort
			// 
			this->sort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->sort->Location = System::Drawing::Point(18, 175);
			this->sort->Name = L"sort";
			this->sort->Size = System::Drawing::Size(105, 35);
			this->sort->TabIndex = 2;
			this->sort->Text = L"Search";
			this->sort->UseVisualStyleBackColor = true;
			this->sort->Click += gcnew System::EventHandler(this, &sequentSeach::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->Location = System::Drawing::Point(129, 175);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &sequentSeach::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label4->Location = System::Drawing::Point(13, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 25);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Masukan Nilai";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(357, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(240, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Sequentsial Seach";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(211, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Input User";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label3->Location = System::Drawing::Point(211, 258);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Hasil";
			// 
			// formInput
			// 
			this->formInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->formInput->Location = System::Drawing::Point(216, 99);
			this->formInput->Multiline = true;
			this->formInput->Name = L"formInput";
			this->formInput->Size = System::Drawing::Size(525, 125);
			this->formInput->TabIndex = 1;
			// 
			// Hasil
			// 
			this->Hasil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Hasil->Location = System::Drawing::Point(216, 286);
			this->Hasil->Multiline = true;
			this->Hasil->Name = L"Hasil";
			this->Hasil->ReadOnly = true;
			this->Hasil->Size = System::Drawing::Size(525, 140);
			this->Hasil->TabIndex = 1;
			// 
			// sequentSeach
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 482);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Hasil);
			this->Controls->Add(this->formInput);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Name = L"sequentSeach";
			this->Text = L"Hasil";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!String::IsNullOrWhiteSpace(inputUser->Text)) {
			if (String::IsNullOrWhiteSpace(formInput->Text)) {
				formInput->Text = inputUser->Text;
				inputUser->Text = "";
			}
			else {
				formInput->Text = formInput->Text + "," + inputUser->Text;
				inputUser->Text = "";
			}
		}
	}

	bool is_found = false;
	int indexFound = 0;
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// int data = System::Convert::ToInt32(formInput->Text->Split(', '));

		// String^ data = System::Convert::ToString(formInput->Text->Split(', '));
		String^ data = formInput->Text;
		array<String^>^ dataArr = data->Split(',');
		if (String::IsNullOrWhiteSpace(inputUser->Text)) {
			Hasil->Text = "MASUKAN NILAI TERLEBIHDAHULU!!!";
		}else{
			for (int i = 0; i < dataArr->Length; i++) {
				if (dataArr[i] == inputUser->Text) {
					is_found = true;
						indexFound = i;
				}
			}
			if (is_found) {
				Hasil->Text = "NILAI " + inputUser->Text + " DI TEMUKAN PADA INDEKS KE-" + indexFound;
			}
			else {
				Hasil->Text = "NILAI " + inputUser->Text + " TIDAK DI TEMUKAN!!!!";
			}
		}
	}
};
}