#pragma once
#include <algorithm>

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for binSearch
	/// </summary>
	public ref class binSearch : public System::Windows::Forms::Form
	{
	public:
		binSearch(void)
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
		~binSearch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel;
	private: System::Windows::Forms::TextBox^ inputUser;
	protected:


	protected:

	private: System::Windows::Forms::Label^ judul;
	private: System::Windows::Forms::Button^ tambah;
	private: System::Windows::Forms::Button^ cari;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ formLabel;
	private: System::Windows::Forms::TextBox^ formInput;


	private: System::Windows::Forms::TextBox^ hasil;
	private: System::Windows::Forms::Label^ label2;

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
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->tambah = (gcnew System::Windows::Forms::Button());
			this->cari = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->inputUser = (gcnew System::Windows::Forms::TextBox());
			this->judul = (gcnew System::Windows::Forms::Label());
			this->formLabel = (gcnew System::Windows::Forms::Label());
			this->formInput = (gcnew System::Windows::Forms::TextBox());
			this->hasil = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel
			// 
			this->panel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel->Controls->Add(this->tambah);
			this->panel->Controls->Add(this->cari);
			this->panel->Controls->Add(this->label1);
			this->panel->Controls->Add(this->inputUser);
			this->panel->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->panel->Location = System::Drawing::Point(0, 0);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(200, 398);
			this->panel->TabIndex = 0;
			// 
			// tambah
			// 
			this->tambah->Location = System::Drawing::Point(122, 170);
			this->tambah->Name = L"tambah";
			this->tambah->Size = System::Drawing::Size(59, 32);
			this->tambah->TabIndex = 2;
			this->tambah->Text = L"Add";
			this->tambah->UseVisualStyleBackColor = true;
			this->tambah->Click += gcnew System::EventHandler(this, &binSearch::tambah_Click);
			// 
			// cari
			// 
			this->cari->Location = System::Drawing::Point(17, 170);
			this->cari->Name = L"cari";
			this->cari->Size = System::Drawing::Size(99, 32);
			this->cari->TabIndex = 2;
			this->cari->Text = L"Search";
			this->cari->UseVisualStyleBackColor = true;
			this->cari->Click += gcnew System::EventHandler(this, &binSearch::cari_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Masukan Nilai";
			// 
			// inputUser
			// 
			this->inputUser->Location = System::Drawing::Point(13, 111);
			this->inputUser->Name = L"inputUser";
			this->inputUser->Size = System::Drawing::Size(168, 30);
			this->inputUser->TabIndex = 0;
			// 
			// judul
			// 
			this->judul->AutoSize = true;
			this->judul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->judul->Location = System::Drawing::Point(381, 19);
			this->judul->Name = L"judul";
			this->judul->Size = System::Drawing::Size(184, 31);
			this->judul->TabIndex = 1;
			this->judul->Text = L"Binary Search";
			// 
			// formLabel
			// 
			this->formLabel->AutoSize = true;
			this->formLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->formLabel->Location = System::Drawing::Point(215, 69);
			this->formLabel->Name = L"formLabel";
			this->formLabel->Size = System::Drawing::Size(115, 25);
			this->formLabel->TabIndex = 1;
			this->formLabel->Text = L"Data Angka";
			// 
			// formInput
			// 
			this->formInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->formInput->Location = System::Drawing::Point(220, 97);
			this->formInput->Multiline = true;
			this->formInput->Name = L"formInput";
			this->formInput->Size = System::Drawing::Size(549, 102);
			this->formInput->TabIndex = 0;
			// 
			// hasil
			// 
			this->hasil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->hasil->Location = System::Drawing::Point(220, 252);
			this->hasil->Multiline = true;
			this->hasil->Name = L"hasil";
			this->hasil->Size = System::Drawing::Size(549, 102);
			this->hasil->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(215, 224);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Hasil";
			// 
			// binSearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(781, 398);
			this->Controls->Add(this->judul);
			this->Controls->Add(this->panel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->formLabel);
			this->Controls->Add(this->hasil);
			this->Controls->Add(this->formInput);
			this->Name = L"binSearch";
			this->Text = L"binSearch";
			this->panel->ResumeLayout(false);
			this->panel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tambah_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void cari_Click(System::Object^ sender, System::EventArgs^ e) {
	// Ambil nilai dari TextBox14 dan pecah menjadi array
	String^ inputData = formInput->Text;
	array<String^>^ dataArr = inputData->Split(',');

	// Konversi array string menjadi array int
	array<int>^ dataArray = gcnew array<int>(dataArr->Length);
	for (int i = 0; i < dataArr->Length; i++) {
		dataArray[i] = Convert::ToInt32(dataArr[i]);
	}

	// Ambil nilai yang ingin dicari dari TextBox12
	int target = Convert::ToInt32(inputUser->Text);

	// Panggil fungsi Binary Search
	int hasilSearch = BinarySearch(dataArray, dataArray->Length, target);

	// Tampilkan hasil di TextBox13
	if (hasilSearch != -1) {
		hasil->Text = "Data ditemukan di indeks: " + hasilSearch.ToString();
	}
	else {
		hasil->Text = "Data tidak ditemukan";
	}
}
	   array<int>^ current;
	   int BinarySearch(array<int>^ arr, int n, int target) {
		   int left = 0;
		   int right = n - 1;
		   Array::Sort(arr);
		   current = arr;
		   formInput->Text = "";

		   for (int i = 0; i < current->Length; i++) {
			   if (String::IsNullOrWhiteSpace(formInput->Text)) {
				   formInput->Text = System::Convert::ToString(current[i]);
			   }
			   else
				   formInput->Text = formInput->Text + "," + System::Convert::ToString(current[i]);
			   {

			   }
		   }

		   while (left <= right) {
			   int mid = (left + right) / 2;

			   // Jika nilai tengah sama dengan target, kembalikan indeks
			   if (arr[mid] == target) {
				   return mid;
			   }

			   // Jika target lebih kecil dari nilai tengah, cari di sebelah kiri
			   if (arr[mid] > target) {
				   right = mid - 1;
			   }
			   else {
				   // Jika target lebih besar dari nilai tengah, cari di sebelah kanan
				   left = mid + 1;
			   }
		   }

		   // Jika tidak ditemukan, kembalikan -1
		   return -1;
	   }
};
}
