#pragma once
#include <vector>
#include "Path_Shorter.h"


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de PeruForm
	/// </summary>
	
	public ref class Mapa : public System::Windows::Forms::Form
	{
		
	public:
		
		Mapa(void)

		{
			
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	
		

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Mapa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_lima;
	private: System::Windows::Forms::Button^  button_junin;
	protected:

	protected:

	private: System::Windows::Forms::Button^ button_ancash;
	private: System::Windows::Forms::Button^ button_lalibertad;
	private: System::Windows::Forms::Button^ button_cajamarca;
	private: System::Windows::Forms::Button^ button_amazonas;
	private: System::Windows::Forms::Button^ button_lambayeque;
	private: System::Windows::Forms::Button^ button_piura;
	private: System::Windows::Forms::Button^ button_huanuco;
	private: System::Windows::Forms::Button^ button_sanmartin;
	private: System::Windows::Forms::Button^ button_puno;
	private: System::Windows::Forms::Button^ button_cusco;
	private: System::Windows::Forms::Button^ button_ica;
	private: System::Windows::Forms::Button^ button_huancavelica;
	private: System::Windows::Forms::Button^ button_ayacucho;
	private: System::Windows::Forms::Button^ button_pasco;
	private: System::Windows::Forms::Button^ button_tumbes;
	private: System::Windows::Forms::Button^ button_arequipa;
	private: System::Windows::Forms::Button^ button_apurimac;
	private: System::Windows::Forms::Button^ button_moquegua;
	private: System::Windows::Forms::Button^ button_tacna;
	private: System::Windows::Forms::Button^ button_madrededios;
	private: System::Windows::Forms::Button^ button_ucayali;
	private: System::Windows::Forms::Button^ button1;
	private:
	
	protected:

	protected:
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		vector <int> *indice= new vector<int>;
		

	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  Iniciar;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;





	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ListView^ listView2;
	private: System::Windows::Forms::ColumnHeader^ Final;
	private: System::Windows::Forms::ColumnHeader^ Ruta;
	private: System::Windows::Forms::ColumnHeader^ Km;
	private: System::Windows::Forms::ColumnHeader^ Inicio;
	private: System::Windows::Forms::ColumnHeader^ N;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::Button^ button2;
			 /// </summary>
	public:

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Mapa::typeid));
			this->button_lima = (gcnew System::Windows::Forms::Button());
			this->button_junin = (gcnew System::Windows::Forms::Button());
			this->button_ancash = (gcnew System::Windows::Forms::Button());
			this->button_lalibertad = (gcnew System::Windows::Forms::Button());
			this->button_cajamarca = (gcnew System::Windows::Forms::Button());
			this->button_amazonas = (gcnew System::Windows::Forms::Button());
			this->button_lambayeque = (gcnew System::Windows::Forms::Button());
			this->button_piura = (gcnew System::Windows::Forms::Button());
			this->button_huanuco = (gcnew System::Windows::Forms::Button());
			this->button_sanmartin = (gcnew System::Windows::Forms::Button());
			this->button_puno = (gcnew System::Windows::Forms::Button());
			this->button_cusco = (gcnew System::Windows::Forms::Button());
			this->button_ica = (gcnew System::Windows::Forms::Button());
			this->button_huancavelica = (gcnew System::Windows::Forms::Button());
			this->button_ayacucho = (gcnew System::Windows::Forms::Button());
			this->button_pasco = (gcnew System::Windows::Forms::Button());
			this->button_tumbes = (gcnew System::Windows::Forms::Button());
			this->button_arequipa = (gcnew System::Windows::Forms::Button());
			this->button_apurimac = (gcnew System::Windows::Forms::Button());
			this->button_moquegua = (gcnew System::Windows::Forms::Button());
			this->button_tacna = (gcnew System::Windows::Forms::Button());
			this->button_madrededios = (gcnew System::Windows::Forms::Button());
			this->button_ucayali = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Iniciar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->Inicio = (gcnew System::Windows::Forms::ColumnHeader());
			this->Final = (gcnew System::Windows::Forms::ColumnHeader());
			this->Ruta = (gcnew System::Windows::Forms::ColumnHeader());
			this->Km = (gcnew System::Windows::Forms::ColumnHeader());
			this->N = (gcnew System::Windows::Forms::ColumnHeader());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button_lima
			// 
			this->button_lima->BackColor = System::Drawing::Color::MediumPurple;
			this->button_lima->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_lima->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_lima->Location = System::Drawing::Point(139, 311);
			this->button_lima->Name = L"button_lima";
			this->button_lima->Size = System::Drawing::Size(54, 24);
			this->button_lima->TabIndex = 0;
			this->button_lima->Text = L"Lima";
			this->button_lima->UseVisualStyleBackColor = false;
			// 
			// button_junin
			// 
			this->button_junin->BackColor = System::Drawing::Color::PaleVioletRed;
			this->button_junin->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_junin->Location = System::Drawing::Point(190, 298);
			this->button_junin->Name = L"button_junin";
			this->button_junin->Size = System::Drawing::Size(54, 24);
			this->button_junin->TabIndex = 1;
			this->button_junin->Text = L"Junín";
			this->button_junin->UseVisualStyleBackColor = false;
			this->button_junin->Click += gcnew System::EventHandler(this, &Mapa::button_junin_Click);
			// 
			// button_ancash
			// 
			this->button_ancash->BackColor = System::Drawing::Color::Olive;
			this->button_ancash->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_ancash->Location = System::Drawing::Point(99, 245);
			this->button_ancash->Name = L"button_ancash";
			this->button_ancash->Size = System::Drawing::Size(60, 24);
			this->button_ancash->TabIndex = 2;
			this->button_ancash->Text = L"Ancash";
			this->button_ancash->UseVisualStyleBackColor = false;
			this->button_ancash->Click += gcnew System::EventHandler(this, &Mapa::button_ancash_Click);
			// 
			// button_lalibertad
			// 
			this->button_lalibertad->BackColor = System::Drawing::Color::Khaki;
			this->button_lalibertad->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 5.75F));
			this->button_lalibertad->Location = System::Drawing::Point(78, 208);
			this->button_lalibertad->Name = L"button_lalibertad";
			this->button_lalibertad->Size = System::Drawing::Size(65, 31);
			this->button_lalibertad->TabIndex = 3;
			this->button_lalibertad->Text = L"La Libertad";
			this->button_lalibertad->UseVisualStyleBackColor = false;
			this->button_lalibertad->Click += gcnew System::EventHandler(this, &Mapa::button_lalibertad_Click);
			// 
			// button_cajamarca
			// 
			this->button_cajamarca->BackColor = System::Drawing::Color::Olive;
			this->button_cajamarca->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 6.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_cajamarca->Location = System::Drawing::Point(92, 159);
			this->button_cajamarca->Name = L"button_cajamarca";
			this->button_cajamarca->Size = System::Drawing::Size(51, 43);
			this->button_cajamarca->TabIndex = 4;
			this->button_cajamarca->Text = L"Caja_\r\nmarca\r\n";
			this->button_cajamarca->UseVisualStyleBackColor = false;
			this->button_cajamarca->Click += gcnew System::EventHandler(this, &Mapa::button_cajamarca_Click);
			// 
			// button_amazonas
			// 
			this->button_amazonas->BackColor = System::Drawing::Color::MediumPurple;
			this->button_amazonas->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_amazonas->Location = System::Drawing::Point(108, 121);
			this->button_amazonas->Name = L"button_amazonas";
			this->button_amazonas->Size = System::Drawing::Size(51, 43);
			this->button_amazonas->TabIndex = 5;
			this->button_amazonas->Text = L"Ama_zonas";
			this->button_amazonas->UseVisualStyleBackColor = false;
			this->button_amazonas->Click += gcnew System::EventHandler(this, &Mapa::button_amazonas_Click);
			// 
			// button_lambayeque
			// 
			this->button_lambayeque->BackColor = System::Drawing::Color::MediumPurple;
			this->button_lambayeque->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 5.75F));
			this->button_lambayeque->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_lambayeque->Location = System::Drawing::Point(44, 173);
			this->button_lambayeque->Name = L"button_lambayeque";
			this->button_lambayeque->Size = System::Drawing::Size(53, 38);
			this->button_lambayeque->TabIndex = 6;
			this->button_lambayeque->Text = L"Lamba_yeque";
			this->button_lambayeque->UseVisualStyleBackColor = false;
			this->button_lambayeque->Click += gcnew System::EventHandler(this, &Mapa::button_lambayeque_Click);
			// 
			// button_piura
			// 
			this->button_piura->BackColor = System::Drawing::Color::Goldenrod;
			this->button_piura->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_piura->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_piura->Location = System::Drawing::Point(48, 140);
			this->button_piura->Name = L"button_piura";
			this->button_piura->Size = System::Drawing::Size(54, 24);
			this->button_piura->TabIndex = 7;
			this->button_piura->Text = L"Piura";
			this->button_piura->UseVisualStyleBackColor = false;
			this->button_piura->Click += gcnew System::EventHandler(this, &Mapa::button_piura_Click);
			// 
			// button_huanuco
			// 
			this->button_huanuco->BackColor = System::Drawing::Color::Goldenrod;
			this->button_huanuco->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_huanuco->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_huanuco->Location = System::Drawing::Point(165, 231);
			this->button_huanuco->Name = L"button_huanuco";
			this->button_huanuco->Size = System::Drawing::Size(61, 38);
			this->button_huanuco->TabIndex = 8;
			this->button_huanuco->Text = L"Huánu_co";
			this->button_huanuco->UseVisualStyleBackColor = false;
			this->button_huanuco->Click += gcnew System::EventHandler(this, &Mapa::button_huanuco_Click);
			// 
			// button_sanmartin
			// 
			this->button_sanmartin->BackColor = System::Drawing::Color::PaleVioletRed;
			this->button_sanmartin->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 6.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_sanmartin->Location = System::Drawing::Point(139, 187);
			this->button_sanmartin->Name = L"button_sanmartin";
			this->button_sanmartin->Size = System::Drawing::Size(54, 45);
			this->button_sanmartin->TabIndex = 9;
			this->button_sanmartin->Text = L"San Martín";
			this->button_sanmartin->UseVisualStyleBackColor = false;
			this->button_sanmartin->Click += gcnew System::EventHandler(this, &Mapa::button_sanmartin_Click);
			// 
			// button_puno
			// 
			this->button_puno->BackColor = System::Drawing::Color::PaleVioletRed;
			this->button_puno->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_puno->Location = System::Drawing::Point(310, 382);
			this->button_puno->Name = L"button_puno";
			this->button_puno->Size = System::Drawing::Size(54, 24);
			this->button_puno->TabIndex = 10;
			this->button_puno->Text = L"Puno";
			this->button_puno->UseVisualStyleBackColor = false;
			this->button_puno->Click += gcnew System::EventHandler(this, &Mapa::button_puno_Click);
			// 
			// button_cusco
			// 
			this->button_cusco->BackColor = System::Drawing::Color::Goldenrod;
			this->button_cusco->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_cusco->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_cusco->Location = System::Drawing::Point(253, 342);
			this->button_cusco->Name = L"button_cusco";
			this->button_cusco->Size = System::Drawing::Size(54, 24);
			this->button_cusco->TabIndex = 11;
			this->button_cusco->Text = L"Cusco";
			this->button_cusco->UseVisualStyleBackColor = false;
			this->button_cusco->Click += gcnew System::EventHandler(this, &Mapa::button_cusco_Click);
			// 
			// button_ica
			// 
			this->button_ica->BackColor = System::Drawing::Color::Goldenrod;
			this->button_ica->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_ica->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_ica->Location = System::Drawing::Point(155, 367);
			this->button_ica->Name = L"button_ica";
			this->button_ica->Size = System::Drawing::Size(54, 24);
			this->button_ica->TabIndex = 12;
			this->button_ica->Text = L"Ica";
			this->button_ica->UseVisualStyleBackColor = false;
			this->button_ica->Click += gcnew System::EventHandler(this, &Mapa::button_ica_Click);
			// 
			// button_huancavelica
			// 
			this->button_huancavelica->BackColor = System::Drawing::Color::Olive;
			this->button_huancavelica->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 5.75F));
			this->button_huancavelica->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_huancavelica->Location = System::Drawing::Point(190, 328);
			this->button_huancavelica->Name = L"button_huancavelica";
			this->button_huancavelica->Size = System::Drawing::Size(54, 38);
			this->button_huancavelica->TabIndex = 13;
			this->button_huancavelica->Text = L"Huanca_velica";
			this->button_huancavelica->UseVisualStyleBackColor = false;
			this->button_huancavelica->Click += gcnew System::EventHandler(this, &Mapa::button_huancavelica_Click);
			// 
			// button_ayacucho
			// 
			this->button_ayacucho->BackColor = System::Drawing::Color::Khaki;
			this->button_ayacucho->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 5.75F));
			this->button_ayacucho->Location = System::Drawing::Point(204, 380);
			this->button_ayacucho->Name = L"button_ayacucho";
			this->button_ayacucho->Size = System::Drawing::Size(62, 31);
			this->button_ayacucho->TabIndex = 14;
			this->button_ayacucho->Text = L"Ayacucho";
			this->button_ayacucho->UseVisualStyleBackColor = false;
			this->button_ayacucho->Click += gcnew System::EventHandler(this, &Mapa::button_ayacucho_Click);
			// 
			// button_pasco
			// 
			this->button_pasco->BackColor = System::Drawing::Color::Olive;
			this->button_pasco->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_pasco->Location = System::Drawing::Point(166, 268);
			this->button_pasco->Name = L"button_pasco";
			this->button_pasco->Size = System::Drawing::Size(60, 24);
			this->button_pasco->TabIndex = 15;
			this->button_pasco->Text = L"Pasco";
			this->button_pasco->UseVisualStyleBackColor = false;
			this->button_pasco->Click += gcnew System::EventHandler(this, &Mapa::button_pasco_Click);
			// 
			// button_tumbes
			// 
			this->button_tumbes->BackColor = System::Drawing::Color::Olive;
			this->button_tumbes->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_tumbes->Location = System::Drawing::Point(12, 98);
			this->button_tumbes->Name = L"button_tumbes";
			this->button_tumbes->Size = System::Drawing::Size(60, 24);
			this->button_tumbes->TabIndex = 16;
			this->button_tumbes->Text = L"Tumbes";
			this->button_tumbes->UseVisualStyleBackColor = false;
			this->button_tumbes->Click += gcnew System::EventHandler(this, &Mapa::button_tumbes_Click);
			// 
			// button_arequipa
			// 
			this->button_arequipa->BackColor = System::Drawing::Color::Olive;
			this->button_arequipa->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_arequipa->Location = System::Drawing::Point(230, 412);
			this->button_arequipa->Name = L"button_arequipa";
			this->button_arequipa->Size = System::Drawing::Size(77, 24);
			this->button_arequipa->TabIndex = 17;
			this->button_arequipa->Text = L"Arequipa";
			this->button_arequipa->UseVisualStyleBackColor = false;
			this->button_arequipa->Click += gcnew System::EventHandler(this, &Mapa::button_arequipa_Click);
			// 
			// button_apurimac
			// 
			this->button_apurimac->BackColor = System::Drawing::Color::MediumPurple;
			this->button_apurimac->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 5.75F));
			this->button_apurimac->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_apurimac->Location = System::Drawing::Point(231, 361);
			this->button_apurimac->Name = L"button_apurimac";
			this->button_apurimac->Size = System::Drawing::Size(76, 25);
			this->button_apurimac->TabIndex = 18;
			this->button_apurimac->Text = L"Apurímac";
			this->button_apurimac->UseVisualStyleBackColor = false;
			this->button_apurimac->Click += gcnew System::EventHandler(this, &Mapa::button_apurimac_Click);
			// 
			// button_moquegua
			// 
			this->button_moquegua->BackColor = System::Drawing::Color::Khaki;
			this->button_moquegua->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 5.75F));
			this->button_moquegua->Location = System::Drawing::Point(289, 431);
			this->button_moquegua->Name = L"button_moquegua";
			this->button_moquegua->Size = System::Drawing::Size(65, 23);
			this->button_moquegua->TabIndex = 19;
			this->button_moquegua->Text = L"Moquegua";
			this->button_moquegua->UseVisualStyleBackColor = false;
			this->button_moquegua->Click += gcnew System::EventHandler(this, &Mapa::button_moquegua_Click);
			// 
			// button_tacna
			// 
			this->button_tacna->BackColor = System::Drawing::Color::Olive;
			this->button_tacna->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 5.75F));
			this->button_tacna->Location = System::Drawing::Point(289, 460);
			this->button_tacna->Name = L"button_tacna";
			this->button_tacna->Size = System::Drawing::Size(65, 23);
			this->button_tacna->TabIndex = 20;
			this->button_tacna->Text = L"Tacna";
			this->button_tacna->UseVisualStyleBackColor = false;
			this->button_tacna->Click += gcnew System::EventHandler(this, &Mapa::button_tacna_Click);
			// 
			// button_madrededios
			// 
			this->button_madrededios->BackColor = System::Drawing::Color::Olive;
			this->button_madrededios->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 6.75F));
			this->button_madrededios->Location = System::Drawing::Point(289, 298);
			this->button_madrededios->Name = L"button_madrededios";
			this->button_madrededios->Size = System::Drawing::Size(75, 44);
			this->button_madrededios->TabIndex = 21;
			this->button_madrededios->Text = L"Madre de Dios";
			this->button_madrededios->UseVisualStyleBackColor = false;
			this->button_madrededios->Click += gcnew System::EventHandler(this, &Mapa::button_madrededios_Click);
			// 
			// button_ucayali
			// 
			this->button_ucayali->BackColor = System::Drawing::Color::Khaki;
			this->button_ucayali->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 6.75F));
			this->button_ucayali->Location = System::Drawing::Point(232, 261);
			this->button_ucayali->Name = L"button_ucayali";
			this->button_ucayali->Size = System::Drawing::Size(59, 31);
			this->button_ucayali->TabIndex = 22;
			this->button_ucayali->Text = L"Ucayali";
			this->button_ucayali->UseVisualStyleBackColor = false;
			this->button_ucayali->Click += gcnew System::EventHandler(this, &Mapa::button_ucayali_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Olive;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(190, 112);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 24);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Loreto";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Mapa::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(1, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(420, 511);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 24;
			this->pictureBox1->TabStop = false;
			// 
			// Iniciar
			// 
			this->Iniciar->BackColor = System::Drawing::SystemColors::Highlight;
			this->Iniciar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Iniciar->Location = System::Drawing::Point(242, 12);
			this->Iniciar->Name = L"Iniciar";
			this->Iniciar->Size = System::Drawing::Size(112, 36);
			this->Iniciar->TabIndex = 25;
			this->Iniciar->Text = L"Iniciar";
			this->Iniciar->UseVisualStyleBackColor = false;
			this->Iniciar->Click += gcnew System::EventHandler(this, &Mapa::Iniciar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(439, 455);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(246, 23);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Departamentos seleccionados:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(679, 459);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 20);
			this->label2->TabIndex = 27;
			this->label2->Text = L"0";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Highlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(884, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 36);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Finalizar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Mapa::button2_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Mapa::timer1_Tick);
			// 
			// listView2
			// 
			this->listView2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->Inicio, this->Final,
					this->Ruta, this->Km, this->N
			});
			this->listView2->GridLines = true;
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(443, 272);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(553, 164);
			this->listView2->TabIndex = 30;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			this->listView2->SelectedIndexChanged += gcnew System::EventHandler(this, &Mapa::listView2_SelectedIndexChanged);
			// 
			// Inicio
			// 
			this->Inicio->Text = L"N";
			this->Inicio->Width = 21;
			// 
			// Final
			// 
			this->Final->Text = L"Inicio";
			this->Final->Width = 63;
			// 
			// Ruta
			// 
			this->Ruta->Text = L"Final";
			this->Ruta->Width = 72;
			// 
			// Km
			// 
			this->Km->Text = L"Ruta";
			this->Km->Width = 327;
			// 
			// N
			// 
			this->N->Text = L"Km";
			this->N->Width = 61;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(451, 231);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(374, 23);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Indique la cantidad de departamentoos a visitar:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(831, 236);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(70, 20);
			this->textBox1->TabIndex = 32;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(860, 440);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(113, 38);
			this->button4->TabIndex = 34;
			this->button4->Text = L"Limpiar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Mapa::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(907, 236);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(66, 23);
			this->button5->TabIndex = 35;
			this->button5->Text = L"Aceptar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Mapa::button5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(450, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(344, 16);
			this->label4->TabIndex = 36;
			this->label4->Text = L"1.- Indique un número de departamentos a visitar";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(450, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(141, 16);
			this->label5->TabIndex = 37;
			this->label5->Text = L"2.- Click en aceptar";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(450, 126);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(427, 16);
			this->label6->TabIndex = 38;
			this->label6->Text = L"3.- Haga solo un click a los departamentos que quiera visitar";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(450, 146);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(131, 16);
			this->label8->TabIndex = 40;
			this->label8->Text = L"4.-Click en buscar";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(574, 42);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(152, 25);
			this->label7->TabIndex = 41;
			this->label7->Text = L"Instrucciones";
			// 
			// Mapa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1008, 511);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Iniciar);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_ucayali);
			this->Controls->Add(this->button_madrededios);
			this->Controls->Add(this->button_tacna);
			this->Controls->Add(this->button_moquegua);
			this->Controls->Add(this->button_apurimac);
			this->Controls->Add(this->button_arequipa);
			this->Controls->Add(this->button_tumbes);
			this->Controls->Add(this->button_pasco);
			this->Controls->Add(this->button_ayacucho);
			this->Controls->Add(this->button_huancavelica);
			this->Controls->Add(this->button_ica);
			this->Controls->Add(this->button_cusco);
			this->Controls->Add(this->button_puno);
			this->Controls->Add(this->button_sanmartin);
			this->Controls->Add(this->button_huanuco);
			this->Controls->Add(this->button_piura);
			this->Controls->Add(this->button_lambayeque);
			this->Controls->Add(this->button_amazonas);
			this->Controls->Add(this->button_cajamarca);
			this->Controls->Add(this->button_lalibertad);
			this->Controls->Add(this->button_ancash);
			this->Controls->Add(this->button_junin);
			this->Controls->Add(this->button_lima);
			this->Controls->Add(this->pictureBox1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Mapa";
			this->Text = L"PeruForm";
			this->Load += gcnew System::EventHandler(this, &Mapa::Mapa_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			bool key = false;
	private: System::Void Mapa_Load(System::Object^  sender, System::EventArgs^  e) {
		this->Width = 436;
		this->Height = 549;
		indice->push_back(10);
	}
	private: System::Void button_tumbes_Click(System::Object^  sender, System::EventArgs^  e) {
		indice->push_back(1);
		
		//a->dijkstra(1, 2);
		//String^ ruta = gcnew String(a->get_rutas().c_str());
		//MessageBox::Show(ruta, "Ruta");
	}
private: System::Void button_lalibertad_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(5);
	//a->dijkstra(1, 3);
	//String^ ruta = gcnew String(a->get_rutas().c_str());
	//MessageBox::Show(ruta, "Ruta");
}
private: System::Void button_piura_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(2);
	//a->dijkstra(1, 4);
	//String^ ruta = gcnew String(a->get_rutas().c_str());
	//MessageBox::Show(ruta, "Ruta");
}
private: System::Void button_lambayeque_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(3);
	//a->dijkstra(1, 5);
	//String^ ruta = gcnew String(a->get_rutas().c_str());
	//MessageBox::Show(ruta, "Ruta");
}
private: System::Void Iniciar_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Width = 1024;
	this->Height = 549;
	Iniciar->Visible = false;
}

private: System::Void button_cajamarca_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(4);
}
private: System::Void button_amazonas_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(6);
}
private: System::Void button_sanmartin_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(7);
}
private: System::Void button_ancash_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(9);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(8);
}
private: System::Void button_huanuco_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(11);
}
private: System::Void button_pasco_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(13);
}
private: System::Void button_junin_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(14);
}
private: System::Void button_ucayali_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(12);
}
private: System::Void button_huancavelica_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(15);
}
private: System::Void button_ica_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(16);
}
private: System::Void button_cusco_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(19);
}
private: System::Void button_apurimac_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(21);
}
private: System::Void button_ayacucho_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(17);
}
private: System::Void button_arequipa_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(18);
}
private: System::Void button_madrededios_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(20);
}
private: System::Void button_puno_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(22);
}
private: System::Void button_moquegua_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(23);
}
private: System::Void button_tacna_Click(System::Object^  sender, System::EventArgs^  e) {
	indice->push_back(24);
	
}
	   int k = 0;
	   int limite = 0;
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		if(textBox1->Text!=""&&key){
		if (indice->size()-1==limite) {
			indice->push_back(10);
			string rutas [] = { "tumbes","piura","lambayeque","cajamarca","libertad","amazonas","sanmartin","loreto","ancash","lima","huanuco","ucayali","pasco","junin","huancavelica","ica","ayacucho","arequipa","cusco","madrededios","apurimac","puno","moquegua","tacna" };
			

			for (int i = 0; i < limite+1; i++) {
				k++;
				ListViewItem^ Lv1 = gcnew ListViewItem(Convert::ToString(k));
				shorter* a = new shorter();
				String^ Dato1 = "";
				Dato1 = gcnew String(rutas[(indice->at(i))-1].c_str());
				Lv1->SubItems->Add(Dato1);
				String^ Dato2 = "";
				Dato2 = gcnew String(rutas[(indice->at(i + 1))-1].c_str());
				Lv1->SubItems->Add(Dato2);
				a->dijkstra(indice->at(i), indice->at(i + 1));
				String^ Dato3 = "";
				Dato3 = gcnew String(a->get_rutas().c_str());
				Lv1->SubItems->Add(Dato3);
				String^ Dato4 = "";
				Dato4 = gcnew String(Convert::ToString(a->GetKmT()));
				Lv1->SubItems->Add(Dato4);
				delete a;
				listView2->Items->Add(Lv1);
			}
			
			delete indice;
			indice = new vector<int>;
			indice->push_back(10);
			label2->Text = "0";
			k = 0;
			key = false;
		}
		}
		label2->Text = Convert::ToString(indice->size() - 1);
	}
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

}
	  
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
}
private: System::Void listView2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	key = true;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	key = true;
	if(textBox1->Text ==""){
		MessageBox::Show("Ingrese un numero!!!!","Error 404" );
	}
	else {
		
		limite = Convert::ToInt32(textBox1->Text);
		MessageBox::Show("Se registró su número corretamente!!!", "En Hora Buena :D");
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//listView2->Clear();
	//listView2->Columns->Add()
	if (limite != 0) {
		for (int i = limite; i >=0; i--) {
			listView2->Items->RemoveAt(i);
		}
	}
		
}
};
}

