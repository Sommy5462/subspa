#pragma once

namespace subspa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for HomePage
	/// </summary>
	public ref class HomePage : public System::Windows::Forms::Form
	{
	public:
		HomePage(void)
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
		~HomePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  search_button;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^  name_box;
	private: System::Windows::Forms::TextBox^  email_box;
	private: System::Windows::Forms::TextBox^  iuc_num;
	private: System::Windows::Forms::TextBox^  phone_num;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  save_button;


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
			this->search_button = (gcnew System::Windows::Forms::Button());
			this->name_box = (gcnew System::Windows::Forms::TextBox());
			this->email_box = (gcnew System::Windows::Forms::TextBox());
			this->iuc_num = (gcnew System::Windows::Forms::TextBox());
			this->phone_num = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->save_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// search_button
			// 
			this->search_button->Font = (gcnew System::Drawing::Font(L"High Tower Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_button->Location = System::Drawing::Point(45, 142);
			this->search_button->Margin = System::Windows::Forms::Padding(4);
			this->search_button->Name = L"search_button";
			this->search_button->Size = System::Drawing::Size(112, 34);
			this->search_button->TabIndex = 1;
			this->search_button->Text = L"Search";
			this->search_button->UseVisualStyleBackColor = true;
			this->search_button->Click += gcnew System::EventHandler(this, &HomePage::search_button_Click);
			// 
			// name_box
			// 
			this->name_box->Location = System::Drawing::Point(418, 53);
			this->name_box->Margin = System::Windows::Forms::Padding(4);
			this->name_box->Name = L"name_box";
			this->name_box->Size = System::Drawing::Size(246, 26);
			this->name_box->TabIndex = 2;
			this->name_box->TextChanged += gcnew System::EventHandler(this, &HomePage::name_box_TextChanged);
			// 
			// email_box
			// 
			this->email_box->Location = System::Drawing::Point(418, 108);
			this->email_box->Margin = System::Windows::Forms::Padding(4);
			this->email_box->Name = L"email_box";
			this->email_box->Size = System::Drawing::Size(246, 26);
			this->email_box->TabIndex = 3;
			// 
			// iuc_num
			// 
			this->iuc_num->Location = System::Drawing::Point(418, 168);
			this->iuc_num->Margin = System::Windows::Forms::Padding(4);
			this->iuc_num->Name = L"iuc_num";
			this->iuc_num->Size = System::Drawing::Size(246, 26);
			this->iuc_num->TabIndex = 4;
			// 
			// phone_num
			// 
			this->phone_num->Location = System::Drawing::Point(418, 227);
			this->phone_num->Margin = System::Windows::Forms::Padding(4);
			this->phone_num->Name = L"phone_num";
			this->phone_num->Size = System::Drawing::Size(246, 26);
			this->phone_num->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"High Tower Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(231, 51);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 19);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Full Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->Font = (gcnew System::Drawing::Font(L"High Tower Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(231, 107);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 19);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Email";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label3->Font = (gcnew System::Drawing::Font(L"High Tower Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(231, 167);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 19);
			this->label3->TabIndex = 8;
			this->label3->Text = L"IUC number";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label4->Font = (gcnew System::Drawing::Font(L"High Tower Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(231, 225);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 19);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Phone Number";
			// 
			// save_button
			// 
			this->save_button->Font = (gcnew System::Drawing::Font(L"High Tower Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save_button->Location = System::Drawing::Point(628, 284);
			this->save_button->Margin = System::Windows::Forms::Padding(4);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(112, 34);
			this->save_button->TabIndex = 10;
			this->save_button->Text = L"Save";
			this->save_button->UseVisualStyleBackColor = true;
			this->save_button->Click += gcnew System::EventHandler(this, &HomePage::save_button_Click);
			// 
			// HomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(789, 335);
			this->Controls->Add(this->save_button);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->phone_num);
			this->Controls->Add(this->iuc_num);
			this->Controls->Add(this->email_box);
			this->Controls->Add(this->name_box);
			this->Controls->Add(this->search_button);
			this->Font = (gcnew System::Drawing::Font(L"High Tower Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"HomePage";
			this->Text = L"Home";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &HomePage::HomePage_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ constring = "Server=127.0.0.1; Uid=root; Pwd=; Database=database";
		MySqlConnection^ connect = gcnew MySqlConnection(constring);

	private: System::Void HomePage_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		Application::Exit();
	}
	private: System::Void save_button_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			String^ name = name_box->Text;
			String^ email = email_box->Text;
			String^ iucnumber = iuc_num->Text;
			String^ phonenumber = phone_num->Text;

			MySqlCommand^ command = gcnew MySqlCommand("insert into database.clientinfo values ('" + name + "','" + email + "','" + iucnumber + "','" + phonenumber + "')", connect);

			MySqlDataReader^ dr = command->ExecuteReader();
			connect->Open();
			MessageBox::Show("User Info Saved!!!\n User ID:");
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void search_button_Click(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		String^ name = name_box->Text;

		MySqlCommand^ command = gcnew MySqlCommand("select * from clientinfo where name = '" + name + "' ", connect);
		connect->Open();
		MySqlDataReader^ dr = command->ExecuteReader();
		
		while (dr->Read())
		{
			String^ iucnum = dr->GetString(2);
			MessageBox::Show("User's IUC number is " + iucnum);
			iuc_num->Text = dr->GetString(2);			
		}

		connect->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void name_box_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		String^ name = name_box->Text;

		MySqlCommand^ command = gcnew MySqlCommand("select * from clientinfo where name = '" + name + "' ", connect);
		connect->Open();
		MySqlDataReader^ dr = command->ExecuteReader();

		while (dr->Read())
		{
			String^ iucnum = dr->GetString(2);
			//MessageBox::Show("User's IUC number is " + iucnum);
			iuc_num->Text = dr->GetString(2);
		}

		connect->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
};
}
