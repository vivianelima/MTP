#pragma once

namespace projGUI1 {

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
	private: System::Windows::Forms::Button^  btnOk;
	protected: 

	protected: 

	private: System::Windows::Forms::TextBox^  txtEntrada;
	private: System::Windows::Forms::CheckBox^  chbNome;


	protected: 


	private: System::Windows::Forms::Label^  lblMsg;
	private: System::Windows::Forms::ComboBox^  cmbSelecao;


	private: System::Windows::Forms::RadioButton^  rbtOpcao1;
	private: System::Windows::Forms::PictureBox^  ptbImagem;



	private: System::Windows::Forms::RadioButton^  rbtOpcao2;
	private: System::Windows::Forms::GroupBox^  gpbGrupo1;
	private: System::Windows::Forms::RadioButton^  rbtOpcao3;
	private: System::Windows::Forms::CheckBox^  chbQuantidade;





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
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->txtEntrada = (gcnew System::Windows::Forms::TextBox());
			this->chbNome = (gcnew System::Windows::Forms::CheckBox());
			this->lblMsg = (gcnew System::Windows::Forms::Label());
			this->cmbSelecao = (gcnew System::Windows::Forms::ComboBox());
			this->rbtOpcao1 = (gcnew System::Windows::Forms::RadioButton());
			this->ptbImagem = (gcnew System::Windows::Forms::PictureBox());
			this->rbtOpcao2 = (gcnew System::Windows::Forms::RadioButton());
			this->gpbGrupo1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbtOpcao3 = (gcnew System::Windows::Forms::RadioButton());
			this->chbQuantidade = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ptbImagem))->BeginInit();
			this->gpbGrupo1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(12, 362);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(75, 23);
			this->btnOk->TabIndex = 0;
			this->btnOk->Text = L"Vai Estrela";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &Form1::btnOk_Click);
			// 
			// txtEntrada
			// 
			this->txtEntrada->Location = System::Drawing::Point(9, 123);
			this->txtEntrada->Name = L"txtEntrada";
			this->txtEntrada->Size = System::Drawing::Size(100, 20);
			this->txtEntrada->TabIndex = 1;
			this->txtEntrada->Text = L"Escreva algo";
			this->txtEntrada->TextChanged += gcnew System::EventHandler(this, &Form1::txtEntrada_TextChanged);
			// 
			// chbNome
			// 
			this->chbNome->AutoSize = true;
			this->chbNome->Location = System::Drawing::Point(9, 158);
			this->chbNome->Name = L"chbNome";
			this->chbNome->Size = System::Drawing::Size(111, 17);
			this->chbNome->TabIndex = 2;
			this->chbNome->Text = L"Nome da imagem!";
			this->chbNome->UseVisualStyleBackColor = true;
			this->chbNome->CheckedChanged += gcnew System::EventHandler(this, &Form1::chbEscolha_CheckedChanged);
			// 
			// lblMsg
			// 
			this->lblMsg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblMsg->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->lblMsg->Location = System::Drawing::Point(12, 9);
			this->lblMsg->Name = L"lblMsg";
			this->lblMsg->Size = System::Drawing::Size(779, 45);
			this->lblMsg->TabIndex = 3;
			this->lblMsg->Text = L"Mensagem";
			this->lblMsg->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// cmbSelecao
			// 
			this->cmbSelecao->FormattingEnabled = true;
			this->cmbSelecao->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"Selecione uma resposta", L"Sim", L"Muito", L"Maravilhosas", 
				L"Sou bobo, não gosto de estrelas"});
			this->cmbSelecao->Location = System::Drawing::Point(9, 335);
			this->cmbSelecao->Name = L"cmbSelecao";
			this->cmbSelecao->Size = System::Drawing::Size(184, 21);
			this->cmbSelecao->TabIndex = 4;
			this->cmbSelecao->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::cmbSelecao_SelectedIndexChanged);
			// 
			// rbtOpcao1
			// 
			this->rbtOpcao1->AutoSize = true;
			this->rbtOpcao1->BackColor = System::Drawing::Color::DodgerBlue;
			this->rbtOpcao1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->rbtOpcao1->Location = System::Drawing::Point(25, 19);
			this->rbtOpcao1->Name = L"rbtOpcao1";
			this->rbtOpcao1->Size = System::Drawing::Size(45, 17);
			this->rbtOpcao1->TabIndex = 5;
			this->rbtOpcao1->TabStop = true;
			this->rbtOpcao1->Text = L"Azul";
			this->rbtOpcao1->UseVisualStyleBackColor = false;
			// 
			// ptbImagem
			// 
			this->ptbImagem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ptbImagem.Image")));
			this->ptbImagem->Location = System::Drawing::Point(285, 80);
			this->ptbImagem->Name = L"ptbImagem";
			this->ptbImagem->Size = System::Drawing::Size(490, 305);
			this->ptbImagem->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ptbImagem->TabIndex = 6;
			this->ptbImagem->TabStop = false;
			// 
			// rbtOpcao2
			// 
			this->rbtOpcao2->AutoSize = true;
			this->rbtOpcao2->BackColor = System::Drawing::Color::DarkRed;
			this->rbtOpcao2->Location = System::Drawing::Point(25, 42);
			this->rbtOpcao2->Name = L"rbtOpcao2";
			this->rbtOpcao2->Size = System::Drawing::Size(69, 17);
			this->rbtOpcao2->TabIndex = 7;
			this->rbtOpcao2->TabStop = true;
			this->rbtOpcao2->Text = L"Vermelho";
			this->rbtOpcao2->UseVisualStyleBackColor = false;
			// 
			// gpbGrupo1
			// 
			this->gpbGrupo1->Controls->Add(this->rbtOpcao3);
			this->gpbGrupo1->Controls->Add(this->rbtOpcao1);
			this->gpbGrupo1->Controls->Add(this->rbtOpcao2);
			this->gpbGrupo1->Location = System::Drawing::Point(9, 215);
			this->gpbGrupo1->Name = L"gpbGrupo1";
			this->gpbGrupo1->Size = System::Drawing::Size(184, 100);
			this->gpbGrupo1->TabIndex = 8;
			this->gpbGrupo1->TabStop = false;
			this->gpbGrupo1->Text = L"Selecione uma opção";
			this->gpbGrupo1->Enter += gcnew System::EventHandler(this, &Form1::gpbGrupo1_Enter);
			// 
			// rbtOpcao3
			// 
			this->rbtOpcao3->AutoSize = true;
			this->rbtOpcao3->BackColor = System::Drawing::Color::DarkMagenta;
			this->rbtOpcao3->Location = System::Drawing::Point(25, 65);
			this->rbtOpcao3->Name = L"rbtOpcao3";
			this->rbtOpcao3->Size = System::Drawing::Size(46, 17);
			this->rbtOpcao3->TabIndex = 8;
			this->rbtOpcao3->TabStop = true;
			this->rbtOpcao3->Text = L"Pink";
			this->rbtOpcao3->UseVisualStyleBackColor = false;
			// 
			// chbQuantidade
			// 
			this->chbQuantidade->AutoSize = true;
			this->chbQuantidade->Location = System::Drawing::Point(9, 192);
			this->chbQuantidade->Name = L"chbQuantidade";
			this->chbQuantidade->Size = System::Drawing::Size(135, 17);
			this->chbQuantidade->TabIndex = 9;
			this->chbQuantidade->Text = L"Quantidade de estrelas";
			this->chbQuantidade->UseVisualStyleBackColor = true;
			this->chbQuantidade->CheckedChanged += gcnew System::EventHandler(this, &Form1::chbQuantidade_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(803, 398);
			this->Controls->Add(this->chbQuantidade);
			this->Controls->Add(this->gpbGrupo1);
			this->Controls->Add(this->ptbImagem);
			this->Controls->Add(this->cmbSelecao);
			this->Controls->Add(this->lblMsg);
			this->Controls->Add(this->chbNome);
			this->Controls->Add(this->txtEntrada);
			this->Controls->Add(this->btnOk);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"Form1";
			this->Text = L"Programa 1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ptbImagem))->EndInit();
			this->gpbGrupo1->ResumeLayout(false);
			this->gpbGrupo1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void txtEntrada_TextChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				
			 }
private: System::Void btnOk_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			  lblMsg->Text = "";
			  if(chbNome -> Checked)
				  lblMsg->Text = lblMsg->Text + "Constelação tumblr, "; 
			  if(chbQuantidade ->Checked)
				  lblMsg->Text = lblMsg->Text + "Infinitas estrelas, "; 
			   lblMsg->Text = lblMsg->Text + "Estrelinhas são lindas?" +
				   ((cmbSelecao -> SelectedIndex != 0)? 
				   System::Convert::ToString(cmbSelecao->SelectedItem) : "")		   
				   +",";
			   if(txtEntrada->Text !="Escreva algo")
			   lblMsg->Text = lblMsg-> Text + txtEntrada->Text;
			   if(rbtOpcao1 -> Checked)
				   lblMsg->ForeColor = System::Drawing::Color::Blue;
			   if(rbtOpcao2 -> Checked)
				   lblMsg->ForeColor = System::Drawing::Color::Red;
			   if(rbtOpcao3 -> Checked)
				   lblMsg->ForeColor = System::Drawing::Color::Pink;
		 }
private: System::Void chbEscolha_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void chbQuantidade_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 // valores padrão
			 cmbSelecao -> SelectedIndex = 0;
		 }
private: System::Void cmbSelecao_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void gpbGrupo1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

