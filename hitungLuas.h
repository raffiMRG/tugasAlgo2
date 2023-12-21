#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for hitungLuas
	/// </summary>
	public ref class hitungLuas : public System::Windows::Forms::Form
	{
	public:
		hitungLuas(void)
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
		~hitungLuas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel;
	private: System::Windows::Forms::Button^ execute;
	protected:

	private: System::Windows::Forms::Button^ persegi;



	private: System::Windows::Forms::Label^ judul;
	private: System::Windows::Forms::Panel^ panelPersegi;

	private: System::Windows::Forms::Button^ segiTiga;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ persegiLuas;

	private: System::Windows::Forms::NumericUpDown^ persegiL;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ persegiP;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panelSegi3;
	private: System::Windows::Forms::TextBox^ segiTigaLuas;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ segiTigaT;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ segiTigaP;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;











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
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->judul = (gcnew System::Windows::Forms::Label());
			this->execute = (gcnew System::Windows::Forms::Button());
			this->segiTiga = (gcnew System::Windows::Forms::Button());
			this->persegi = (gcnew System::Windows::Forms::Button());
			this->panelPersegi = (gcnew System::Windows::Forms::Panel());
			this->persegiLuas = (gcnew System::Windows::Forms::TextBox());
			this->persegiL = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->persegiP = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelSegi3 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->segiTigaLuas = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->segiTigaT = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->segiTigaP = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel->SuspendLayout();
			this->panelPersegi->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->persegiL))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->persegiP))->BeginInit();
			this->panelSegi3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->segiTigaT))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->segiTigaP))->BeginInit();
			this->SuspendLayout();
			// 
			// panel
			// 
			this->panel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel->Controls->Add(this->judul);
			this->panel->Controls->Add(this->execute);
			this->panel->Controls->Add(this->segiTiga);
			this->panel->Controls->Add(this->persegi);
			this->panel->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->panel->Location = System::Drawing::Point(0, 0);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(200, 377);
			this->panel->TabIndex = 1;
			// 
			// judul
			// 
			this->judul->AutoSize = true;
			this->judul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->judul->Location = System::Drawing::Point(22, 9);
			this->judul->Name = L"judul";
			this->judul->Size = System::Drawing::Size(159, 31);
			this->judul->TabIndex = 2;
			this->judul->Text = L"Hitung Luas";
			// 
			// execute
			// 
			this->execute->Location = System::Drawing::Point(96, 260);
			this->execute->Name = L"execute";
			this->execute->Size = System::Drawing::Size(85, 50);
			this->execute->TabIndex = 2;
			this->execute->Text = L"Hitung";
			this->execute->UseVisualStyleBackColor = true;
			this->execute->Click += gcnew System::EventHandler(this, &hitungLuas::tambah_Click);
			// 
			// segiTiga
			// 
			this->segiTiga->Location = System::Drawing::Point(17, 129);
			this->segiTiga->Name = L"segiTiga";
			this->segiTiga->Size = System::Drawing::Size(164, 46);
			this->segiTiga->TabIndex = 2;
			this->segiTiga->Text = L"Segi Tiga";
			this->segiTiga->UseVisualStyleBackColor = true;
			this->segiTiga->Click += gcnew System::EventHandler(this, &hitungLuas::segiTiga_Click);
			// 
			// persegi
			// 
			this->persegi->Location = System::Drawing::Point(17, 77);
			this->persegi->Name = L"persegi";
			this->persegi->Size = System::Drawing::Size(164, 46);
			this->persegi->TabIndex = 2;
			this->persegi->Text = L"Persegi";
			this->persegi->UseVisualStyleBackColor = true;
			this->persegi->Click += gcnew System::EventHandler(this, &hitungLuas::cari_Click);
			// 
			// panelPersegi
			// 
			this->panelPersegi->BackColor = System::Drawing::Color::LightGray;
			this->panelPersegi->Controls->Add(this->label8);
			this->panelPersegi->Controls->Add(this->persegiLuas);
			this->panelPersegi->Controls->Add(this->persegiL);
			this->panelPersegi->Controls->Add(this->label2);
			this->panelPersegi->Controls->Add(this->persegiP);
			this->panelPersegi->Controls->Add(this->label3);
			this->panelPersegi->Controls->Add(this->label1);
			this->panelPersegi->Location = System::Drawing::Point(200, 0);
			this->panelPersegi->Name = L"panelPersegi";
			this->panelPersegi->Size = System::Drawing::Size(296, 365);
			this->panelPersegi->TabIndex = 2;
			this->panelPersegi->Visible = false;
			// 
			// persegiLuas
			// 
			this->persegiLuas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->persegiLuas->Location = System::Drawing::Point(23, 268);
			this->persegiLuas->Multiline = true;
			this->persegiLuas->Name = L"persegiLuas";
			this->persegiLuas->ReadOnly = true;
			this->persegiLuas->Size = System::Drawing::Size(506, 77);
			this->persegiLuas->TabIndex = 3;
			// 
			// persegiL
			// 
			this->persegiL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->persegiL->Location = System::Drawing::Point(23, 158);
			this->persegiL->Name = L"persegiL";
			this->persegiL->Size = System::Drawing::Size(129, 30);
			this->persegiL->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(18, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Lebar";
			// 
			// persegiP
			// 
			this->persegiP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->persegiP->Location = System::Drawing::Point(23, 77);
			this->persegiP->Name = L"persegiP";
			this->persegiP->Size = System::Drawing::Size(129, 30);
			this->persegiP->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label3->Location = System::Drawing::Point(18, 237);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 25);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Luas";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(18, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Panjang";
			// 
			// panelSegi3
			// 
			this->panelSegi3->Controls->Add(this->label7);
			this->panelSegi3->Controls->Add(this->segiTigaLuas);
			this->panelSegi3->Controls->Add(this->label6);
			this->panelSegi3->Controls->Add(this->segiTigaT);
			this->panelSegi3->Controls->Add(this->label4);
			this->panelSegi3->Controls->Add(this->segiTigaP);
			this->panelSegi3->Controls->Add(this->label5);
			this->panelSegi3->Location = System::Drawing::Point(200, 0);
			this->panelSegi3->Name = L"panelSegi3";
			this->panelSegi3->Size = System::Drawing::Size(264, 188);
			this->panelSegi3->TabIndex = 3;
			this->panelSegi3->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label7->Location = System::Drawing::Point(213, 15);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(96, 25);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Segi Tiga";
			// 
			// segiTigaLuas
			// 
			this->segiTigaLuas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->segiTigaLuas->Location = System::Drawing::Point(23, 260);
			this->segiTigaLuas->Multiline = true;
			this->segiTigaLuas->Name = L"segiTigaLuas";
			this->segiTigaLuas->ReadOnly = true;
			this->segiTigaLuas->Size = System::Drawing::Size(506, 77);
			this->segiTigaLuas->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label6->Location = System::Drawing::Point(18, 229);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 25);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Luas";
			// 
			// segiTigaT
			// 
			this->segiTigaT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->segiTigaT->Location = System::Drawing::Point(23, 158);
			this->segiTigaT->Name = L"segiTigaT";
			this->segiTigaT->Size = System::Drawing::Size(129, 30);
			this->segiTigaT->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label4->Location = System::Drawing::Point(18, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Lebar";
			// 
			// segiTigaP
			// 
			this->segiTigaP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->segiTigaP->Location = System::Drawing::Point(23, 77);
			this->segiTigaP->Name = L"segiTigaP";
			this->segiTigaP->Size = System::Drawing::Size(129, 30);
			this->segiTigaP->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label5->Location = System::Drawing::Point(18, 49);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Panjang";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::LightGray;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label8->Location = System::Drawing::Point(231, 15);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 25);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Persegi";
			// 
			// hitungLuas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(763, 377);
			this->Controls->Add(this->panelSegi3);
			this->Controls->Add(this->panelPersegi);
			this->Controls->Add(this->panel);
			this->Name = L"hitungLuas";
			this->Text = L"hitungLuas";
			this->panel->ResumeLayout(false);
			this->panel->PerformLayout();
			this->panelPersegi->ResumeLayout(false);
			this->panelPersegi->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->persegiL))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->persegiP))->EndInit();
			this->panelSegi3->ResumeLayout(false);
			this->panelSegi3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->segiTigaT))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->segiTigaP))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	double hasil = 0;
	int oprasi;

	private: System::Void cari_Click(System::Object^ sender, System::EventArgs^ e) {
		panelPersegi->Visible = true;
		panelPersegi->Dock = DockStyle::Fill;
		panelSegi3->Visible = false;
		oprasi = 1;
	}

	private: System::Void segiTiga_Click(System::Object^ sender, System::EventArgs^ e) {
		panelSegi3->Visible = true;
		panelSegi3->Dock = DockStyle::Fill;
		panelPersegi->Visible = false;
		oprasi = 2;

	}

	private: System::Void tambah_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (oprasi)
		{
		case 1:
			if (!String::IsNullOrWhiteSpace(persegiP->Text) && !String::IsNullOrWhiteSpace(persegiL->Text)) {
				hasil = Convert::ToInt32(persegiP->Text) * Convert::ToInt32(persegiL->Text);
				persegiLuas->Text = Convert::ToString(hasil);
			}
			// return this->hasil;
			break;
		case 2:
			if (!String::IsNullOrWhiteSpace(segiTigaP->Text) && !String::IsNullOrWhiteSpace(segiTigaT->Text)) {
				hasil = Convert::ToInt32(segiTigaP->Text) * Convert::ToInt32(segiTigaT->Text) * 0.5;
				segiTigaLuas->Text = Convert::ToString(hasil);
			}
			// return this->hasil;
			break;
		default:
			break;
		}
	}
};
}