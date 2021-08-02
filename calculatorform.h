#pragma once
#include<string>
#include<msclr/marshal_cppstd.h>
#include"fg.h"
namespace calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for calculatorform
	/// </summary>
	public ref class calculatorform : public System::Windows::Forms::Form
	{

	private:fg^ Cal;



	public:
		calculatorform(void)
		{
			Cal = gcnew fg();
			InitializeComponent();
			Reset();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~calculatorform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BTN1;
	private: System::Windows::Forms::Button^ BTN2;
	private: System::Windows::Forms::Button^ BTN3;
	private: System::Windows::Forms::Button^ BTN6;
	protected:



	private: System::Windows::Forms::Button^ BTN5;

	private: System::Windows::Forms::Button^ BTN4;
	private: System::Windows::Forms::Button^ BTN9;


	private: System::Windows::Forms::Button^ BTN8;

	private: System::Windows::Forms::Button^ BTN7;

	private: System::Windows::Forms::Button^ BTN0;
	private: System::Windows::Forms::Button^ BTNPlus;
	private: System::Windows::Forms::Button^ BTNDivide;



	private: System::Windows::Forms::Button^ BTNMult;

	private: System::Windows::Forms::Button^ BTNMine;
	private: System::Windows::Forms::Button^ BTNEqual;
	private: System::Windows::Forms::Button^ BTNPoint;






	private: System::Windows::Forms::RichTextBox^ RTBinput;
	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::ComboBox^ CBTriangle;
	private: System::Windows::Forms::ComboBox^ CBTriangleh;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ TSfile;

	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ TSmode;
	private: System::Windows::Forms::ToolStripMenuItem^ TSModenormal;



	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ themeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ TSThemedark;
	private: System::Windows::Forms::ToolStripMenuItem^ TSThemelight;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;

private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::CheckBox^ checkBox4;
private: System::Windows::Forms::CheckBox^ checkBox5;
private: System::Windows::Forms::CheckBox^ checkBox6;
private: System::Windows::Forms::ToolStripMenuItem^ quadraticEquationToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ simultaneousEquationToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ binaryConversionToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ Matrix;
private: System::Windows::Forms::ToolStripMenuItem^ conversionOfUnitToolStripMenuItem;












private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ mineToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ multToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ transposeMatrixTToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;

private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem12;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem13;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem14;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem15;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem6;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem7;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem8;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem9;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem10;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem16;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem17;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem18;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem19;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem11;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem20;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem21;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem22;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem23;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem24;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem25;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem26;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem27;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem28;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem29;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem30;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem31;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem32;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem33;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem34;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem35;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem36;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem37;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem38;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem39;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem40;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem41;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem42;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem43;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem44;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem45;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem46;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem47;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem48;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem49;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem50;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem51;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem52;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem53;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem54;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem55;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem56;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem57;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem58;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem59;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem60;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem61;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem62;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem63;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem64;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem65;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem66;
private: System::Windows::Forms::ToolStripMenuItem^ degToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ gradToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ radToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ radToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ degToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ gradToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ gradToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ degToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ radToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem67;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem68;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem69;

















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(calculatorform::typeid));
			this->BTN1 = (gcnew System::Windows::Forms::Button());
			this->BTN2 = (gcnew System::Windows::Forms::Button());
			this->BTN3 = (gcnew System::Windows::Forms::Button());
			this->BTN6 = (gcnew System::Windows::Forms::Button());
			this->BTN5 = (gcnew System::Windows::Forms::Button());
			this->BTN4 = (gcnew System::Windows::Forms::Button());
			this->BTN9 = (gcnew System::Windows::Forms::Button());
			this->BTN8 = (gcnew System::Windows::Forms::Button());
			this->BTN7 = (gcnew System::Windows::Forms::Button());
			this->BTN0 = (gcnew System::Windows::Forms::Button());
			this->BTNPlus = (gcnew System::Windows::Forms::Button());
			this->BTNDivide = (gcnew System::Windows::Forms::Button());
			this->BTNMult = (gcnew System::Windows::Forms::Button());
			this->BTNMine = (gcnew System::Windows::Forms::Button());
			this->BTNEqual = (gcnew System::Windows::Forms::Button());
			this->BTNPoint = (gcnew System::Windows::Forms::Button());
			this->RTBinput = (gcnew System::Windows::Forms::RichTextBox());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->CBTriangle = (gcnew System::Windows::Forms::ComboBox());
			this->CBTriangleh = (gcnew System::Windows::Forms::ComboBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->TSfile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TSmode = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TSModenormal = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quadraticEquationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->simultaneousEquationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->binaryConversionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem15 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem16 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem17 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem18 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem19 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem20 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem21 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem22 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem23 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem24 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem25 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem26 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem27 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem28 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem29 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem30 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem31 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem32 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem33 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem34 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem35 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem36 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem37 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem38 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem39 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem40 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem41 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem42 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem43 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem44 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem45 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem46 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem47 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem48 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem49 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem50 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem51 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem52 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem53 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem54 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem55 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem56 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem57 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem58 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem59 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem10 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem60 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem61 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem62 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem63 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem64 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem65 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem66 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Matrix = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mineToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->multToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transposeMatrixTToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->conversionOfUnitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->degToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gradToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->radToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->radToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->degToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gradToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gradToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->degToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->radToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->themeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TSThemedark = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TSThemelight = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem67 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem68 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem69 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// BTN1
			// 
			this->BTN1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN1->Location = System::Drawing::Point(444, 392);
			this->BTN1->Name = L"BTN1";
			this->BTN1->Size = System::Drawing::Size(50, 50);
			this->BTN1->TabIndex = 0;
			this->BTN1->Text = L"1";
			this->BTN1->UseVisualStyleBackColor = true;
			this->BTN1->Click += gcnew System::EventHandler(this, &calculatorform::BTN1_Click);
			// 
			// BTN2
			// 
			this->BTN2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN2->Location = System::Drawing::Point(500, 392);
			this->BTN2->Name = L"BTN2";
			this->BTN2->Size = System::Drawing::Size(50, 50);
			this->BTN2->TabIndex = 2;
			this->BTN2->Text = L"2";
			this->BTN2->UseVisualStyleBackColor = true;
			this->BTN2->Click += gcnew System::EventHandler(this, &calculatorform::BTN2_Click);
			// 
			// BTN3
			// 
			this->BTN3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN3->Location = System::Drawing::Point(556, 392);
			this->BTN3->Name = L"BTN3";
			this->BTN3->Size = System::Drawing::Size(50, 50);
			this->BTN3->TabIndex = 8;
			this->BTN3->Text = L"3";
			this->BTN3->UseVisualStyleBackColor = true;
			this->BTN3->Click += gcnew System::EventHandler(this, &calculatorform::BTN3_Click);
			// 
			// BTN6
			// 
			this->BTN6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN6->Location = System::Drawing::Point(556, 336);
			this->BTN6->Name = L"BTN6";
			this->BTN6->Size = System::Drawing::Size(50, 50);
			this->BTN6->TabIndex = 11;
			this->BTN6->Text = L"6";
			this->BTN6->UseVisualStyleBackColor = true;
			this->BTN6->Click += gcnew System::EventHandler(this, &calculatorform::BTN6_Click);
			// 
			// BTN5
			// 
			this->BTN5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN5->Location = System::Drawing::Point(500, 336);
			this->BTN5->Name = L"BTN5";
			this->BTN5->Size = System::Drawing::Size(50, 50);
			this->BTN5->TabIndex = 10;
			this->BTN5->Text = L"5";
			this->BTN5->UseVisualStyleBackColor = true;
			this->BTN5->Click += gcnew System::EventHandler(this, &calculatorform::BTN5_Click);
			// 
			// BTN4
			// 
			this->BTN4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN4->Location = System::Drawing::Point(444, 336);
			this->BTN4->Name = L"BTN4";
			this->BTN4->Size = System::Drawing::Size(50, 50);
			this->BTN4->TabIndex = 9;
			this->BTN4->Text = L"4";
			this->BTN4->UseVisualStyleBackColor = true;
			this->BTN4->Click += gcnew System::EventHandler(this, &calculatorform::BTN4_Click);
			// 
			// BTN9
			// 
			this->BTN9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN9->Location = System::Drawing::Point(556, 277);
			this->BTN9->Name = L"BTN9";
			this->BTN9->Size = System::Drawing::Size(50, 50);
			this->BTN9->TabIndex = 14;
			this->BTN9->Text = L"9";
			this->BTN9->UseVisualStyleBackColor = true;
			this->BTN9->Click += gcnew System::EventHandler(this, &calculatorform::BTN9_Click);
			// 
			// BTN8
			// 
			this->BTN8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN8->Location = System::Drawing::Point(500, 277);
			this->BTN8->Name = L"BTN8";
			this->BTN8->Size = System::Drawing::Size(50, 50);
			this->BTN8->TabIndex = 13;
			this->BTN8->Text = L"8";
			this->BTN8->UseVisualStyleBackColor = true;
			this->BTN8->Click += gcnew System::EventHandler(this, &calculatorform::BTN8_Click);
			// 
			// BTN7
			// 
			this->BTN7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN7->Location = System::Drawing::Point(444, 277);
			this->BTN7->Name = L"BTN7";
			this->BTN7->Size = System::Drawing::Size(50, 50);
			this->BTN7->TabIndex = 12;
			this->BTN7->Text = L"7";
			this->BTN7->UseVisualStyleBackColor = true;
			this->BTN7->Click += gcnew System::EventHandler(this, &calculatorform::BTN7_Click);
			// 
			// BTN0
			// 
			this->BTN0->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN0->Location = System::Drawing::Point(444, 448);
			this->BTN0->Name = L"BTN0";
			this->BTN0->Size = System::Drawing::Size(50, 50);
			this->BTN0->TabIndex = 15;
			this->BTN0->Text = L"0";
			this->BTN0->UseVisualStyleBackColor = true;
			this->BTN0->Click += gcnew System::EventHandler(this, &calculatorform::BTN0_Click);
			// 
			// BTNPlus
			// 
			this->BTNPlus->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNPlus->Location = System::Drawing::Point(612, 448);
			this->BTNPlus->Name = L"BTNPlus";
			this->BTNPlus->Size = System::Drawing::Size(50, 50);
			this->BTNPlus->TabIndex = 19;
			this->BTNPlus->Text = L"+";
			this->BTNPlus->UseVisualStyleBackColor = true;
			this->BTNPlus->Click += gcnew System::EventHandler(this, &calculatorform::BTNPlus_Click);
			// 
			// BTNDivide
			// 
			this->BTNDivide->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNDivide->Location = System::Drawing::Point(612, 277);
			this->BTNDivide->Name = L"BTNDivide";
			this->BTNDivide->Size = System::Drawing::Size(50, 50);
			this->BTNDivide->TabIndex = 18;
			this->BTNDivide->Text = L"÷";
			this->BTNDivide->UseVisualStyleBackColor = true;
			this->BTNDivide->Click += gcnew System::EventHandler(this, &calculatorform::BTNDivide_Click);
			// 
			// BTNMult
			// 
			this->BTNMult->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNMult->Location = System::Drawing::Point(612, 336);
			this->BTNMult->Name = L"BTNMult";
			this->BTNMult->Size = System::Drawing::Size(50, 50);
			this->BTNMult->TabIndex = 17;
			this->BTNMult->Text = L"×";
			this->BTNMult->UseVisualStyleBackColor = true;
			this->BTNMult->Click += gcnew System::EventHandler(this, &calculatorform::BTNMult_Click);
			// 
			// BTNMine
			// 
			this->BTNMine->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNMine->Location = System::Drawing::Point(612, 392);
			this->BTNMine->Name = L"BTNMine";
			this->BTNMine->Size = System::Drawing::Size(50, 50);
			this->BTNMine->TabIndex = 16;
			this->BTNMine->Text = L"-";
			this->BTNMine->UseVisualStyleBackColor = true;
			this->BTNMine->Click += gcnew System::EventHandler(this, &calculatorform::BTNMine_Click);
			// 
			// BTNEqual
			// 
			this->BTNEqual->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNEqual->Location = System::Drawing::Point(556, 448);
			this->BTNEqual->Name = L"BTNEqual";
			this->BTNEqual->Size = System::Drawing::Size(50, 50);
			this->BTNEqual->TabIndex = 20;
			this->BTNEqual->Text = L"=";
			this->BTNEqual->UseVisualStyleBackColor = true;
			this->BTNEqual->Click += gcnew System::EventHandler(this, &calculatorform::BTNEqual_Click);
			// 
			// BTNPoint
			// 
			this->BTNPoint->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNPoint->Location = System::Drawing::Point(500, 448);
			this->BTNPoint->Name = L"BTNPoint";
			this->BTNPoint->Size = System::Drawing::Size(50, 50);
			this->BTNPoint->TabIndex = 21;
			this->BTNPoint->Text = L".";
			this->BTNPoint->UseVisualStyleBackColor = true;
			this->BTNPoint->Click += gcnew System::EventHandler(this, &calculatorform::BTNPoint_Click);
			// 
			// RTBinput
			// 
			this->RTBinput->BackColor = System::Drawing::Color::WhiteSmoke;
			this->RTBinput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RTBinput->Location = System::Drawing::Point(15, 27);
			this->RTBinput->Name = L"RTBinput";
			this->RTBinput->Size = System::Drawing::Size(650, 106);
			this->RTBinput->TabIndex = 22;
			this->RTBinput->Text = L"";
			// 
			// Clear
			// 
			this->Clear->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clear->Location = System::Drawing::Point(612, 221);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(50, 50);
			this->Clear->TabIndex = 23;
			this->Clear->Text = L"C";
			this->Clear->UseVisualStyleBackColor = true;
			this->Clear->Click += gcnew System::EventHandler(this, &calculatorform::Clear_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(556, 221);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 24;
			this->button1->Text = L"CE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &calculatorform::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(21, 333);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 50);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Log";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &calculatorform::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(21, 221);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(106, 50);
			this->button3->TabIndex = 26;
			this->button3->Text = L"power";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &calculatorform::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(133, 387);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 27;
			this->button4->Text = L"e";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &calculatorform::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(189, 387);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 28;
			this->button5->Text = L"π";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &calculatorform::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(21, 277);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(106, 50);
			this->button6->TabIndex = 29;
			this->button6->Text = L"root";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &calculatorform::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(189, 277);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 30;
			this->button7->Text = L"∛";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &calculatorform::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(133, 277);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 31;
			this->button8->Text = L"√";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &calculatorform::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(21, 387);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(106, 50);
			this->button9->TabIndex = 32;
			this->button9->Text = L"ln";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &calculatorform::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(189, 443);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 50);
			this->button10->TabIndex = 33;
			this->button10->Text = L"y";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &calculatorform::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(133, 443);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 50);
			this->button11->TabIndex = 34;
			this->button11->Text = L"x";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &calculatorform::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(444, 221);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(50, 50);
			this->button12->TabIndex = 35;
			this->button12->Text = L"(";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &calculatorform::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(500, 221);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(50, 50);
			this->button13->TabIndex = 36;
			this->button13->Text = L")";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &calculatorform::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(133, 333);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(50, 50);
			this->button14->TabIndex = 37;
			this->button14->Text = L"!";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &calculatorform::button14_Click);
			// 
			// CBTriangle
			// 
			this->CBTriangle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CBTriangle->FormattingEnabled = true;
			this->CBTriangle->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"None", L"sin", L"cos", L"tan", L"cot", L"sec",
					L"csc", L"arcsin", L"arccos", L"arctan", L"arccot", L"arcsec", L"arccsc"
			});
			this->CBTriangle->Location = System::Drawing::Point(21, 162);
			this->CBTriangle->Name = L"CBTriangle";
			this->CBTriangle->Size = System::Drawing::Size(106, 28);
			this->CBTriangle->TabIndex = 38;
			this->CBTriangle->SelectedIndexChanged += gcnew System::EventHandler(this, &calculatorform::SelectFunc_SelectedIndexChanged);
			// 
			// CBTriangleh
			// 
			this->CBTriangleh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CBTriangleh->FormattingEnabled = true;
			this->CBTriangleh->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"None", L"sinh", L"cosh", L"tanh", L"coth",
					L"sech", L"csch", L"arcsinh", L"arccosh", L"arctanh", L"arccoth", L"arcsech", L"arccsch"
			});
			this->CBTriangleh->Location = System::Drawing::Point(133, 162);
			this->CBTriangleh->Name = L"CBTriangleh";
			this->CBTriangleh->Size = System::Drawing::Size(106, 28);
			this->CBTriangleh->TabIndex = 39;
			this->CBTriangleh->SelectedIndexChanged += gcnew System::EventHandler(this, &calculatorform::SelectFunc_SelectedIndexChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->TSfile, this->TSmode,
					this->themeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(677, 24);
			this->menuStrip1->TabIndex = 40;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// TSfile
			// 
			this->TSfile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->exitToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->TSfile->Name = L"TSfile";
			this->TSfile->Size = System::Drawing::Size(37, 20);
			this->TSfile->Text = L"File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &calculatorform::exitToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &calculatorform::aboutToolStripMenuItem_Click);
			// 
			// TSmode
			// 
			this->TSmode->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->TSModenormal,
					this->quadraticEquationToolStripMenuItem, this->simultaneousEquationToolStripMenuItem, this->binaryConversionToolStripMenuItem,
					this->Matrix, this->conversionOfUnitToolStripMenuItem
			});
			this->TSmode->Name = L"TSmode";
			this->TSmode->Size = System::Drawing::Size(50, 20);
			this->TSmode->Text = L"Mode";
			// 
			// TSModenormal
			// 
			this->TSModenormal->Checked = true;
			this->TSModenormal->CheckState = System::Windows::Forms::CheckState::Checked;
			this->TSModenormal->Name = L"TSModenormal";
			this->TSModenormal->Size = System::Drawing::Size(195, 22);
			this->TSModenormal->Text = L"Normal calculate";
			this->TSModenormal->Click += gcnew System::EventHandler(this, &calculatorform::TSModenormal_Click);
			// 
			// quadraticEquationToolStripMenuItem
			// 
			this->quadraticEquationToolStripMenuItem->Name = L"quadraticEquationToolStripMenuItem";
			this->quadraticEquationToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->quadraticEquationToolStripMenuItem->Text = L"quadratic equation";
			this->quadraticEquationToolStripMenuItem->Click += gcnew System::EventHandler(this, &calculatorform::quadraticEquationToolStripMenuItem_Click);
			// 
			// simultaneousEquationToolStripMenuItem
			// 
			this->simultaneousEquationToolStripMenuItem->Name = L"simultaneousEquationToolStripMenuItem";
			this->simultaneousEquationToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->simultaneousEquationToolStripMenuItem->Text = L"simultaneous equation";
			this->simultaneousEquationToolStripMenuItem->Click += gcnew System::EventHandler(this, &calculatorform::simultaneousEquationToolStripMenuItem_Click);
			// 
			// binaryConversionToolStripMenuItem
			// 
			this->binaryConversionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripMenuItem3,
					this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripMenuItem6, this->toolStripMenuItem7, this->toolStripMenuItem8,
					this->toolStripMenuItem9, this->toolStripMenuItem10
			});
			this->binaryConversionToolStripMenuItem->Name = L"binaryConversionToolStripMenuItem";
			this->binaryConversionToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->binaryConversionToolStripMenuItem->Text = L"binary conversion";
			this->binaryConversionToolStripMenuItem->Click += gcnew System::EventHandler(this, &calculatorform::binaryConversionToolStripMenuItem_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripMenuItem12,
					this->toolStripMenuItem13, this->toolStripMenuItem14, this->toolStripMenuItem15, this->toolStripMenuItem16, this->toolStripMenuItem17,
					this->toolStripMenuItem18
			});
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem3->Text = L"2";
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem12->Text = L"2 ---> 4";
			this->toolStripMenuItem12->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem12_Click);
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem13->Text = L"2 ---> 6";
			this->toolStripMenuItem13->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem13_Click);
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			this->toolStripMenuItem14->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem14->Text = L"2 ---> 8";
			this->toolStripMenuItem14->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem14_Click);
			// 
			// toolStripMenuItem15
			// 
			this->toolStripMenuItem15->Name = L"toolStripMenuItem15";
			this->toolStripMenuItem15->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem15->Text = L"2 ---> 10";
			this->toolStripMenuItem15->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem15_Click);
			// 
			// toolStripMenuItem16
			// 
			this->toolStripMenuItem16->Name = L"toolStripMenuItem16";
			this->toolStripMenuItem16->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem16->Text = L"2 ---> 12";
			this->toolStripMenuItem16->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem16_Click);
			// 
			// toolStripMenuItem17
			// 
			this->toolStripMenuItem17->Name = L"toolStripMenuItem17";
			this->toolStripMenuItem17->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem17->Text = L"2 ---> 14";
			this->toolStripMenuItem17->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem17_Click);
			// 
			// toolStripMenuItem18
			// 
			this->toolStripMenuItem18->Name = L"toolStripMenuItem18";
			this->toolStripMenuItem18->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem18->Text = L"2 ---> 16";
			this->toolStripMenuItem18->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem18_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripMenuItem19,
					this->toolStripMenuItem11, this->toolStripMenuItem20, this->toolStripMenuItem21, this->toolStripMenuItem22, this->toolStripMenuItem23,
					this->toolStripMenuItem24
			});
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem4->Text = L"4";
			// 
			// toolStripMenuItem19
			// 
			this->toolStripMenuItem19->Name = L"toolStripMenuItem19";
			this->toolStripMenuItem19->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem19->Text = L"4 --->2";
			this->toolStripMenuItem19->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem19_Click);
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem11->Text = L"4 ---> 6";
			this->toolStripMenuItem11->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem11_Click);
			// 
			// toolStripMenuItem20
			// 
			this->toolStripMenuItem20->Name = L"toolStripMenuItem20";
			this->toolStripMenuItem20->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem20->Text = L"4 ---> 8";
			this->toolStripMenuItem20->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem20_Click);
			// 
			// toolStripMenuItem21
			// 
			this->toolStripMenuItem21->Name = L"toolStripMenuItem21";
			this->toolStripMenuItem21->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem21->Text = L"4 ---> 10";
			this->toolStripMenuItem21->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem21_Click);
			// 
			// toolStripMenuItem22
			// 
			this->toolStripMenuItem22->Name = L"toolStripMenuItem22";
			this->toolStripMenuItem22->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem22->Text = L"4 ---> 12";
			this->toolStripMenuItem22->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem22_Click);
			// 
			// toolStripMenuItem23
			// 
			this->toolStripMenuItem23->Name = L"toolStripMenuItem23";
			this->toolStripMenuItem23->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem23->Text = L"4 ---> 14";
			this->toolStripMenuItem23->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem23_Click);
			// 
			// toolStripMenuItem24
			// 
			this->toolStripMenuItem24->Name = L"toolStripMenuItem24";
			this->toolStripMenuItem24->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem24->Text = L"4 ---> 16";
			this->toolStripMenuItem24->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem24_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripMenuItem25,
					this->toolStripMenuItem26, this->toolStripMenuItem27, this->toolStripMenuItem28, this->toolStripMenuItem29, this->toolStripMenuItem30,
					this->toolStripMenuItem31
			});
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem5->Text = L"6";
			// 
			// toolStripMenuItem25
			// 
			this->toolStripMenuItem25->Name = L"toolStripMenuItem25";
			this->toolStripMenuItem25->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem25->Text = L"6 ---> 2";
			this->toolStripMenuItem25->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem25_Click);
			// 
			// toolStripMenuItem26
			// 
			this->toolStripMenuItem26->Name = L"toolStripMenuItem26";
			this->toolStripMenuItem26->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem26->Text = L"6 ---> 4 ";
			this->toolStripMenuItem26->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem26_Click);
			// 
			// toolStripMenuItem27
			// 
			this->toolStripMenuItem27->Name = L"toolStripMenuItem27";
			this->toolStripMenuItem27->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem27->Text = L"6 ---> 8";
			this->toolStripMenuItem27->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem27_Click);
			// 
			// toolStripMenuItem28
			// 
			this->toolStripMenuItem28->Name = L"toolStripMenuItem28";
			this->toolStripMenuItem28->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem28->Text = L"6 ---> 10";
			this->toolStripMenuItem28->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem28_Click);
			// 
			// toolStripMenuItem29
			// 
			this->toolStripMenuItem29->Name = L"toolStripMenuItem29";
			this->toolStripMenuItem29->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem29->Text = L"6 ---> 12";
			this->toolStripMenuItem29->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem29_Click);
			// 
			// toolStripMenuItem30
			// 
			this->toolStripMenuItem30->Name = L"toolStripMenuItem30";
			this->toolStripMenuItem30->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem30->Text = L"6 ---> 14";
			this->toolStripMenuItem30->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem30_Click);
			// 
			// toolStripMenuItem31
			// 
			this->toolStripMenuItem31->Name = L"toolStripMenuItem31";
			this->toolStripMenuItem31->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem31->Text = L"6 ---> 16";
			this->toolStripMenuItem31->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem31_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripMenuItem32,
					this->toolStripMenuItem33, this->toolStripMenuItem34, this->toolStripMenuItem35, this->toolStripMenuItem36, this->toolStripMenuItem37,
					this->toolStripMenuItem38
			});
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem6->Text = L"8";
			// 
			// toolStripMenuItem32
			// 
			this->toolStripMenuItem32->Name = L"toolStripMenuItem32";
			this->toolStripMenuItem32->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem32->Text = L"8 ---> 2";
			this->toolStripMenuItem32->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem32_Click);
			// 
			// toolStripMenuItem33
			// 
			this->toolStripMenuItem33->Name = L"toolStripMenuItem33";
			this->toolStripMenuItem33->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem33->Text = L"8 ---> 4";
			this->toolStripMenuItem33->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem33_Click);
			// 
			// toolStripMenuItem34
			// 
			this->toolStripMenuItem34->Name = L"toolStripMenuItem34";
			this->toolStripMenuItem34->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem34->Text = L"8 ---> 6";
			this->toolStripMenuItem34->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem34_Click);
			// 
			// toolStripMenuItem35
			// 
			this->toolStripMenuItem35->Name = L"toolStripMenuItem35";
			this->toolStripMenuItem35->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem35->Text = L"8 ---> 10";
			this->toolStripMenuItem35->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem35_Click);
			// 
			// toolStripMenuItem36
			// 
			this->toolStripMenuItem36->Name = L"toolStripMenuItem36";
			this->toolStripMenuItem36->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem36->Text = L"8 ---> 12";
			this->toolStripMenuItem36->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem36_Click);
			// 
			// toolStripMenuItem37
			// 
			this->toolStripMenuItem37->Name = L"toolStripMenuItem37";
			this->toolStripMenuItem37->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem37->Text = L"8 ---> 14";
			this->toolStripMenuItem37->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem37_Click);
			// 
			// toolStripMenuItem38
			// 
			this->toolStripMenuItem38->Name = L"toolStripMenuItem38";
			this->toolStripMenuItem38->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem38->Text = L"8 ---> 16";
			this->toolStripMenuItem38->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem38_Click);
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripMenuItem39,
					this->toolStripMenuItem40, this->toolStripMenuItem41, this->toolStripMenuItem42, this->toolStripMenuItem43, this->toolStripMenuItem44,
					this->toolStripMenuItem45
			});
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem7->Text = L"10";
			// 
			// toolStripMenuItem39
			// 
			this->toolStripMenuItem39->Name = L"toolStripMenuItem39";
			this->toolStripMenuItem39->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem39->Text = L"10 ---> 2";
			this->toolStripMenuItem39->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem39_Click);
			// 
			// toolStripMenuItem40
			// 
			this->toolStripMenuItem40->Name = L"toolStripMenuItem40";
			this->toolStripMenuItem40->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem40->Text = L"10 ---> 4";
			this->toolStripMenuItem40->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem40_Click);
			// 
			// toolStripMenuItem41
			// 
			this->toolStripMenuItem41->Name = L"toolStripMenuItem41";
			this->toolStripMenuItem41->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem41->Text = L"10 ---> 6";
			this->toolStripMenuItem41->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem41_Click);
			// 
			// toolStripMenuItem42
			// 
			this->toolStripMenuItem42->Name = L"toolStripMenuItem42";
			this->toolStripMenuItem42->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem42->Text = L"10 ---> 8";
			this->toolStripMenuItem42->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem42_Click);
			// 
			// toolStripMenuItem43
			// 
			this->toolStripMenuItem43->Name = L"toolStripMenuItem43";
			this->toolStripMenuItem43->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem43->Text = L"10 ---> 12";
			this->toolStripMenuItem43->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem43_Click);
			// 
			// toolStripMenuItem44
			// 
			this->toolStripMenuItem44->Name = L"toolStripMenuItem44";
			this->toolStripMenuItem44->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem44->Text = L"10 ---> 14";
			this->toolStripMenuItem44->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem44_Click);
			// 
			// toolStripMenuItem45
			// 
			this->toolStripMenuItem45->Name = L"toolStripMenuItem45";
			this->toolStripMenuItem45->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem45->Text = L"10 ---> 16";
			this->toolStripMenuItem45->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem45_Click);
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripMenuItem46,
					this->toolStripMenuItem47, this->toolStripMenuItem48, this->toolStripMenuItem49, this->toolStripMenuItem50, this->toolStripMenuItem51,
					this->toolStripMenuItem52
			});
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem8->Text = L"12";
			// 
			// toolStripMenuItem46
			// 
			this->toolStripMenuItem46->Name = L"toolStripMenuItem46";
			this->toolStripMenuItem46->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem46->Text = L"12 ---> 2";
			this->toolStripMenuItem46->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem46_Click);
			// 
			// toolStripMenuItem47
			// 
			this->toolStripMenuItem47->Name = L"toolStripMenuItem47";
			this->toolStripMenuItem47->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem47->Text = L"12 ---> 4";
			this->toolStripMenuItem47->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem47_Click);
			// 
			// toolStripMenuItem48
			// 
			this->toolStripMenuItem48->Name = L"toolStripMenuItem48";
			this->toolStripMenuItem48->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem48->Text = L"12 ---> 6";
			this->toolStripMenuItem48->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem48_Click);
			// 
			// toolStripMenuItem49
			// 
			this->toolStripMenuItem49->Name = L"toolStripMenuItem49";
			this->toolStripMenuItem49->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem49->Text = L"12 ---> 8";
			this->toolStripMenuItem49->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem49_Click);
			// 
			// toolStripMenuItem50
			// 
			this->toolStripMenuItem50->Name = L"toolStripMenuItem50";
			this->toolStripMenuItem50->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem50->Text = L"12 ---> 10";
			this->toolStripMenuItem50->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem50_Click);
			// 
			// toolStripMenuItem51
			// 
			this->toolStripMenuItem51->Name = L"toolStripMenuItem51";
			this->toolStripMenuItem51->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem51->Text = L"12 ---> 14";
			this->toolStripMenuItem51->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem51_Click);
			// 
			// toolStripMenuItem52
			// 
			this->toolStripMenuItem52->Name = L"toolStripMenuItem52";
			this->toolStripMenuItem52->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem52->Text = L"12 ---> 16";
			this->toolStripMenuItem52->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem52_Click);
			// 
			// toolStripMenuItem9
			// 
			this->toolStripMenuItem9->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripMenuItem53,
					this->toolStripMenuItem54, this->toolStripMenuItem55, this->toolStripMenuItem56, this->toolStripMenuItem57, this->toolStripMenuItem58,
					this->toolStripMenuItem59
			});
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			this->toolStripMenuItem9->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem9->Text = L"14";
			// 
			// toolStripMenuItem53
			// 
			this->toolStripMenuItem53->Name = L"toolStripMenuItem53";
			this->toolStripMenuItem53->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem53->Text = L"14 ---> 2";
			this->toolStripMenuItem53->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem53_Click);
			// 
			// toolStripMenuItem54
			// 
			this->toolStripMenuItem54->Name = L"toolStripMenuItem54";
			this->toolStripMenuItem54->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem54->Text = L"14 ---> 4";
			this->toolStripMenuItem54->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem54_Click);
			// 
			// toolStripMenuItem55
			// 
			this->toolStripMenuItem55->Name = L"toolStripMenuItem55";
			this->toolStripMenuItem55->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem55->Text = L"14 ---> 6";
			this->toolStripMenuItem55->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem55_Click);
			// 
			// toolStripMenuItem56
			// 
			this->toolStripMenuItem56->Name = L"toolStripMenuItem56";
			this->toolStripMenuItem56->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem56->Text = L"14 ---> 8";
			this->toolStripMenuItem56->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem56_Click);
			// 
			// toolStripMenuItem57
			// 
			this->toolStripMenuItem57->Name = L"toolStripMenuItem57";
			this->toolStripMenuItem57->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem57->Text = L"14 ---> 10";
			this->toolStripMenuItem57->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem57_Click);
			// 
			// toolStripMenuItem58
			// 
			this->toolStripMenuItem58->Name = L"toolStripMenuItem58";
			this->toolStripMenuItem58->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem58->Text = L"14 ---> 12";
			this->toolStripMenuItem58->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem58_Click);
			// 
			// toolStripMenuItem59
			// 
			this->toolStripMenuItem59->Name = L"toolStripMenuItem59";
			this->toolStripMenuItem59->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem59->Text = L"14 ---> 16";
			this->toolStripMenuItem59->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem59_Click);
			// 
			// toolStripMenuItem10
			// 
			this->toolStripMenuItem10->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripMenuItem60,
					this->toolStripMenuItem61, this->toolStripMenuItem62, this->toolStripMenuItem63, this->toolStripMenuItem64, this->toolStripMenuItem65,
					this->toolStripMenuItem66
			});
			this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			this->toolStripMenuItem10->Size = System::Drawing::Size(86, 22);
			this->toolStripMenuItem10->Text = L"16";
			// 
			// toolStripMenuItem60
			// 
			this->toolStripMenuItem60->Name = L"toolStripMenuItem60";
			this->toolStripMenuItem60->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem60->Text = L"16 ---> 2";
			this->toolStripMenuItem60->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem60_Click);
			// 
			// toolStripMenuItem61
			// 
			this->toolStripMenuItem61->Name = L"toolStripMenuItem61";
			this->toolStripMenuItem61->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem61->Text = L"16 ---> 4";
			this->toolStripMenuItem61->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem61_Click);
			// 
			// toolStripMenuItem62
			// 
			this->toolStripMenuItem62->Name = L"toolStripMenuItem62";
			this->toolStripMenuItem62->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem62->Text = L"16 ---> 6";
			this->toolStripMenuItem62->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem62_Click);
			// 
			// toolStripMenuItem63
			// 
			this->toolStripMenuItem63->Name = L"toolStripMenuItem63";
			this->toolStripMenuItem63->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem63->Text = L"16 ---> 8";
			this->toolStripMenuItem63->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem63_Click);
			// 
			// toolStripMenuItem64
			// 
			this->toolStripMenuItem64->Name = L"toolStripMenuItem64";
			this->toolStripMenuItem64->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem64->Text = L"16 ---> 10";
			this->toolStripMenuItem64->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem64_Click);
			// 
			// toolStripMenuItem65
			// 
			this->toolStripMenuItem65->Name = L"toolStripMenuItem65";
			this->toolStripMenuItem65->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem65->Text = L"16 ---> 12";
			this->toolStripMenuItem65->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem65_Click);
			// 
			// toolStripMenuItem66
			// 
			this->toolStripMenuItem66->Name = L"toolStripMenuItem66";
			this->toolStripMenuItem66->Size = System::Drawing::Size(127, 22);
			this->toolStripMenuItem66->Text = L"16 ---> 14";
			this->toolStripMenuItem66->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem66_Click);
			// 
			// Matrix
			// 
			this->Matrix->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem2,
					this->mineToolStripMenuItem, this->multToolStripMenuItem, this->transposeMatrixTToolStripMenuItem
			});
			this->Matrix->Name = L"Matrix";
			this->Matrix->Size = System::Drawing::Size(195, 22);
			this->Matrix->Text = L"Matrix";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(191, 22);
			this->toolStripMenuItem2->Text = L"sum--->+";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem2_Click);
			// 
			// mineToolStripMenuItem
			// 
			this->mineToolStripMenuItem->Name = L"mineToolStripMenuItem";
			this->mineToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			this->mineToolStripMenuItem->Text = L"mine--->-";
			this->mineToolStripMenuItem->Click += gcnew System::EventHandler(this, &calculatorform::mineToolStripMenuItem_Click);
			// 
			// multToolStripMenuItem
			// 
			this->multToolStripMenuItem->Name = L"multToolStripMenuItem";
			this->multToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			this->multToolStripMenuItem->Text = L"mult--->×";
			this->multToolStripMenuItem->Click += gcnew System::EventHandler(this, &calculatorform::multToolStripMenuItem_Click);
			// 
			// transposeMatrixTToolStripMenuItem
			// 
			this->transposeMatrixTToolStripMenuItem->Name = L"transposeMatrixTToolStripMenuItem";
			this->transposeMatrixTToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			this->transposeMatrixTToolStripMenuItem->Text = L"transpose matrix---> t";
			this->transposeMatrixTToolStripMenuItem->Click += gcnew System::EventHandler(this, &calculatorform::transposeMatrixTToolStripMenuItem_Click);
			// 
			// conversionOfUnitToolStripMenuItem
			// 
			this->conversionOfUnitToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->degToolStripMenuItem,
					this->radToolStripMenuItem, this->gradToolStripMenuItem
			});
			this->conversionOfUnitToolStripMenuItem->Name = L"conversionOfUnitToolStripMenuItem";
			this->conversionOfUnitToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->conversionOfUnitToolStripMenuItem->Text = L"conversion of unit";
			this->conversionOfUnitToolStripMenuItem->Click += gcnew System::EventHandler(this, &calculatorform::conversionOfUnitToolStripMenuItem_Click);
			// 
			// degToolStripMenuItem
			// 
			this->degToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->gradToolStripMenuItem1,
					this->radToolStripMenuItem1
			});
			this->degToolStripMenuItem->Name = L"degToolStripMenuItem";
			this->degToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->degToolStripMenuItem->Text = L"deg";
			// 
			// gradToolStripMenuItem1
			// 
			this->gradToolStripMenuItem1->Name = L"gradToolStripMenuItem1";
			this->gradToolStripMenuItem1->Size = System::Drawing::Size(98, 22);
			this->gradToolStripMenuItem1->Text = L"grad";
			this->gradToolStripMenuItem1->Click += gcnew System::EventHandler(this, &calculatorform::gradToolStripMenuItem1_Click);
			// 
			// radToolStripMenuItem1
			// 
			this->radToolStripMenuItem1->Name = L"radToolStripMenuItem1";
			this->radToolStripMenuItem1->Size = System::Drawing::Size(98, 22);
			this->radToolStripMenuItem1->Text = L"rad";
			this->radToolStripMenuItem1->Click += gcnew System::EventHandler(this, &calculatorform::radToolStripMenuItem1_Click);
			// 
			// radToolStripMenuItem
			// 
			this->radToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->degToolStripMenuItem1,
					this->gradToolStripMenuItem2
			});
			this->radToolStripMenuItem->Name = L"radToolStripMenuItem";
			this->radToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->radToolStripMenuItem->Text = L"rad";
			// 
			// degToolStripMenuItem1
			// 
			this->degToolStripMenuItem1->Name = L"degToolStripMenuItem1";
			this->degToolStripMenuItem1->Size = System::Drawing::Size(98, 22);
			this->degToolStripMenuItem1->Text = L"deg";
			this->degToolStripMenuItem1->Click += gcnew System::EventHandler(this, &calculatorform::degToolStripMenuItem1_Click);
			// 
			// gradToolStripMenuItem2
			// 
			this->gradToolStripMenuItem2->Name = L"gradToolStripMenuItem2";
			this->gradToolStripMenuItem2->Size = System::Drawing::Size(98, 22);
			this->gradToolStripMenuItem2->Text = L"grad";
			this->gradToolStripMenuItem2->Click += gcnew System::EventHandler(this, &calculatorform::gradToolStripMenuItem2_Click);
			// 
			// gradToolStripMenuItem
			// 
			this->gradToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->degToolStripMenuItem2,
					this->radToolStripMenuItem2
			});
			this->gradToolStripMenuItem->Name = L"gradToolStripMenuItem";
			this->gradToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->gradToolStripMenuItem->Text = L"grad";
			// 
			// degToolStripMenuItem2
			// 
			this->degToolStripMenuItem2->Name = L"degToolStripMenuItem2";
			this->degToolStripMenuItem2->Size = System::Drawing::Size(94, 22);
			this->degToolStripMenuItem2->Text = L"deg";
			this->degToolStripMenuItem2->Click += gcnew System::EventHandler(this, &calculatorform::degToolStripMenuItem2_Click);
			// 
			// radToolStripMenuItem2
			// 
			this->radToolStripMenuItem2->Name = L"radToolStripMenuItem2";
			this->radToolStripMenuItem2->Size = System::Drawing::Size(94, 22);
			this->radToolStripMenuItem2->Text = L"rad";
			this->radToolStripMenuItem2->Click += gcnew System::EventHandler(this, &calculatorform::radToolStripMenuItem2_Click);
			// 
			// themeToolStripMenuItem
			// 
			this->themeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->TSThemedark,
					this->TSThemelight, this->toolStripMenuItem67, this->toolStripMenuItem68, this->toolStripMenuItem69
			});
			this->themeToolStripMenuItem->Name = L"themeToolStripMenuItem";
			this->themeToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->themeToolStripMenuItem->Text = L"Theme";
			// 
			// TSThemedark
			// 
			this->TSThemedark->Name = L"TSThemedark";
			this->TSThemedark->Size = System::Drawing::Size(180, 22);
			this->TSThemedark->Text = L"Default";
			this->TSThemedark->Click += gcnew System::EventHandler(this, &calculatorform::darkToolStripMenuItem_Click);
			// 
			// TSThemelight
			// 
			this->TSThemelight->Name = L"TSThemelight";
			this->TSThemelight->Size = System::Drawing::Size(180, 22);
			this->TSThemelight->Text = L"1";
			this->TSThemelight->Click += gcnew System::EventHandler(this, &calculatorform::TSThemelight_Click);
			// 
			// toolStripMenuItem67
			// 
			this->toolStripMenuItem67->Name = L"toolStripMenuItem67";
			this->toolStripMenuItem67->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem67->Text = L"2";
			this->toolStripMenuItem67->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem67_Click);
			// 
			// toolStripMenuItem68
			// 
			this->toolStripMenuItem68->Name = L"toolStripMenuItem68";
			this->toolStripMenuItem68->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem68->Text = L"3";
			this->toolStripMenuItem68->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem68_Click);
			// 
			// toolStripMenuItem69
			// 
			this->toolStripMenuItem69->Name = L"toolStripMenuItem69";
			this->toolStripMenuItem69->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem69->Text = L"4";
			this->toolStripMenuItem69->Click += gcnew System::EventHandler(this, &calculatorform::toolStripMenuItem69_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(77, 443);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(50, 50);
			this->button15->TabIndex = 41;
			this->button15->Text = L"| |";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &calculatorform::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(21, 443);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(50, 50);
			this->button16->TabIndex = 42;
			this->button16->Text = L"[ ]";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &calculatorform::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(189, 221);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(50, 50);
			this->button17->TabIndex = 43;
			this->button17->Text = L"}";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &calculatorform::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(133, 221);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(50, 50);
			this->button18->TabIndex = 44;
			this->button18->Text = L"{";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &calculatorform::button18_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(21, 138);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 16);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Trangular";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(134, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 16);
			this->label2->TabIndex = 46;
			this->label2->Text = L"Hyperbolic";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Location = System::Drawing::Point(446, 169);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(46, 17);
			this->checkBox1->TabIndex = 50;
			this->checkBox1->Text = L"Rad";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->Location = System::Drawing::Point(519, 169);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(49, 17);
			this->checkBox2->TabIndex = 51;
			this->checkBox2->Text = L"Grad";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &calculatorform::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::Color::Transparent;
			this->checkBox3->Location = System::Drawing::Point(596, 169);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(46, 17);
			this->checkBox3->TabIndex = 52;
			this->checkBox3->Text = L"Deg";
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &calculatorform::checkBox3_CheckedChanged);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(189, 334);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(50, 50);
			this->button20->TabIndex = 54;
			this->button20->Text = L"x^2";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &calculatorform::button20_Click);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackColor = System::Drawing::Color::Transparent;
			this->checkBox4->Location = System::Drawing::Point(596, 146);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(67, 17);
			this->checkBox4->TabIndex = 57;
			this->checkBox4->Text = L"Deg_arc";
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &calculatorform::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->BackColor = System::Drawing::Color::Transparent;
			this->checkBox5->Location = System::Drawing::Point(519, 146);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(70, 17);
			this->checkBox5->TabIndex = 56;
			this->checkBox5->Text = L"Grad_arc";
			this->checkBox5->UseVisualStyleBackColor = false;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &calculatorform::checkBox5_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->BackColor = System::Drawing::Color::Transparent;
			this->checkBox6->Location = System::Drawing::Point(446, 146);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(67, 17);
			this->checkBox6->TabIndex = 55;
			this->checkBox6->Text = L"Rad_arc";
			this->checkBox6->UseVisualStyleBackColor = false;
			// 
			// calculatorform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(677, 505);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->CBTriangleh);
			this->Controls->Add(this->CBTriangle);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->RTBinput);
			this->Controls->Add(this->BTNPoint);
			this->Controls->Add(this->BTNEqual);
			this->Controls->Add(this->BTNPlus);
			this->Controls->Add(this->BTNDivide);
			this->Controls->Add(this->BTNMult);
			this->Controls->Add(this->BTNMine);
			this->Controls->Add(this->BTN0);
			this->Controls->Add(this->BTN9);
			this->Controls->Add(this->BTN8);
			this->Controls->Add(this->BTN7);
			this->Controls->Add(this->BTN6);
			this->Controls->Add(this->BTN5);
			this->Controls->Add(this->BTN4);
			this->Controls->Add(this->BTN3);
			this->Controls->Add(this->BTN2);
			this->Controls->Add(this->BTN1);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"calculatorform";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"calculator";
			this->Load += gcnew System::EventHandler(this, &calculatorform::calculatorform_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void BTN0_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "0";
	}

	private: System::Void BTN1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "1";
	}
	private: System::Void BTN2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "2";
	}
	private: System::Void BTN3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "3";
	}
	private: System::Void BTN4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RTBinput->Text += "4";
	}
	private: System::Void BTN5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "5";
	}
	private: System::Void BTN6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "6";
	}
	private: System::Void BTN7_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RTBinput->Text += "7";
	}
	private: System::Void BTN8_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RTBinput->Text += "8";
	}
	private: System::Void BTN9_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "9";
	}
	private: System::Void BTNPlus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "+";
	}
	private: System::Void BTNMine_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RTBinput->Text += "-";
	}
	private: System::Void BTNMult_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "*";
	}
	private: System::Void BTNDivide_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RTBinput->Text += "/";
	}
	private: System::Void BTNPoint_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += ".";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RTBinput->Text = "";
	}
	private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int a = RTBinput->Text->Length;
		if (a != 0)
		{
			RTBinput->Text = RTBinput->Text->Remove(a - 1, 1);
		}
	}
	private: System::Void BTNEqual_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (Cal->quadratic_equation == true)
		{
			System::String^ System_String = RTBinput->Text;
			std::string std_string = msclr::interop::marshal_as<std::string>(System_String);
			std_string = Cal->grade_2_equation(std_string);
			System::String^ System_String_1 = gcnew String(std_string.c_str());
			RTBinput->Text = System_String_1;










		}
		if (Cal->simultaneous_equation == true)
		{
			System::String^ System_String = RTBinput->Text;
			std::string std_string = msclr::interop::marshal_as<std::string>(System_String);
			std_string = Cal->device_two_equation(std_string);
			System::String^ System_String_1 = gcnew String(std_string.c_str());
			RTBinput->Text = System_String_1;
		}
		if (Cal->binary_conversion == true)
		{
			System::String^ System_String = RTBinput->Text;
			std::string std_string = msclr::interop::marshal_as<std::string>(System_String);
			std_string = Cal->convert_to_10(std_string);
			System::String^ System_String_1 = gcnew String(std_string.c_str());
			RTBinput->Text = System_String_1;
		}
		if (Cal->Matrix_bool == true)
		{
			System::String^ System_String = RTBinput->Text;
			std::string std_string = msclr::interop::marshal_as<std::string>(System_String);
			std_string = Cal->Matrix(std_string);
			System::String^ System_String_1 = gcnew String(std_string.c_str());
			RTBinput->Text = System_String_1;
		}
		if (Cal->conversion_of_unit == true)
		{
			System::String^ System_String = RTBinput->Text;
			std::string std_string = msclr::interop::marshal_as<std::string>(System_String);
			std_string = Cal->covert_Angle(std_string);
			System::String^ System_String_1 = gcnew String(std_string.c_str());
			RTBinput->Text = System_String_1;
		}
		if (Cal->Normal == true)
		{
			System::String^ System_String = RTBinput->Text;
			std::string std_string = msclr::interop::marshal_as<std::string>(System_String);
			std_string = Cal->calculator_1(std_string);
			System::String^ System_String_1 = gcnew String(std_string.c_str());
			RTBinput->Text = System_String_1;
		}
	}
	private:void Reset()
	{
		CBTriangle->SelectedIndex = 0;
		CBTriangleh->SelectedIndex = 0;
	}
	private: System::Void SelectFunc_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		ComboBox^ recComboBox = safe_cast<ComboBox^>(sender);
		if (recComboBox->SelectedIndex!=0)
		{
			RTBinput->Text += recComboBox->SelectedItem->ToString();
			
		}
	}
	
	private: System::Void TSModenormal_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		TSModenormal->Checked = true;
		quadraticEquationToolStripMenuItem->Checked = false;
		simultaneousEquationToolStripMenuItem->Checked = false;
		binaryConversionToolStripMenuItem->Checked = false;
		conversionOfUnitToolStripMenuItem->Checked = false;
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = false;
		Cal->Matrix_bool = false;
		Cal->conversion_of_unit = false;
		Cal->Normal = true;
		RTBinput->Text ="";
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Application::Exit();
	}
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ information =gcnew String ("Ali Babarahaei \n 992164022 \n alibabarahaei@gmail.com \n telegram ID : alibabarahaei");
		MessageBox::Show(information, "My Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void darkToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		calculatorform::ActiveForm->BackgroundImage = Image::FromFile("C:/Users/veniz/Desktop/calculator_ali_babarahaei/5.png");




		/*
		this->BackgroundImage = System::Drawing:: Color::Blac;
		TSThemedark->Checked = true;
		TSThemelight->Checked = false;
		*/
	}

	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "(";
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += ")";
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "fact()";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "radical( ,3)";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "radical( ,2)";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RTBinput->Text += "radical( , )";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "log( , )";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "ln( )";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "power( , )";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RTBinput->Text += "p";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "e";
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "y";
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "x";
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RTBinput->Text += "[ ]";
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "| |";
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text += "{";
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RTBinput->Text += "}";
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		CheckBox^ reCheckBox = safe_cast<CheckBox^>(sender);
		if (reCheckBox->Checked)
		{
			Cal->grad = true;
			Cal->deg = false;
			Cal->rad = false;
		}
		else
		{
			Cal->grad = false;
			Cal->deg = false;
			Cal->rad = true;
		}
		
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		CheckBox^ reCheckBox = safe_cast<CheckBox^>(sender);
		if (reCheckBox->Checked)
		{
			Cal->grad = false;
			Cal->deg = true;
			Cal->rad = false;
		}
		else
		{
			Cal->grad = false;
			Cal->deg = false;
			Cal->rad = true;
		}
		
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RTBinput->Text += "power( ,2)";
	}
	private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		CheckBox^ reCheckBox = safe_cast<CheckBox^>(sender);
		if (reCheckBox->Checked)
		{
			Cal->grad_arc = true;
			Cal->deg_arc = false;
			Cal->rad_arc = false;
		}
		else
		{
			Cal->grad_arc = false;
			Cal->deg_arc = false;
			Cal->rad_arc = true;
		}
	}
	private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		CheckBox^ reCheckBox = safe_cast<CheckBox^>(sender);
		if (reCheckBox->Checked)
		{
			Cal->grad_arc = false;
			Cal->deg_arc = true;
			Cal->rad_arc = false;
		}
		else
		{
			Cal->grad_arc = false;
			Cal->deg_arc = false;
			Cal->rad_arc = true;
		}
		

	}

	private: System::Void quadraticEquationToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		TSModenormal->Checked = false;
		quadraticEquationToolStripMenuItem->Checked=true;
		simultaneousEquationToolStripMenuItem->Checked = false;
		binaryConversionToolStripMenuItem->Checked = false;
		conversionOfUnitToolStripMenuItem->Checked = false;
		Cal->quadratic_equation = true;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = false;
		Cal->Matrix_bool = false;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;
		RTBinput->Text = "x^2() + x() + c()";
	}
	private: System::Void simultaneousEquationToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		TSModenormal->Checked = false;
		quadraticEquationToolStripMenuItem->Checked = false;
		simultaneousEquationToolStripMenuItem->Checked = true;
		binaryConversionToolStripMenuItem->Checked = false;
		conversionOfUnitToolStripMenuItem->Checked = false;
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = true;
		Cal->binary_conversion = false;
		Cal->Matrix_bool = false;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;
		RTBinput->Text = "x1() , y1() = c1()\nx2() , y2() = c2()\nk()";
	}
	private: System::Void binaryConversionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		TSModenormal->Checked = false;
		quadraticEquationToolStripMenuItem->Checked = false;
		simultaneousEquationToolStripMenuItem->Checked = false;
		binaryConversionToolStripMenuItem->Checked = true;
		conversionOfUnitToolStripMenuItem->Checked = false;
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = true;
		Cal->Matrix_bool = false;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;
		RTBinput->Text = "base1(),base2(),Number()";
	}

/*
	private: System::Void calculatorform_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	

	private: System::Void themeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
}
*/
	private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = false;
		Cal->Matrix_bool = true;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;

		RTBinput->Text = "Width1(),length1()\nWidth2(),length2()\na11(),a12(),a13(),a14(),a15()\na21(),a22(),a23(),a24(),a25()\na31(),a32(),a33(),a34(),a35()\na41(),a42(),a43(),a44(),a45()\na51(),a52(),a53(),a54(),a55()\nb11(),b12(),b13(),b14(),b15()\nb21(),b22(),b23(),b24(),b25()\nb31(),b32(),b33(),b34(),b35()\nb41(),b42(),b43(),b44(),b45()\nb51(),b52(),b53(),b54(),b55()\ntype(+)";
	}
	private: System::Void mineToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = false;
		Cal->Matrix_bool = true;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;

		RTBinput->Text = "Width1(),length1()\nWidth2(),length2()\na11(),a12(),a13(),a14(),a15()\na21(),a22(),a23(),a24(),a25()\na31(),a32(),a33(),a34(),a35()\na41(),a42(),a43(),a44(),a45()\na51(),a52(),a53(),a54(),a55()\nb11(),b12(),b13(),b14(),b15()\nb21(),b22(),b23(),b24(),b25()\nb31(),b32(),b33(),b34(),b35()\nb41(),b42(),b43(),b44(),b45()\nb51(),b52(),b53(),b54(),b55()\ntype(-)";
	}
	private: System::Void multToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = false;
		Cal->Matrix_bool = true;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;

		RTBinput->Text = "Width1(),length1()\nWidth2(),length2()\na11(),a12(),a13(),a14(),a15()\na21(),a22(),a23(),a24(),a25()\na31(),a32(),a33(),a34(),a35()\na41(),a42(),a43(),a44(),a45()\na51(),a52(),a53(),a54(),a55()\nb11(),b12(),b13(),b14(),b15()\nb21(),b22(),b23(),b24(),b25()\nb31(),b32(),b33(),b34(),b35()\nb41(),b42(),b43(),b44(),b45()\nb51(),b52(),b53(),b54(),b55()\ntype(*)";

	}


	private: System::Void transposeMatrixTToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = false;
		Cal->Matrix_bool = true;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;

		RTBinput->Text = "Width1(),length1()\nWidth2(),length2()\na11(),a12(),a13(),a14(),a15()\na21(),a22(),a23(),a24(),a25()\na31(),a32(),a33(),a34(),a35()\na41(),a42(),a43(),a44(),a45()\na51(),a52(),a53(),a54(),a55()\ntype(T)";
	}
	private: System::Void conversionOfUnitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		TSModenormal->Checked = false;
		quadraticEquationToolStripMenuItem->Checked = false;
		simultaneousEquationToolStripMenuItem->Checked = false;
		binaryConversionToolStripMenuItem->Checked = false;
		conversionOfUnitToolStripMenuItem->Checked = true;
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = false;
		Cal->Matrix_bool = false;
		Cal->conversion_of_unit = true;
		Cal->Normal = false;

		RTBinput->Text = "Angel1()\nAngel2()\nnumber()";
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		


	}

	private: System::Void toolStripMenuItem12_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text = "Number()\nbase1(2)\nbase2(4)";
		TSModenormal->Checked = false;
		quadraticEquationToolStripMenuItem->Checked = false;
		simultaneousEquationToolStripMenuItem->Checked = false;
		binaryConversionToolStripMenuItem->Checked = true;
		conversionOfUnitToolStripMenuItem->Checked = false;
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = true;
		Cal->Matrix_bool = false;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;
	}
	private: System::Void toolStripMenuItem13_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text = "Number()\nbase1(2)\nbase2(6)";
		TSModenormal->Checked = false;
		quadraticEquationToolStripMenuItem->Checked = false;
		simultaneousEquationToolStripMenuItem->Checked = false;
		binaryConversionToolStripMenuItem->Checked = true;
		conversionOfUnitToolStripMenuItem->Checked = false;
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = true;
		Cal->Matrix_bool = false;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;
	}
	private: System::Void toolStripMenuItem14_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RTBinput->Text = "Number()\nbase1(2)\nbase2(8)";
		TSModenormal->Checked = false;
		quadraticEquationToolStripMenuItem->Checked = false;
		simultaneousEquationToolStripMenuItem->Checked = false;
		binaryConversionToolStripMenuItem->Checked = true;
		conversionOfUnitToolStripMenuItem->Checked = false;
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = true;
		Cal->Matrix_bool = false;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;
	}
	private: System::Void toolStripMenuItem15_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RTBinput->Text = "Number()\nbase1(2)\nbase2(10)";
		TSModenormal->Checked = false;
		quadraticEquationToolStripMenuItem->Checked = false;
		simultaneousEquationToolStripMenuItem->Checked = false;
		binaryConversionToolStripMenuItem->Checked = true;
		conversionOfUnitToolStripMenuItem->Checked = false;
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = true;
		Cal->Matrix_bool = false;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;
	}
	private: System::Void toolStripMenuItem16_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text = "Number()\nbase1(2)\nbase2(12)";
		TSModenormal->Checked = false;
		quadraticEquationToolStripMenuItem->Checked = false;
		simultaneousEquationToolStripMenuItem->Checked = false;
		binaryConversionToolStripMenuItem->Checked = true;
		conversionOfUnitToolStripMenuItem->Checked = false;
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = true;
		Cal->Matrix_bool = false;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;
	}
	private: System::Void toolStripMenuItem17_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text = "Number()\nbase1(2)\nbase2(14)";
		TSModenormal->Checked = false;
		quadraticEquationToolStripMenuItem->Checked = false;
		simultaneousEquationToolStripMenuItem->Checked = false;
		binaryConversionToolStripMenuItem->Checked = true;
		conversionOfUnitToolStripMenuItem->Checked = false;
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = true;
		Cal->Matrix_bool = false;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;
	}
	private: System::Void toolStripMenuItem18_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text = "Number()\nbase1(2)\nbase2(16)";
		TSModenormal->Checked = false;
		quadraticEquationToolStripMenuItem->Checked = false;
		simultaneousEquationToolStripMenuItem->Checked = false;
		binaryConversionToolStripMenuItem->Checked = true;
		conversionOfUnitToolStripMenuItem->Checked = false;
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = true;
		Cal->Matrix_bool = false;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;
	}
	private: System::Void toolStripMenuItem19_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RTBinput->Text = "Number()\nbase1(4)\nbase2(2)";
		TSModenormal->Checked = false;
		quadraticEquationToolStripMenuItem->Checked = false;
		simultaneousEquationToolStripMenuItem->Checked = false;
		binaryConversionToolStripMenuItem->Checked = true;
		conversionOfUnitToolStripMenuItem->Checked = false;
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = true;
		Cal->Matrix_bool = false;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;
	}
	private: System::Void toolStripMenuItem11_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text = "Number()\nbase1(4)\nbase2(6)";
		TSModenormal->Checked = false;
		quadraticEquationToolStripMenuItem->Checked = false;
		simultaneousEquationToolStripMenuItem->Checked = false;
		binaryConversionToolStripMenuItem->Checked = true;
		conversionOfUnitToolStripMenuItem->Checked = false;
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = true;
		Cal->Matrix_bool = false;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;
	}
	private: System::Void toolStripMenuItem20_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text = "Number()\nbase1(4)\nbase2(8)";
		TSModenormal->Checked = false;
		quadraticEquationToolStripMenuItem->Checked = false;
		simultaneousEquationToolStripMenuItem->Checked = false;
		binaryConversionToolStripMenuItem->Checked = true;
		conversionOfUnitToolStripMenuItem->Checked = false;
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = true;
		Cal->Matrix_bool = false;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;
	}
	private: System::Void toolStripMenuItem21_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text = "Number()\nbase1(4)\nbase2(10)";
		TSModenormal->Checked = false;
		quadraticEquationToolStripMenuItem->Checked = false;
		simultaneousEquationToolStripMenuItem->Checked = false;
		binaryConversionToolStripMenuItem->Checked = true;
		conversionOfUnitToolStripMenuItem->Checked = false;
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = true;
		Cal->Matrix_bool = false;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;
	}
	private: System::Void toolStripMenuItem22_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RTBinput->Text = "Number()\nbase1(4)\nbase2(12)";
		TSModenormal->Checked = false;
		quadraticEquationToolStripMenuItem->Checked = false;
		simultaneousEquationToolStripMenuItem->Checked = false;
		binaryConversionToolStripMenuItem->Checked = true;
		conversionOfUnitToolStripMenuItem->Checked = false;
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = true;
		Cal->Matrix_bool = false;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;
	}
	private: System::Void toolStripMenuItem23_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RTBinput->Text = "Number()\nbase1(4)\nbase2(14)";
		TSModenormal->Checked = false;
		quadraticEquationToolStripMenuItem->Checked = false;
		simultaneousEquationToolStripMenuItem->Checked = false;
		binaryConversionToolStripMenuItem->Checked = true;
		conversionOfUnitToolStripMenuItem->Checked = false;
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = true;
		Cal->Matrix_bool = false;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;
	}
	private: System::Void toolStripMenuItem24_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RTBinput->Text = "Number()\nbase1(4)\nbase2(16)";
		TSModenormal->Checked = false;
		quadraticEquationToolStripMenuItem->Checked = false;
		simultaneousEquationToolStripMenuItem->Checked = false;
		binaryConversionToolStripMenuItem->Checked = true;
		conversionOfUnitToolStripMenuItem->Checked = false;
		Cal->quadratic_equation = false;
		Cal->simultaneous_equation = false;
		Cal->binary_conversion = true;
		Cal->Matrix_bool = false;
		Cal->conversion_of_unit = false;
		Cal->Normal = false;
	}

private: System::Void toolStripMenuItem25_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(6)\nbase2(2)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem26_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(6)\nbase2(4)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem27_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(6)\nbase2(8)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem28_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(6)\nbase2(10)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem29_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(6)\nbase2(12)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem30_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(6)\nbase2(14)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem31_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(6)\nbase2(16)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem32_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(8)\nbase2(2)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem33_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(8)\nbase2(4)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem34_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(8)\nbase2(6)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem35_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(8)\nbase2(10)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem36_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(8)\nbase2(12)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem37_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(8)\nbase2(14)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem38_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(8)\nbase2(16)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem39_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(10)\nbase2(2)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem40_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(10)\nbase2(4)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem41_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(10)\nbase2(6)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem42_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(10)\nbase2(8)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem43_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(10)\nbase2(12)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem44_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(10)\nbase2(14)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem45_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "Number()\nbase1(10)\nbase2(16)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void gradToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	RTBinput->Text = "number()\nAngle(deg)\nAngle2(grad)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = false;
	conversionOfUnitToolStripMenuItem->Checked = true;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = false;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = true;
	Cal->Normal = false;
}
private: System::Void radToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	RTBinput->Text = "number()\nAngle1(deg)\nAngle2(rad)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = false;
	conversionOfUnitToolStripMenuItem->Checked = true;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = false;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = true;
	Cal->Normal = false;
}

private: System::Void degToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	RTBinput->Text = "number()\nAngle1(rad)\nAngle2(deg)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = false;
	conversionOfUnitToolStripMenuItem->Checked = true;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = false;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = true;
	Cal->Normal = false;
}
private: System::Void gradToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
	RTBinput->Text = "number()\nAngle1(rad)\nAngle2(grad)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = false;
	conversionOfUnitToolStripMenuItem->Checked = true;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = false;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = true;
	Cal->Normal = false;
}
private: System::Void degToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
	RTBinput->Text = "number()\nAngle1(grad)\nAngle2(deg)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = false;
	conversionOfUnitToolStripMenuItem->Checked = true;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = false;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = true;
	Cal->Normal = false;
}
private: System::Void radToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	RTBinput->Text = "number()\nAngle1(grad)\nAngle2(rad)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = false;
	conversionOfUnitToolStripMenuItem->Checked = true;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = false;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = true;
	Cal->Normal = false;
}

private: System::Void toolStripMenuItem46_Click(System::Object^ sender, System::EventArgs^ e) 
{
	RTBinput->Text = "Number()\nbase1(12)\nbase2(2)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem47_Click(System::Object^ sender, System::EventArgs^ e) 
{
	RTBinput->Text = "Number()\nbase1(12)\nbase2(4)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem48_Click(System::Object^ sender, System::EventArgs^ e)
{
	RTBinput->Text = "Number()\nbase1(12)\nbase2(6)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem49_Click(System::Object^ sender, System::EventArgs^ e)
{
	RTBinput->Text = "Number()\nbase1(12)\nbase2(8)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem50_Click(System::Object^ sender, System::EventArgs^ e) 
{
	RTBinput->Text = "Number()\nbase1(12)\nbase2(10)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem51_Click(System::Object^ sender, System::EventArgs^ e)
{
	RTBinput->Text = "Number()\nbase1(12)\nbase2(14)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem52_Click(System::Object^ sender, System::EventArgs^ e) 
{
	RTBinput->Text = "Number()\nbase1(12)\nbase2(16)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}

private: System::Void toolStripMenuItem53_Click(System::Object^ sender, System::EventArgs^ e) 
{
	RTBinput->Text = "Number()\nbase1(14)\nbase2(2)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem54_Click(System::Object^ sender, System::EventArgs^ e)
{
	RTBinput->Text = "Number()\nbase1(14)\nbase2(4)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem55_Click(System::Object^ sender, System::EventArgs^ e) 
{
	RTBinput->Text = "Number()\nbase1(14)\nbase2(6)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}

private: System::Void toolStripMenuItem56_Click(System::Object^ sender, System::EventArgs^ e) 
{
	RTBinput->Text = "Number()\nbase1(14)\nbase2(8)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem57_Click(System::Object^ sender, System::EventArgs^ e)
{
	RTBinput->Text = "Number()\nbase1(14)\nbase2(10)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem58_Click(System::Object^ sender, System::EventArgs^ e)
{
	RTBinput->Text = "Number()\nbase1(14)\nbase2(14)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem59_Click(System::Object^ sender, System::EventArgs^ e) 
{
	RTBinput->Text = "Number()\nbase1(14)\nbase2(16)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem60_Click(System::Object^ sender, System::EventArgs^ e)
{
	RTBinput->Text = "Number()\nbase1(16)\nbase2(2)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}

private: System::Void toolStripMenuItem61_Click(System::Object^ sender, System::EventArgs^ e)
{
	RTBinput->Text = "Number()\nbase1(16)\nbase2(4)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem62_Click(System::Object^ sender, System::EventArgs^ e) 
{
	RTBinput->Text = "Number()\nbase1(16)\nbase2(6)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem63_Click(System::Object^ sender, System::EventArgs^ e)
{
	RTBinput->Text = "Number()\nbase1(16)\nbase2(8)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem64_Click(System::Object^ sender, System::EventArgs^ e) 
{
	RTBinput->Text = "Number()\nbase1(16)\nbase2(10)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem65_Click(System::Object^ sender, System::EventArgs^ e)
{
	RTBinput->Text = "Number()\nbase1(16)\nbase2(12)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}
private: System::Void toolStripMenuItem66_Click(System::Object^ sender, System::EventArgs^ e)
{
	RTBinput->Text = "Number()\nbase1(16)\nbase2(14)";
	TSModenormal->Checked = false;
	quadraticEquationToolStripMenuItem->Checked = false;
	simultaneousEquationToolStripMenuItem->Checked = false;
	binaryConversionToolStripMenuItem->Checked = true;
	conversionOfUnitToolStripMenuItem->Checked = false;
	Cal->quadratic_equation = false;
	Cal->simultaneous_equation = false;
	Cal->binary_conversion = true;
	Cal->Matrix_bool = false;
	Cal->conversion_of_unit = false;
	Cal->Normal = false;
}


private: System::Void calculatorform_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TSThemelight_Click(System::Object^ sender, System::EventArgs^ e) {
	calculatorform::ActiveForm->BackgroundImage = Image::FromFile("C:/Users/veniz/Desktop/calculator_ali_babarahaei/1.png");
}
private: System::Void toolStripMenuItem67_Click(System::Object^ sender, System::EventArgs^ e)
{
	calculatorform::ActiveForm->BackgroundImage = Image::FromFile("C:/Users/veniz/Desktop/calculator_ali_babarahaei/2.png");
}
private: System::Void toolStripMenuItem68_Click(System::Object^ sender, System::EventArgs^ e) 
{
	calculatorform::ActiveForm->BackgroundImage = Image::FromFile("C:/Users/veniz/Desktop/calculator_ali_babarahaei/3.png");
}
private: System::Void toolStripMenuItem69_Click(System::Object^ sender, System::EventArgs^ e)
{
	calculatorform::ActiveForm->BackgroundImage = Image::FromFile("C:/Users/veniz/Desktop/calculator_ali_babarahaei/4.png");
}
};
}
