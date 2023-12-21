#pragma once
#include "PointSet.cpp"
#include <iostream>
#include<vcclr.h>

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PonterForm
	/// </summary>
	public ref class PonterForm : public System::Windows::Forms::Form
	{
	public:
		PonterForm(void)
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
		~PonterForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^ JUDUL;

	private: System::Windows::Forms::TextBox^ InputUser;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxHasil;
	private: System::Windows::Forms::TextBox^ textBoxHasil2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;


	protected:

	protected:

	protected:

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
			this->InputUser = (gcnew System::Windows::Forms::TextBox());
			this->JUDUL = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxHasil = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHasil2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// InputUser
			// 
			this->InputUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->InputUser->Location = System::Drawing::Point(151, 125);
			this->InputUser->Name = L"InputUser";
			this->InputUser->Size = System::Drawing::Size(361, 30);
			this->InputUser->TabIndex = 1;
			this->InputUser->TextChanged += gcnew System::EventHandler(this, &PonterForm::textBox1_TextChanged);
			// 
			// JUDUL
			// 
			this->JUDUL->AutoSize = true;
			this->JUDUL->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20));
			this->JUDUL->Location = System::Drawing::Point(260, 23);
			this->JUDUL->Name = L"JUDUL";
			this->JUDUL->Size = System::Drawing::Size(113, 31);
			this->JUDUL->TabIndex = 1;
			this->JUDUL->Text = L"POINTER";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(147, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Input User";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(147, 181);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 24);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Hasil";
			// 
			// textBoxHasil
			// 
			this->textBoxHasil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBoxHasil->Location = System::Drawing::Point(151, 219);
			this->textBoxHasil->Name = L"textBoxHasil";
			this->textBoxHasil->ReadOnly = true;
			this->textBoxHasil->Size = System::Drawing::Size(361, 30);
			this->textBoxHasil->TabIndex = 1;
			this->textBoxHasil->TextChanged += gcnew System::EventHandler(this, &PonterForm::textBox1_TextChanged);
			// 
			// textBoxHasil2
			// 
			this->textBoxHasil2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBoxHasil2->Location = System::Drawing::Point(151, 259);
			this->textBoxHasil2->Name = L"textBoxHasil2";
			this->textBoxHasil2->ReadOnly = true;
			this->textBoxHasil2->Size = System::Drawing::Size(361, 30);
			this->textBoxHasil2->TabIndex = 1;
			this->textBoxHasil2->TextChanged += gcnew System::EventHandler(this, &PonterForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(26, 218);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Show";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PonterForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(141, 301);
			this->panel1->TabIndex = 0;
			// 
			// PonterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(524, 301);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->JUDUL);
			this->Controls->Add(this->textBoxHasil2);
			this->Controls->Add(this->textBoxHasil);
			this->Controls->Add(this->InputUser);
			this->Controls->Add(this->panel1);
			this->Name = L"PonterForm";
			this->Text = L"PonterForm";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int angka = 10;
		// int* pangka = &angka;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Membuat pointer
		// int* myPointer = new int(42);
		int* myPointer = new int(Convert::ToInt32(InputUser->Text));

		// Mengonversi pointer ke dalam string menggunakan .NET Framework
		String^ pointerString = String::Format("Nilai pointer: {0}", IntPtr(myPointer).ToString("X"));


		// tampilkan nilai yang ada pada pointer
		long long integerValue = IntPtr(myPointer).ToInt64();


		// Menampilkan string yang berisi nilai pointer
		textBoxHasil->Text = pointerString;
		// textBoxHasil->Text = Convert::ToString(integerValue);
		textBoxHasil2->Text = Convert::ToString(*myPointer);

		// Membersihkan alokasi memori
		delete myPointer;

		// ====================================

		// Convert an integer to a pointer
		// int integerValue = 42;
		// IntPtr intptrValue(integerValue);

		// Convert back to an integer
		// int convertedValue = static_cast<int>(intptrValue.ToInt32());

		// Display the results
		// textBoxHasil->Text = "Original Integer Value: {0}" + integerValue;
		// textBoxHasil->Text = "Converted Integer Value: {0}" + convertedValue;

		// display the pointer
		// String^ pointerString = String::Format("Nilai pointer: {0}", intptrValue.ToString("X"));
		// textBoxHasil2->Text = pointerString;

		// ==========================================

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
	}

};
}
