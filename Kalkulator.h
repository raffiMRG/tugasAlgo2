#pragma once
#include "Calculate.cpp"

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for Kalkulator
	/// </summary>
	public ref class Kalkulator : public System::Windows::Forms::Form
	{
	public:
		Kalkulator(void)
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
		~Kalkulator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;

	private: System::Windows::Forms::Button^ button14;

	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Label^ label1;



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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox1->Location = System::Drawing::Point(12, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(294, 30);
			this->textBox1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button2->Location = System::Drawing::Point(13, 137);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(59, 43);
			this->button2->TabIndex = 1;
			this->button2->Text = L"1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Kalkulator::btn1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->Location = System::Drawing::Point(92, 137);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"2";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Kalkulator::btn2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button3->Location = System::Drawing::Point(169, 137);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(59, 43);
			this->button3->TabIndex = 1;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Kalkulator::btn3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button4->Location = System::Drawing::Point(248, 137);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(59, 43);
			this->button4->TabIndex = 1;
			this->button4->Text = L"X";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Kalkulator::btnKali_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button5->Location = System::Drawing::Point(13, 198);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(59, 43);
			this->button5->TabIndex = 1;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Kalkulator::btn4_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button6->Location = System::Drawing::Point(92, 198);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(59, 43);
			this->button6->TabIndex = 1;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Kalkulator::btn5_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button7->Location = System::Drawing::Point(169, 198);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(59, 43);
			this->button7->TabIndex = 1;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Kalkulator::btn6_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button8->Location = System::Drawing::Point(248, 198);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(59, 43);
			this->button8->TabIndex = 1;
			this->button8->Text = L":";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Kalkulator::btnBagi_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button9->Location = System::Drawing::Point(13, 256);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(59, 43);
			this->button9->TabIndex = 1;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Kalkulator::btn7_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button10->Location = System::Drawing::Point(92, 256);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(59, 43);
			this->button10->TabIndex = 1;
			this->button10->Text = L"8";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Kalkulator::btn8_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button11->Location = System::Drawing::Point(169, 256);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(59, 43);
			this->button11->TabIndex = 1;
			this->button11->Text = L"9";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Kalkulator::btn9_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button12->Location = System::Drawing::Point(248, 256);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(59, 43);
			this->button12->TabIndex = 1;
			this->button12->Text = L"+";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Kalkulator::btnTambah_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button14->Location = System::Drawing::Point(13, 314);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(101, 43);
			this->button14->TabIndex = 1;
			this->button14->Text = L"0";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Kalkulator::btn0_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button16->Location = System::Drawing::Point(248, 314);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(59, 43);
			this->button16->TabIndex = 1;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Kalkulator::btnKurang_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button17->Location = System::Drawing::Point(134, 314);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(94, 43);
			this->button17->TabIndex = 1;
			this->button17->Text = L"=";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Kalkulator::btnSama_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(12, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 2;
			// 
			// Kalkulator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(319, 385);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Kalkulator";
			this->Text = L"Kalkulator";
			this->Click += gcnew System::EventHandler(this, &Kalkulator::btn2_Click);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// Calculate newCalcu;
		

		
	
// private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
// 	 label1->Text = textBox1->Text;
 // }

private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "1";
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "2";
	// label1->Text = "BERHASIL";
}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "3";
}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "4";
}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "5";
}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "6";
}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "7";
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "8";
}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "9";
}
private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "0";
}

// oprator

	   int hasil = NOT_SET;
	   int inputUser;
	   int oprator = 0;

private: System::Void btnKali_Click(System::Object^ sender, System::EventArgs^ e) {
	// chek apakah textBox kosong atau tidak
	if (String::IsNullOrWhiteSpace(textBox1->Text)) {
		label1->Text = "kosong";
	}
	// jika text box tidak kosong maka: 
	else {
		// instansiasi kelas Calculate kemudian set nilai yg di input ke dalam variabel 
		inputUser = System::Convert::ToInt32(textBox1->Text);
		inputOP(1);

		// SETTING TULISAN LABEL
		// jika label bertuliskan "kosong" atau "", maka: 
		if (label1->Text == "kosong" || label1->Text == "") {
			// ubah tulisan label menjadi seperti tulisan text box
 			oprator = 1;
			label1->Text = System::Convert::ToString(oprasi()) + " x ";
			textBox1->Text = "";
		}
		// jika tidak maka
		else {
			// ubah tulisan label menjadi seperti tulisan label x text box
			label1->Text = System::Convert::ToString(oprasi()) + " x ";
			textBox1->Text = "";

		}
		inputOP(1);
	}
}
private: System::Void btnBagi_Click(System::Object^ sender, System::EventArgs^ e) {
	// chek apakah textBox kosong atau tidak
	if (String::IsNullOrWhiteSpace(textBox1->Text)) {
		label1->Text = "kosong";
	}
	// jika text box tidak kosong maka: 
	else {
		// instansiasi kelas Calculate kemudian set nilai yg di input ke dalam variabel 
		inputUser = System::Convert::ToInt32(textBox1->Text);
		inputOP(2);


		// SETTING TULISAN LABEL
		// jika label bertuliskan "kosong" atau "", maka: 
		if (label1->Text == "kosong" || label1->Text == "") {
			// ubah tulisan label menjadi seperti tulisan text box
			label1->Text = System::Convert::ToString(oprasi()) + " : ";
			textBox1->Text = "";
		}
		// jika tidak maka
		else {
			// ubah tulisan label menjadi seperti tulisan label x text box
			label1->Text = System::Convert::ToString(oprasi()) + " : ";
			textBox1->Text = "";

		}
		inputOP(2);
	}
}

private: System::Void btnTambah_Click(System::Object^ sender, System::EventArgs^ e) {
	// chek apakah textBox kosong atau tidak
	if (String::IsNullOrWhiteSpace(textBox1->Text)) {
		label1->Text = "kosong";
	}
	// jika text box tidak kosong maka: 
	else {
		// instansiasi kelas Calculate kemudian set nilai yg di input ke dalam variabel 
		inputUser = System::Convert::ToInt32(textBox1->Text);
		inputOP(3);


		// SETTING TULISAN LABEL
		// jika label bertuliskan "kosong" atau "", maka: 
		if (label1->Text == "kosong" || label1->Text == "") {
			// ubah tulisan label menjadi seperti tulisan text box
			label1->Text = System::Convert::ToString(oprasi()) + " + ";
			textBox1->Text = "";
		}
		// jika tidak maka
		else {
			// ubah tulisan label menjadi seperti tulisan label x text box
			label1->Text = System::Convert::ToString(oprasi()) + " + ";
			textBox1->Text = "";

		}
		inputOP(3);
	}
}
private: System::Void btnKurang_Click(System::Object^ sender, System::EventArgs^ e) {
	// chek apakah textBox kosong atau tidak
	if (String::IsNullOrWhiteSpace(textBox1->Text)) {
		label1->Text = "kosong";
	}
	// jika text box tidak kosong maka: 
	else {
		// instansiasi kelas Calculate kemudian set nilai yg di input ke dalam variabel 
		inputUser = System::Convert::ToInt32(textBox1->Text);
		inputOP(4);


		// SETTING TULISAN LABEL
		// jika label bertuliskan "kosong" atau "", maka: 
		if (label1->Text == "kosong" || label1->Text == "") {
			// ubah tulisan label menjadi seperti tulisan text box
			label1->Text = System::Convert::ToString(oprasi()) + " - ";
			textBox1->Text = "";
		}
		// jika tidak maka
		else {
			// ubah tulisan label menjadi seperti tulisan label x text box
			label1->Text = System::Convert::ToString(oprasi()) + " - ";
			textBox1->Text = "";

		}
		inputOP(4);
	}
}
private: System::Void btnSama_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(textBox1->Text)) {
		textBox1->Text = System::Convert::ToString(this->hasil);
		// label2->Text = System::Convert::ToString(this->hasil);
	}
	else
	{
		inputUser = System::Convert::ToInt32(textBox1->Text);

		label1->Text = label1->Text + textBox1->Text;

		textBox1->Text = System::Convert::ToString(oprasi());

	}
	this->oprator = 0;
	this-> hasil = NOT_SET;

	 // newCalcu.inputUser = System::Convert::ToInt32(textBox1->Text);
}

	   int samaDengan() {
		   if (hasil == NOT_SET) {
			   return 0;
		   }
		   return this->hasil;
	   }

	   void inputOP(int op) {
		   if (this->oprator == 0) {
			   this->oprator = op;
		   }
	   }

	   int oprasi() {
		   if (hasil == NOT_SET) {
			   this->hasil = this->inputUser;
		   }
		   else {
			   switch (this->oprator)
			   {
			   case 1:
				   this->hasil = this->hasil * this->inputUser;
				   this->oprator = 0;
				   // return this->hasil;
				   break;
			   case 2:
				   this->hasil = this->hasil / this->inputUser;
				   this->oprator = 0;
				   // return this->hasil;
				   break;
			   case 3:
				   this->hasil = this->hasil + this->inputUser;
				   this->oprator = 0;
				   // return this->hasil;
				   break;
			   case 4:
				   this->hasil = this->hasil - this->inputUser;
				   this->oprator = 0;
				   // return this->hasil;
				   break;
			   default:
				   this->hasil = this->inputUser;
				   break;
			   }
		   }
		   return this->hasil;
	   }



};
}
