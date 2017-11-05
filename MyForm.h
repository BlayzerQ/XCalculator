#pragma once
#include <sstream>
#include <msclr\marshal_cppstd.h>

namespace XCalculator {

	//Объявления пространства имен
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//Сводка для MyForm
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	//Освобождаем используемые ресурсы
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	//Объявление компонентов
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  b_1;
	private: System::Windows::Forms::Button^  b_2;
	private: System::Windows::Forms::Button^  b_3;
	private: System::Windows::Forms::Button^  b_4;
	private: System::Windows::Forms::Button^  b_5;
	private: System::Windows::Forms::Button^  b_6;
	private: System::Windows::Forms::Button^  b_7;
	private: System::Windows::Forms::Button^  b_8;
	private: System::Windows::Forms::Button^  b_9;
	private: System::Windows::Forms::Button^  b_0;
	private: System::Windows::Forms::Button^  b_multiple;
	private: System::Windows::Forms::Button^  b_division;
	private: System::Windows::Forms::Button^  b_plus;
	private: System::Windows::Forms::Button^  b_minus;
	private: System::Windows::Forms::Button^  b_result;
	private: System::Windows::Forms::Button^  b_clear;
	private: System::Windows::Forms::Button^  b_color;

	private: double^ cache = 0.0;
	private: double^ result = 0.0;
	private: double color = 0;
	private: String^ number = "";
	private: String^ operation = "";

	//Обязательная переменная конструктора
	private: System::ComponentModel::Container ^components;

//Необходимый для конструктора код
#pragma region Windows Form Designer generated code
	//Инициализация компонентов
	void InitializeComponent(void)
	{
		System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->b_1 = (gcnew System::Windows::Forms::Button());
		this->b_2 = (gcnew System::Windows::Forms::Button());
		this->b_3 = (gcnew System::Windows::Forms::Button());
		this->b_4 = (gcnew System::Windows::Forms::Button());
		this->b_5 = (gcnew System::Windows::Forms::Button());
		this->b_6 = (gcnew System::Windows::Forms::Button());
		this->b_7 = (gcnew System::Windows::Forms::Button());
		this->b_8 = (gcnew System::Windows::Forms::Button());
		this->b_9 = (gcnew System::Windows::Forms::Button());
		this->b_0 = (gcnew System::Windows::Forms::Button());
		this->b_multiple = (gcnew System::Windows::Forms::Button());
		this->b_division = (gcnew System::Windows::Forms::Button());
		this->b_plus = (gcnew System::Windows::Forms::Button());
		this->b_minus = (gcnew System::Windows::Forms::Button());
		this->b_result = (gcnew System::Windows::Forms::Button());
		this->b_clear = (gcnew System::Windows::Forms::Button());
		this->b_color = (gcnew System::Windows::Forms::Button());
		this->SuspendLayout();
		// 
		// label1
		// 
		this->label1->BackColor = System::Drawing::Color::Gainsboro;
		this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label1->Location = System::Drawing::Point(12, 9);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(498, 116);
		this->label1->TabIndex = 0;
		this->label1->Text = L"0";
		this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// b_1
		// 
		this->b_1->BackColor = System::Drawing::SystemColors::ControlDark;
		this->b_1->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->b_1->Location = System::Drawing::Point(12, 139);
		this->b_1->Name = L"b_1";
		this->b_1->Size = System::Drawing::Size(90, 91);
		this->b_1->TabIndex = 1;
		this->b_1->Text = L"1";
		this->b_1->UseVisualStyleBackColor = false;
		this->b_1->Click += gcnew System::EventHandler(this, &MyForm::b_1_Click);
		// 
		// b_2
		// 
		this->b_2->BackColor = System::Drawing::SystemColors::ControlDark;
		this->b_2->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->b_2->Location = System::Drawing::Point(108, 139);
		this->b_2->Name = L"b_2";
		this->b_2->Size = System::Drawing::Size(90, 91);
		this->b_2->TabIndex = 2;
		this->b_2->Text = L"2";
		this->b_2->UseVisualStyleBackColor = false;
		this->b_2->Click += gcnew System::EventHandler(this, &MyForm::b_2_Click);
		// 
		// b_3
		// 
		this->b_3->BackColor = System::Drawing::SystemColors::ControlDark;
		this->b_3->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->b_3->Location = System::Drawing::Point(204, 139);
		this->b_3->Name = L"b_3";
		this->b_3->Size = System::Drawing::Size(90, 91);
		this->b_3->TabIndex = 3;
		this->b_3->Text = L"3";
		this->b_3->UseVisualStyleBackColor = false;
		this->b_3->Click += gcnew System::EventHandler(this, &MyForm::b_3_Click);
		// 
		// b_4
		// 
		this->b_4->BackColor = System::Drawing::SystemColors::ControlDark;
		this->b_4->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->b_4->Location = System::Drawing::Point(12, 236);
		this->b_4->Name = L"b_4";
		this->b_4->Size = System::Drawing::Size(90, 91);
		this->b_4->TabIndex = 4;
		this->b_4->Text = L"4";
		this->b_4->UseVisualStyleBackColor = false;
		this->b_4->Click += gcnew System::EventHandler(this, &MyForm::b_4_Click);
		// 
		// b_5
		// 
		this->b_5->BackColor = System::Drawing::SystemColors::ControlDark;
		this->b_5->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->b_5->Location = System::Drawing::Point(108, 236);
		this->b_5->Name = L"b_5";
		this->b_5->Size = System::Drawing::Size(90, 91);
		this->b_5->TabIndex = 5;
		this->b_5->Text = L"5";
		this->b_5->UseVisualStyleBackColor = false;
		this->b_5->Click += gcnew System::EventHandler(this, &MyForm::b_5_Click);
		// 
		// b_6
		// 
		this->b_6->BackColor = System::Drawing::SystemColors::ControlDark;
		this->b_6->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->b_6->Location = System::Drawing::Point(204, 236);
		this->b_6->Name = L"b_6";
		this->b_6->Size = System::Drawing::Size(90, 91);
		this->b_6->TabIndex = 6;
		this->b_6->Text = L"6";
		this->b_6->UseVisualStyleBackColor = false;
		this->b_6->Click += gcnew System::EventHandler(this, &MyForm::b_6_Click);
		// 
		// b_7
		// 
		this->b_7->BackColor = System::Drawing::SystemColors::ControlDark;
		this->b_7->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->b_7->Location = System::Drawing::Point(12, 333);
		this->b_7->Name = L"b_7";
		this->b_7->Size = System::Drawing::Size(90, 91);
		this->b_7->TabIndex = 7;
		this->b_7->Text = L"7";
		this->b_7->UseVisualStyleBackColor = false;
		this->b_7->Click += gcnew System::EventHandler(this, &MyForm::b_7_Click);
		// 
		// b_8
		// 
		this->b_8->BackColor = System::Drawing::SystemColors::ControlDark;
		this->b_8->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->b_8->Location = System::Drawing::Point(108, 333);
		this->b_8->Name = L"b_8";
		this->b_8->Size = System::Drawing::Size(90, 91);
		this->b_8->TabIndex = 8;
		this->b_8->Text = L"8";
		this->b_8->UseVisualStyleBackColor = false;
		this->b_8->Click += gcnew System::EventHandler(this, &MyForm::b_8_Click);
		// 
		// b_9
		// 
		this->b_9->BackColor = System::Drawing::SystemColors::ControlDark;
		this->b_9->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->b_9->Location = System::Drawing::Point(204, 333);
		this->b_9->Name = L"b_9";
		this->b_9->Size = System::Drawing::Size(90, 91);
		this->b_9->TabIndex = 9;
		this->b_9->Text = L"9";
		this->b_9->UseVisualStyleBackColor = false;
		this->b_9->Click += gcnew System::EventHandler(this, &MyForm::b_9_Click);
		// 
		// b_0
		// 
		this->b_0->BackColor = System::Drawing::SystemColors::ControlDark;
		this->b_0->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->b_0->Location = System::Drawing::Point(108, 430);
		this->b_0->Name = L"b_0";
		this->b_0->Size = System::Drawing::Size(90, 91);
		this->b_0->TabIndex = 10;
		this->b_0->Text = L"0";
		this->b_0->UseVisualStyleBackColor = false;
		this->b_0->Click += gcnew System::EventHandler(this, &MyForm::b_0_Click);
		// 
		// b_multiple
		// 
		this->b_multiple->BackColor = System::Drawing::SystemColors::ControlDark;
		this->b_multiple->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->b_multiple->Location = System::Drawing::Point(420, 139);
		this->b_multiple->Name = L"b_multiple";
		this->b_multiple->Size = System::Drawing::Size(90, 91);
		this->b_multiple->TabIndex = 11;
		this->b_multiple->Text = L"*";
		this->b_multiple->UseVisualStyleBackColor = false;
		this->b_multiple->Click += gcnew System::EventHandler(this, &MyForm::b_multiple_Click);
		// 
		// b_division
		// 
		this->b_division->BackColor = System::Drawing::SystemColors::ControlDark;
		this->b_division->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->b_division->Location = System::Drawing::Point(420, 236);
		this->b_division->Name = L"b_division";
		this->b_division->Size = System::Drawing::Size(90, 91);
		this->b_division->TabIndex = 12;
		this->b_division->Text = L"/";
		this->b_division->UseVisualStyleBackColor = false;
		this->b_division->Click += gcnew System::EventHandler(this, &MyForm::b_division_Click);
		// 
		// b_plus
		// 
		this->b_plus->BackColor = System::Drawing::SystemColors::ControlDark;
		this->b_plus->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->b_plus->Location = System::Drawing::Point(420, 333);
		this->b_plus->Name = L"b_plus";
		this->b_plus->Size = System::Drawing::Size(90, 91);
		this->b_plus->TabIndex = 13;
		this->b_plus->Text = L"+";
		this->b_plus->UseVisualStyleBackColor = false;
		this->b_plus->Click += gcnew System::EventHandler(this, &MyForm::b_plus_Click);
		// 
		// b_minus
		// 
		this->b_minus->BackColor = System::Drawing::SystemColors::ControlDark;
		this->b_minus->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->b_minus->Location = System::Drawing::Point(420, 430);
		this->b_minus->Name = L"b_minus";
		this->b_minus->Size = System::Drawing::Size(90, 91);
		this->b_minus->TabIndex = 14;
		this->b_minus->Text = L"-";
		this->b_minus->UseVisualStyleBackColor = false;
		this->b_minus->Click += gcnew System::EventHandler(this, &MyForm::b_minus_Click);
		// 
		// b_result
		// 
		this->b_result->BackColor = System::Drawing::SystemColors::ControlDark;
		this->b_result->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->b_result->Location = System::Drawing::Point(204, 430);
		this->b_result->Name = L"b_result";
		this->b_result->Size = System::Drawing::Size(210, 91);
		this->b_result->TabIndex = 15;
		this->b_result->Text = L"=";
		this->b_result->UseVisualStyleBackColor = false;
		this->b_result->Click += gcnew System::EventHandler(this, &MyForm::b_result_Click);
		// 
		// b_clear
		// 
		this->b_clear->BackColor = System::Drawing::SystemColors::ControlDark;
		this->b_clear->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->b_clear->Location = System::Drawing::Point(12, 430);
		this->b_clear->Name = L"b_clear";
		this->b_clear->Size = System::Drawing::Size(90, 91);
		this->b_clear->TabIndex = 16;
		this->b_clear->Text = L"C";
		this->b_clear->UseVisualStyleBackColor = false;
		this->b_clear->Click += gcnew System::EventHandler(this, &MyForm::b_clear_Click);
		// 
		// b_color
		// 
		this->b_color->BackColor = System::Drawing::Color::Salmon;
		this->b_color->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->b_color->ForeColor = System::Drawing::Color::Black;
		this->b_color->Location = System::Drawing::Point(335, 363);
		this->b_color->Name = L"b_color";
		this->b_color->Size = System::Drawing::Size(38, 40);
		this->b_color->TabIndex = 17;
		this->b_color->Text = L"CLR";
		this->b_color->UseVisualStyleBackColor = false;
		this->b_color->Click += gcnew System::EventHandler(this, &MyForm::b_color_Click);
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::LightSeaGreen;
		this->ClientSize = System::Drawing::Size(522, 534);
		this->Controls->Add(this->b_color);
		this->Controls->Add(this->b_clear);
		this->Controls->Add(this->b_result);
		this->Controls->Add(this->b_minus);
		this->Controls->Add(this->b_plus);
		this->Controls->Add(this->b_division);
		this->Controls->Add(this->b_multiple);
		this->Controls->Add(this->b_0);
		this->Controls->Add(this->b_9);
		this->Controls->Add(this->b_8);
		this->Controls->Add(this->b_7);
		this->Controls->Add(this->b_6);
		this->Controls->Add(this->b_5);
		this->Controls->Add(this->b_4);
		this->Controls->Add(this->b_3);
		this->Controls->Add(this->b_2);
		this->Controls->Add(this->b_1);
		this->Controls->Add(this->label1);
		this->Cursor = System::Windows::Forms::Cursors::Hand;
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
		this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
		this->Name = L"MyForm";
		this->Text = L"XCalculator";
		this->ResumeLayout(false);

	}

#pragma endregion
private: System::Void b_1_Click(System::Object^ sender, System::EventArgs^  e) {
	this->doButtonClick("1");
}
private: System::Void b_2_Click(System::Object^ sender, System::EventArgs^  e) {
	this->doButtonClick("2");
}
private: System::Void b_3_Click(System::Object^ sender, System::EventArgs^  e) {
	this->doButtonClick("3");
}
private: System::Void b_4_Click(System::Object^ sender, System::EventArgs^  e) {
	this->doButtonClick("4");
}
private: System::Void b_5_Click(System::Object^ sender, System::EventArgs^  e) {
	this->doButtonClick("5");
}
private: System::Void b_6_Click(System::Object^ sender, System::EventArgs^  e) {
	this->doButtonClick("6");
}
private: System::Void b_7_Click(System::Object^ sender, System::EventArgs^  e) {
	this->doButtonClick("7");
}
private: System::Void b_8_Click(System::Object^ sender, System::EventArgs^  e) {
	this->doButtonClick("8");
}
private: System::Void b_9_Click(System::Object^ sender, System::EventArgs^  e) {
	this->doButtonClick("9");
}
private: System::Void b_0_Click(System::Object^ sender, System::EventArgs^  e) {
	this->doButtonClick("0");
}
private: System::Void b_multiple_Click(System::Object^ sender, System::EventArgs^  e) {
	this->doOperation("*");
}
private: System::Void b_division_Click(System::Object^ sender, System::EventArgs^  e) {
	this->doOperation("/");
}
private: System::Void b_plus_Click(System::Object^ sender, System::EventArgs^  e) {
	this->doOperation("+");
}
private: System::Void b_minus_Click(System::Object^ sender, System::EventArgs^  e) {
	this->doOperation("-");
}
private: System::Void b_result_Click(System::Object^ sender, System::EventArgs^  e) {
	double value = this->stringToDouble(number);
	if(operation->Equals("+"))
		result = (double) cache + value;
	else if (operation->Equals("-"))
		result = (double) cache - value;
	else if (operation->Equals("*"))
		result = (double) cache * value;
	else if (operation->Equals("/"))
		result = (double) cache / value;
	this->cache = result;
	this->label1->Text = "" + result;
	this->operation = "";
}
private: System::Void b_clear_Click(System::Object^ sender, System::EventArgs^  e) {
	//Сбрасываем все переменные
	this->number = "";
	this->cache = 0.0;
	this->result = 0.0;
	this->label1->Text = "0";
}

private: System::Void doOperation(System::String^ input) {
	//Проверка на пустоту кеша - присутствие входного параметра
	if (this->cache->Equals(0)) {
		//Установка кеша равного вводимому раннее числу
		this->cache = this->stringToDouble(number);
	}
	//Обнуление значения вводимого числа
	this->number = "";
	//Вывод текущей операции в label1
	this->operation = input;
	this->label1->Text = operation;
}

private: System::Void doButtonClick(System::String^ input) {
	//Дополнение строки number новым вводимым числом
	this->number += input;
	//Вывод строки number в label1
	this->label1->Text = number;
}

private: double stringToDouble(System::String^ input) {
	//Преобразование String в int
	std::string unmanaged = msclr::interop::marshal_as<std::string>(input);
	return atoi(unmanaged.c_str());
}
private: System::Void b_color_Click(System::Object^  sender, System::EventArgs^  e) {
	//Получаем случайные значения цветов RBG
	int red = rand() % 255;
	int blue = rand() % 255;
	int green = rand() % 255;
	//Устанавливаем цвет фона на основе RBG цветов
	this->BackColor = Color::FromArgb(red, green, blue);
}
};
}
