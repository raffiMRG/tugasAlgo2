#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for bubleSort
	/// </summary>
	public ref class bubleSort : public System::Windows::Forms::Form
	{
	public:
		bubleSort(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			newinisialize();
			firstInisializeID();
			tampil();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~bubleSort()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: array<array<String^>^>^ arrayData;
	private: int tmpId;
	private: System::Windows::Forms::Label^ labelBarang;
	private: System::Windows::Forms::TextBox^ textBarang;
	private: System::Windows::Forms::NumericUpDown^ textJumlah;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ textHarga;
	private: System::Windows::Forms::Button^ btnTambah;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ barang;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ jumlah;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ harga;
	private: System::Windows::Forms::Button^ idSort;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;



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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->barang = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->jumlah = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->harga = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->labelBarang = (gcnew System::Windows::Forms::Label());
			this->textBarang = (gcnew System::Windows::Forms::TextBox());
			this->textJumlah = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textHarga = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnTambah = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->idSort = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textJumlah))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textHarga))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(314, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 31);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Buble Sort";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->id, this->barang,
					this->jumlah, this->harga
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 237);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(755, 221);
			this->dataGridView1->TabIndex = 6;
			// 
			// id
			// 
			this->id->HeaderText = L"id";
			this->id->Name = L"id";
			this->id->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->id->Width = 50;
			// 
			// barang
			// 
			this->barang->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->barang->HeaderText = L"barang";
			this->barang->Name = L"barang";
			this->barang->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// jumlah
			// 
			this->jumlah->HeaderText = L"jumlah";
			this->jumlah->Name = L"jumlah";
			this->jumlah->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->jumlah->Width = 200;
			// 
			// harga
			// 
			this->harga->HeaderText = L"harga";
			this->harga->Name = L"harga";
			this->harga->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->harga->Width = 200;
			// 
			// labelBarang
			// 
			this->labelBarang->AutoSize = true;
			this->labelBarang->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBarang->Location = System::Drawing::Point(29, 73);
			this->labelBarang->Name = L"labelBarang";
			this->labelBarang->Size = System::Drawing::Size(91, 16);
			this->labelBarang->TabIndex = 7;
			this->labelBarang->Text = L"Nama Barang";
			// 
			// textBarang
			// 
			this->textBarang->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBarang->Location = System::Drawing::Point(32, 92);
			this->textBarang->Name = L"textBarang";
			this->textBarang->Size = System::Drawing::Size(186, 22);
			this->textBarang->TabIndex = 8;
			// 
			// textJumlah
			// 
			this->textJumlah->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textJumlah->Location = System::Drawing::Point(323, 92);
			this->textJumlah->Name = L"textJumlah";
			this->textJumlah->Size = System::Drawing::Size(120, 22);
			this->textJumlah->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(320, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Jumlah Barang";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(547, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Harga Barang";
			// 
			// textHarga
			// 
			this->textHarga->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textHarga->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->textHarga->Location = System::Drawing::Point(550, 92);
			this->textHarga->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { -727379969, 232, 0, 0 });
			this->textHarga->Name = L"textHarga";
			this->textHarga->Size = System::Drawing::Size(204, 22);
			this->textHarga->TabIndex = 9;
			// 
			// btnTambah
			// 
			this->btnTambah->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->btnTambah->Location = System::Drawing::Point(180, 136);
			this->btnTambah->Name = L"btnTambah";
			this->btnTambah->Size = System::Drawing::Size(120, 39);
			this->btnTambah->TabIndex = 10;
			this->btnTambah->Text = L"TAMBAH";
			this->btnTambah->UseVisualStyleBackColor = true;
			this->btnTambah->Click += gcnew System::EventHandler(this, &bubleSort::btnTambah_Click);
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->btnReset->Location = System::Drawing::Point(323, 136);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(120, 39);
			this->btnReset->TabIndex = 10;
			this->btnReset->Text = L"RESET";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &bubleSort::btnReset_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->btnDelete->Location = System::Drawing::Point(465, 136);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(120, 39);
			this->btnDelete->TabIndex = 10;
			this->btnDelete->Text = L"HAPUS";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &bubleSort::btnHapus_Click);
			// 
			// idSort
			// 
			this->idSort->Location = System::Drawing::Point(56, 208);
			this->idSort->Name = L"idSort";
			this->idSort->Size = System::Drawing::Size(43, 23);
			this->idSort->TabIndex = 11;
			this->idSort->Text = L"ID";
			this->idSort->UseVisualStyleBackColor = true;
			this->idSort->Click += gcnew System::EventHandler(this, &bubleSort::idSort_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(105, 208);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(259, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Barang";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &bubleSort::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(370, 208);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(194, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Jumlah";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &bubleSort::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(570, 208);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(194, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Harga";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &bubleSort::button3_Click);
			// 
			// bubleSort
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(779, 470);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->idSort);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnTambah);
			this->Controls->Add(this->textHarga);
			this->Controls->Add(this->textJumlah);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBarang);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labelBarang);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"bubleSort";
			this->Text = L"bubleSort";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textJumlah))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textHarga))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		void newinisialize() {
			arrayData = (gcnew array<array<String^>^>{
					gcnew array<String^>{"1", "Kemeja Lengan panjang", "10", "10000"},
					gcnew array<String^>{"3", "Celana Bahan", "5", "4500"},
					gcnew array<String^>{"2", "Sepatu Olahraga", "3", "3500"},
					gcnew array<String^>{"5", "Sepatu Sekolah", "7", "3000"},
					gcnew array<String^>{"4", "Piama", "4", "3000"}
			});
		}

	private:
		void firstInisializeID() {
			tmpId = arrayData->Length;
		}

	private:
		void inisializeID() {
			if (tmpId == 0) {
				tmpId = arrayData->Length + 1;
			}
			else
			{
				tmpId = tmpId + 1;
			}
		}

	private: System::Void btnTambah_Click(System::Object^ sender, System::EventArgs^ e) {
		input();
		iReset();
		tampil();
	}

	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		arrReset();
		iReset();
	}

	private: System::Void btnHapus_Click(System::Object^ sender, System::EventArgs^ e) {
		iDelete();
		iReset();
		tampil();
	}
// sort by id
	private: System::Void idSort_Click(System::Object^ sender, System::EventArgs^ e) {
		iBuble(0);
		iReset();
		tampil();
	}
// sort by name
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		sBuble(1);
		iReset();
		tampil();
	}
// sort by jumlah
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		iBuble(2);
		iReset();
		tampil();
	}
// sort by harga
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		iBuble(3);
		iReset();
		tampil();
	}

	String^ tmp1;
	String^ tmp2;
	String^ tmp3;
	String^ tmp4;

	// buat function yang akan menampilkan data
	void tampil() {
		for (int i = 0; i < arrayData->Length; i++) {
			for (int j = 0; j < arrayData[i]->Length; j++) {
				switch (j)
				{
				case 0:
					tmp1 = arrayData[i][0];
					break;
				case 1:
					tmp2 = arrayData[i][1];
					break;
				case 2:
					tmp3 = arrayData[i][2];
					break;
				case 3:
					tmp4 = arrayData[i][3];
					break;
				default:
					break;
				}
			}
			dataGridView1->Rows->Add(tmp1, tmp2, tmp3, tmp4);
		}

	}

	void input() {
		//			dataArr[dataArr->Length] = gcnew array<String^>{textBox1->Text, textBox2->Text, textBox3->Text};
					// Create a new array with one more element
		array<array<String^>^>^ newDataArr = gcnew array<array<String^>^>(arrayData->Length + 1);

		// Copy the contents of the old array to the new one
		for (int i = 0; i < arrayData->Length; ++i) {
			newDataArr[i] = arrayData[i];
		}

		// Add the new element (for example, a new row)
		inisializeID();
		// newDataArr[dataArr->Length] = gcnew array<String^> { "NewElement1", "NewElement2", "NewElement3" };
		newDataArr[arrayData->Length] = gcnew array<String^> { Convert::ToString(tmpId), textBarang->Text, textJumlah->Text, textHarga->Text };

		// Update the class member to point to the new array
		arrayData = newDataArr;
	}


	void arrReset() {
		array<array<String^>^>^ newDataArr;
		newDataArr = (gcnew array<array<String^>^>{});

		arrayData = newDataArr;

	}

	void iReset() {
		// REST TEXT BOX
		textBarang->Text = "";
		textJumlah->Text = "0";
		textHarga->Text = "0";


		// ============ Untuk Enable Adding ============
		// int numRows = dataGridView1->Rows->Count - 1;
		// ============ Untuk Disable Adding ============
		int numRows = dataGridView1->Rows->Count;
		for (int i = 0; i < numRows; i++)
		{
			try
			{
				// ============ Untuk Disable Adding ============
				int max = dataGridView1->Rows->Count - 1;
				dataGridView1->Rows->Remove(dataGridView1->Rows[max]);
				// MessageBox::Show(Convert::ToString(max));
			}
			catch (Exception^ e)
			{
				MessageBox::Show("All rows already deleted " + e, "Data grid deleted", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
	}

	void iDelete() {
		for each (DataGridViewRow ^ item in this->dataGridView1->SelectedRows)
		{
// 			dataGridView1->Rows->RemoveAt(item->Index);
			
			// String^ cellText = item->Cells[0]->Value->ToString();
			// MessageBox::Show(cellText);

			int newArraySize = arrayData->Length - 1;
			int i = 0;
			array<array<String^>^>^ newArray = gcnew array<array<String^>^>(newArraySize);

			//chek kondisi apakah cellText = id barang
			String^ cellText = item->Cells[0]->Value->ToString();
			for each (array<String^>^ data in arrayData) {
				if (data[0] != cellText) {
					//MessageBox::Show("data " + data[0] + " ditemukan");
					
					// masukan data ke dalam arayData
					newArray[i] = data;
					i++;
				}
			}
			arrayData = newArray;
		}
	}
	  
	// buble sort
	String^ j1;
	String^ j2;
	array<String^>^ tmpArrayData;

	void sBuble(int pilihan) {
		for (int i = 0; i < arrayData->Length; ++i) {
			for (int j = 0; j < arrayData->Length - i - 1; ++j) {
				j1 = arrayData[j][pilihan];
				j2 = arrayData[j + 1][pilihan];
				// Compare adjacent strings and swap if they are in the wrong order
				if (String::Compare(j1, j2) > 0) {
//					MessageBox::Show(j1 + " LEBIH BESAR DARI " + j2,
//						"TUKAR NILAI !!!", MessageBoxButtons::OK, MessageBoxIcon::Information);
					tmpArrayData = arrayData[j];
					arrayData[j] = arrayData[j + 1];
					arrayData[j + 1] = tmpArrayData;
				}
//				else
//				{
//					MessageBox::Show(j1 + " LEBIH KECIL/SAMADENGAN " + j2,
//						"nilai tetap", MessageBoxButtons::OK, MessageBoxIcon::Information);
//				}
			}
		}
	}

	int i1;
	int i2;

	void iBuble(int pilihan) {
		for (int i = 0; i < arrayData->Length; ++i) {
			for (int j = 0; j < arrayData->Length - i - 1; ++j) {
				i1 = Convert::ToInt32(arrayData[j][pilihan]);
				i2 = Convert::ToInt32(arrayData[j + 1][pilihan]);
				// Compare adjacent strings and swap if they are in the wrong order
				if (i1 > i2) {
					//					MessageBox::Show(j1 + " LEBIH BESAR DARI " + j2,
					//						"TUKAR NILAI !!!", MessageBoxButtons::OK, MessageBoxIcon::Information);
					tmpArrayData = arrayData[j];
					arrayData[j] = arrayData[j + 1];
					arrayData[j + 1] = tmpArrayData;
				}
				//				else
				//				{
				//					MessageBox::Show(j1 + " LEBIH KECIL/SAMADENGAN " + j2,
				//						"nilai tetap", MessageBoxButtons::OK, MessageBoxIcon::Information);
				//				}
			}
		}
	}


};
}