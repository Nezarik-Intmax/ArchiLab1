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
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
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
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(71, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(178, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 7;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(13, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"label4";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(17, 158);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(388, 404);
			this->listBox1->TabIndex = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(652, 578);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
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
			array<IPAddress^>^ a;
			do{
				Ping^ pingSender = gcnew Ping();
				PingReply^ reply = pingSender->Send(textBox1->Text);
				if(reply->Status == IPStatus::Success){
					listBox1->Items->Add("Address" + reply->Address->ToString() + "    Ping: " + reply->RoundtripTime);
				}
				
			}
		}
		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e){
			System::Net::IPAddress^ a = System::Net::IPAddress::Parse(textBox1->Text);
			System::Net::IPAddress^ b = System::Net::IPAddress::Parse(textBox2->Text);
			label1->Text = GetSubnetMask(a, b)->ToString();
			label2->Text = adres_seti(textBox1->Text)->ToString();
			label3->Text = Broadcast()->ToString();
			label4->Text = GetMacAddress()->ToString();
			pingEr();
		}
	};
}
