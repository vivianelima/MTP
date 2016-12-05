#include<cmath>
#pragma once
#define MAXDIGITOS 15

namespace projGUI2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn5;

	private: System::Windows::Forms::Button^  btn9;


	protected: 

	protected: 

	protected: 








	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btnResulatdo;
	private: System::Windows::Forms::Button^  btnDivisao;
	private: System::Windows::Forms::Button^  btnMultiplicacao;
	private: System::Windows::Forms::Button^  btnRaizQuadrada;
	private: System::Windows::Forms::Button^  btnSoma;
	private: System::Windows::Forms::Button^  btnSubtracao;
	private: System::Windows::Forms::Button^  btnVirgula;
	private: System::Windows::Forms::Label^  lblDisplay;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn8;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnResulatdo = (gcnew System::Windows::Forms::Button());
			this->btnDivisao = (gcnew System::Windows::Forms::Button());
			this->btnMultiplicacao = (gcnew System::Windows::Forms::Button());
			this->btnRaizQuadrada = (gcnew System::Windows::Forms::Button());
			this->btnSoma = (gcnew System::Windows::Forms::Button());
			this->btnSubtracao = (gcnew System::Windows::Forms::Button());
			this->btnVirgula = (gcnew System::Windows::Forms::Button());
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Segoe Script", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(115, 192);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(75, 46);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Segoe Script", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(220, 192);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(73, 46);
			this->btn3->TabIndex = 2;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Segoe Script", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(12, 139);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(75, 47);
			this->btn4->TabIndex = 3;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Segoe Script", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(115, 139);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(75, 47);
			this->btn5->TabIndex = 4;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Segoe Script", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(220, 86);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(75, 47);
			this->btn9->TabIndex = 8;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Segoe Script", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(115, 244);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(75, 46);
			this->btn0->TabIndex = 9;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// btnResulatdo
			// 
			this->btnResulatdo->Font = (gcnew System::Drawing::Font(L"Segoe Script", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnResulatdo->Location = System::Drawing::Point(103, 296);
			this->btnResulatdo->Name = L"btnResulatdo";
			this->btnResulatdo->Size = System::Drawing::Size(219, 41);
			this->btnResulatdo->TabIndex = 10;
			this->btnResulatdo->Text = L"=";
			this->btnResulatdo->UseVisualStyleBackColor = true;
			this->btnResulatdo->Click += gcnew System::EventHandler(this, &Form1::btnResulatdo_Click);
			// 
			// btnDivisao
			// 
			this->btnDivisao->Font = (gcnew System::Drawing::Font(L"Segoe Script", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnDivisao->Location = System::Drawing::Point(316, 192);
			this->btnDivisao->Name = L"btnDivisao";
			this->btnDivisao->Size = System::Drawing::Size(75, 46);
			this->btnDivisao->TabIndex = 11;
			this->btnDivisao->Text = L"÷";
			this->btnDivisao->UseVisualStyleBackColor = true;
			this->btnDivisao->Click += gcnew System::EventHandler(this, &Form1::btnDivisao_Click);
			// 
			// btnMultiplicacao
			// 
			this->btnMultiplicacao->Font = (gcnew System::Drawing::Font(L"Segoe Script", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMultiplicacao->Location = System::Drawing::Point(316, 139);
			this->btnMultiplicacao->Name = L"btnMultiplicacao";
			this->btnMultiplicacao->Size = System::Drawing::Size(75, 47);
			this->btnMultiplicacao->TabIndex = 12;
			this->btnMultiplicacao->Text = L"X";
			this->btnMultiplicacao->UseVisualStyleBackColor = true;
			this->btnMultiplicacao->Click += gcnew System::EventHandler(this, &Form1::btnMultiplicacao_Click);
			// 
			// btnRaizQuadrada
			// 
			this->btnRaizQuadrada->Font = (gcnew System::Drawing::Font(L"Segoe Script", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnRaizQuadrada->Location = System::Drawing::Point(316, 86);
			this->btnRaizQuadrada->Name = L"btnRaizQuadrada";
			this->btnRaizQuadrada->Size = System::Drawing::Size(75, 47);
			this->btnRaizQuadrada->TabIndex = 13;
			this->btnRaizQuadrada->Text = L" √";
			this->btnRaizQuadrada->UseVisualStyleBackColor = true;
			this->btnRaizQuadrada->Click += gcnew System::EventHandler(this, &Form1::btnRaizQuadrada_Click);
			// 
			// btnSoma
			// 
			this->btnSoma->Font = (gcnew System::Drawing::Font(L"Segoe Script", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSoma->Location = System::Drawing::Point(316, 244);
			this->btnSoma->Name = L"btnSoma";
			this->btnSoma->Size = System::Drawing::Size(75, 46);
			this->btnSoma->TabIndex = 14;
			this->btnSoma->Text = L"+";
			this->btnSoma->UseVisualStyleBackColor = true;
			this->btnSoma->Click += gcnew System::EventHandler(this, &Form1::btnSoma_Click);
			// 
			// btnSubtracao
			// 
			this->btnSubtracao->Font = (gcnew System::Drawing::Font(L"Segoe Script", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSubtracao->Location = System::Drawing::Point(220, 244);
			this->btnSubtracao->Name = L"btnSubtracao";
			this->btnSubtracao->Size = System::Drawing::Size(73, 46);
			this->btnSubtracao->TabIndex = 15;
			this->btnSubtracao->Text = L"-";
			this->btnSubtracao->UseVisualStyleBackColor = true;
			this->btnSubtracao->Click += gcnew System::EventHandler(this, &Form1::btnSubtracao_Click);
			// 
			// btnVirgula
			// 
			this->btnVirgula->Font = (gcnew System::Drawing::Font(L"Segoe Script", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnVirgula->Location = System::Drawing::Point(12, 244);
			this->btnVirgula->Name = L"btnVirgula";
			this->btnVirgula->Size = System::Drawing::Size(75, 46);
			this->btnVirgula->TabIndex = 16;
			this->btnVirgula->Text = L",";
			this->btnVirgula->UseVisualStyleBackColor = true;
			this->btnVirgula->Click += gcnew System::EventHandler(this, &Form1::btnVirgula_Click);
			// 
			// lblDisplay
			// 
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Segoe Script", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblDisplay->Location = System::Drawing::Point(12, 9);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(379, 60);
			this->lblDisplay->TabIndex = 17;
			this->lblDisplay->Text = L"0";
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(12, 192);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(75, 46);
			this->btn1->TabIndex = 18;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click_1);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Segoe Script", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(218, 139);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(75, 47);
			this->btn6->TabIndex = 19;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Segoe Script", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(12, 86);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(75, 47);
			this->btn7->TabIndex = 20;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Segoe Script", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(115, 86);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(75, 47);
			this->btn8->TabIndex = 21;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(458, 353);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->lblDisplay);
			this->Controls->Add(this->btnVirgula);
			this->Controls->Add(this->btnSubtracao);
			this->Controls->Add(this->btnSoma);
			this->Controls->Add(this->btnRaizQuadrada);
			this->Controls->Add(this->btnMultiplicacao);
			this->Controls->Add(this->btnDivisao);
			this->Controls->Add(this->btnResulatdo);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}

		bool flagVirgula;
		bool flagResultado;
		double memoria;
		char operacao;
		void liberaDisplay()
		{
			lblDisplay->Text = "0";
			flagVirgula = false;
			flagResultado = false;
		}
#pragma endregion
	

private: System::Void btn1_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (lblDisplay ->Text->Length<MAXDIGITOS)
		{
			if(lblDisplay->Text != "0" && ! flagResultado)
				lblDisplay -> Text = lblDisplay -> Text + "1";
			else
			{
				lblDisplay-> Text = "1";
				flagResultado = false;
			}
		}
		 }
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
		 if (lblDisplay ->Text->Length<MAXDIGITOS)
		{
			if(lblDisplay->Text != "0" && ! flagResultado)
				lblDisplay -> Text = lblDisplay -> Text + "2";
			else
			{
				lblDisplay-> Text = "2";
				flagResultado = false;
			}
		}
		 }
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (lblDisplay ->Text->Length<MAXDIGITOS)
		{
			if(lblDisplay->Text != "0" && ! flagResultado)
				lblDisplay -> Text = lblDisplay -> Text + "3";
			else
			{
				lblDisplay-> Text = "3";
				flagResultado = false;
			}
		}
		 }
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (lblDisplay ->Text->Length<MAXDIGITOS)
		{
			if(lblDisplay->Text != "0" && ! flagResultado)
				lblDisplay -> Text = lblDisplay -> Text + "4";
			else
			{
				lblDisplay-> Text = "4";
				flagResultado = false;
			}
		}
		 }
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (lblDisplay ->Text->Length<MAXDIGITOS)
		{
			if(lblDisplay->Text != "0" && ! flagResultado)
				lblDisplay -> Text = lblDisplay -> Text + "5";
			else
			{
				lblDisplay-> Text = "5";
				flagResultado = false;
			}
		}
		 }



private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
			  if (lblDisplay ->Text->Length<MAXDIGITOS)
		{
			if(lblDisplay->Text != "0" && ! flagResultado)
				lblDisplay -> Text = lblDisplay -> Text + "6";
			else
			{
				lblDisplay-> Text = "6";
				flagResultado = false;
			}
		}
		 }
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
			 		  if (lblDisplay ->Text->Length<MAXDIGITOS)
		{
			if(lblDisplay->Text != "0" && ! flagResultado)
				lblDisplay -> Text = lblDisplay -> Text + "7";
			else
			{
				lblDisplay-> Text = "7";
				flagResultado = false;
			}
		}
		 }

private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
			 		  if (lblDisplay ->Text->Length<MAXDIGITOS)
		{
			if(lblDisplay->Text != "0" && ! flagResultado)
				lblDisplay -> Text = lblDisplay -> Text + "9";
			else
			{
				lblDisplay-> Text = "9";
				flagResultado = false;
			}
		}
		 }
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
			 	 		  if (lblDisplay ->Text->Length<MAXDIGITOS)
		{
			if(lblDisplay->Text != "0" && ! flagResultado)
				lblDisplay -> Text = lblDisplay -> Text + "8";
			else
			{
				lblDisplay-> Text = "8";
				flagResultado = false;
			}
		}

		 }
private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
			 	 		  if (lblDisplay ->Text->Length<MAXDIGITOS)
		{
			if(lblDisplay->Text != "0" && ! flagResultado)
				lblDisplay -> Text = lblDisplay -> Text + "0";
			else
			{
				lblDisplay-> Text = "0";
				flagResultado = false;
			}
		}
		 }
private: System::Void btnVirgula_Click(System::Object^  sender, System::EventArgs^  e) {
			 	 		  if (lblDisplay ->Text->Length<MAXDIGITOS-1)
		{
			if(!flagVirgula)
			{
				lblDisplay -> Text = lblDisplay -> Text + ",";
				flagVirgula = true;
			}
		}
		 }
private: System::Void btnSubtracao_Click(System::Object^  sender, System::EventArgs^  e) {
		memoria = System::Convert::ToDouble(lblDisplay->Text);
		operacao = '-';
		liberaDisplay();
		 }
private: System::Void btnSoma_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria = System::Convert::ToDouble(lblDisplay->Text);
		operacao = '+';
		liberaDisplay();
		 }
private: System::Void btnMultiplicacao_Click(System::Object^  sender, System::EventArgs^  e) {
					  memoria = System::Convert::ToDouble(lblDisplay->Text);
		operacao = '*';
		liberaDisplay();
		 }
private: System::Void btnDivisao_Click(System::Object^  sender, System::EventArgs^  e) {
							   memoria = System::Convert::ToDouble(lblDisplay->Text);
		operacao = '/';
		liberaDisplay();
		 }
						  

private: System::Void btnRaizQuadrada_Click(System::Object^  sender, System::EventArgs^  e) {
		double numero = System::Convert::ToDouble(lblDisplay->Text);
		lblDisplay->Text= System::Convert::ToString(sqrt(numero));
		if(lblDisplay->Text -> Length> MAXDIGITOS)
			lblDisplay->Text = lblDisplay->Text->Substring(0,MAXDIGITOS);
		flagResultado = true;
		 }
private: System::Void btnResulatdo_Click(System::Object^  sender, System::EventArgs^  e) {
		double numero = System::Convert::ToDouble(lblDisplay->Text);
		switch(operacao)
		{
		case '+': memoria +=numero; break;
		case '-': memoria -=numero; break;
		case '/': memoria /=numero; break;
		case '*': memoria *=numero; break;
		 }
		if(memoria > Math::Pow(10,MAXDIGITOS)-1)
			lblDisplay->Text = memoria.ToString("e");
		else
			lblDisplay->Text = memoria.ToString();
		if(lblDisplay->Text->Length>MAXDIGITOS)
			lblDisplay->Text= lblDisplay->Text->Substring(0,MAXDIGITOS);
		flagResultado = true;
	 }
};
}

