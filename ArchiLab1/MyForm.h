#pragma once
#include <string>
namespace ArchiLab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;
	using namespace System::Net::NetworkInformation;

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(328, 79);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 25);
			this->label1->TabIndex = 0;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(227, 2);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(227, 36);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 22);
			this->textBox2->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(328, 104);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 25);
			this->label2->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(328, 129);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 25);
			this->label3->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(328, 154);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 25);
			this->label4->TabIndex = 9;
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Location = System::Drawing::Point(25, 194);
			this->listBox1->Margin = System::Windows::Forms::Padding(4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(662, 479);
			this->listBox1->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 2);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(179, 25);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Начальный адрес:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(22, 33);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(169, 25);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Конечный адрес:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(17, 79);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 25);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Маска:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(17, 104);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(124, 25);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Адрес сети:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(19, 129);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(276, 25);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Широковещательный адрес:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(20, 154);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(121, 25);
			this->label10->TabIndex = 16;
			this->label10->Text = L"МАС-адрес:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(405, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 58);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Обработать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(701, 711);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: System::Net::IPAddress^ GetSubnetMask(System::Net::IPAddress^ beginIP, System::Net::IPAddress^ endIP){
			array<unsigned char>^ begin = beginIP->GetAddressBytes();
			array<unsigned char>^ end = endIP->GetAddressBytes();
			unsigned char* mask = new unsigned char[4];
			bool edge = false;
			System::Net::IPAddress^ masks;
			for(int i = 0; i < 4; i++){
				for(unsigned char b = 128; b >= 1; b /= 2){
					if((!edge) && ((begin[i] & b) == (end[i] & b))) { 
						mask[i] |= b; 
					} 
					else{ 
						edge = true; 
						mask[i] = (char)(mask[i] & ~b); 
					} 
				}
			}
			String^ msk = "";
			int j = 0;
			for(int i = 0; i < 4; i++){
				msk += mask[i];
				if(j < 3){
					msk += ".";
					j++;
				}
			}
			masks = System::Net::IPAddress::Parse(msk);
			return masks;
		}
		public: IPAddress^ adres_seti(String^ maska){
			IPAddress^ ip;
			IPAddress^ mask;
			ip = (IPAddress^)System::Net::IPAddress::Parse(textBox1->Text);
			System::Net::IPAddress^ a = System::Net::IPAddress::Parse(textBox1->Text);
			System::Net::IPAddress^ b = System::Net::IPAddress::Parse(textBox2->Text);
			mask = GetSubnetMask(a, b);
			auto addressInt = BitConverter::ToInt32(ip->GetAddressBytes(), 0);
			auto maskInt = BitConverter::ToInt32(mask->GetAddressBytes(), 0);
			auto seti = addressInt & maskInt;
			auto broadcast = gcnew IPAddress(BitConverter::GetBytes(seti));
			return broadcast;
		}
		private: IPAddress^ Broadcast(){
			IPAddress^ ip;
			IPAddress^ mask;
			System::Net::IPAddress^ a = System::Net::IPAddress::Parse(textBox1->Text);
			System::Net::IPAddress^ b = System::Net::IPAddress::Parse(textBox2->Text);
			mask = GetSubnetMask(a, b);
			ip = adres_seti(mask->ToString());
			auto addressInt = BitConverter::ToInt32(ip->GetAddressBytes(), 0);
			auto maskInt = BitConverter::ToInt32(mask->GetAddressBytes(), 0);
			auto seti = addressInt | ~maskInt;
			auto broadcast = gcnew IPAddress(BitConverter::GetBytes(seti));
			return broadcast;
		}
		private: String^ GetMacAddress(){
			String^ macAddress = "";
			for each(NetworkInterface^ nic in NetworkInterface::GetAllNetworkInterfaces()){
				if(nic->OperationalStatus == OperationalStatus::Up){
					macAddress += nic->GetPhysicalAddress()->ToString();
					macAddress = macAddress->Insert(2, ":");
					macAddress = macAddress->Insert(5, ":");
					macAddress = macAddress->Insert(8, ":");
					macAddress = macAddress->Insert(11, ":");
					macAddress = macAddress->Insert(14, ":");
					break;
				}
			}
			return macAddress;
		}
		public: void pingEr(){
			array<unsigned char>^ begin = System::Net::IPAddress::Parse(textBox1->Text)->GetAddressBytes();
			array<unsigned char>^ end = System::Net::IPAddress::Parse(textBox2->Text)->GetAddressBytes();
			do{
				String^ msk = "";
				int j = 0;
				for(int i = 0; i < begin->Length; i++){
					msk += begin[i];
					if(j < 3){
						msk += ".";
						j++;
					}
				}
				Ping^ pingSender = gcnew Ping();
				PingReply^ reply = pingSender->Send(msk);
				if(reply->Status == IPStatus::Success){
					auto N = System::Net::Dns::GetHostEntry(msk)->HostName;
					listBox1->Items->Add("Address: " + reply->Address->ToString() + "    Ping: " + reply->RoundtripTime + "   Domain: " + N);
					
				}
				begin[begin->Length-1]++;
			}while(begin[begin->Length - 1] <= end[begin->Length - 1]);
		}
		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e){
			
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "" && textBox2->Text != "") {
			System::Net::IPAddress^ a = System::Net::IPAddress::Parse(textBox1->Text);
			System::Net::IPAddress^ b = System::Net::IPAddress::Parse(textBox2->Text);
			label1->Text = GetSubnetMask(a, b)->ToString();
			label2->Text = adres_seti(textBox1->Text)->ToString();
			label3->Text = Broadcast()->ToString();
			label4->Text = GetMacAddress()->ToString();
			pingEr();
		}
	}
};
}
