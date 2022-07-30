#pragma once
#include "Admin.h"
#include "User.h"
#include "Airport.h"
#include "Plane.h"
#include "Reservation.h"
#include "Ticket.h"
#include "Seat.h"

namespace AirLine_System {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::Panel^ Base;
	private: System::Windows::Forms::Panel^ UserMenu;
	private: System::Windows::Forms::Panel^ Account_layer;
	private: System::Windows::Forms::Panel^ Account_feauture;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Panel^ Signin;
	private: System::Windows::Forms::Panel^ CreateAccount;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Panel^ Booking_layer;
	private: System::Windows::Forms::Panel^ Reservation_layer;
	private: System::Windows::Forms::Panel^ Terms;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Panel^ Terms2;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::Panel^ AdminMenu;
	private: System::Windows::Forms::Panel^ Accounts_layer;
	private: System::Windows::Forms::Panel^ Flights_layer;
	private: System::Windows::Forms::Panel^ Reservations_layer;
	private: System::Windows::Forms::PictureBox^ HomeButton;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ ID;
	private: System::Windows::Forms::Panel^ Flights_feautures;
	private: System::Windows::Forms::PictureBox^ pictureBox29;
	private: System::Windows::Forms::PictureBox^ pictureBox30;
	private: System::Windows::Forms::Panel^ Account_Feautures;
	private: System::Windows::Forms::PictureBox^ pictureBox31;
	private: System::Windows::Forms::Panel^ Planes_layer;
	private: System::Windows::Forms::Panel^ IconsContainer;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::PictureBox^ Exit;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::PictureBox^ pictureBox26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::PictureBox^ pictureBox27;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Panel^ Plane_feautures;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::Panel^ Airports_layer;
	private: System::Windows::Forms::Panel^ Airport_feautures;
	private: System::Windows::Forms::PictureBox^ pictureBox35;
	private: System::Windows::Forms::PictureBox^ pictureBox38;
	private: System::Windows::Forms::PictureBox^ pictureBox37;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Panel^ Flight_layer;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ AddFlight;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label59;
	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ AddPlane;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::Label^ label60;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox32;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::Panel^ AddAirport;
	private: System::Windows::Forms::TextBox^ textBox35;
	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::TextBox^ textBox34;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::TextBox^ textBox33;
	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label65;
	private: System::Windows::Forms::Panel^ MENU;
	private: System::Windows::Forms::Panel^ Search_account;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label72;
	private: System::Windows::Forms::TextBox^ textBox54;
	private: System::Windows::Forms::TextBox^ textBox56;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::TextBox^ textBox55;
	private: System::Windows::Forms::Panel^ Airport_search;
	private: System::Windows::Forms::TextBox^ textBox39;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox40;
	private: System::Windows::Forms::TextBox^ textBox41;
	private: System::Windows::Forms::Panel^ Plane_search;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::TextBox^ textBox46;
	private: System::Windows::Forms::TextBox^ textBox47;
	private: System::Windows::Forms::Panel^ Reservation_search;
	private: System::Windows::Forms::TextBox^ textBox48;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Label^ label67;
	private: System::Windows::Forms::TextBox^ textBox49;
	private: System::Windows::Forms::TextBox^ textBox50;
	private: System::Windows::Forms::TextBox^ textBox45;
	private: System::Windows::Forms::Panel^ Flight_search;
	private: System::Windows::Forms::TextBox^ textBox36;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox37;
	private: System::Windows::Forms::TextBox^ textBox38;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Panel^ SELECT;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ Enter;
	private: System::Windows::Forms::Panel^ PAY;
	private: System::Windows::Forms::Panel^ BOOK;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::ComboBox^ comboBox8;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Panel^ Search;
	private: System::Windows::Forms::Panel^ Search_Result;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox52;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ textBox44;
	private: System::Windows::Forms::TextBox^ textBox42;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::TextBox^ textBox43;
	private: System::Windows::Forms::TextBox^ textBox18;

	private: System::Windows::Forms::Panel^ Buy;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::TextBox^ textBox53;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::TextBox^ textBox51;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox57;
	private: System::Windows::Forms::Label^ label66;
	private: System::Windows::Forms::ComboBox^ comboBox9;
	private: System::Windows::Forms::Label^ label70;
	private: System::Windows::Forms::Label^ label69;
	private: System::Windows::Forms::Label^ label68;
	private: System::Windows::Forms::Panel^ Paypal;
	private: System::Windows::Forms::Panel^ VisaCard;
	private: System::Windows::Forms::Label^ label73;
	private: System::Windows::Forms::Label^ label74;
	private: System::Windows::Forms::Label^ label75;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;
	private: System::Windows::Forms::Label^ label71;
	private: System::Windows::Forms::TextBox^ textBox59;
	private: System::Windows::Forms::TextBox^ textBox58;
	private: System::Windows::Forms::Panel^ Print_ticket;
	private: System::Windows::Forms::TextBox^ textBox60;
	private: System::Windows::Forms::Panel^ Reservations_search;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox62;
	private: System::Windows::Forms::TextBox^ textBox63;
	private: System::Windows::Forms::Panel^ Reservation_feautures;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ line1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ Reservations_feautures;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::TextBox^ textBox61;
	private: System::Windows::Forms::TextBox^ textBox64;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::Panel^ CustomizeColor;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Panel^ Icons_container;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::PictureBox^ pictureBox33;
	private: System::Windows::Forms::PictureBox^ pictureBox32;
	private: System::Windows::Forms::PictureBox^ pictureBox28;
	private: System::Windows::Forms::PictureBox^ pictureBox25;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox34;
	private: System::Windows::Forms::Timer^ timer4;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::Panel^ Check_Flight;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::TextBox^ textBox65;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ Darkmode;
	private: System::Windows::Forms::Button^ Lightmode;
	private: System::Windows::Forms::Label^ label76;
	private: System::Windows::Forms::TextBox^ textBox66;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Label^ label77;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Base = (gcnew System::Windows::Forms::Panel());
			this->Signin = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->line1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Terms = (gcnew System::Windows::Forms::Panel());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->UserMenu = (gcnew System::Windows::Forms::Panel());
			this->Icons_container = (gcnew System::Windows::Forms::Panel());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->MENU = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->Account_layer = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->ID = (gcnew System::Windows::Forms::Label());
			this->Account_feauture = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->Booking_layer = (gcnew System::Windows::Forms::Panel());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->Enter = (gcnew System::Windows::Forms::Panel());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->SELECT = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->BOOK = (gcnew System::Windows::Forms::Panel());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->Buy = (gcnew System::Windows::Forms::Panel());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->textBox51 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->PAY = (gcnew System::Windows::Forms::Panel());
			this->VisaCard = (gcnew System::Windows::Forms::Panel());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->textBox59 = (gcnew System::Windows::Forms::TextBox());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->Paypal = (gcnew System::Windows::Forms::Panel());
			this->textBox57 = (gcnew System::Windows::Forms::TextBox());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->Print_ticket = (gcnew System::Windows::Forms::Panel());
			this->textBox60 = (gcnew System::Windows::Forms::TextBox());
			this->Flight_layer = (gcnew System::Windows::Forms::Panel());
			this->Search = (gcnew System::Windows::Forms::Panel());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->Search_Result = (gcnew System::Windows::Forms::Panel());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox52 = (gcnew System::Windows::Forms::TextBox());
			this->Reservation_layer = (gcnew System::Windows::Forms::Panel());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->Reservation_feautures = (gcnew System::Windows::Forms::Panel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->Reservations_search = (gcnew System::Windows::Forms::Panel());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->textBox66 = (gcnew System::Windows::Forms::TextBox());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox62 = (gcnew System::Windows::Forms::TextBox());
			this->textBox63 = (gcnew System::Windows::Forms::TextBox());
			this->CreateAccount = (gcnew System::Windows::Forms::Panel());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->Terms2 = (gcnew System::Windows::Forms::Panel());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->AdminMenu = (gcnew System::Windows::Forms::Panel());
			this->IconsContainer = (gcnew System::Windows::Forms::Panel());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->Exit = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->CustomizeColor = (gcnew System::Windows::Forms::Panel());
			this->Darkmode = (gcnew System::Windows::Forms::Button());
			this->Lightmode = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->HomeButton = (gcnew System::Windows::Forms::PictureBox());
			this->Accounts_layer = (gcnew System::Windows::Forms::Panel());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->Account_Feautures = (gcnew System::Windows::Forms::Panel());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->Search_account = (gcnew System::Windows::Forms::Panel());
			this->textBox55 = (gcnew System::Windows::Forms::TextBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->textBox54 = (gcnew System::Windows::Forms::TextBox());
			this->textBox56 = (gcnew System::Windows::Forms::TextBox());
			this->Flights_layer = (gcnew System::Windows::Forms::Panel());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->Flights_feautures = (gcnew System::Windows::Forms::Panel());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->AddFlight = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->Flight_search = (gcnew System::Windows::Forms::Panel());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->Check_Flight = (gcnew System::Windows::Forms::Panel());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->textBox65 = (gcnew System::Windows::Forms::TextBox());
			this->Airports_layer = (gcnew System::Windows::Forms::Panel());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->Airport_feautures = (gcnew System::Windows::Forms::Panel());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->AddAirport = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->Airport_search = (gcnew System::Windows::Forms::Panel());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->Planes_layer = (gcnew System::Windows::Forms::Panel());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->Plane_feautures = (gcnew System::Windows::Forms::Panel());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->AddPlane = (gcnew System::Windows::Forms::Panel());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->Plane_search = (gcnew System::Windows::Forms::Panel());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->Reservations_layer = (gcnew System::Windows::Forms::Panel());
			this->textBox61 = (gcnew System::Windows::Forms::TextBox());
			this->textBox64 = (gcnew System::Windows::Forms::TextBox());
			this->Reservations_feautures = (gcnew System::Windows::Forms::Panel());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->Reservation_search = (gcnew System::Windows::Forms::Panel());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Base->SuspendLayout();
			this->Signin->SuspendLayout();
			this->Terms->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->UserMenu->SuspendLayout();
			this->Icons_container->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			this->MENU->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->Account_layer->SuspendLayout();
			this->Account_feauture->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->Booking_layer->SuspendLayout();
			this->Enter->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SELECT->SuspendLayout();
			this->BOOK->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			this->Buy->SuspendLayout();
			this->PAY->SuspendLayout();
			this->VisaCard->SuspendLayout();
			this->Paypal->SuspendLayout();
			this->Print_ticket->SuspendLayout();
			this->Flight_layer->SuspendLayout();
			this->Search->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->Search_Result->SuspendLayout();
			this->Reservation_layer->SuspendLayout();
			this->Reservation_feautures->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->Reservations_search->SuspendLayout();
			this->CreateAccount->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->Terms2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->AdminMenu->SuspendLayout();
			this->IconsContainer->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			this->CustomizeColor->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomeButton))->BeginInit();
			this->Accounts_layer->SuspendLayout();
			this->Account_Feautures->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			this->Search_account->SuspendLayout();
			this->Flights_layer->SuspendLayout();
			this->Flights_feautures->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			this->AddFlight->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->Flight_search->SuspendLayout();
			this->Check_Flight->SuspendLayout();
			this->Airports_layer->SuspendLayout();
			this->Airport_feautures->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			this->AddAirport->SuspendLayout();
			this->Airport_search->SuspendLayout();
			this->Planes_layer->SuspendLayout();
			this->Plane_feautures->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			this->AddPlane->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->Plane_search->SuspendLayout();
			this->Reservations_layer->SuspendLayout();
			this->Reservations_feautures->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->Reservation_search->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 88);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(42, 42);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MainForm::pictureBox1_Click);
			// 
			// Base
			// 
			this->Base->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Base.BackgroundImage")));
			this->Base->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Base->Controls->Add(this->Signin);
			this->Base->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Base->Location = System::Drawing::Point(0, 0);
			this->Base->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Base->Name = L"Base";
			this->Base->Size = System::Drawing::Size(857, 465);
			this->Base->TabIndex = 22;
			// 
			// Signin
			// 
			this->Signin->BackColor = System::Drawing::Color::Transparent;
			this->Signin->Controls->Add(this->panel1);
			this->Signin->Controls->Add(this->label5);
			this->Signin->Controls->Add(this->label2);
			this->Signin->Controls->Add(this->button2);
			this->Signin->Controls->Add(this->line1);
			this->Signin->Controls->Add(this->label3);
			this->Signin->Controls->Add(this->checkBox1);
			this->Signin->Controls->Add(this->button1);
			this->Signin->Controls->Add(this->textBox2);
			this->Signin->Controls->Add(this->textBox1);
			this->Signin->Controls->Add(this->label4);
			this->Signin->Dock = System::Windows::Forms::DockStyle::Right;
			this->Signin->Location = System::Drawing::Point(574, 0);
			this->Signin->Name = L"Signin";
			this->Signin->Size = System::Drawing::Size(283, 465);
			this->Signin->TabIndex = 31;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(15, 199);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(240, 3);
			this->panel1->TabIndex = 26;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::IndianRed;
			this->label5->Location = System::Drawing::Point(16, 295);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(222, 16);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Incorrect Username Or Password";
			this->label5->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Italic));
			this->label2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label2->Location = System::Drawing::Point(12, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 19);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Username";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button2->Location = System::Drawing::Point(146, 245);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 44);
			this->button2->TabIndex = 30;
			this->button2->Text = L"Create Account";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// line1
			// 
			this->line1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->line1->Location = System::Drawing::Point(15, 148);
			this->line1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->line1->Name = L"line1";
			this->line1->Size = System::Drawing::Size(240, 3);
			this->line1->TabIndex = 25;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Italic));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(12, 161);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 19);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Password";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::Black;
			this->checkBox1->Location = System::Drawing::Point(15, 214);
			this->checkBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(103, 17);
			this->checkBox1->TabIndex = 27;
			this->checkBox1->Text = L"I agree to the";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox1_CheckedChanged_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Enabled = false;
			this->button1->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button1->Location = System::Drawing::Point(15, 245);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 44);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(15, 181);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(240, 13);
			this->textBox2->TabIndex = 24;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(15, 129);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(240, 13);
			this->textBox1->TabIndex = 23;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Black", 7.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label4->Location = System::Drawing::Point(119, 214);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 14);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Terms and Conditions";
			this->label4->Click += gcnew System::EventHandler(this, &MainForm::label4_Click);
			// 
			// Terms
			// 
			this->Terms->Controls->Add(this->textBox8);
			this->Terms->Controls->Add(this->pictureBox12);
			this->Terms->Controls->Add(this->textBox7);
			this->Terms->Controls->Add(this->label19);
			this->Terms->Location = System::Drawing::Point(293, 40);
			this->Terms->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Terms->Name = L"Terms";
			this->Terms->Size = System::Drawing::Size(346, 336);
			this->Terms->TabIndex = 32;
			this->Terms->Visible = false;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Tahoma", 7));
			this->textBox8->Location = System::Drawing::Point(10, 319);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(199, 12);
			this->textBox8->TabIndex = 3;
			this->textBox8->Text = L"©2022-All Rights are reserved - AirLineCo";
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.BackgroundImage")));
			this->pictureBox12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox12->Location = System::Drawing::Point(315, 0);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(31, 27);
			this->pictureBox12->TabIndex = 2;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &MainForm::pictureBox12_Click);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Tahoma", 9));
			this->textBox7->Location = System::Drawing::Point(33, 48);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox7->Size = System::Drawing::Size(257, 252);
			this->textBox7->TabIndex = 1;
			this->textBox7->Text = resources->GetString(L"textBox7.Text");
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.5F, System::Drawing::FontStyle::Bold));
			this->label19->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label19->Location = System::Drawing::Point(5, 11);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(175, 19);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Terms and Conditions";
			// 
			// UserMenu
			// 
			this->UserMenu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->UserMenu->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->UserMenu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->UserMenu->Controls->Add(this->Icons_container);
			this->UserMenu->Controls->Add(this->pictureBox34);
			this->UserMenu->Controls->Add(this->MENU);
			this->UserMenu->Controls->Add(this->Account_layer);
			this->UserMenu->Controls->Add(this->Booking_layer);
			this->UserMenu->Controls->Add(this->Flight_layer);
			this->UserMenu->Controls->Add(this->Reservation_layer);
			this->UserMenu->Location = System::Drawing::Point(0, 0);
			this->UserMenu->Name = L"UserMenu";
			this->UserMenu->Size = System::Drawing::Size(857, 465);
			this->UserMenu->TabIndex = 24;
			this->UserMenu->Visible = false;
			// 
			// Icons_container
			// 
			this->Icons_container->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Icons_container->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Icons_container->Controls->Add(this->label45);
			this->Icons_container->Controls->Add(this->label30);
			this->Icons_container->Controls->Add(this->label24);
			this->Icons_container->Controls->Add(this->label10);
			this->Icons_container->Controls->Add(this->pictureBox17);
			this->Icons_container->Controls->Add(this->pictureBox16);
			this->Icons_container->Controls->Add(this->pictureBox18);
			this->Icons_container->Controls->Add(this->pictureBox23);
			this->Icons_container->Controls->Add(this->pictureBox33);
			this->Icons_container->Controls->Add(this->pictureBox32);
			this->Icons_container->Controls->Add(this->pictureBox28);
			this->Icons_container->Controls->Add(this->pictureBox25);
			this->Icons_container->Controls->Add(this->pictureBox20);
			this->Icons_container->Location = System::Drawing::Point(0, 0);
			this->Icons_container->Name = L"Icons_container";
			this->Icons_container->Size = System::Drawing::Size(857, 465);
			this->Icons_container->TabIndex = 30;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label45->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(303, 152);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(63, 17);
			this->label45->TabIndex = 28;
			this->label45->Text = L"Account";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label30->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(290, 315);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(87, 17);
			this->label30->TabIndex = 27;
			this->label30->Text = L"Reservation";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label24->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(492, 152);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(65, 17);
			this->label24->TabIndex = 26;
			this->label24->Text = L"Booking";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label10->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(492, 314);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 17);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Flights";
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->pictureBox17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.BackgroundImage")));
			this->pictureBox17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox17->Location = System::Drawing::Point(495, 86);
			this->pictureBox17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(50, 50);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox17->TabIndex = 14;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Click += gcnew System::EventHandler(this, &MainForm::pictureBox17_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.BackgroundImage")));
			this->pictureBox16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox16->Location = System::Drawing::Point(495, 245);
			this->pictureBox16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(50, 50);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox16->TabIndex = 16;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &MainForm::pictureBox16_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->pictureBox18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(310, 86);
			this->pictureBox18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(50, 50);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 12;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &MainForm::pictureBox18_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->pictureBox23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.BackgroundImage")));
			this->pictureBox23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox23->Location = System::Drawing::Point(310, 245);
			this->pictureBox23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(50, 50);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox23->TabIndex = 18;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &MainForm::pictureBox23_Click_1);
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.BackgroundImage")));
			this->pictureBox33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox33->Location = System::Drawing::Point(258, 65);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(154, 145);
			this->pictureBox33->TabIndex = 24;
			this->pictureBox33->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.BackgroundImage")));
			this->pictureBox32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox32->Location = System::Drawing::Point(444, 222);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(154, 145);
			this->pictureBox32->TabIndex = 23;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.BackgroundImage")));
			this->pictureBox28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox28->Location = System::Drawing::Point(258, 222);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(154, 145);
			this->pictureBox28->TabIndex = 22;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.BackgroundImage")));
			this->pictureBox25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox25->Location = System::Drawing::Point(444, 65);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(154, 145);
			this->pictureBox25->TabIndex = 21;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.BackgroundImage")));
			this->pictureBox20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox20->Location = System::Drawing::Point(815, 422);
			this->pictureBox20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(42, 42);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox20->TabIndex = 20;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &MainForm::pictureBox20_Click);
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.BackgroundImage")));
			this->pictureBox34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox34->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox34->Location = System::Drawing::Point(3, 3);
			this->pictureBox34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(42, 42);
			this->pictureBox34->TabIndex = 31;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Click += gcnew System::EventHandler(this, &MainForm::pictureBox34_Click);
			// 
			// MENU
			// 
			this->MENU->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->MENU->Controls->Add(this->pictureBox3);
			this->MENU->Controls->Add(this->pictureBox2);
			this->MENU->Controls->Add(this->pictureBox1);
			this->MENU->Controls->Add(this->pictureBox5);
			this->MENU->Controls->Add(this->pictureBox4);
			this->MENU->Location = System::Drawing::Point(0, 0);
			this->MENU->Name = L"MENU";
			this->MENU->Size = System::Drawing::Size(50, 0);
			this->MENU->TabIndex = 29;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Location = System::Drawing::Point(4, 233);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(42, 42);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MainForm::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(3, 162);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(42, 42);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MainForm::pictureBox2_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Location = System::Drawing::Point(4, 423);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(42, 42);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 20;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MainForm::pictureBox5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Location = System::Drawing::Point(4, 300);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(42, 42);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 18;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MainForm::pictureBox4_Click);
			// 
			// Account_layer
			// 
			this->Account_layer->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Account_layer->Controls->Add(this->button4);
			this->Account_layer->Controls->Add(this->textBox15);
			this->Account_layer->Controls->Add(this->textBox14);
			this->Account_layer->Controls->Add(this->textBox12);
			this->Account_layer->Controls->Add(this->textBox11);
			this->Account_layer->Controls->Add(this->textBox13);
			this->Account_layer->Controls->Add(this->label34);
			this->Account_layer->Controls->Add(this->label33);
			this->Account_layer->Controls->Add(this->label32);
			this->Account_layer->Controls->Add(this->label31);
			this->Account_layer->Controls->Add(this->ID);
			this->Account_layer->Controls->Add(this->Account_feauture);
			this->Account_layer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Account_layer->Location = System::Drawing::Point(0, 0);
			this->Account_layer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Account_layer->Name = L"Account_layer";
			this->Account_layer->Size = System::Drawing::Size(857, 465);
			this->Account_layer->TabIndex = 22;
			this->Account_layer->Visible = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(632, 330);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(92, 40);
			this->button4->TabIndex = 28;
			this->button4->Text = L"Ok";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// textBox15
			// 
			this->textBox15->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(264, 221);
			this->textBox15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(210, 24);
			this->textBox15->TabIndex = 27;
			// 
			// textBox14
			// 
			this->textBox14->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(264, 126);
			this->textBox14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(210, 24);
			this->textBox14->TabIndex = 26;
			// 
			// textBox12
			// 
			this->textBox12->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(264, 87);
			this->textBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(210, 24);
			this->textBox12->TabIndex = 25;
			// 
			// textBox11
			// 
			this->textBox11->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(264, 47);
			this->textBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(210, 24);
			this->textBox11->TabIndex = 24;
			// 
			// textBox13
			// 
			this->textBox13->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(264, 168);
			this->textBox13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(210, 24);
			this->textBox13->TabIndex = 23;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(138, 87);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(98, 19);
			this->label34->TabIndex = 20;
			this->label34->Text = L"User Name";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(138, 167);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(54, 19);
			this->label33->TabIndex = 19;
			this->label33->Text = L"Email";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(138, 217);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(87, 19);
			this->label32->TabIndex = 18;
			this->label32->Text = L"Password";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(138, 127);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(74, 19);
			this->label31->TabIndex = 17;
			this->label31->Text = L"Address";
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID->Location = System::Drawing::Point(138, 47);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(28, 19);
			this->ID->TabIndex = 16;
			this->ID->Text = L"ID";
			// 
			// Account_feauture
			// 
			this->Account_feauture->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->Account_feauture->Controls->Add(this->pictureBox7);
			this->Account_feauture->Controls->Add(this->pictureBox6);
			this->Account_feauture->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Account_feauture->Location = System::Drawing::Point(0, 415);
			this->Account_feauture->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Account_feauture->Name = L"Account_feauture";
			this->Account_feauture->Size = System::Drawing::Size(857, 50);
			this->Account_feauture->TabIndex = 15;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Location = System::Drawing::Point(412, 5);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(42, 42);
			this->pictureBox7->TabIndex = 13;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MainForm::pictureBox7_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Location = System::Drawing::Point(220, 5);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(42, 42);
			this->pictureBox6->TabIndex = 0;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MainForm::pictureBox6_Click);
			// 
			// Booking_layer
			// 
			this->Booking_layer->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Booking_layer->Controls->Add(this->button19);
			this->Booking_layer->Controls->Add(this->Enter);
			this->Booking_layer->Controls->Add(this->label17);
			this->Booking_layer->Controls->Add(this->label6);
			this->Booking_layer->Controls->Add(this->label7);
			this->Booking_layer->Controls->Add(this->pictureBox8);
			this->Booking_layer->Controls->Add(this->SELECT);
			this->Booking_layer->Controls->Add(this->BOOK);
			this->Booking_layer->Controls->Add(this->Buy);
			this->Booking_layer->Controls->Add(this->PAY);
			this->Booking_layer->Controls->Add(this->Print_ticket);
			this->Booking_layer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Booking_layer->Location = System::Drawing::Point(0, 0);
			this->Booking_layer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Booking_layer->Name = L"Booking_layer";
			this->Booking_layer->Size = System::Drawing::Size(857, 465);
			this->Booking_layer->TabIndex = 26;
			this->Booking_layer->Visible = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button19->Location = System::Drawing::Point(373, 398);
			this->button19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(124, 45);
			this->button19->TabIndex = 34;
			this->button19->Text = L"Search";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MainForm::button19_Click);
			// 
			// Enter
			// 
			this->Enter->Controls->Add(this->comboBox9);
			this->Enter->Controls->Add(this->label40);
			this->Enter->Controls->Add(this->label22);
			this->Enter->Controls->Add(this->numericUpDown4);
			this->Enter->Controls->Add(this->comboBox5);
			this->Enter->Controls->Add(this->label35);
			this->Enter->Controls->Add(this->comboBox6);
			this->Enter->Controls->Add(this->dateTimePicker1);
			this->Enter->Controls->Add(this->label37);
			this->Enter->Controls->Add(this->label36);
			this->Enter->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Enter->Location = System::Drawing::Point(0, 0);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(857, 465);
			this->Enter->TabIndex = 33;
			// 
			// comboBox9
			// 
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"A", L"B", L"C" });
			this->comboBox9->Location = System::Drawing::Point(195, 259);
			this->comboBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(104, 21);
			this->comboBox9->TabIndex = 35;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(218, 233);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(51, 19);
			this->label40->TabIndex = 34;
			this->label40->Text = L"Class";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(580, 150);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(68, 19);
			this->label22->TabIndex = 32;
			this->label22->Text = L"Tickets";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(552, 177);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 20);
			this->numericUpDown4->TabIndex = 31;
			// 
			// comboBox5
			// 
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(513, 99);
			this->comboBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(187, 25);
			this->comboBox5->TabIndex = 29;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(213, 72);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(50, 19);
			this->label35->TabIndex = 21;
			this->label35->Text = L"From";
			// 
			// comboBox6
			// 
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(148, 99);
			this->comboBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(187, 25);
			this->comboBox6->TabIndex = 30;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(148, 177);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(188, 20);
			this->dateTimePicker1->TabIndex = 26;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(216, 146);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(48, 19);
			this->label37->TabIndex = 23;
			this->label37->Text = L"Date";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(598, 72);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(30, 19);
			this->label36->TabIndex = 22;
			this->label36->Text = L"To";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(497, 11);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(31, 39);
			this->label17->TabIndex = 37;
			this->label17->Text = L"  3\r\n\r\nPAY";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label6->Location = System::Drawing::Point(280, 11);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 39);
			this->label6->TabIndex = 35;
			this->label6->Text = L"     1\r\n\r\nSELECT";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label7->Location = System::Drawing::Point(390, 10);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 39);
			this->label7->TabIndex = 36;
			this->label7->Text = L"   2\r\n\r\nBOOK";
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox8->Location = System::Drawing::Point(91, 0);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(32, 32);
			this->pictureBox8->TabIndex = 35;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MainForm::pictureBox8_Click);
			// 
			// SELECT
			// 
			this->SELECT->Controls->Add(this->label21);
			this->SELECT->Controls->Add(this->textBox28);
			this->SELECT->Controls->Add(this->textBox16);
			this->SELECT->Controls->Add(this->textBox17);
			this->SELECT->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SELECT->Location = System::Drawing::Point(0, 0);
			this->SELECT->Name = L"SELECT";
			this->SELECT->Size = System::Drawing::Size(857, 465);
			this->SELECT->TabIndex = 39;
			this->SELECT->Visible = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(348, 315);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(30, 13);
			this->label21->TabIndex = 39;
			this->label21->Text = L"F_N";
			this->label21->Visible = false;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(385, 310);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(100, 20);
			this->textBox28->TabIndex = 38;
			this->textBox28->Visible = false;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(114, 112);
			this->textBox16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox16->Size = System::Drawing::Size(610, 178);
			this->textBox16->TabIndex = 31;
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(114, 86);
			this->textBox17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(610, 24);
			this->textBox17->TabIndex = 32;
			this->textBox17->Text = L"F_N     From    To                Date                 Price             ";
			// 
			// BOOK
			// 
			this->BOOK->Controls->Add(this->label77);
			this->BOOK->Controls->Add(this->label66);
			this->BOOK->Controls->Add(this->label49);
			this->BOOK->Controls->Add(this->label48);
			this->BOOK->Controls->Add(this->label47);
			this->BOOK->Controls->Add(this->label44);
			this->BOOK->Controls->Add(this->label43);
			this->BOOK->Controls->Add(this->label26);
			this->BOOK->Controls->Add(this->textBox44);
			this->BOOK->Controls->Add(this->textBox42);
			this->BOOK->Controls->Add(this->numericUpDown6);
			this->BOOK->Controls->Add(this->textBox43);
			this->BOOK->Controls->Add(this->textBox18);
			this->BOOK->Controls->Add(this->numericUpDown7);
			this->BOOK->Controls->Add(this->label52);
			this->BOOK->Controls->Add(this->numericUpDown8);
			this->BOOK->Controls->Add(this->label50);
			this->BOOK->Controls->Add(this->checkBox3);
			this->BOOK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->BOOK->Location = System::Drawing::Point(0, 0);
			this->BOOK->Name = L"BOOK";
			this->BOOK->Size = System::Drawing::Size(857, 465);
			this->BOOK->TabIndex = 40;
			this->BOOK->Visible = false;
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label77->Location = System::Drawing::Point(462, 104);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(81, 18);
			this->label77->TabIndex = 13;
			this->label77->Text = L"Luggage :";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold));
			this->label66->Location = System::Drawing::Point(191, 51);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(19, 19);
			this->label66->TabIndex = 12;
			this->label66->Text = L"1";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(97, 52);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(98, 18);
			this->label49->TabIndex = 11;
			this->label49->Text = L"Passenger: ";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(153, 202);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(67, 13);
			this->label48->TabIndex = 10;
			this->label48->Text = L"Last Name";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(149, 148);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(67, 13);
			this->label47->TabIndex = 9;
			this->label47->Text = L"First Name";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(169, 259);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(43, 13);
			this->label44->TabIndex = 8;
			this->label44->Text = L"Phone";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(181, 320);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(29, 13);
			this->label43->TabIndex = 7;
			this->label43->Text = L"Age";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(185, 92);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(20, 13);
			this->label26->TabIndex = 6;
			this->label26->Text = L"ID";
			// 
			// textBox44
			// 
			this->textBox44->Location = System::Drawing::Point(222, 256);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(141, 20);
			this->textBox44->TabIndex = 5;
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(222, 143);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(141, 20);
			this->textBox42->TabIndex = 4;
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(222, 317);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(120, 20);
			this->numericUpDown6->TabIndex = 3;
			// 
			// textBox43
			// 
			this->textBox43->Location = System::Drawing::Point(222, 197);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(141, 20);
			this->textBox43->TabIndex = 2;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(222, 88);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(141, 20);
			this->textBox18->TabIndex = 0;
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(593, 252);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(120, 20);
			this->numericUpDown7->TabIndex = 2;
			this->numericUpDown7->Visible = false;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(521, 256);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(55, 16);
			this->label52->TabIndex = 5;
			this->label52->Text = L"Weight";
			this->label52->Visible = false;
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(593, 138);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(120, 20);
			this->numericUpDown8->TabIndex = 3;
			this->numericUpDown8->ValueChanged += gcnew System::EventHandler(this, &MainForm::numericUpDown8_ValueChanged);
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(521, 141);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(55, 16);
			this->label50->TabIndex = 1;
			this->label50->Text = L"Weight";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(591, 202);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(108, 17);
			this->checkBox3->TabIndex = 0;
			this->checkBox3->Text = L"Extra Luggage";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->Visible = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox3_CheckedChanged);
			// 
			// Buy
			// 
			this->Buy->Controls->Add(this->textBox53);
			this->Buy->Controls->Add(this->label51);
			this->Buy->Controls->Add(this->textBox51);
			this->Buy->Controls->Add(this->radioButton2);
			this->Buy->Controls->Add(this->radioButton1);
			this->Buy->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Buy->Location = System::Drawing::Point(0, 0);
			this->Buy->Name = L"Buy";
			this->Buy->Size = System::Drawing::Size(857, 465);
			this->Buy->TabIndex = 41;
			this->Buy->Visible = false;
			// 
			// textBox53
			// 
			this->textBox53->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox53->Location = System::Drawing::Point(248, 68);
			this->textBox53->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox53->Multiline = true;
			this->textBox53->Name = L"textBox53";
			this->textBox53->ReadOnly = true;
			this->textBox53->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox53->Size = System::Drawing::Size(372, 201);
			this->textBox53->TabIndex = 32;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(319, 289);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(69, 13);
			this->label51->TabIndex = 3;
			this->label51->Text = L"Total Price";
			// 
			// textBox51
			// 
			this->textBox51->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox51->Location = System::Drawing::Point(391, 285);
			this->textBox51->Name = L"textBox51";
			this->textBox51->ReadOnly = true;
			this->textBox51->Size = System::Drawing::Size(100, 24);
			this->textBox51->TabIndex = 2;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton2.BackgroundImage")));
			this->radioButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->radioButton2->Location = System::Drawing::Point(442, 338);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(52, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"         ";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton1.BackgroundImage")));
			this->radioButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->radioButton1->Location = System::Drawing::Point(372, 339);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(52, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"         ";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// PAY
			// 
			this->PAY->BackColor = System::Drawing::SystemColors::Highlight;
			this->PAY->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PAY->Controls->Add(this->VisaCard);
			this->PAY->Controls->Add(this->Paypal);
			this->PAY->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PAY->Location = System::Drawing::Point(0, 0);
			this->PAY->Name = L"PAY";
			this->PAY->Size = System::Drawing::Size(857, 465);
			this->PAY->TabIndex = 38;
			this->PAY->Visible = false;
			// 
			// VisaCard
			// 
			this->VisaCard->BackColor = System::Drawing::SystemColors::ControlDark;
			this->VisaCard->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->VisaCard->Controls->Add(this->textBox58);
			this->VisaCard->Controls->Add(this->label75);
			this->VisaCard->Controls->Add(this->dateTimePicker4);
			this->VisaCard->Controls->Add(this->label71);
			this->VisaCard->Controls->Add(this->textBox59);
			this->VisaCard->Controls->Add(this->label73);
			this->VisaCard->Controls->Add(this->label74);
			this->VisaCard->Dock = System::Windows::Forms::DockStyle::Fill;
			this->VisaCard->Location = System::Drawing::Point(0, 0);
			this->VisaCard->Name = L"VisaCard";
			this->VisaCard->Size = System::Drawing::Size(857, 465);
			this->VisaCard->TabIndex = 39;
			this->VisaCard->Visible = false;
			// 
			// textBox58
			// 
			this->textBox58->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox58->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox58->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->textBox58->Location = System::Drawing::Point(330, 240);
			this->textBox58->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox58->MaxLength = 12;
			this->textBox58->Name = L"textBox58";
			this->textBox58->Size = System::Drawing::Size(200, 20);
			this->textBox58->TabIndex = 32;
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Font = (gcnew System::Drawing::Font(L"Tahoma", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label75->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label75->Location = System::Drawing::Point(211, 314);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(108, 23);
			this->label75->TabIndex = 31;
			this->label75->Text = L"Valid until";
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->CalendarFont = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->dateTimePicker4->Font = (gcnew System::Drawing::Font(L"Tahoma", 7));
			this->dateTimePicker4->Location = System::Drawing::Point(330, 317);
			this->dateTimePicker4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(241, 19);
			this->dateTimePicker4->TabIndex = 30;
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Font = (gcnew System::Drawing::Font(L"Tahoma", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label71->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label71->Location = System::Drawing::Point(269, 276);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(49, 23);
			this->label71->TabIndex = 29;
			this->label71->Text = L"CVV";
			// 
			// textBox59
			// 
			this->textBox59->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox59->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox59->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox59->Location = System::Drawing::Point(330, 276);
			this->textBox59->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox59->MaxLength = 4;
			this->textBox59->Name = L"textBox59";
			this->textBox59->Size = System::Drawing::Size(78, 20);
			this->textBox59->TabIndex = 28;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Tahoma", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label73->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label73->Location = System::Drawing::Point(136, 233);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(173, 23);
			this->label73->TabIndex = 27;
			this->label73->Text = L"VisaCard number";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Font = (gcnew System::Drawing::Font(L"Tahoma", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label74->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label74->Location = System::Drawing::Point(87, 49);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(188, 46);
			this->label74->TabIndex = 26;
			this->label74->Text = L"VisaCard";
			// 
			// Paypal
			// 
			this->Paypal->BackColor = System::Drawing::SystemColors::Highlight;
			this->Paypal->Controls->Add(this->textBox57);
			this->Paypal->Controls->Add(this->label68);
			this->Paypal->Controls->Add(this->label69);
			this->Paypal->Controls->Add(this->label70);
			this->Paypal->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Paypal->Location = System::Drawing::Point(0, 0);
			this->Paypal->Name = L"Paypal";
			this->Paypal->Size = System::Drawing::Size(857, 465);
			this->Paypal->TabIndex = 40;
			this->Paypal->Visible = false;
			// 
			// textBox57
			// 
			this->textBox57->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox57->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox57->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox57->Location = System::Drawing::Point(331, 301);
			this->textBox57->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox57->Name = L"textBox57";
			this->textBox57->Size = System::Drawing::Size(240, 20);
			this->textBox57->TabIndex = 25;
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Tahoma", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label68->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label68->Location = System::Drawing::Point(80, 60);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(149, 46);
			this->label68->TabIndex = 26;
			this->label68->Text = L"PayPal";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Tahoma", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label69->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label69->Location = System::Drawing::Point(251, 299);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(69, 23);
			this->label69->TabIndex = 27;
			this->label69->Text = L"Email ";
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label70->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label70->Location = System::Drawing::Point(90, 120);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(332, 14);
			this->label70->TabIndex = 28;
			this->label70->Text = L"Please Enter your Paypal Email you want to pay with";
			// 
			// Print_ticket
			// 
			this->Print_ticket->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Print_ticket->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Print_ticket->Controls->Add(this->textBox60);
			this->Print_ticket->Location = System::Drawing::Point(0, 0);
			this->Print_ticket->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Print_ticket->Name = L"Print_ticket";
			this->Print_ticket->Size = System::Drawing::Size(849, 466);
			this->Print_ticket->TabIndex = 43;
			this->Print_ticket->Visible = false;
			// 
			// textBox60
			// 
			this->textBox60->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox60->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox60->Location = System::Drawing::Point(96, 96);
			this->textBox60->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox60->Multiline = true;
			this->textBox60->Name = L"textBox60";
			this->textBox60->ReadOnly = true;
			this->textBox60->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox60->Size = System::Drawing::Size(657, 220);
			this->textBox60->TabIndex = 0;
			// 
			// Flight_layer
			// 
			this->Flight_layer->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Flight_layer->Controls->Add(this->Search);
			this->Flight_layer->Controls->Add(this->pictureBox9);
			this->Flight_layer->Controls->Add(this->Search_Result);
			this->Flight_layer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Flight_layer->Location = System::Drawing::Point(0, 0);
			this->Flight_layer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Flight_layer->Name = L"Flight_layer";
			this->Flight_layer->Size = System::Drawing::Size(857, 465);
			this->Flight_layer->TabIndex = 24;
			this->Flight_layer->Visible = false;
			// 
			// Search
			// 
			this->Search->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Search->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Search->Controls->Add(this->label54);
			this->Search->Controls->Add(this->label53);
			this->Search->Controls->Add(this->label38);
			this->Search->Controls->Add(this->dateTimePicker2);
			this->Search->Controls->Add(this->comboBox7);
			this->Search->Controls->Add(this->comboBox8);
			this->Search->Controls->Add(this->button18);
			this->Search->Location = System::Drawing::Point(0, 0);
			this->Search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(857, 465);
			this->Search->TabIndex = 41;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(142, 67);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(50, 19);
			this->label54->TabIndex = 29;
			this->label54->Text = L"From";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->Location = System::Drawing::Point(435, 65);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(30, 19);
			this->label53->TabIndex = 30;
			this->label53->Text = L"To";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(141, 147);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(48, 19);
			this->label38->TabIndex = 31;
			this->label38->Text = L"Date";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(200, 147);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(188, 20);
			this->dateTimePicker2->TabIndex = 34;
			// 
			// comboBox7
			// 
			this->comboBox7->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(201, 66);
			this->comboBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(188, 25);
			this->comboBox7->TabIndex = 37;
			// 
			// comboBox8
			// 
			this->comboBox8->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(470, 65);
			this->comboBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(188, 25);
			this->comboBox8->TabIndex = 38;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button18->Location = System::Drawing::Point(356, 383);
			this->button18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(124, 45);
			this->button18->TabIndex = 39;
			this->button18->Text = L"Search";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MainForm::button18_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Location = System::Drawing::Point(87, 0);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(32, 32);
			this->pictureBox9->TabIndex = 42;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MainForm::pictureBox9_Click);
			// 
			// Search_Result
			// 
			this->Search_Result->Controls->Add(this->textBox19);
			this->Search_Result->Controls->Add(this->textBox52);
			this->Search_Result->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Search_Result->Location = System::Drawing::Point(0, 0);
			this->Search_Result->Name = L"Search_Result";
			this->Search_Result->Size = System::Drawing::Size(857, 465);
			this->Search_Result->TabIndex = 40;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(128, 88);
			this->textBox19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox19->Multiline = true;
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox19->Size = System::Drawing::Size(610, 257);
			this->textBox19->TabIndex = 31;
			// 
			// textBox52
			// 
			this->textBox52->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox52->Location = System::Drawing::Point(128, 62);
			this->textBox52->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox52->Name = L"textBox52";
			this->textBox52->ReadOnly = true;
			this->textBox52->Size = System::Drawing::Size(610, 25);
			this->textBox52->TabIndex = 32;
			this->textBox52->Text = L"F_N     From       To                Date                    Price             ";
			// 
			// Reservation_layer
			// 
			this->Reservation_layer->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Reservation_layer->Controls->Add(this->textBox20);
			this->Reservation_layer->Controls->Add(this->Reservation_feautures);
			this->Reservation_layer->Controls->Add(this->Reservations_search);
			this->Reservation_layer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Reservation_layer->Location = System::Drawing::Point(0, 0);
			this->Reservation_layer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Reservation_layer->Name = L"Reservation_layer";
			this->Reservation_layer->Size = System::Drawing::Size(857, 465);
			this->Reservation_layer->TabIndex = 27;
			this->Reservation_layer->Visible = false;
			// 
			// textBox20
			// 
			this->textBox20->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox20->Location = System::Drawing::Point(90, 43);
			this->textBox20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox20->Multiline = true;
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox20->Size = System::Drawing::Size(657, 320);
			this->textBox20->TabIndex = 0;
			// 
			// Reservation_feautures
			// 
			this->Reservation_feautures->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->Reservation_feautures->Controls->Add(this->pictureBox10);
			this->Reservation_feautures->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Reservation_feautures->Location = System::Drawing::Point(0, 415);
			this->Reservation_feautures->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Reservation_feautures->Name = L"Reservation_feautures";
			this->Reservation_feautures->Size = System::Drawing::Size(857, 50);
			this->Reservation_feautures->TabIndex = 29;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox10->Location = System::Drawing::Point(399, 2);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(42, 42);
			this->pictureBox10->TabIndex = 15;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &MainForm::pictureBox10_Click);
			// 
			// Reservations_search
			// 
			this->Reservations_search->Controls->Add(this->label76);
			this->Reservations_search->Controls->Add(this->textBox66);
			this->Reservations_search->Controls->Add(this->button24);
			this->Reservations_search->Controls->Add(this->button20);
			this->Reservations_search->Controls->Add(this->button21);
			this->Reservations_search->Controls->Add(this->label1);
			this->Reservations_search->Controls->Add(this->textBox62);
			this->Reservations_search->Controls->Add(this->textBox63);
			this->Reservations_search->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Reservations_search->Location = System::Drawing::Point(0, 0);
			this->Reservations_search->Name = L"Reservations_search";
			this->Reservations_search->Size = System::Drawing::Size(857, 465);
			this->Reservations_search->TabIndex = 28;
			this->Reservations_search->Visible = false;
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label76->Location = System::Drawing::Point(336, 343);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(42, 20);
			this->label76->TabIndex = 27;
			this->label76->Text = L"F_N";
			this->label76->Visible = false;
			// 
			// textBox66
			// 
			this->textBox66->Location = System::Drawing::Point(410, 343);
			this->textBox66->Name = L"textBox66";
			this->textBox66->Size = System::Drawing::Size(100, 20);
			this->textBox66->TabIndex = 26;
			this->textBox66->Visible = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button24->Location = System::Drawing::Point(114, 320);
			this->button24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(96, 40);
			this->button24->TabIndex = 25;
			this->button24->Text = L"Confirm";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Visible = false;
			this->button24->Click += gcnew System::EventHandler(this, &MainForm::button24_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button20->Location = System::Drawing::Point(116, 321);
			this->button20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(96, 40);
			this->button20->TabIndex = 24;
			this->button20->Text = L"Cancel Reservation";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Visible = false;
			this->button20->Click += gcnew System::EventHandler(this, &MainForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button21->Location = System::Drawing::Point(683, 327);
			this->button21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(96, 40);
			this->button21->TabIndex = 23;
			this->button21->Text = L"Search";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MainForm::button21_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(314, 302);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 20);
			this->label1->TabIndex = 22;
			this->label1->Text = L"T_N / T_C ";
			// 
			// textBox62
			// 
			this->textBox62->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox62->Location = System::Drawing::Point(68, 40);
			this->textBox62->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox62->Multiline = true;
			this->textBox62->Name = L"textBox62";
			this->textBox62->ReadOnly = true;
			this->textBox62->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox62->Size = System::Drawing::Size(718, 250);
			this->textBox62->TabIndex = 21;
			// 
			// textBox63
			// 
			this->textBox63->Location = System::Drawing::Point(410, 302);
			this->textBox63->Name = L"textBox63";
			this->textBox63->Size = System::Drawing::Size(100, 20);
			this->textBox63->TabIndex = 0;
			// 
			// CreateAccount
			// 
			this->CreateAccount->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CreateAccount->Controls->Add(this->label65);
			this->CreateAccount->Controls->Add(this->pictureBox14);
			this->CreateAccount->Controls->Add(this->label11);
			this->CreateAccount->Controls->Add(this->label12);
			this->CreateAccount->Controls->Add(this->panel4);
			this->CreateAccount->Controls->Add(this->textBox3);
			this->CreateAccount->Controls->Add(this->label13);
			this->CreateAccount->Controls->Add(this->button3);
			this->CreateAccount->Controls->Add(this->textBox4);
			this->CreateAccount->Controls->Add(this->label14);
			this->CreateAccount->Controls->Add(this->textBox5);
			this->CreateAccount->Controls->Add(this->panel7);
			this->CreateAccount->Controls->Add(this->label15);
			this->CreateAccount->Controls->Add(this->panel8);
			this->CreateAccount->Controls->Add(this->panel9);
			this->CreateAccount->Controls->Add(this->checkBox2);
			this->CreateAccount->Controls->Add(this->textBox6);
			this->CreateAccount->Location = System::Drawing::Point(0, 0);
			this->CreateAccount->Name = L"CreateAccount";
			this->CreateAccount->Size = System::Drawing::Size(857, 465);
			this->CreateAccount->TabIndex = 60;
			this->CreateAccount->Visible = false;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->ForeColor = System::Drawing::Color::IndianRed;
			this->label65->Location = System::Drawing::Point(367, 380);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(142, 16);
			this->label65->TabIndex = 60;
			this->label65->Text = L"You must fill all fields";
			this->label65->Visible = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.BackgroundImage")));
			this->pictureBox14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox14->Location = System::Drawing::Point(7, 2);
			this->pictureBox14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(39, 37);
			this->pictureBox14->TabIndex = 59;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &MainForm::pictureBox14_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Italic));
			this->label11->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label11->Location = System::Drawing::Point(298, 69);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 19);
			this->label11->TabIndex = 44;
			this->label11->Text = L"Username";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Italic));
			this->label12->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label12->Location = System::Drawing::Point(299, 120);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(44, 19);
			this->label12->TabIndex = 53;
			this->label12->Text = L"Email";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel4->Location = System::Drawing::Point(300, 165);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(274, 3);
			this->panel4->TabIndex = 58;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Location = System::Drawing::Point(302, 95);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(274, 13);
			this->textBox3->TabIndex = 48;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Italic));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(298, 232);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(68, 19);
			this->label13->TabIndex = 45;
			this->label13->Text = L"Password";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Enabled = false;
			this->button3->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button3->Location = System::Drawing::Point(302, 317);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(274, 44);
			this->button3->TabIndex = 52;
			this->button3->Text = L"Create account";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Location = System::Drawing::Point(300, 148);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(274, 13);
			this->textBox4->TabIndex = 57;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Italic));
			this->label14->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label14->Location = System::Drawing::Point(300, 176);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(58, 19);
			this->label14->TabIndex = 54;
			this->label14->Text = L"Address";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Location = System::Drawing::Point(300, 201);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(274, 13);
			this->textBox5->TabIndex = 46;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel7->Location = System::Drawing::Point(300, 271);
			this->panel7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(274, 3);
			this->panel7->TabIndex = 56;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial Black", 7.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label15->Location = System::Drawing::Point(401, 287);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(128, 14);
			this->label15->TabIndex = 51;
			this->label15->Text = L"Terms and Conditions";
			this->label15->Click += gcnew System::EventHandler(this, &MainForm::label15_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel8->Location = System::Drawing::Point(302, 113);
			this->panel8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(274, 3);
			this->panel8->TabIndex = 50;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel9->Location = System::Drawing::Point(300, 219);
			this->panel9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(274, 3);
			this->panel9->TabIndex = 47;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::Color::Black;
			this->checkBox2->Location = System::Drawing::Point(301, 285);
			this->checkBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(103, 17);
			this->checkBox2->TabIndex = 49;
			this->checkBox2->Text = L"I agree to the";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox2_CheckedChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Location = System::Drawing::Point(300, 253);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(274, 13);
			this->textBox6->TabIndex = 55;
			this->textBox6->UseSystemPasswordChar = true;
			// 
			// Terms2
			// 
			this->Terms2->Controls->Add(this->textBox9);
			this->Terms2->Controls->Add(this->pictureBox13);
			this->Terms2->Controls->Add(this->textBox10);
			this->Terms2->Controls->Add(this->label20);
			this->Terms2->Location = System::Drawing::Point(255, 64);
			this->Terms2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Terms2->Name = L"Terms2";
			this->Terms2->Size = System::Drawing::Size(346, 336);
			this->Terms2->TabIndex = 61;
			this->Terms2->Visible = false;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Tahoma", 7));
			this->textBox9->Location = System::Drawing::Point(10, 319);
			this->textBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(199, 12);
			this->textBox9->TabIndex = 3;
			this->textBox9->Text = L"©2022-All Rights are reserved - AirLineCo";
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.BackgroundImage")));
			this->pictureBox13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox13->Location = System::Drawing::Point(315, 0);
			this->pictureBox13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(31, 27);
			this->pictureBox13->TabIndex = 2;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &MainForm::pictureBox13_Click);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Tahoma", 9));
			this->textBox10->Location = System::Drawing::Point(33, 48);
			this->textBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox10->Size = System::Drawing::Size(257, 252);
			this->textBox10->TabIndex = 1;
			this->textBox10->Text = resources->GetString(L"textBox10.Text");
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.5F, System::Drawing::FontStyle::Bold));
			this->label20->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label20->Location = System::Drawing::Point(5, 11);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(175, 19);
			this->label20->TabIndex = 0;
			this->label20->Text = L"Terms and Conditions";
			// 
			// AdminMenu
			// 
			this->AdminMenu->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->AdminMenu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->AdminMenu->Controls->Add(this->IconsContainer);
			this->AdminMenu->Controls->Add(this->HomeButton);
			this->AdminMenu->Controls->Add(this->Accounts_layer);
			this->AdminMenu->Controls->Add(this->Flights_layer);
			this->AdminMenu->Controls->Add(this->Airports_layer);
			this->AdminMenu->Controls->Add(this->Planes_layer);
			this->AdminMenu->Controls->Add(this->Reservations_layer);
			this->AdminMenu->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AdminMenu->Location = System::Drawing::Point(0, 0);
			this->AdminMenu->Name = L"AdminMenu";
			this->AdminMenu->Size = System::Drawing::Size(857, 465);
			this->AdminMenu->TabIndex = 62;
			this->AdminMenu->Visible = false;
			// 
			// IconsContainer
			// 
			this->IconsContainer->Controls->Add(this->pictureBox15);
			this->IconsContainer->Controls->Add(this->pictureBox27);
			this->IconsContainer->Controls->Add(this->label39);
			this->IconsContainer->Controls->Add(this->pictureBox19);
			this->IconsContainer->Controls->Add(this->label25);
			this->IconsContainer->Controls->Add(this->Exit);
			this->IconsContainer->Controls->Add(this->pictureBox24);
			this->IconsContainer->Controls->Add(this->label29);
			this->IconsContainer->Controls->Add(this->pictureBox22);
			this->IconsContainer->Controls->Add(this->label28);
			this->IconsContainer->Controls->Add(this->pictureBox26);
			this->IconsContainer->Controls->Add(this->label27);
			this->IconsContainer->Controls->Add(this->CustomizeColor);
			this->IconsContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->IconsContainer->Location = System::Drawing::Point(0, 0);
			this->IconsContainer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->IconsContainer->Name = L"IconsContainer";
			this->IconsContainer->Size = System::Drawing::Size(857, 465);
			this->IconsContainer->TabIndex = 17;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.BackgroundImage")));
			this->pictureBox15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox15->Location = System::Drawing::Point(819, 0);
			this->pictureBox15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(38, 32);
			this->pictureBox15->TabIndex = 44;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &MainForm::pictureBox15_Click);
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.BackgroundImage")));
			this->pictureBox27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox27->Location = System::Drawing::Point(557, 112);
			this->pictureBox27->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(60, 60);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox27->TabIndex = 42;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Click += gcnew System::EventHandler(this, &MainForm::pictureBox27_Click);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Forte", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(551, 180);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(61, 16);
			this->label39->TabIndex = 43;
			this->label39->Text = L"AirPorts";
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.BackgroundImage")));
			this->pictureBox19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox19->Location = System::Drawing::Point(558, 266);
			this->pictureBox19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(60, 60);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox19->TabIndex = 40;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &MainForm::pictureBox19_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Forte", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(556, 340);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(52, 16);
			this->label25->TabIndex = 41;
			this->label25->Text = L"Planes";
			// 
			// Exit
			// 
			this->Exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Exit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exit.BackgroundImage")));
			this->Exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit->Location = System::Drawing::Point(813, 418);
			this->Exit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(42, 42);
			this->Exit->TabIndex = 39;
			this->Exit->TabStop = false;
			this->Exit->Click += gcnew System::EventHandler(this, &MainForm::Exit_Click);
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(404, 199);
			this->pictureBox24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(60, 60);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox24->TabIndex = 31;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->WaitOnLoad = true;
			this->pictureBox24->Click += gcnew System::EventHandler(this, &MainForm::pictureBox24_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Forte", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(400, 267);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(66, 16);
			this->label29->TabIndex = 32;
			this->label29->Text = L"Accounts";
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.BackgroundImage")));
			this->pictureBox22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox22->Location = System::Drawing::Point(246, 112);
			this->pictureBox22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(60, 60);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox22->TabIndex = 35;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &MainForm::pictureBox22_Click);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Forte", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(244, 184);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(54, 16);
			this->label28->TabIndex = 36;
			this->label28->Text = L"Flights";
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.BackgroundImage")));
			this->pictureBox26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox26->Location = System::Drawing::Point(248, 264);
			this->pictureBox26->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(60, 60);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox26->TabIndex = 37;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Click += gcnew System::EventHandler(this, &MainForm::pictureBox26_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Forte", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(224, 337);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(86, 16);
			this->label27->TabIndex = 38;
			this->label27->Text = L"Reservations";
			// 
			// CustomizeColor
			// 
			this->CustomizeColor->Controls->Add(this->Darkmode);
			this->CustomizeColor->Controls->Add(this->Lightmode);
			this->CustomizeColor->Controls->Add(this->label9);
			this->CustomizeColor->Controls->Add(this->label8);
			this->CustomizeColor->Dock = System::Windows::Forms::DockStyle::Right;
			this->CustomizeColor->Location = System::Drawing::Point(857, 0);
			this->CustomizeColor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CustomizeColor->Name = L"CustomizeColor";
			this->CustomizeColor->Size = System::Drawing::Size(0, 465);
			this->CustomizeColor->TabIndex = 45;
			// 
			// Darkmode
			// 
			this->Darkmode->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->Darkmode->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Darkmode->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Darkmode->Location = System::Drawing::Point(103, 61);
			this->Darkmode->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Darkmode->Name = L"Darkmode";
			this->Darkmode->Size = System::Drawing::Size(21, 20);
			this->Darkmode->TabIndex = 0;
			this->Darkmode->UseVisualStyleBackColor = false;
			this->Darkmode->Click += gcnew System::EventHandler(this, &MainForm::Darkmode_Click);
			// 
			// Lightmode
			// 
			this->Lightmode->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Lightmode->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Lightmode->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Lightmode->Location = System::Drawing::Point(103, 118);
			this->Lightmode->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Lightmode->Name = L"Lightmode";
			this->Lightmode->Size = System::Drawing::Size(21, 20);
			this->Lightmode->TabIndex = 48;
			this->Lightmode->UseVisualStyleBackColor = false;
			this->Lightmode->Click += gcnew System::EventHandler(this, &MainForm::Lightmode_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(12, 122);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(77, 14);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Light Mode";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 65);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 14);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Dark Mode";
			// 
			// HomeButton
			// 
			this->HomeButton->BackColor = System::Drawing::Color::Transparent;
			this->HomeButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomeButton.BackgroundImage")));
			this->HomeButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->HomeButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HomeButton->Location = System::Drawing::Point(0, 0);
			this->HomeButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->HomeButton->Name = L"HomeButton";
			this->HomeButton->Size = System::Drawing::Size(46, 39);
			this->HomeButton->TabIndex = 16;
			this->HomeButton->TabStop = false;
			this->HomeButton->Click += gcnew System::EventHandler(this, &MainForm::HomeButton_Click);
			// 
			// Accounts_layer
			// 
			this->Accounts_layer->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Accounts_layer->Controls->Add(this->textBox25);
			this->Accounts_layer->Controls->Add(this->textBox24);
			this->Accounts_layer->Controls->Add(this->Account_Feautures);
			this->Accounts_layer->Controls->Add(this->Search_account);
			this->Accounts_layer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Accounts_layer->Location = System::Drawing::Point(0, 0);
			this->Accounts_layer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Accounts_layer->Name = L"Accounts_layer";
			this->Accounts_layer->Size = System::Drawing::Size(857, 465);
			this->Accounts_layer->TabIndex = 27;
			this->Accounts_layer->Visible = false;
			// 
			// textBox25
			// 
			this->textBox25->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox25->Location = System::Drawing::Point(70, 35);
			this->textBox25->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox25->Name = L"textBox25";
			this->textBox25->ReadOnly = true;
			this->textBox25->Size = System::Drawing::Size(718, 29);
			this->textBox25->TabIndex = 18;
			this->textBox25->Text = L"ID                Username          Password         Address                 Emai"
				L"l";
			// 
			// textBox24
			// 
			this->textBox24->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Tahoma", 10, System::Drawing::FontStyle::Bold));
			this->textBox24->Location = System::Drawing::Point(70, 62);
			this->textBox24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox24->Multiline = true;
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox24->Size = System::Drawing::Size(718, 268);
			this->textBox24->TabIndex = 17;
			// 
			// Account_Feautures
			// 
			this->Account_Feautures->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->Account_Feautures->Controls->Add(this->pictureBox31);
			this->Account_Feautures->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Account_Feautures->Location = System::Drawing::Point(0, 415);
			this->Account_Feautures->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Account_Feautures->Name = L"Account_Feautures";
			this->Account_Feautures->Size = System::Drawing::Size(857, 50);
			this->Account_Feautures->TabIndex = 16;
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.BackgroundImage")));
			this->pictureBox31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox31->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox31->Location = System::Drawing::Point(399, 2);
			this->pictureBox31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(42, 42);
			this->pictureBox31->TabIndex = 15;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Click += gcnew System::EventHandler(this, &MainForm::pictureBox31_Click);
			// 
			// Search_account
			// 
			this->Search_account->Controls->Add(this->textBox55);
			this->Search_account->Controls->Add(this->button15);
			this->Search_account->Controls->Add(this->button14);
			this->Search_account->Controls->Add(this->label72);
			this->Search_account->Controls->Add(this->textBox54);
			this->Search_account->Controls->Add(this->textBox56);
			this->Search_account->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Search_account->Location = System::Drawing::Point(0, 0);
			this->Search_account->Name = L"Search_account";
			this->Search_account->Size = System::Drawing::Size(857, 465);
			this->Search_account->TabIndex = 26;
			this->Search_account->Visible = false;
			// 
			// textBox55
			// 
			this->textBox55->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox55->Location = System::Drawing::Point(62, 22);
			this->textBox55->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox55->Name = L"textBox55";
			this->textBox55->ReadOnly = true;
			this->textBox55->Size = System::Drawing::Size(718, 27);
			this->textBox55->TabIndex = 25;
			this->textBox55->Text = L"Username          Password         Address             Email";
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button15->Location = System::Drawing::Point(70, 295);
			this->button15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(96, 40);
			this->button15->TabIndex = 24;
			this->button15->Text = L"Delete";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Visible = false;
			this->button15->Click += gcnew System::EventHandler(this, &MainForm::button15_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button14->Location = System::Drawing::Point(711, 293);
			this->button14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(96, 40);
			this->button14->TabIndex = 23;
			this->button14->Text = L"Search";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MainForm::button14_Click);
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label72->Location = System::Drawing::Point(339, 234);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(28, 20);
			this->label72->TabIndex = 22;
			this->label72->Text = L"ID";
			// 
			// textBox54
			// 
			this->textBox54->Font = (gcnew System::Drawing::Font(L"Tahoma", 10, System::Drawing::FontStyle::Bold));
			this->textBox54->Location = System::Drawing::Point(62, 52);
			this->textBox54->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox54->Multiline = true;
			this->textBox54->Name = L"textBox54";
			this->textBox54->ReadOnly = true;
			this->textBox54->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox54->Size = System::Drawing::Size(718, 139);
			this->textBox54->TabIndex = 21;
			// 
			// textBox56
			// 
			this->textBox56->Location = System::Drawing::Point(379, 232);
			this->textBox56->Name = L"textBox56";
			this->textBox56->Size = System::Drawing::Size(100, 20);
			this->textBox56->TabIndex = 0;
			// 
			// Flights_layer
			// 
			this->Flights_layer->BackColor = System::Drawing::Color::Transparent;
			this->Flights_layer->Controls->Add(this->textBox27);
			this->Flights_layer->Controls->Add(this->textBox26);
			this->Flights_layer->Controls->Add(this->Flights_feautures);
			this->Flights_layer->Controls->Add(this->AddFlight);
			this->Flights_layer->Controls->Add(this->Flight_search);
			this->Flights_layer->Controls->Add(this->Check_Flight);
			this->Flights_layer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Flights_layer->Location = System::Drawing::Point(0, 0);
			this->Flights_layer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Flights_layer->Name = L"Flights_layer";
			this->Flights_layer->Size = System::Drawing::Size(857, 465);
			this->Flights_layer->TabIndex = 22;
			this->Flights_layer->Visible = false;
			// 
			// textBox27
			// 
			this->textBox27->Font = (gcnew System::Drawing::Font(L"Tahoma", 10, System::Drawing::FontStyle::Bold));
			this->textBox27->Location = System::Drawing::Point(24, 84);
			this->textBox27->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox27->Multiline = true;
			this->textBox27->Name = L"textBox27";
			this->textBox27->ReadOnly = true;
			this->textBox27->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox27->Size = System::Drawing::Size(808, 237);
			this->textBox27->TabIndex = 20;
			// 
			// textBox26
			// 
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox26->Location = System::Drawing::Point(24, 58);
			this->textBox26->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox26->Name = L"textBox26";
			this->textBox26->ReadOnly = true;
			this->textBox26->Size = System::Drawing::Size(808, 23);
			this->textBox26->TabIndex = 19;
			this->textBox26->Text = L"F_N\t From       To                Date\t\t\tPrice          Plane        Available Ti"
				L"ckets\r\n";
			// 
			// Flights_feautures
			// 
			this->Flights_feautures->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->Flights_feautures->Controls->Add(this->pictureBox29);
			this->Flights_feautures->Controls->Add(this->pictureBox30);
			this->Flights_feautures->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Flights_feautures->Location = System::Drawing::Point(0, 415);
			this->Flights_feautures->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Flights_feautures->Name = L"Flights_feautures";
			this->Flights_feautures->Size = System::Drawing::Size(857, 50);
			this->Flights_feautures->TabIndex = 16;
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.BackgroundImage")));
			this->pictureBox29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox29->Location = System::Drawing::Point(246, 4);
			this->pictureBox29->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(42, 42);
			this->pictureBox29->TabIndex = 23;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Click += gcnew System::EventHandler(this, &MainForm::pictureBox29_Click);
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.BackgroundImage")));
			this->pictureBox30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox30->Location = System::Drawing::Point(536, 3);
			this->pictureBox30->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(42, 42);
			this->pictureBox30->TabIndex = 21;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Click += gcnew System::EventHandler(this, &MainForm::pictureBox30_Click);
			// 
			// AddFlight
			// 
			this->AddFlight->BackColor = System::Drawing::Color::Transparent;
			this->AddFlight->Controls->Add(this->button5);
			this->AddFlight->Controls->Add(this->comboBox3);
			this->AddFlight->Controls->Add(this->comboBox2);
			this->AddFlight->Controls->Add(this->comboBox1);
			this->AddFlight->Controls->Add(this->label59);
			this->AddFlight->Controls->Add(this->label58);
			this->AddFlight->Controls->Add(this->label57);
			this->AddFlight->Controls->Add(this->label55);
			this->AddFlight->Controls->Add(this->label18);
			this->AddFlight->Controls->Add(this->numericUpDown3);
			this->AddFlight->Controls->Add(this->dateTimePicker3);
			this->AddFlight->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AddFlight->Location = System::Drawing::Point(0, 0);
			this->AddFlight->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AddFlight->Name = L"AddFlight";
			this->AddFlight->Size = System::Drawing::Size(857, 465);
			this->AddFlight->TabIndex = 17;
			this->AddFlight->Visible = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button5->Location = System::Drawing::Point(746, 356);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(96, 40);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Add";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(150, 47);
			this->comboBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(122, 22);
			this->comboBox3->TabIndex = 14;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(484, 47);
			this->comboBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(122, 22);
			this->comboBox2->TabIndex = 13;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(150, 169);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(122, 22);
			this->comboBox1->TabIndex = 12;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->Location = System::Drawing::Point(83, 99);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(53, 22);
			this->label59->TabIndex = 11;
			this->label59->Text = L"Date";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->Location = System::Drawing::Point(83, 164);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(61, 22);
			this->label58->TabIndex = 10;
			this->label58->Text = L"Plane";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->Location = System::Drawing::Point(445, 106);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(56, 22);
			this->label57->TabIndex = 9;
			this->label57->Text = L"Price";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(445, 49);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(32, 22);
			this->label55->TabIndex = 7;
			this->label55->Text = L"To";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(83, 49);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(56, 22);
			this->label18->TabIndex = 6;
			this->label18->Text = L"From";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold));
			this->numericUpDown3->Location = System::Drawing::Point(507, 109);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(59, 22);
			this->numericUpDown3->TabIndex = 5;
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Location = System::Drawing::Point(150, 102);
			this->dateTimePicker3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(204, 20);
			this->dateTimePicker3->TabIndex = 4;
			// 
			// Flight_search
			// 
			this->Flight_search->BackColor = System::Drawing::Color::Transparent;
			this->Flight_search->Controls->Add(this->button22);
			this->Flight_search->Controls->Add(this->label23);
			this->Flight_search->Controls->Add(this->textBox36);
			this->Flight_search->Controls->Add(this->button8);
			this->Flight_search->Controls->Add(this->button10);
			this->Flight_search->Controls->Add(this->textBox37);
			this->Flight_search->Controls->Add(this->textBox38);
			this->Flight_search->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Flight_search->Location = System::Drawing::Point(0, 0);
			this->Flight_search->Name = L"Flight_search";
			this->Flight_search->Size = System::Drawing::Size(857, 465);
			this->Flight_search->TabIndex = 28;
			this->Flight_search->Visible = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button22->Location = System::Drawing::Point(376, 291);
			this->button22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(96, 40);
			this->button22->TabIndex = 26;
			this->button22->Text = L"CHECK ";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Visible = false;
			this->button22->Click += gcnew System::EventHandler(this, &MainForm::button22_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(252, 232);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(121, 20);
			this->label23->TabIndex = 22;
			this->label23->Text = L"Flight Number";
			// 
			// textBox36
			// 
			this->textBox36->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox36->Location = System::Drawing::Point(62, 27);
			this->textBox36->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox36->Name = L"textBox36";
			this->textBox36->ReadOnly = true;
			this->textBox36->Size = System::Drawing::Size(746, 23);
			this->textBox36->TabIndex = 25;
			this->textBox36->Text = L"From\tTo                Date\t\t\tPrice        Plane        Available Tickets";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button8->Location = System::Drawing::Point(62, 293);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(96, 40);
			this->button8->TabIndex = 24;
			this->button8->Text = L"Delete";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button10->Location = System::Drawing::Point(711, 293);
			this->button10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(96, 40);
			this->button10->TabIndex = 23;
			this->button10->Text = L"Search";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MainForm::button10_Click);
			// 
			// textBox37
			// 
			this->textBox37->Font = (gcnew System::Drawing::Font(L"Tahoma", 10, System::Drawing::FontStyle::Bold));
			this->textBox37->Location = System::Drawing::Point(62, 52);
			this->textBox37->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox37->Multiline = true;
			this->textBox37->Name = L"textBox37";
			this->textBox37->ReadOnly = true;
			this->textBox37->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox37->Size = System::Drawing::Size(746, 139);
			this->textBox37->TabIndex = 21;
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(379, 232);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(100, 20);
			this->textBox38->TabIndex = 0;
			// 
			// Check_Flight
			// 
			this->Check_Flight->Controls->Add(this->button23);
			this->Check_Flight->Controls->Add(this->textBox65);
			this->Check_Flight->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Check_Flight->Location = System::Drawing::Point(0, 0);
			this->Check_Flight->Name = L"Check_Flight";
			this->Check_Flight->Size = System::Drawing::Size(857, 465);
			this->Check_Flight->TabIndex = 27;
			this->Check_Flight->Visible = false;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button23->Location = System::Drawing::Point(383, 335);
			this->button23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(96, 40);
			this->button23->TabIndex = 27;
			this->button23->Text = L"OK";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Visible = false;
			this->button23->Click += gcnew System::EventHandler(this, &MainForm::button23_Click);
			// 
			// textBox65
			// 
			this->textBox65->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox65->Location = System::Drawing::Point(55, 42);
			this->textBox65->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox65->Multiline = true;
			this->textBox65->Name = L"textBox65";
			this->textBox65->ReadOnly = true;
			this->textBox65->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox65->Size = System::Drawing::Size(746, 274);
			this->textBox65->TabIndex = 22;
			// 
			// Airports_layer
			// 
			this->Airports_layer->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Airports_layer->Controls->Add(this->textBox32);
			this->Airports_layer->Controls->Add(this->textBox29);
			this->Airports_layer->Controls->Add(this->Airport_feautures);
			this->Airports_layer->Controls->Add(this->AddAirport);
			this->Airports_layer->Controls->Add(this->Airport_search);
			this->Airports_layer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Airports_layer->Location = System::Drawing::Point(0, 0);
			this->Airports_layer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Airports_layer->Name = L"Airports_layer";
			this->Airports_layer->Size = System::Drawing::Size(857, 465);
			this->Airports_layer->TabIndex = 29;
			this->Airports_layer->Visible = false;
			// 
			// textBox32
			// 
			this->textBox32->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox32->Location = System::Drawing::Point(70, 35);
			this->textBox32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox32->Name = L"textBox32";
			this->textBox32->ReadOnly = true;
			this->textBox32->Size = System::Drawing::Size(718, 29);
			this->textBox32->TabIndex = 22;
			this->textBox32->Text = L"code                 Name                 Address";
			// 
			// textBox29
			// 
			this->textBox29->Font = (gcnew System::Drawing::Font(L"Tahoma", 10, System::Drawing::FontStyle::Bold));
			this->textBox29->Location = System::Drawing::Point(70, 62);
			this->textBox29->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox29->Multiline = true;
			this->textBox29->Name = L"textBox29";
			this->textBox29->ReadOnly = true;
			this->textBox29->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox29->Size = System::Drawing::Size(718, 249);
			this->textBox29->TabIndex = 21;
			// 
			// Airport_feautures
			// 
			this->Airport_feautures->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->Airport_feautures->Controls->Add(this->pictureBox38);
			this->Airport_feautures->Controls->Add(this->pictureBox35);
			this->Airport_feautures->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Airport_feautures->Location = System::Drawing::Point(0, 415);
			this->Airport_feautures->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Airport_feautures->Name = L"Airport_feautures";
			this->Airport_feautures->Size = System::Drawing::Size(857, 50);
			this->Airport_feautures->TabIndex = 17;
			// 
			// pictureBox38
			// 
			this->pictureBox38->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.BackgroundImage")));
			this->pictureBox38->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox38->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox38->Location = System::Drawing::Point(291, 3);
			this->pictureBox38->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(42, 42);
			this->pictureBox38->TabIndex = 17;
			this->pictureBox38->TabStop = false;
			this->pictureBox38->Click += gcnew System::EventHandler(this, &MainForm::pictureBox38_Click);
			// 
			// pictureBox35
			// 
			this->pictureBox35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.BackgroundImage")));
			this->pictureBox35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox35->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox35->Location = System::Drawing::Point(488, 4);
			this->pictureBox35->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(42, 42);
			this->pictureBox35->TabIndex = 13;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Click += gcnew System::EventHandler(this, &MainForm::pictureBox35_Click);
			// 
			// AddAirport
			// 
			this->AddAirport->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->AddAirport->Controls->Add(this->button7);
			this->AddAirport->Controls->Add(this->textBox35);
			this->AddAirport->Controls->Add(this->label64);
			this->AddAirport->Controls->Add(this->textBox34);
			this->AddAirport->Controls->Add(this->label63);
			this->AddAirport->Controls->Add(this->textBox33);
			this->AddAirport->Controls->Add(this->label62);
			this->AddAirport->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AddAirport->Location = System::Drawing::Point(0, 0);
			this->AddAirport->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AddAirport->Name = L"AddAirport";
			this->AddAirport->Size = System::Drawing::Size(857, 465);
			this->AddAirport->TabIndex = 23;
			this->AddAirport->Visible = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button7->Location = System::Drawing::Point(721, 319);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(126, 45);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Add";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// textBox35
			// 
			this->textBox35->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox35->Location = System::Drawing::Point(161, 116);
			this->textBox35->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(205, 27);
			this->textBox35->TabIndex = 5;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->Location = System::Drawing::Point(87, 116);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(65, 23);
			this->label64->TabIndex = 4;
			this->label64->Text = L"Name";
			// 
			// textBox34
			// 
			this->textBox34->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox34->Location = System::Drawing::Point(186, 176);
			this->textBox34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(180, 27);
			this->textBox34->TabIndex = 3;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->Location = System::Drawing::Point(87, 180);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(86, 23);
			this->label63->TabIndex = 2;
			this->label63->Text = L"Address";
			// 
			// textBox33
			// 
			this->textBox33->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox33->Location = System::Drawing::Point(160, 55);
			this->textBox33->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(206, 27);
			this->textBox33->TabIndex = 1;
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->Location = System::Drawing::Point(87, 54);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(55, 23);
			this->label62->TabIndex = 0;
			this->label62->Text = L"code";
			// 
			// Airport_search
			// 
			this->Airport_search->Controls->Add(this->textBox39);
			this->Airport_search->Controls->Add(this->button9);
			this->Airport_search->Controls->Add(this->button11);
			this->Airport_search->Controls->Add(this->label16);
			this->Airport_search->Controls->Add(this->textBox40);
			this->Airport_search->Controls->Add(this->textBox41);
			this->Airport_search->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Airport_search->Location = System::Drawing::Point(0, 0);
			this->Airport_search->Name = L"Airport_search";
			this->Airport_search->Size = System::Drawing::Size(857, 465);
			this->Airport_search->TabIndex = 27;
			this->Airport_search->Visible = false;
			// 
			// textBox39
			// 
			this->textBox39->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox39->Location = System::Drawing::Point(62, 23);
			this->textBox39->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox39->Name = L"textBox39";
			this->textBox39->ReadOnly = true;
			this->textBox39->Size = System::Drawing::Size(718, 27);
			this->textBox39->TabIndex = 25;
			this->textBox39->Text = L"Name                 Address";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(70, 295);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(96, 40);
			this->button9->TabIndex = 24;
			this->button9->Text = L"Delete";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button11->Location = System::Drawing::Point(711, 293);
			this->button11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(96, 40);
			this->button11->TabIndex = 23;
			this->button11->Text = L"Search";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MainForm::button11_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(322, 231);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(51, 20);
			this->label16->TabIndex = 22;
			this->label16->Text = L"Code";
			// 
			// textBox40
			// 
			this->textBox40->Font = (gcnew System::Drawing::Font(L"Tahoma", 10, System::Drawing::FontStyle::Bold));
			this->textBox40->Location = System::Drawing::Point(62, 52);
			this->textBox40->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox40->Multiline = true;
			this->textBox40->Name = L"textBox40";
			this->textBox40->ReadOnly = true;
			this->textBox40->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox40->Size = System::Drawing::Size(718, 139);
			this->textBox40->TabIndex = 21;
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(379, 232);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(100, 20);
			this->textBox41->TabIndex = 0;
			// 
			// Planes_layer
			// 
			this->Planes_layer->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Planes_layer->Controls->Add(this->textBox23);
			this->Planes_layer->Controls->Add(this->textBox22);
			this->Planes_layer->Controls->Add(this->Plane_feautures);
			this->Planes_layer->Controls->Add(this->AddPlane);
			this->Planes_layer->Controls->Add(this->Plane_search);
			this->Planes_layer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Planes_layer->Location = System::Drawing::Point(0, 0);
			this->Planes_layer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Planes_layer->Name = L"Planes_layer";
			this->Planes_layer->Size = System::Drawing::Size(857, 465);
			this->Planes_layer->TabIndex = 28;
			this->Planes_layer->Visible = false;
			// 
			// textBox23
			// 
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox23->Location = System::Drawing::Point(70, 29);
			this->textBox23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(718, 27);
			this->textBox23->TabIndex = 22;
			this->textBox23->Text = L"code                  Type                name                       model       "
				L"        NumofSeats";
			// 
			// textBox22
			// 
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Tahoma", 10, System::Drawing::FontStyle::Bold));
			this->textBox22->Location = System::Drawing::Point(70, 55);
			this->textBox22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox22->Multiline = true;
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox22->Size = System::Drawing::Size(718, 305);
			this->textBox22->TabIndex = 21;
			// 
			// Plane_feautures
			// 
			this->Plane_feautures->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->Plane_feautures->Controls->Add(this->pictureBox37);
			this->Plane_feautures->Controls->Add(this->pictureBox21);
			this->Plane_feautures->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Plane_feautures->Location = System::Drawing::Point(0, 415);
			this->Plane_feautures->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Plane_feautures->Name = L"Plane_feautures";
			this->Plane_feautures->Size = System::Drawing::Size(857, 50);
			this->Plane_feautures->TabIndex = 17;
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.BackgroundImage")));
			this->pictureBox37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox37->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox37->Location = System::Drawing::Point(308, 5);
			this->pictureBox37->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(42, 42);
			this->pictureBox37->TabIndex = 17;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->Click += gcnew System::EventHandler(this, &MainForm::pictureBox37_Click);
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.BackgroundImage")));
			this->pictureBox21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox21->Location = System::Drawing::Point(503, 5);
			this->pictureBox21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(42, 42);
			this->pictureBox21->TabIndex = 15;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &MainForm::pictureBox21_Click);
			// 
			// AddPlane
			// 
			this->AddPlane->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->AddPlane->Controls->Add(this->comboBox4);
			this->AddPlane->Controls->Add(this->button6);
			this->AddPlane->Controls->Add(this->numericUpDown2);
			this->AddPlane->Controls->Add(this->textBox31);
			this->AddPlane->Controls->Add(this->label61);
			this->AddPlane->Controls->Add(this->textBox30);
			this->AddPlane->Controls->Add(this->label60);
			this->AddPlane->Controls->Add(this->label56);
			this->AddPlane->Controls->Add(this->label46);
			this->AddPlane->Controls->Add(this->textBox21);
			this->AddPlane->Controls->Add(this->label41);
			this->AddPlane->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AddPlane->Location = System::Drawing::Point(0, 0);
			this->AddPlane->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AddPlane->Name = L"AddPlane";
			this->AddPlane->Size = System::Drawing::Size(857, 465);
			this->AddPlane->TabIndex = 23;
			this->AddPlane->Visible = false;
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Public", L"Private" });
			this->comboBox4->Location = System::Drawing::Point(380, 61);
			this->comboBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(147, 25);
			this->comboBox4->TabIndex = 12;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button6->Location = System::Drawing::Point(759, 323);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(87, 38);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Add";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown2->Location = System::Drawing::Point(453, 119);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(74, 24);
			this->numericUpDown2->TabIndex = 10;
			// 
			// textBox31
			// 
			this->textBox31->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox31->Location = System::Drawing::Point(660, 60);
			this->textBox31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(135, 24);
			this->textBox31->TabIndex = 9;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->Location = System::Drawing::Point(591, 56);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(62, 23);
			this->label61->TabIndex = 8;
			this->label61->Text = L"name";
			// 
			// textBox30
			// 
			this->textBox30->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox30->Location = System::Drawing::Point(139, 124);
			this->textBox30->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(139, 24);
			this->textBox30->TabIndex = 7;
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->Location = System::Drawing::Point(63, 124);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(69, 23);
			this->label60->TabIndex = 6;
			this->label60->Text = L"model";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(315, 120);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(126, 23);
			this->label56->TabIndex = 4;
			this->label56->Text = L"NumofSeats";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(315, 58);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(56, 23);
			this->label46->TabIndex = 2;
			this->label46->Text = L"Type";
			// 
			// textBox21
			// 
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox21->Location = System::Drawing::Point(139, 62);
			this->textBox21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(139, 24);
			this->textBox21->TabIndex = 1;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(70, 58);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(55, 23);
			this->label41->TabIndex = 0;
			this->label41->Text = L"code";
			// 
			// Plane_search
			// 
			this->Plane_search->Controls->Add(this->textBox45);
			this->Plane_search->Controls->Add(this->button12);
			this->Plane_search->Controls->Add(this->button13);
			this->Plane_search->Controls->Add(this->label42);
			this->Plane_search->Controls->Add(this->textBox46);
			this->Plane_search->Controls->Add(this->textBox47);
			this->Plane_search->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Plane_search->Location = System::Drawing::Point(0, 0);
			this->Plane_search->Name = L"Plane_search";
			this->Plane_search->Size = System::Drawing::Size(857, 465);
			this->Plane_search->TabIndex = 27;
			this->Plane_search->Visible = false;
			// 
			// textBox45
			// 
			this->textBox45->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox45->Location = System::Drawing::Point(62, 26);
			this->textBox45->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox45->Name = L"textBox45";
			this->textBox45->ReadOnly = true;
			this->textBox45->Size = System::Drawing::Size(718, 26);
			this->textBox45->TabIndex = 25;
			this->textBox45->Text = L"Type\t\tname\t\tmodel\t\tNumofSeats";
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button12->Location = System::Drawing::Point(70, 295);
			this->button12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(96, 40);
			this->button12->TabIndex = 24;
			this->button12->Text = L"Delete";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Visible = false;
			this->button12->Click += gcnew System::EventHandler(this, &MainForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button13->Location = System::Drawing::Point(711, 293);
			this->button13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(96, 40);
			this->button13->TabIndex = 23;
			this->button13->Text = L"Search";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MainForm::button13_Click);
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(326, 230);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(51, 20);
			this->label42->TabIndex = 22;
			this->label42->Text = L"Code";
			// 
			// textBox46
			// 
			this->textBox46->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox46->Location = System::Drawing::Point(62, 52);
			this->textBox46->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox46->Multiline = true;
			this->textBox46->Name = L"textBox46";
			this->textBox46->ReadOnly = true;
			this->textBox46->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox46->Size = System::Drawing::Size(718, 139);
			this->textBox46->TabIndex = 21;
			// 
			// textBox47
			// 
			this->textBox47->Location = System::Drawing::Point(379, 232);
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(100, 20);
			this->textBox47->TabIndex = 0;
			// 
			// Reservations_layer
			// 
			this->Reservations_layer->BackColor = System::Drawing::SystemColors::HighlightText;
			this->Reservations_layer->Controls->Add(this->textBox61);
			this->Reservations_layer->Controls->Add(this->textBox64);
			this->Reservations_layer->Controls->Add(this->Reservations_feautures);
			this->Reservations_layer->Controls->Add(this->Reservation_search);
			this->Reservations_layer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Reservations_layer->Location = System::Drawing::Point(0, 0);
			this->Reservations_layer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Reservations_layer->Name = L"Reservations_layer";
			this->Reservations_layer->Size = System::Drawing::Size(857, 465);
			this->Reservations_layer->TabIndex = 24;
			this->Reservations_layer->Visible = false;
			// 
			// textBox61
			// 
			this->textBox61->Font = (gcnew System::Drawing::Font(L"Tahoma", 10, System::Drawing::FontStyle::Bold));
			this->textBox61->Location = System::Drawing::Point(11, 44);
			this->textBox61->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox61->Name = L"textBox61";
			this->textBox61->ReadOnly = true;
			this->textBox61->Size = System::Drawing::Size(831, 24);
			this->textBox61->TabIndex = 29;
			this->textBox61->Text = L"Reservation Num  User ID  Payment     Email/VisaNumber|CVV           Booking Date"
				L"                 Expired Date              Total\r\n";
			// 
			// textBox64
			// 
			this->textBox64->Font = (gcnew System::Drawing::Font(L"Tahoma", 9));
			this->textBox64->Location = System::Drawing::Point(11, 66);
			this->textBox64->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox64->Multiline = true;
			this->textBox64->Name = L"textBox64";
			this->textBox64->ReadOnly = true;
			this->textBox64->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox64->Size = System::Drawing::Size(831, 237);
			this->textBox64->TabIndex = 30;
			// 
			// Reservations_feautures
			// 
			this->Reservations_feautures->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->Reservations_feautures->Controls->Add(this->pictureBox11);
			this->Reservations_feautures->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Reservations_feautures->Location = System::Drawing::Point(0, 415);
			this->Reservations_feautures->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Reservations_feautures->Name = L"Reservations_feautures";
			this->Reservations_feautures->Size = System::Drawing::Size(857, 50);
			this->Reservations_feautures->TabIndex = 28;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox11->Location = System::Drawing::Point(399, 2);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(42, 42);
			this->pictureBox11->TabIndex = 15;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MainForm::pictureBox11_Click);
			// 
			// Reservation_search
			// 
			this->Reservation_search->Controls->Add(this->textBox48);
			this->Reservation_search->Controls->Add(this->button16);
			this->Reservation_search->Controls->Add(this->button17);
			this->Reservation_search->Controls->Add(this->label67);
			this->Reservation_search->Controls->Add(this->textBox49);
			this->Reservation_search->Controls->Add(this->textBox50);
			this->Reservation_search->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Reservation_search->Location = System::Drawing::Point(0, 0);
			this->Reservation_search->Name = L"Reservation_search";
			this->Reservation_search->Size = System::Drawing::Size(857, 465);
			this->Reservation_search->TabIndex = 27;
			this->Reservation_search->Visible = false;
			// 
			// textBox48
			// 
			this->textBox48->Font = (gcnew System::Drawing::Font(L"Tahoma", 10, System::Drawing::FontStyle::Bold));
			this->textBox48->Location = System::Drawing::Point(11, 44);
			this->textBox48->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox48->Name = L"textBox48";
			this->textBox48->ReadOnly = true;
			this->textBox48->Size = System::Drawing::Size(831, 24);
			this->textBox48->TabIndex = 25;
			this->textBox48->Text = L"User ID        Payment     Email/VisaNumber                          Booking Date"
				L"                            Expired Date                Total\r\n\r\n";
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button16->Location = System::Drawing::Point(70, 295);
			this->button16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(96, 40);
			this->button16->TabIndex = 24;
			this->button16->Text = L"Delete";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Visible = false;
			this->button16->Click += gcnew System::EventHandler(this, &MainForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button17->Location = System::Drawing::Point(711, 293);
			this->button17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(96, 40);
			this->button17->TabIndex = 23;
			this->button17->Text = L"Search";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MainForm::button17_Click);
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->Location = System::Drawing::Point(339, 252);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(28, 20);
			this->label67->TabIndex = 22;
			this->label67->Text = L"ID";
			// 
			// textBox49
			// 
			this->textBox49->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold));
			this->textBox49->Location = System::Drawing::Point(11, 66);
			this->textBox49->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox49->Multiline = true;
			this->textBox49->Name = L"textBox49";
			this->textBox49->ReadOnly = true;
			this->textBox49->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox49->Size = System::Drawing::Size(831, 166);
			this->textBox49->TabIndex = 21;
			// 
			// textBox50
			// 
			this->textBox50->Location = System::Drawing::Point(379, 252);
			this->textBox50->Name = L"textBox50";
			this->textBox50->Size = System::Drawing::Size(100, 20);
			this->textBox50->TabIndex = 0;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &MainForm::timer2_Tick);
			// 
			// timer4
			// 
			this->timer4->Tick += gcnew System::EventHandler(this, &MainForm::timer4_Tick_1);
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &MainForm::timer3_Tick_1);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(857, 465);
			this->Controls->Add(this->Base);
			this->Controls->Add(this->Terms);
			this->Controls->Add(this->CreateAccount);
			this->Controls->Add(this->Terms2);
			this->Controls->Add(this->UserMenu);
			this->Controls->Add(this->AdminMenu);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MainForm";
			this->Text = L"Airline Reservation";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Base->ResumeLayout(false);
			this->Signin->ResumeLayout(false);
			this->Signin->PerformLayout();
			this->Terms->ResumeLayout(false);
			this->Terms->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->UserMenu->ResumeLayout(false);
			this->Icons_container->ResumeLayout(false);
			this->Icons_container->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			this->MENU->ResumeLayout(false);
			this->MENU->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->Account_layer->ResumeLayout(false);
			this->Account_layer->PerformLayout();
			this->Account_feauture->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->Booking_layer->ResumeLayout(false);
			this->Booking_layer->PerformLayout();
			this->Enter->ResumeLayout(false);
			this->Enter->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->SELECT->ResumeLayout(false);
			this->SELECT->PerformLayout();
			this->BOOK->ResumeLayout(false);
			this->BOOK->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			this->Buy->ResumeLayout(false);
			this->Buy->PerformLayout();
			this->PAY->ResumeLayout(false);
			this->VisaCard->ResumeLayout(false);
			this->VisaCard->PerformLayout();
			this->Paypal->ResumeLayout(false);
			this->Paypal->PerformLayout();
			this->Print_ticket->ResumeLayout(false);
			this->Print_ticket->PerformLayout();
			this->Flight_layer->ResumeLayout(false);
			this->Search->ResumeLayout(false);
			this->Search->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->Search_Result->ResumeLayout(false);
			this->Search_Result->PerformLayout();
			this->Reservation_layer->ResumeLayout(false);
			this->Reservation_layer->PerformLayout();
			this->Reservation_feautures->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->Reservations_search->ResumeLayout(false);
			this->Reservations_search->PerformLayout();
			this->CreateAccount->ResumeLayout(false);
			this->CreateAccount->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->Terms2->ResumeLayout(false);
			this->Terms2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->AdminMenu->ResumeLayout(false);
			this->IconsContainer->ResumeLayout(false);
			this->IconsContainer->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			this->CustomizeColor->ResumeLayout(false);
			this->CustomizeColor->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomeButton))->EndInit();
			this->Accounts_layer->ResumeLayout(false);
			this->Accounts_layer->PerformLayout();
			this->Account_Feautures->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			this->Search_account->ResumeLayout(false);
			this->Search_account->PerformLayout();
			this->Flights_layer->ResumeLayout(false);
			this->Flights_layer->PerformLayout();
			this->Flights_feautures->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			this->AddFlight->ResumeLayout(false);
			this->AddFlight->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->Flight_search->ResumeLayout(false);
			this->Flight_search->PerformLayout();
			this->Check_Flight->ResumeLayout(false);
			this->Check_Flight->PerformLayout();
			this->Airports_layer->ResumeLayout(false);
			this->Airports_layer->PerformLayout();
			this->Airport_feautures->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			this->AddAirport->ResumeLayout(false);
			this->AddAirport->PerformLayout();
			this->Airport_search->ResumeLayout(false);
			this->Airport_search->PerformLayout();
			this->Planes_layer->ResumeLayout(false);
			this->Planes_layer->PerformLayout();
			this->Plane_feautures->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			this->AddPlane->ResumeLayout(false);
			this->AddPlane->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->Plane_search->ResumeLayout(false);
			this->Plane_search->PerformLayout();
			this->Reservations_layer->ResumeLayout(false);
			this->Reservations_layer->PerformLayout();
			this->Reservations_feautures->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->Reservation_search->ResumeLayout(false);
			this->Reservation_search->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		Airport p;
		Admin A;
		User U;
		Flight f;
		Plane n;
		Seat d;
		Reservation r;
		int y = 0;
		static int z = 0;
		int Total = 0;
		//----------------------------------------------------//
	private: System::Void checkBox1_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked)
		{
			button1->Enabled = true;
		}
		else
		{
			button1->Enabled = false;
		}
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		Terms->Visible = true;
		Terms->BringToFront();
	}
	private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e) {
		Base->BringToFront();
		Terms->Visible = false;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((textBox1->Text == "admin") && (textBox2->Text == "admin"))
		{
			AdminMenu->Visible = true;
			IconsContainer->Visible = true;
			Base->Visible = false;
			label5->Visible = false;
		}
		else
		{
			if (U.SignIn(textBox1->Text, textBox2->Text))
			{
				textBox11->Text = U.GetId();
				textBox12->Text = U.GetName();
				textBox13->Text = U.GetEmail();
				textBox14->Text = U.GetCity();
				textBox15->Text = U.GetPassword();
				Base->Visible = false;
				UserMenu->Visible = true;
				Icons_container->Visible = true;
				label5->Visible = false;
			}
			else
			{
				label5->Visible = true;
			}
		}
		checkBox1->Checked = false;
		textBox1->Text = "";
		textBox2->Text = "";
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if ((textBox1->Text == "admin") && (textBox2->Text == "admin"))
		{
			checkBox1->Checked = true;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		label5->Visible = false;
		Base->Visible = false;
		Terms->Visible = false;
		checkBox1->Checked = false;
		textBox1->Text = "";
		textBox2->Text = "";
		CreateAccount->Visible = true;
	}
	private: System::Void pictureBox14_Click(System::Object^ sender, System::EventArgs^ e) {
		label65->Visible = false;
		Terms2->Visible = false;
		CreateAccount->Visible = false;
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		checkBox2->Checked = false;
		Base->Visible = true;
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox2->Checked)
		{
			button3->Enabled = true;
		}
		else
		{
			button3->Enabled = false;
		}
	}
	private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
		Terms2->Visible = true;
		Terms2->BringToFront();
	}
	private: System::Void pictureBox13_Click(System::Object^ sender, System::EventArgs^ e) {
		Terms2->Visible = false;
		CreateAccount->BringToFront();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "") {
			label65->Visible = true;
		}
		else {
			label65->Visible = false;
			U.signup(textBox3->Text, textBox4->Text, textBox5->Text, textBox6->Text);
			CreateAccount->Visible = false;
			checkBox2->Checked = false;
			textBox3->Text = "";
			textBox4->Text = "";
			textBox5->Text = "";
			textBox6->Text = "";
			Base->Visible = true;
		}
	}
	private: System::Void HomeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Flights_layer->Visible = false;
		Reservations_layer->Visible = false;
		Planes_layer->Visible = false;
		Booking_layer->Visible = false;
		Accounts_layer->Visible = false;
		Airports_layer->Visible = false;
		IconsContainer->Visible = true;
		button22->Visible = false;
		AddAirport->Visible = false;
		AddFlight->Visible = false;
		AddPlane->Visible = false;
		Plane_search->Visible = false;
		Flight_search->Visible = false;
		Airport_search->Visible = false;
		Search_account->Visible = false;
		Reservation_search->Visible = false;
		button8->Visible = false;
		button9->Visible = false;
		button12->Visible = false;
		button16->Visible = false;
		Check_Flight->Visible = false;
		textBox27->Text = "";
		textBox64->Text = "";
		textBox22->Text = "";
		textBox29->Text = "";
		textBox24->Text = "";
		comboBox3->Text = "";
		textBox21->Clear();
		comboBox4->Text = "";
		textBox31->Clear();
		textBox30->Clear();
		textBox33->Clear();
		textBox35->Clear();
		textBox34->Clear();
		comboBox3->Text = "";
		comboBox2->Text = "";
		comboBox1->Text = "";
		dateTimePicker3->Text = "";
		numericUpDown3->Text = "";
		textBox37->Text = "";
		textBox38->Text = "";
		textBox49->Text = "";
		textBox50->Text = "";
		textBox40->Text = "";
		textBox41->Text = "";
		textBox46->Text = "";
		textBox47->Text = "";
	}
	private: System::Void pictureBox24_Click(System::Object^ sender, System::EventArgs^ e) {
		IconsContainer->Visible = false;
		Accounts_layer->Visible = true;
		textBox25->Visible = true;
		textBox24->Visible = true;
		textBox24->AppendText(A.Account::print());
	}
	private: System::Void pictureBox23_Click(System::Object^ sender, System::EventArgs^ e) {
		IconsContainer->Visible = false;
	}
	private: System::Void pictureBox22_Click(System::Object^ sender, System::EventArgs^ e) {
		IconsContainer->Visible = false;
		Flights_layer->Visible = true;
		textBox27->Visible = true;
		textBox26->Visible = true;
		textBox27->AppendText(f.print());
	}
	private: System::Void pictureBox26_Click(System::Object^ sender, System::EventArgs^ e) {
		IconsContainer->Visible = false;
		Reservations_layer->Visible = true;
		textBox61->Visible = true;
		textBox64->Visible = true;
		textBox64->AppendText(r.print());
	}
	private: System::Void pictureBox19_Click(System::Object^ sender, System::EventArgs^ e) {
		IconsContainer->Visible = false;
		textBox23->Visible = true;
		textBox22->Visible = true;
		Planes_layer->Visible = true;
		textBox22->AppendText(n.print());
	}
	private: System::Void pictureBox27_Click(System::Object^ sender, System::EventArgs^ e) {
		IconsContainer->Visible = false;
		textBox32->Visible = true;
		textBox29->Visible = true;
		Airports_layer->Visible = true;
		textBox29->AppendText(p.print());
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		IconsContainer->Visible = false;
		Base->Visible = true;
	}
	private: System::Void pictureBox31_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Search_account->Visible) {
			Search_account->Visible = false;
			Accounts_layer->Visible = true;
			textBox25->Visible = true;
			textBox24->Visible = true;
		}
		else
		{
			Search_account->Visible = true;
			textBox25->Visible = false;
			textBox24->Visible = false;
		}
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox54->Text = "";
		if (textBox56->Text == "") {
			MessageBox::Show("You must Enter ID !!", "Not Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
		}
		else {
			textBox54->AppendText(A.Account::Search(textBox56->Text));
			if (A.Account::Search(textBox56->Text) == "Not Found :(") {
				button15->Visible = false;
			}
			else
			{
				button15->Visible = true;
			}
		}
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Are you sure !!", "Delete Account", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
			A.Delete_Account("#" + textBox56->Text);
			textBox54->Text = "";
			textBox56->Text = "";
			Search_account->Visible = false;
			textBox25->Visible = true;
			textBox24->Visible = true;
			textBox24->Text = "";
			textBox24->AppendText(A.Account::print());
			button15->Visible = false;
		}
	}
	private: System::Void pictureBox38_Click(System::Object^ sender, System::EventArgs^ e) {
		if (AddAirport->Visible)
		{
			AddAirport->Visible = false;
			textBox32->Visible = true;
			textBox29->Visible = true;
		}
		else
		{
			Airport_search->Visible = false;
			AddAirport->Visible = true;
			textBox32->Visible = false;
			textBox29->Visible = false;
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox33->Text == "" || textBox35->Text == "" || textBox34->Text == "") {
			MessageBox::Show("You must fill all fields  !!", "Not Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
		}
		else {
			p.SetAirPortDetails(textBox33->Text, textBox35->Text, textBox34->Text);
			AddAirport->Visible = false;
			textBox32->Visible = true;
			textBox29->Visible = true;
			textBox29->Text = "";
			textBox29->AppendText(p.print());
			textBox33->Clear();
			textBox35->Clear();
			textBox34->Clear();
		}
	}
	private: System::Void pictureBox35_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Airport_search->Visible) {
			Airport_search->Visible = false;
			textBox32->Visible = true;
			textBox29->Visible = true;
		}
		else
		{
			AddAirport->Visible = false;
			Airport_search->Visible = true;
			textBox32->Visible = false;
			textBox29->Visible = false;
		}
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox40->Text = "";
		if (textBox41->Text == "") {
			MessageBox::Show("You must Enter Code !!", "Not Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
		}
		else {
			textBox40->AppendText(p.Search(textBox41->Text));
			if (p.Search(textBox41->Text) == "Not Found :(") {
				button9->Visible = false;
			}
			else
			{
				button9->Visible = true;
			}
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Are you sure !!", "Delete Airport", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
			p.Delete_airport("#" + textBox41->Text);
			Airport_search->Visible = false;
			textBox32->Visible = true;
			textBox29->Visible = true;
			textBox29->Text = "";
			textBox29->AppendText(p.print());
			textBox40->Text = "";
			textBox41->Text = "";
			button9->Visible = false;
		}
	}
	private: System::Void pictureBox29_Click(System::Object^ sender, System::EventArgs^ e) {
		if (AddFlight->Visible)
		{
			AddFlight->Visible = false;
			textBox26->Visible = true;
			textBox27->Visible = true;
		}
		else
		{
			textBox26->Visible = false;
			textBox27->Visible = false;
			Flight_search->Visible = false;
			AddFlight->Visible = true;
		}
		//AirPorts_info To ComboBox
		int c = 1;
		int cl = 2;
		comboBox1->Items->Clear();
		comboBox2->Items->Clear();
		comboBox3->Items->Clear();
		String^ Path1 = "Data/Airports.txt";
	block:
		if (File::Exists(Path1))
		{
		StreamReader^ Airports_info = File::OpenText(Path1);
		while (String^ str = Airports_info->ReadLine())
		{
			if (c % cl == 0)
			{
				comboBox3->Items->Add(str);
				comboBox2->Items->Add(str);
				cl += 3;
			}
			c++;
		}
		Airports_info->Close();
		}
		else
		{
			StreamWriter^ sw = gcnew StreamWriter(gcnew FileStream(Path1, FileMode::Append, FileAccess::Write, FileShare::None));
			sw->Close();
			goto block;
		}
		//Read From Planes_info File To ComboBox
		int i = 1;
		int linc = 4;
		String^ Path2 = "Data/Planes.txt";
	Block:
		if (File::Exists(Path2))
		{
		StreamReader^ Planess_info = File::OpenText(Path2);
		while (String^ str = Planess_info->ReadLine())
		{
			if ((i % linc) == 0)
			{
				linc += 5;
				comboBox1->Items->Add(str);
			}
			i++;

		}
		Planess_info->Close();
		}
		else
		{
			StreamWriter^ sw = gcnew StreamWriter(gcnew FileStream(Path2, FileMode::Append, FileAccess::Write, FileShare::None));
			sw->Close();
			goto Block;
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if ( numericUpDown3->Text == "0" || (comboBox2->Items->Contains(comboBox2->Text) == false) || (comboBox1->Items->Contains(comboBox1->Text) == false) || (comboBox3->Items->Contains(comboBox3->Text) == false)) {
			MessageBox::Show("You must fill all fields ?", "Not Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
		}
		else {
			f.Add_Flight(comboBox3->Text, comboBox2->Text, numericUpDown3->Text, dateTimePicker3->Text, comboBox1->Text);
			AddFlight->Visible = false;
			textBox26->Visible = true;
			textBox27->Visible = true;
			textBox27->Text = "";
			textBox27->AppendText(f.print());
			comboBox3->Text = "";
			comboBox2->Text = "";
			comboBox1->Text = "";
			dateTimePicker3->Text = "";
			numericUpDown3->Text = "";
		}
	}
	private: System::Void pictureBox30_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Flight_search->Visible) {
			Flight_search->Visible = false;
			textBox26->Visible = true;
			textBox27->Visible = true;
		}
		else
		{
			AddFlight->Visible = false;
			Flight_search->Visible = true;
			textBox26->Visible = false;
			textBox27->Visible = false;
		}
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox37->Text = "";
		button22->Visible = false;
		button8->Visible = false;
		if (textBox38->Text == "") {
			MessageBox::Show("You must Enter F_N !!", "Not Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
		}
		else {
			textBox37->AppendText(f.Search(textBox38->Text));
			if (f.Search(textBox38->Text) == "Not Found :(") {
				button8->Visible = false;
				button22->Visible = false;
			}
			else
			{
				button22->Visible = true;
				button8->Visible = true;
			}
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Are you sure !!", "Delete Flight", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
			f.Delete_flight(textBox38->Text);
			textBox37->Text = "";
			textBox38->Text = "";
			Flight_search->Visible = false;
			textBox26->Visible = true;
			textBox27->Visible = true;
			textBox27->Text = "";
			textBox27->AppendText(f.print());
			button22->Visible = false;
			button8->Visible = false;
		}
	}private: System::Void pictureBox37_Click(System::Object^ sender, System::EventArgs^ e) {
		if (AddPlane->Visible) {
			AddPlane->Visible = false;
			textBox23->Visible = true;
			textBox22->Visible = true;
		}
		else
		{
			Plane_search->Visible = false;
			AddPlane->Visible = true;
			textBox23->Visible = false;
			textBox22->Visible = false;
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox21->Text == "" || textBox31->Text == "" || textBox30->Text == "" || numericUpDown2->Text == "0" || ( comboBox4->Items->Contains(comboBox4->Text)==false)) {
			MessageBox::Show("You must fill all fields  !!", "Not Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
		}
		else {
			n.SetPlaneDetails(textBox21->Text, comboBox4->Text, textBox31->Text, textBox30->Text, numericUpDown2->Text);
			AddPlane->Visible = false;
			textBox23->Visible = true;
			textBox22->Visible = true;
			textBox22->Text = "";
			textBox22->AppendText(n.print());
			textBox21->Clear();
			comboBox4->Text = "";
			textBox31->Clear();
			textBox30->Clear();
			numericUpDown2->Text = "";
		}
	}
	private: System::Void pictureBox21_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Plane_search->Visible) {
			Plane_search->Visible = false;
			textBox23->Visible = true;
			textBox22->Visible = true;
		}
		else
		{
			AddPlane->Visible = false;
			Plane_search->Visible = true;
			textBox23->Visible = false;
			textBox22->Visible = false;
		}
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox46->Text = "";
		if (textBox47->Text == "") {
			MessageBox::Show("You must Enter Plane code !!", "Not Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
		}
		else {
			textBox46->AppendText(n.Search(textBox47->Text));
			if (n.Search(textBox47->Text) == "Not Found :(") {
				button12->Visible = false;
			}
			else
			{
				button12->Visible = true;
			}
		}
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Are you sure !!", "Delete Plane", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
			n.Delete_plane("#" + textBox47->Text);
			Plane_search->Visible = false;
			textBox23->Visible = true;
			textBox22->Visible = true;
			textBox22->Text = "";
			textBox22->AppendText(n.print());
			textBox46->Text = "";
			textBox47->Text = "";
			button12->Visible = false;
		}
	}
	private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Reservation_search->Visible) {
			Reservation_search->Visible = false;
			textBox61->Visible = true;
			textBox64->Visible = true;
		}
		else
		{
			Reservation_search->Visible = true;
			textBox61->Visible = false;
			textBox64->Visible = false;
		}
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox49->Text = "";
		if (textBox50->Text == "") {
			MessageBox::Show("You must Enter R_N !!", "Not Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
		}
		else {
			textBox49->AppendText(r.search(textBox50->Text));
			if (r.search(textBox50->Text) == "Not Found :(") {
				button16->Visible = false;
			}
			else
			{
				button16->Visible = true;
			}
		}
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Are you sure !!", "Delete Reservation", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
			r.Delete_Reservation("#" + textBox50->Text);
			textBox49->Text = "";
			textBox50->Text = "";
			Reservation_search->Visible = false;
			textBox61->Visible = true;
			textBox64->Visible = true;
			textBox64->Text = "";
			textBox64->AppendText(r.print());
			button16->Visible = false;
		}
	}
	private: System::Void pictureBox18_Click(System::Object^ sender, System::EventArgs^ e) {
		Account_layer->Visible = true;
		Icons_container->Visible = false;
	}
	private: System::Void pictureBox17_Click(System::Object^ sender, System::EventArgs^ e) {
		Booking_layer->Visible = true;
		Icons_container->Visible = false;
		int c = 1;
		int cl = 2;
		comboBox5->Items->Clear();
		comboBox6->Items->Clear();
		String^ Path = "Data/Airports.txt";
	block:
		if (File::Exists(Path))
		{
		StreamReader^ Airports_info = File::OpenText(Path);
		while (String^ str = Airports_info->ReadLine())
		{
			if (c % cl == 0)
			{
				comboBox5->Items->Add(str);
				comboBox6->Items->Add(str);
				cl += 3;
			}
			c++;
		}
		Airports_info->Close();
		}
		else
		{
			StreamWriter^ sw = gcnew StreamWriter(gcnew FileStream(Path, FileMode::Append, FileAccess::Write, FileShare::None));
			sw->Close();
			goto block;
		}
	}
	private: System::Void pictureBox16_Click(System::Object^ sender, System::EventArgs^ e) {
		Flight_layer->Visible = true;
		Search->Visible = true;
		Icons_container->Visible = false;
		comboBox7->Items->Clear();
		comboBox8->Items->Clear();
		int c = 1;
		int cl = 2;
		String^ Path = "Data/Airports.txt";
	block:
		if (File::Exists(Path))
		{
			StreamReader^ Airports_info = File::OpenText(Path);
			while (String^ str = Airports_info->ReadLine())
			{
				if (c % cl == 0)
				{
					comboBox7->Items->Add(str);
					comboBox8->Items->Add(str);
					cl += 3;
				}
				c++;
			}
			Airports_info->Close();
		}
		else
		{
			StreamWriter^ sw = gcnew StreamWriter(gcnew FileStream(Path, FileMode::Append, FileAccess::Write, FileShare::None));
			sw->Close();
			goto block;
		}
	}
	private: System::Void pictureBox23_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Reservation_layer->Visible = true;
		textBox20->AppendText(t.print(U.GetId()));
		Icons_container->Visible = false;
	}
	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
		Account_layer->Visible = false;
		Booking_layer->Visible = false;
		Reservation_layer->Visible = false;
		Flight_layer->Visible = false;
		Search_Result->Visible = false;
		timer4->Start();
		textBox20->Clear();
		comboBox5->Items->Clear();
		comboBox6->Items->Clear();
		comboBox7->Items->Clear();
		comboBox8->Items->Clear();
		comboBox5->Text = "";
		comboBox6->Text = "";
		comboBox7->Text = "";
		comboBox8->Text = "";
		comboBox9->Text = "";
		numericUpDown4->Text = "0";
		MENU->Visible = false;
		Icons_container->Visible = true;
	}
	private: System::Void pictureBox20_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Are you sure you want to log out ?", "Log out", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
		{
			Account_layer->Visible = false;
			Booking_layer->Visible = false;
			Reservation_layer->Visible = false;
			Flight_layer->Visible = false;
			UserMenu->Visible = false;
			Icons_container->Visible = false;
			Base->Visible = true;
		}
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!Account_layer->Visible)
		{
			Account_layer->Visible = true;
			Flight_layer->Visible = false;
			Reservation_layer->Visible = false;
			Booking_layer->Visible = false;
		}
	}
	private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button4->Visible)
		{
			button4->Visible = false;
			textBox12->ReadOnly = true;
			textBox13->ReadOnly = true;
			textBox14->ReadOnly = true;
			textBox15->ReadOnly = true;
		}
		else
		{
			button4->Visible = true;
			textBox12->ReadOnly = false;
			textBox13->ReadOnly = false;
			textBox14->ReadOnly = false;
			textBox15->ReadOnly = false;
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox12->ReadOnly = true;
		textBox13->ReadOnly = true;
		textBox14->ReadOnly = true;
		textBox15->ReadOnly = true;
		U.Edit_Account(textBox11->Text, textBox12->Text, textBox13->Text, textBox14->Text, textBox15->Text);
		button4->Visible = false;

	}
	private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Are you sure you want to Delete Account ?", "Delete Account", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
		{
			U.Delete_Account(U.GetId());
			UserMenu->Visible = false;
			Base->Visible = true;
		}
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!Booking_layer->Visible) {
			Booking_layer->Visible = true;
			Flight_layer->Visible = false;
			Reservation_layer->Visible = false;
			Account_layer->Visible = false;
			textBox20->Clear();
			//AirPorts_info To ComboBox
			int c = 1;
			int cl = 2;
			comboBox5->Items->Clear();
			comboBox6->Items->Clear();
			String^ Path = "Data/Airports.txt";
		block:
			if (File::Exists(Path))
			{
			StreamReader^ Airports_info = File::OpenText(Path);
			while (String^ str = Airports_info->ReadLine())
			{
				if (c % cl == 0)
				{
					comboBox5->Items->Add(str);
					comboBox6->Items->Add(str);
					cl += 3;
				}
				c++;
			}
			Airports_info->Close();
			}
			else
			{
				StreamWriter^ sw = gcnew StreamWriter(gcnew FileStream(Path, FileMode::Append, FileAccess::Write, FileShare::None));
				sw->Close();
				goto block;
			}
		}
	}
	Ticket t;
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		
		Random^ Randnum = gcnew Random();
		int^ Seatnum = Randnum->Next(0, 10000000);
		String^ S_N = comboBox9->Text + Seatnum->ToString();
		int  ReservationNum = Randnum->Next(0, 1000000);
		bool isok = false;
		DateTime^ dt = DateTime::Now;
		String^ BookDate = dt->ToString("ddd/MMMM/yy, hh:mm:ss tt");
		DateTime^ EX = dt->AddMonths(1);
		String^ Expiry_Date = EX->ToString("ddd/MMMM/yy, hh:mm:ss tt");

		switch (y)
		{
		case 0:
		{
			if ( (comboBox5->Items->Contains(comboBox5->Text) == false) || (comboBox6->Items->Contains(comboBox6->Text) == false) || dateTimePicker1->Text == "" || numericUpDown4->Text == "0" ||  (comboBox9->Items->Contains(comboBox9->Text) == false)) {
				MessageBox::Show("You must fill all fields  !!", "Not Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
			}
			else
			{
				y++;
				Enter->Visible = false;
				SELECT->Visible = true;
				textBox16->AppendText(f.Search(comboBox6->Text, comboBox5->Text, dateTimePicker1->Text));
				if (f.Search(comboBox6->Text, comboBox5->Text, dateTimePicker1->Text) == "We are unable to find recommendations for your search.\r\n\nPlease change your search criteria and resubmit the search.") {
					button19->Visible = false;
					textBox28->Visible = false;
					label21->Visible = false;
				}
				else {
					label6->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
					label6->ForeColor = System::Drawing::Color::White;
					button19->Visible = true;
					button19->Text = "SELECT";
					textBox28->Visible = true;
					label21->Visible = true;
				}
			}
			break;
		}
		case 1:
		{
			int TNUM = System::Convert::ToInt32(numericUpDown4->Text);
			if (f.Search(textBox28->Text) == "Not Found :(") {
				MessageBox::Show("Enter a vaild F_N  !!", "Not Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
			}
			else if (TNUM > f.GetAvailableTickets())
			{
				MessageBox::Show("No AvailableTickets :(", "Sorry", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
			}
			else
			{
				y++;
				BOOK->Visible = true;
				SELECT->Visible = false;
				button19->Text = "SAVE";
				label7->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
				label7->ForeColor = System::Drawing::Color::White;
				label6->BackColor = System::Drawing::Color::Transparent;
				label6->ForeColor = System::Drawing::Color::Green;
				label66->Text = System::Convert::ToString(z + 1);
			}
			break;
		}
		case 2:
		{
			bool end=false;
			int Tnum = System::Convert::ToInt64(numericUpDown4->Text);
			if (z < Tnum) {
				if (textBox18->Text == "" || textBox42->Text == "" || textBox43->Text == "" || textBox44->Text == "" || numericUpDown6->Text == "0") {
					MessageBox::Show("You must fill all fields  !!", "Not Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
				}
				else
				{
					t.SetLuggage(numericUpDown8->Text, numericUpDown7->Text);
					if (comboBox9->Text == "A" && (t.getlug() > 25 || t.getEx_lug() > 25)) {
						MessageBox::Show("Limted Exceded {Free:25,EX:25} !!", "Limted Exceded", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
						t.Total_Ex_lug = 0;
						break;
					}
					else if (comboBox9->Text == "B" && (t.getlug() > 50 || t.getEx_lug() > 25)) {
						MessageBox::Show("Limted Exceded {Free:50,EX:25} !!", "Limted Exceded", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
						t.Total_Ex_lug = 0;
						break;
					}
					else if (comboBox9->Text == "C" && (t.getlug() > 25 || t.getEx_lug() > 25)) {
						MessageBox::Show("Limted Exceded {Free:25,EX:25} !!", "Limted Exceded", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
						t.Total_Ex_lug = 0;
						break;
					}

					if (z == (Tnum - 1)) {
						end = true;
					}
					++z;
					label66->Text = System::Convert::ToString(z + 1);
					t.setPassenger(textBox42->Text, textBox43->Text, textBox18->Text, comboBox9->Text, textBox44->Text, numericUpDown6->Text);
					t.SetTickets(BookDate, S_N, Expiry_Date, ReservationNum);
					d.SetSeats(S_N);
					textBox18->Clear();
					textBox42->Clear();
					textBox43->Clear();
					textBox44->Clear();
					numericUpDown8->Text = "0";
					numericUpDown7->Text = "0";
					numericUpDown6->Text = "0";
					if (end) {
						y++;
						BOOK->Visible = false;
						Buy->Visible = true;
						button19->Text = "BOOK";
						label17->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
						label17->ForeColor = System::Drawing::Color::White;
						label7->BackColor = System::Drawing::Color::Transparent;
						label7->ForeColor = System::Drawing::Color::Green;
										//Calculator//
						//-----------------------------------------//
						int Pnum = System::Convert::ToInt32(numericUpDown4->Text);
						int FlightPrice = f.GetPrice();
						Total = Pnum * FlightPrice;
						textBox53->Text = numericUpDown4->Text + "  Passenger X  $" + FlightPrice + " For 1 Seat  =  " + Total;
						if (t.getTotal_Ex_lug() !=0)
						{
							textBox53->AppendText("\r\n" + t.getTotal_Ex_lug() + "KG  Extra Luggage X $5 =" + (t.getTotal_Ex_lug() * 5));
							Total += (t.getTotal_Ex_lug() * 5);
						}
						textBox51->Text = System::Convert::ToString(Total);
						//-----------------------------------------//
						t.Total_Ex_lug = 0;
					}
				}
			}
			break;
		}
		case 3:
		{
				z = 0;
			if (radioButton2->Checked == false && radioButton1->Checked == false) {
				MessageBox::Show("Choose your payment method !!", "Payment Eror", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
			}
			else
			{
				label6->Visible = false;
				label7->Visible = false;
				label17->Visible = false;
				y++;
				Buy->Visible = false;
				PAY->Visible = true;
				button19->Text = "PAY";
				if (radioButton2->Checked)
				{
					Paypal->Visible = true;
				}
				else
				{
					VisaCard->Visible = true;
				}
			}
			break;
		}
		case 4:
		{
			StreamWriter^ sd = gcnew StreamWriter(gcnew FileStream("Data/Reservations.txt", FileMode::Append, FileAccess::Write, FileShare::None));
			if (radioButton2->Checked)
			{
				if (textBox57->Text == "") {
					MessageBox::Show("Enter Paypall account !!", "Payment Eror", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
				}
				else
				{
					isok = true;
					sd->Write("#" + ReservationNum + "\n" + U.GetId() + "\nPaypal\n" + textBox57->Text + "\n" + "" + BookDate + "\n" + Expiry_Date + "\n$" + Total + "\r\n");
				}
			}
			else if (radioButton1->Checked)
			{
				if (textBox58->Text == "" || textBox59->Text == "") {
					MessageBox::Show("You must fill all fields !!", "Payment Eror", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
				}
				else
				{
					isok = true;
					sd->Write("#" + ReservationNum + "\n" + U.GetId() + "\nVisaCard" + "\n" + textBox58->Text + "|" + textBox59->Text + "\n" + BookDate + "\n" + dateTimePicker4->Text + "\n$" + Total + "\r\n");
				}
			}
			sd->Close();
			if (isok) {
				textBox60->AppendText(t.Tickets);
				t.BookTicket(U.GetId());
				d.BookSeat(textBox28->Text);
				d.IncreaseORDecrease(textBox28->Text);
				y++;
				PAY->Visible = false;
				VisaCard->Visible = false;
				Paypal->Visible = false;
				Print_ticket->Visible = true;
				button19->Text = "OK";
			}
			break;
		}
		case 5:
		{
			y = 0;
			Print_ticket->Visible = false;
			Enter->Visible = true;
			label6->Visible = true;
			label7->Visible = true;
			label17->Visible = true;
			label17->BackColor = System::Drawing::Color::Transparent;
			label17->ForeColor = System::Drawing::Color::Black;
			label7->BackColor = System::Drawing::Color::Transparent;
			label7->ForeColor = System::Drawing::Color::Black;
			textBox60->Text = "";
			textBox58->Text="";
			textBox59->Text = "";
			textBox16->Text = "";
			textBox57->Text = "";
			radioButton1->Checked = false;
			radioButton2->Checked = false;
			button19->Text = "SEARCH";
			break;
		}
		}
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox3->Checked) {
			numericUpDown7->Visible = true;
			label52->Visible = true;
		}
		else
		{
			label52->Visible = false;
			numericUpDown7->Visible = false;
		}
	}
	private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (y)
		{
		case 1:
		{
			textBox16->Text = "";
			button19->Visible = true;
			button19->Text = "SEARCH";
			textBox28->Text = "";
			Enter->Visible = true;
			SELECT->Visible = false;
			y--;
			break;
		}
		case 2: {
			BOOK->Visible = false;
			button19->Text = "SELECT";
			SELECT->Visible = true;
			label6->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			label6->ForeColor = System::Drawing::Color::White;
			label7->BackColor = System::Drawing::Color::Transparent;
			label7->ForeColor = System::Drawing::Color::Black;
			z = 0;
			t.Total_Ex_lug = 0;
			t.Tickets = "";
			d.Seats = "";
			label66->Text = "";
			y--;
			break;
		}
		case 3:
		{
			z = 0;
			Buy->Visible = false;
			button19->Text = "SAVE";
			BOOK->Visible = true;
			t.Tickets = "";
			d.Seats = "";
			label66->Text = System::Convert::ToString(z + 1);
			label7->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			label7->ForeColor = System::Drawing::Color::White;
			label17->BackColor = System::Drawing::Color::Transparent;
			label17->ForeColor = System::Drawing::Color::Black;
			y--;
			break;
		}
		case 4:
		{
			Buy->Visible = true;
			button19->Text = "BOOK";
			PAY->Visible = false;
			if (radioButton2->Checked)
			{
				Paypal->Visible = false;
			}
			else if (radioButton1->Checked)
			{
				VisaCard->Visible = false;
			}
			label6->Visible = true;
			label7->Visible = true;
			label17->Visible = true;
			label6->BackColor = System::Drawing::Color::Transparent;
			label7->BackColor = System::Drawing::Color::Transparent;
			label17->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			label17->ForeColor = System::Drawing::Color::White;
			y--;
			break;
		}
		}
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!Flight_layer->Visible)
		{
			Flight_layer->Visible = true;
			Account_layer->Visible = false;
			Reservation_layer->Visible = false;
			Booking_layer->Visible = false;
			textBox20->Clear();
			comboBox7->Items->Clear();
			comboBox8->Items->Clear();
			int c = 1;
			int cl = 2;
			String^ Path = "Data/Airports.txt";
		block:
			if (File::Exists(Path))
			{
				StreamReader^ Airports_info = File::OpenText(Path);
				while (String^ str = Airports_info->ReadLine())
				{
					if (c % cl == 0)
					{
						comboBox7->Items->Add(str);
						comboBox8->Items->Add(str);
						cl += 3;
					}
					c++;
				}
				Airports_info->Close();
			}
			else
			{
				StreamWriter^ sw = gcnew StreamWriter(gcnew FileStream(Path, FileMode::Append, FileAccess::Write, FileShare::None));
				sw->Close();
				goto block;
			}
		}
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox7->Text == "" || comboBox8->Text == "" || dateTimePicker2->Text == "") {
			MessageBox::Show("You must fill all fields  !!", "Not Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
		}
		else
		{
			Search->Visible = false;
			Search_Result->Visible = true;
			textBox19->AppendText(f.Search(comboBox7->Text, comboBox8->Text, dateTimePicker2->Text));
		}
	}
	private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
		Search_Result->Visible = false;
		Search->Visible = true;
		textBox19->Clear();
	}
	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!Reservation_layer->Visible)
		{
			textBox20->Text = "";
			textBox20->AppendText(t.print(U.GetId()));
			Reservation_layer->Visible = true;
			Flight_layer->Visible = false;
			Account_layer->Visible = false;
			Booking_layer->Visible = false;
		}
	}
	private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Reservations_search->Visible) {
			Reservations_search->Visible = false;
			textBox20->Visible = true;
		}
		else
		{
			Reservations_search->Visible = true;
			textBox20->Visible = false;
		}
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox63->Text == "") {
			MessageBox::Show("Enter Ticket Number or Reservation number !!", "Not Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
		}
		else
		{
			textBox62->Text = "";
			if (t.search(U.GetId(), textBox63->Text) == "Not Found :(") {
				button20->Visible = false;
			}
			else
			{
				button20->Visible = true;
			}
			textBox62->Text = "";
			textBox62->AppendText(t.search(U.GetId(), textBox63->Text));
		}
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Are you sure !!", "Cancel Reservation", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
			MessageBox::Show("To confirm deletion,\n enter the flight number ", "Cancel Reservation", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
			button24->Visible = true;
			button20->Visible = false;
			button21->Visible = false;
			label76->Visible = true;
			textBox66->Visible = true;
			textBox63->ReadOnly = true;
		}
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox66->Text == "") {
			MessageBox::Show("You must enter Flight Number ", "Cancel Reservation", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
		}
		else if (f.CheckFlightNumber(U.GetId(), textBox66->Text, textBox63->Text) == false) {
			MessageBox::Show(" Enter The correct flight number ", "Cancel Reservation", MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK;
		}
		else
		{
			t.Delete_Ticket(U.GetId(), textBox63->Text);
			d.Delete_Seat(textBox66->Text);
			d.IncreaseORDecrease(textBox66->Text);
			Reservations_search->Visible = false;
			textBox20->Visible = true;
			textBox20->Text = "";
			textBox20->AppendText(t.print(U.GetId()));
			button24->Visible = false;
			button21->Visible = true;
			label76->Visible = false;
			textBox66->Visible = false;
			textBox63->ReadOnly = false;
			textBox62->Text = "";
			textBox63->Text = "";
		}
	}
		   //-- Slide Admin Customize panel --//
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		while (CustomizeColor->Width <= 150)
		{
			CustomizeColor->Width += 3;
			this->Refresh();
		}
		timer1->Stop();
		IsActivated = true;
	}
		   bool IsActivated = false;
	private: System::Void pictureBox15_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!IsActivated)
		{
			timer1->Start();
		}
		else if (IsActivated)
		{
			timer2->Start();
		}
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		while (CustomizeColor->Width >= 1)
		{
			CustomizeColor->Width -= 3;
			this->Refresh();
		}
		timer2->Stop();
		IsActivated = false;
	}
		   //-- Customize Color --//
	private: System::Void Darkmode_Click(System::Object^ sender, System::EventArgs^ e) {
		IconsContainer->BackColor = System::Drawing::Color::AliceBlue;
		Accounts_layer->BackColor = System::Drawing::Color::AliceBlue;
		Flights_layer->BackColor = System::Drawing::Color::AliceBlue;
		Reservations_layer->BackColor = System::Drawing::Color::AliceBlue;
		Airports_layer->BackColor = System::Drawing::Color::AliceBlue;
		Planes_layer->BackColor = System::Drawing::Color::AliceBlue;
		AddAirport->BackColor = System::Drawing::Color::AliceBlue;
		AddPlane->BackColor = System::Drawing::Color::AliceBlue;
	}
	private: System::Void Lightmode_Click(System::Object^ sender, System::EventArgs^ e) {
		IconsContainer->BackColor = System::Drawing::Color::White;
		Accounts_layer->BackColor = System::Drawing::Color::White;
		Flights_layer->BackColor = System::Drawing::Color::White;
		Reservations_layer->BackColor = System::Drawing::Color::White;
		Airports_layer->BackColor = System::Drawing::Color::White;
		Planes_layer->BackColor = System::Drawing::Color::White;
		AddAirport->BackColor = System::Drawing::Color::White;
		AddPlane->BackColor = System::Drawing::Color::White;
	}
		   //-- Slide User Menu panel --//
	private: System::Void timer3_Tick_1(System::Object^ sender, System::EventArgs^ e) {
		pictureBox34->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		while (MENU->Height <= 465)
		{
			MENU->Height += 3;
			MENU->Refresh();
		}
		timer3->Stop();
		IsActivated2 = true;
	}
		   bool IsActivated2 = false;
	private: System::Void pictureBox34_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!IsActivated2)
		{
			MENU->Visible = true;
			timer3->Start();
		}
		else if (IsActivated2)
		{
			timer4->Start();
		}
	}
	private: System::Void timer4_Tick_1(System::Object^ sender, System::EventArgs^ e) {
		while (MENU->Height >= 1)
		{
			MENU->Height -= 5;
			MENU->Refresh();
		}
		pictureBox34->BackColor = System::Drawing::SystemColors::ControlLightLight;
		timer4->Stop();
		IsActivated2 = false;
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		Flight_search->Visible = false;
		Check_Flight->Visible = true;
		button23->Visible = true;
		textBox65->AppendText(f.print(textBox38->Text));
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		Flight_search->Visible = true;
		button23->Visible = false;
		Check_Flight->Visible = false;
		textBox65->Text = "";
	}
	private: System::Void numericUpDown8_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		int lug = System::Convert::ToInt32(numericUpDown8->Text);
		if (comboBox9->Text == "A" && lug >= 25) {
			checkBox3->Visible = true;
		}
		else if (comboBox9->Text == "B" && lug >= 50) {
			checkBox3->Visible = true;
		}
		else if (comboBox9->Text == "C" && lug >= 25)
		{
			checkBox3->Visible = true;
		}
		else
		{
			checkBox3->Visible = false;
			checkBox3->Checked = false;
		}

	}
	};
}