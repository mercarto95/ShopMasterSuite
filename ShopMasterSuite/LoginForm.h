#pragma once

namespace ShopMasterSuite {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			
			// TO DO : Encapsulation
			// Hide leader login panel
			pnl_login_leader->Hide();
			//start timer to show time & Date 
			timer_time_login->Start();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnl_mainLogin;
	protected:
	private: System::Windows::Forms::Button^ btn_login_leader;
	private: System::Windows::Forms::Button^ btn_login_manager;
	private: System::Windows::Forms::Panel^ pnl_login_logo;


	private: System::Windows::Forms::PictureBox^ picBox_login_logo;
	private: System::Windows::Forms::Panel^ pnl_login_footer;
	private: System::Windows::Forms::Label^ lbl_login_footer;
	private: System::Windows::Forms::Label^ lbl_login_time;
	private: System::Windows::Forms::Timer^ timer_time_login;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbl_login_date;
	private: System::Windows::Forms::Panel^ pnl_login_leader;


	private: System::Windows::Forms::Button^ btn_login_leader_close;
	private: System::Windows::Forms::TextBox^ txtBox_login_leader_id;

	private: System::Windows::Forms::Label^ lbl_login_leader;
	private: System::Windows::Forms::Label^ lbl_login_leader_pass;
	private: System::Windows::Forms::TextBox^ txtBox_login_leader_passWord;
	private: System::Windows::Forms::Button^ btn_login_leader_login;
	private: System::Windows::Forms::Panel^ pnl_login_manager;
	private: System::Windows::Forms::Button^ btn_login_manager_login;


	private: System::Windows::Forms::Label^ lbl_login_manager_passWord;

	private: System::Windows::Forms::Label^ lbl_login_manager_id;
	private: System::Windows::Forms::TextBox^ txtBox_login_manager_passWord;


	private: System::Windows::Forms::TextBox^ txtBox_login_manager_id;
	private: System::Windows::Forms::Button^ btn_login_manager_close;






	private: System::ComponentModel::IContainer^ components;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->pnl_mainLogin = (gcnew System::Windows::Forms::Panel());
			this->pnl_login_manager = (gcnew System::Windows::Forms::Panel());
			this->btn_login_manager_login = (gcnew System::Windows::Forms::Button());
			this->lbl_login_manager_passWord = (gcnew System::Windows::Forms::Label());
			this->lbl_login_manager_id = (gcnew System::Windows::Forms::Label());
			this->txtBox_login_manager_passWord = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_login_manager_id = (gcnew System::Windows::Forms::TextBox());
			this->btn_login_manager_close = (gcnew System::Windows::Forms::Button());
			this->pnl_login_leader = (gcnew System::Windows::Forms::Panel());
			this->btn_login_leader_login = (gcnew System::Windows::Forms::Button());
			this->lbl_login_leader_pass = (gcnew System::Windows::Forms::Label());
			this->lbl_login_leader = (gcnew System::Windows::Forms::Label());
			this->txtBox_login_leader_passWord = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_login_leader_id = (gcnew System::Windows::Forms::TextBox());
			this->btn_login_leader_close = (gcnew System::Windows::Forms::Button());
			this->pnl_login_footer = (gcnew System::Windows::Forms::Panel());
			this->lbl_login_date = (gcnew System::Windows::Forms::Label());
			this->lbl_login_time = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_login_footer = (gcnew System::Windows::Forms::Label());
			this->pnl_login_logo = (gcnew System::Windows::Forms::Panel());
			this->picBox_login_logo = (gcnew System::Windows::Forms::PictureBox());
			this->btn_login_manager = (gcnew System::Windows::Forms::Button());
			this->btn_login_leader = (gcnew System::Windows::Forms::Button());
			this->timer_time_login = (gcnew System::Windows::Forms::Timer(this->components));
			this->pnl_mainLogin->SuspendLayout();
			this->pnl_login_manager->SuspendLayout();
			this->pnl_login_leader->SuspendLayout();
			this->pnl_login_footer->SuspendLayout();
			this->pnl_login_logo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox_login_logo))->BeginInit();
			this->SuspendLayout();
			// 
			// pnl_mainLogin
			// 
			this->pnl_mainLogin->AccessibleName = L"pnl_mainLogin";
			this->pnl_mainLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->pnl_mainLogin->Controls->Add(this->pnl_login_manager);
			this->pnl_mainLogin->Controls->Add(this->pnl_login_leader);
			this->pnl_mainLogin->Controls->Add(this->pnl_login_footer);
			this->pnl_mainLogin->Controls->Add(this->pnl_login_logo);
			this->pnl_mainLogin->Controls->Add(this->btn_login_manager);
			this->pnl_mainLogin->Controls->Add(this->btn_login_leader);
			this->pnl_mainLogin->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_mainLogin->ForeColor = System::Drawing::SystemColors::Control;
			this->pnl_mainLogin->Location = System::Drawing::Point(0, 0);
			this->pnl_mainLogin->Name = L"pnl_mainLogin";
			this->pnl_mainLogin->Size = System::Drawing::Size(801, 619);
			this->pnl_mainLogin->TabIndex = 0;
			// 
			// pnl_login_manager
			// 
			this->pnl_login_manager->AccessibleName = L"pnl_login_manager";
			this->pnl_login_manager->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->pnl_login_manager->Controls->Add(this->btn_login_manager_login);
			this->pnl_login_manager->Controls->Add(this->lbl_login_manager_passWord);
			this->pnl_login_manager->Controls->Add(this->lbl_login_manager_id);
			this->pnl_login_manager->Controls->Add(this->txtBox_login_manager_passWord);
			this->pnl_login_manager->Controls->Add(this->txtBox_login_manager_id);
			this->pnl_login_manager->Controls->Add(this->btn_login_manager_close);
			this->pnl_login_manager->Location = System::Drawing::Point(176, 31);
			this->pnl_login_manager->Name = L"pnl_login_manager";
			this->pnl_login_manager->Size = System::Drawing::Size(481, 509);
			this->pnl_login_manager->TabIndex = 3;
			this->pnl_login_manager->Visible = false;
			// 
			// btn_login_manager_login
			// 
			this->btn_login_manager_login->AccessibleName = L"btn_login_manager_login";
			this->btn_login_manager_login->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_login_manager_login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_login_manager_login->Font = (gcnew System::Drawing::Font(L"MS PGothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_login_manager_login->Location = System::Drawing::Point(69, 280);
			this->btn_login_manager_login->Name = L"btn_login_manager_login";
			this->btn_login_manager_login->Size = System::Drawing::Size(331, 114);
			this->btn_login_manager_login->TabIndex = 3;
			this->btn_login_manager_login->Text = L"Login";
			this->btn_login_manager_login->UseVisualStyleBackColor = true;
			// 
			// lbl_login_manager_passWord
			// 
			this->lbl_login_manager_passWord->AccessibleName = L"lbl_login_manager_passWord";
			this->lbl_login_manager_passWord->AutoSize = true;
			this->lbl_login_manager_passWord->Font = (gcnew System::Drawing::Font(L"MS PGothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_login_manager_passWord->Location = System::Drawing::Point(72, 175);
			this->lbl_login_manager_passWord->Name = L"lbl_login_manager_passWord";
			this->lbl_login_manager_passWord->Size = System::Drawing::Size(114, 24);
			this->lbl_login_manager_passWord->TabIndex = 2;
			this->lbl_login_manager_passWord->Text = L"Password";
			this->lbl_login_manager_passWord->Click += gcnew System::EventHandler(this, &LoginForm::label2_Click);
			// 
			// lbl_login_manager_id
			// 
			this->lbl_login_manager_id->AccessibleName = L"lbl_login_manager_id";
			this->lbl_login_manager_id->AutoSize = true;
			this->lbl_login_manager_id->Font = (gcnew System::Drawing::Font(L"MS PGothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_login_manager_id->Location = System::Drawing::Point(72, 72);
			this->lbl_login_manager_id->Name = L"lbl_login_manager_id";
			this->lbl_login_manager_id->Size = System::Drawing::Size(132, 24);
			this->lbl_login_manager_id->TabIndex = 2;
			this->lbl_login_manager_id->Text = L"Manager ID";
			// 
			// txtBox_login_manager_passWord
			// 
			this->txtBox_login_manager_passWord->AccessibleName = L"txtBox_login_manager_passWord";
			this->txtBox_login_manager_passWord->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->txtBox_login_manager_passWord->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBox_login_manager_passWord->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtBox_login_manager_passWord->Font = (gcnew System::Drawing::Font(L"MS PGothic", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtBox_login_manager_passWord->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->txtBox_login_manager_passWord->Location = System::Drawing::Point(72, 211);
			this->txtBox_login_manager_passWord->Name = L"txtBox_login_manager_passWord";
			this->txtBox_login_manager_passWord->Size = System::Drawing::Size(329, 35);
			this->txtBox_login_manager_passWord->TabIndex = 1;
			this->txtBox_login_manager_passWord->Text = L"5555";
			this->txtBox_login_manager_passWord->Click += gcnew System::EventHandler(this, &LoginForm::txtBox_login_manager_passWord_Click);
			this->txtBox_login_manager_passWord->TextChanged += gcnew System::EventHandler(this, &LoginForm::txtBox_login_manager_passWord_TextChanged);
			// 
			// txtBox_login_manager_id
			// 
			this->txtBox_login_manager_id->AccessibleName = L"txtBox_login_manager_passWord";
			this->txtBox_login_manager_id->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->txtBox_login_manager_id->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBox_login_manager_id->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtBox_login_manager_id->Font = (gcnew System::Drawing::Font(L"MS PGothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBox_login_manager_id->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->txtBox_login_manager_id->Location = System::Drawing::Point(72, 108);
			this->txtBox_login_manager_id->Name = L"txtBox_login_manager_id";
			this->txtBox_login_manager_id->Size = System::Drawing::Size(329, 35);
			this->txtBox_login_manager_id->TabIndex = 1;
			this->txtBox_login_manager_id->Text = L"0123";
			this->txtBox_login_manager_id->Click += gcnew System::EventHandler(this, &LoginForm::txtBox_login_manager_id_Click);
			// 
			// btn_login_manager_close
			// 
			this->btn_login_manager_close->AccessibleName = L"btn_login_manager_close";
			this->btn_login_manager_close->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_login_manager_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_login_manager_close->Font = (gcnew System::Drawing::Font(L"MS PGothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_login_manager_close->Location = System::Drawing::Point(353, 456);
			this->btn_login_manager_close->Name = L"btn_login_manager_close";
			this->btn_login_manager_close->Size = System::Drawing::Size(115, 41);
			this->btn_login_manager_close->TabIndex = 0;
			this->btn_login_manager_close->Text = L"close";
			this->btn_login_manager_close->UseVisualStyleBackColor = true;
			this->btn_login_manager_close->Click += gcnew System::EventHandler(this, &LoginForm::btn_login_manager_close_Click);
			// 
			// pnl_login_leader
			// 
			this->pnl_login_leader->AccessibleName = L"pnl_login_leader";
			this->pnl_login_leader->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->pnl_login_leader->Controls->Add(this->btn_login_leader_login);
			this->pnl_login_leader->Controls->Add(this->lbl_login_leader_pass);
			this->pnl_login_leader->Controls->Add(this->lbl_login_leader);
			this->pnl_login_leader->Controls->Add(this->txtBox_login_leader_passWord);
			this->pnl_login_leader->Controls->Add(this->txtBox_login_leader_id);
			this->pnl_login_leader->Controls->Add(this->btn_login_leader_close);
			this->pnl_login_leader->Location = System::Drawing::Point(176, 31);
			this->pnl_login_leader->Name = L"pnl_login_leader";
			this->pnl_login_leader->Size = System::Drawing::Size(481, 509);
			this->pnl_login_leader->TabIndex = 3;
			this->pnl_login_leader->Visible = false;
			// 
			// btn_login_leader_login
			// 
			this->btn_login_leader_login->AccessibleName = L"btn_login_leader_login";
			this->btn_login_leader_login->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_login_leader_login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_login_leader_login->Font = (gcnew System::Drawing::Font(L"MS PGothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_login_leader_login->Location = System::Drawing::Point(69, 280);
			this->btn_login_leader_login->Name = L"btn_login_leader_login";
			this->btn_login_leader_login->Size = System::Drawing::Size(331, 114);
			this->btn_login_leader_login->TabIndex = 3;
			this->btn_login_leader_login->Text = L"Login";
			this->btn_login_leader_login->UseVisualStyleBackColor = true;
			// 
			// lbl_login_leader_pass
			// 
			this->lbl_login_leader_pass->AccessibleName = L"lbl_login_leader_pass";
			this->lbl_login_leader_pass->AutoSize = true;
			this->lbl_login_leader_pass->Font = (gcnew System::Drawing::Font(L"MS PGothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_login_leader_pass->Location = System::Drawing::Point(72, 175);
			this->lbl_login_leader_pass->Name = L"lbl_login_leader_pass";
			this->lbl_login_leader_pass->Size = System::Drawing::Size(114, 24);
			this->lbl_login_leader_pass->TabIndex = 2;
			this->lbl_login_leader_pass->Text = L"Password";
			this->lbl_login_leader_pass->Click += gcnew System::EventHandler(this, &LoginForm::label2_Click);
			// 
			// lbl_login_leader
			// 
			this->lbl_login_leader->AccessibleName = L"lbl_login_leader";
			this->lbl_login_leader->AutoSize = true;
			this->lbl_login_leader->Font = (gcnew System::Drawing::Font(L"MS PGothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_login_leader->Location = System::Drawing::Point(72, 72);
			this->lbl_login_leader->Name = L"lbl_login_leader";
			this->lbl_login_leader->Size = System::Drawing::Size(116, 24);
			this->lbl_login_leader->TabIndex = 2;
			this->lbl_login_leader->Text = L"Leader ID";
			// 
			// txtBox_login_leader_passWord
			// 
			this->txtBox_login_leader_passWord->AccessibleName = L"txtBox_login_leader_passWord";
			this->txtBox_login_leader_passWord->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->txtBox_login_leader_passWord->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBox_login_leader_passWord->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtBox_login_leader_passWord->Font = (gcnew System::Drawing::Font(L"MS PGothic", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtBox_login_leader_passWord->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->txtBox_login_leader_passWord->Location = System::Drawing::Point(72, 211);
			this->txtBox_login_leader_passWord->Name = L"txtBox_login_leader_passWord";
			this->txtBox_login_leader_passWord->Size = System::Drawing::Size(329, 35);
			this->txtBox_login_leader_passWord->TabIndex = 1;
			this->txtBox_login_leader_passWord->Text = L"5555";
			this->txtBox_login_leader_passWord->Click += gcnew System::EventHandler(this, &LoginForm::txtBox_login_leader_passWord_Click);
			// 
			// txtBox_login_leader_id
			// 
			this->txtBox_login_leader_id->AccessibleName = L"txtBox_login_leader_id";
			this->txtBox_login_leader_id->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->txtBox_login_leader_id->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBox_login_leader_id->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtBox_login_leader_id->Font = (gcnew System::Drawing::Font(L"MS PGothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBox_login_leader_id->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->txtBox_login_leader_id->Location = System::Drawing::Point(72, 108);
			this->txtBox_login_leader_id->Name = L"txtBox_login_leader_id";
			this->txtBox_login_leader_id->Size = System::Drawing::Size(329, 35);
			this->txtBox_login_leader_id->TabIndex = 1;
			this->txtBox_login_leader_id->Text = L"0123";
			this->txtBox_login_leader_id->Click += gcnew System::EventHandler(this, &LoginForm::txtBox_login_leader_id_Click);
			// 
			// btn_login_leader_close
			// 
			this->btn_login_leader_close->AccessibleName = L"#160521";
			this->btn_login_leader_close->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_login_leader_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_login_leader_close->Font = (gcnew System::Drawing::Font(L"MS PGothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_login_leader_close->Location = System::Drawing::Point(353, 456);
			this->btn_login_leader_close->Name = L"btn_login_leader_close";
			this->btn_login_leader_close->Size = System::Drawing::Size(115, 41);
			this->btn_login_leader_close->TabIndex = 0;
			this->btn_login_leader_close->Text = L"close";
			this->btn_login_leader_close->UseVisualStyleBackColor = true;
			this->btn_login_leader_close->Click += gcnew System::EventHandler(this, &LoginForm::btn_login_leader_close_Click);
			// 
			// pnl_login_footer
			// 
			this->pnl_login_footer->AccessibleName = L"pnl_login_footer";
			this->pnl_login_footer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->pnl_login_footer->Controls->Add(this->lbl_login_date);
			this->pnl_login_footer->Controls->Add(this->lbl_login_time);
			this->pnl_login_footer->Controls->Add(this->label1);
			this->pnl_login_footer->Controls->Add(this->lbl_login_footer);
			this->pnl_login_footer->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pnl_login_footer->Location = System::Drawing::Point(0, 557);
			this->pnl_login_footer->Name = L"pnl_login_footer";
			this->pnl_login_footer->Size = System::Drawing::Size(801, 62);
			this->pnl_login_footer->TabIndex = 2;
			// 
			// lbl_login_date
			// 
			this->lbl_login_date->AccessibleName = L"lbl_login_date";
			this->lbl_login_date->AutoSize = true;
			this->lbl_login_date->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_login_date->ForeColor = System::Drawing::SystemColors::Control;
			this->lbl_login_date->Location = System::Drawing::Point(209, 19);
			this->lbl_login_date->Name = L"lbl_login_date";
			this->lbl_login_date->Size = System::Drawing::Size(62, 28);
			this->lbl_login_date->TabIndex = 1;
			this->lbl_login_date->Text = L"Date";
			// 
			// lbl_login_time
			// 
			this->lbl_login_time->AutoSize = true;
			this->lbl_login_time->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_login_time->ForeColor = System::Drawing::SystemColors::Control;
			this->lbl_login_time->Location = System::Drawing::Point(28, 19);
			this->lbl_login_time->Name = L"lbl_login_time";
			this->lbl_login_time->Size = System::Drawing::Size(62, 28);
			this->lbl_login_time->TabIndex = 1;
			this->lbl_login_time->Text = L"Time";
			// 
			// label1
			// 
			this->label1->AccessibleName = L"lbl_login_footer";
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(641, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Danial Akhlaghi";
			// 
			// lbl_login_footer
			// 
			this->lbl_login_footer->AccessibleName = L"lbl_login_footer";
			this->lbl_login_footer->AutoSize = true;
			this->lbl_login_footer->Font = (gcnew System::Drawing::Font(L"MV Boli", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_login_footer->ForeColor = System::Drawing::SystemColors::Control;
			this->lbl_login_footer->Location = System::Drawing::Point(607, 9);
			this->lbl_login_footer->Name = L"lbl_login_footer";
			this->lbl_login_footer->Size = System::Drawing::Size(156, 17);
			this->lbl_login_footer->TabIndex = 0;
			this->lbl_login_footer->Text = L"by: Ahmed Rodriguez";
			// 
			// pnl_login_logo
			// 
			this->pnl_login_logo->AccessibleName = L"pnl_login_logo";
			this->pnl_login_logo->Controls->Add(this->picBox_login_logo);
			this->pnl_login_logo->Location = System::Drawing::Point(236, 31);
			this->pnl_login_logo->Name = L"pnl_login_logo";
			this->pnl_login_logo->Size = System::Drawing::Size(325, 168);
			this->pnl_login_logo->TabIndex = 1;
			// 
			// picBox_login_logo
			// 
			this->picBox_login_logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBox_login_logo.Image")));
			this->picBox_login_logo->Location = System::Drawing::Point(3, 3);
			this->picBox_login_logo->Name = L"picBox_login_logo";
			this->picBox_login_logo->Size = System::Drawing::Size(319, 162);
			this->picBox_login_logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picBox_login_logo->TabIndex = 0;
			this->picBox_login_logo->TabStop = false;
			this->picBox_login_logo->Click += gcnew System::EventHandler(this, &LoginForm::pictureBox1_Click);
			// 
			// btn_login_manager
			// 
			this->btn_login_manager->AccessibleDescription = L"btn_login_manager";
			this->btn_login_manager->AccessibleName = L"btn_login_manager";
			this->btn_login_manager->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_login_manager->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_login_manager->Font = (gcnew System::Drawing::Font(L"MV Boli", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_login_manager->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_login_manager->Location = System::Drawing::Point(214, 383);
			this->btn_login_manager->Name = L"btn_login_manager";
			this->btn_login_manager->Size = System::Drawing::Size(364, 125);
			this->btn_login_manager->TabIndex = 0;
			this->btn_login_manager->Text = L"Manager";
			this->btn_login_manager->UseVisualStyleBackColor = true;
			this->btn_login_manager->Click += gcnew System::EventHandler(this, &LoginForm::btn_login_manager_Click);
			// 
			// btn_login_leader
			// 
			this->btn_login_leader->AccessibleDescription = L"btn_login_leader";
			this->btn_login_leader->AccessibleName = L"btn_login_leader";
			this->btn_login_leader->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_login_leader->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_login_leader->Font = (gcnew System::Drawing::Font(L"MV Boli", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_login_leader->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_login_leader->Location = System::Drawing::Point(214, 242);
			this->btn_login_leader->Name = L"btn_login_leader";
			this->btn_login_leader->Size = System::Drawing::Size(364, 125);
			this->btn_login_leader->TabIndex = 0;
			this->btn_login_leader->Text = L"Shift Leader";
			this->btn_login_leader->UseVisualStyleBackColor = true;
			this->btn_login_leader->Click += gcnew System::EventHandler(this, &LoginForm::btn_login_leader_Click);
			// 
			// timer_time_login
			// 
			this->timer_time_login->Tick += gcnew System::EventHandler(this, &LoginForm::timer_time_login_Tick);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->ClientSize = System::Drawing::Size(801, 619);
			this->Controls->Add(this->pnl_mainLogin);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"LoginForm";
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Shop Master Suite";
			this->pnl_mainLogin->ResumeLayout(false);
			this->pnl_login_manager->ResumeLayout(false);
			this->pnl_login_manager->PerformLayout();
			this->pnl_login_leader->ResumeLayout(false);
			this->pnl_login_leader->PerformLayout();
			this->pnl_login_footer->ResumeLayout(false);
			this->pnl_login_footer->PerformLayout();
			this->pnl_login_logo->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox_login_logo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void lbl_logo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer_time_login_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime dt = DateTime::Now;

	lbl_login_time->Text = dt.Now.ToLongTimeString();

	lbl_login_date->Text = dt.Now.ToLongDateString();

}

private: System::Void btn_login_leader_close_Click(System::Object^ sender, System::EventArgs^ e) {
	pnl_login_leader->Hide();
}

private: System::Void btn_login_manager_close_Click(System::Object^ sender, System::EventArgs^ e) {
	pnl_login_manager->Hide();
}

private: System::Void btn_login_leader_Click(System::Object^ sender, System::EventArgs^ e) {
	pnl_login_leader->Show();
	if (txtBox_login_leader_id->Text != "0123" || txtBox_login_leader_passWord->Text != "5555") {
		txtBox_login_leader_id->Text = "";
		txtBox_login_leader_passWord->Text = "";
	}
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtBox_login_leader_id_Click(System::Object^ sender, System::EventArgs^ e) {
	txtBox_login_leader_id->Text = "";
}
private: System::Void txtBox_login_manager_id_Click(System::Object^ sender, System::EventArgs^ e) {
	txtBox_login_manager_id->Text = "";
}
private: System::Void txtBox_login_leader_passWord_Click(System::Object^ sender, System::EventArgs^ e) {
	txtBox_login_leader_passWord->Text = "";
}
private: System::Void txtBox_login_manager_passWord_Click(System::Object^ sender, System::EventArgs^ e) {
	txtBox_login_manager_passWord->Text = "";
}
private: System::Void btn_login_manager_Click(System::Object^ sender, System::EventArgs^ e) {
	pnl_login_manager->Show();
	if (txtBox_login_manager_id->Text != "0123" || txtBox_login_manager_passWord->Text != "5555") {
		txtBox_login_manager_id->Text = "";
		txtBox_login_manager_passWord->Text = "";
	}
}
private: System::Void txtBox_login_manager_passWord_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
