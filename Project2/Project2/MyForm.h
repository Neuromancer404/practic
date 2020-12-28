#define _CRT_SECURE_NO_WARNINGS
#include <fstream>
#include <iostream>
#include <ctime>
#include <algorithm>
#include <string>
#include <vector>
#include <functional>
#include <stdio.h>
#include <io.h>
#include <thread>
#pragma once

namespace Project2 {

	using namespace System;
	using namespace std;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


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
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button2;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 19);
			this->label1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 19);
			this->label2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(199, 88);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 36);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Начать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(255, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 19);
			this->label3->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 19);
			this->label4->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 155);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 19);
			this->label5->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 178);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 19);
			this->label6->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 201);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 19);
			this->label7->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(13, 224);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 19);
			this->label8->TabIndex = 8;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 247);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 19);
			this->label9->TabIndex = 9;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(13, 270);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 19);
			this->label10->TabIndex = 10;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(13, 293);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 19);
			this->label11->TabIndex = 11;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 312);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 19);
			this->label12->TabIndex = 12;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(12, 335);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 19);
			this->label13->TabIndex = 13;
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(13, 358);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 19);
			this->label14->TabIndex = 14;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(13, 381);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 19);
			this->label15->TabIndex = 15;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(424, 254);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 49);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Преобразовать вектора";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 497);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		string toString(int n)
		{
			char buf[40];
			sprintf(buf, "%d", n);
			return buf;
		}


		vector<string> replaceVectors(vector<int>& vect) {
			int a = 0,
				num2, sot,
				num3, dec,
				num4, one;
			string buffer;
			vector<string> newVect;
			for (int i = 0; i < 10; i++) {
				int num2 = vect[i];
				sot = num2 / 100;
				buffer = toString(sot);
				newVect.push_back(buffer);
				num3 = num2 % 100;
				dec = num3 / 10;
				buffer = toString(dec);
				newVect.push_back(buffer);
				num4 = num3 % 10;
				one = num4 / 1;
				buffer = toString(one);
				newVect.push_back(buffer);
				newVect.push_back(" ");
				a += 4;
			}
			replace(newVect.begin(), newVect.end(), "7", "*");
			return newVect;
		}
		void fileWriting(vector<string>& vector) {
			ofstream file("vectors.csv", ios::app);
			for (int i = 0; i < vector.size(); i++) {
				file << vector[i];
			}
			file << endl;

		}
		void makeVectors(vector<int>& vec) {
			vector<int> v1;
			for (int i = 0; i < 10; i++) {
				v1.push_back(vec[i]);
				label5->Text += vec[i] + " ";
			}
			vector<string> lastVector1 = replaceVectors(v1);
			fileWriting(lastVector1);
			vector<int> v2;
			for (int i = 10; i < 20; i++) {
				v2.push_back(vec[i]);
				label6->Text += vec[i] + " ";

			}
			vector<string> lastVector2 = replaceVectors(v2);
			fileWriting(lastVector2);
			vector<int> v3;
			for (int i = 20; i < 30; i++) {
				v3.push_back(vec[i]);
				label7->Text += vec[i] + " ";

			}
			vector<string> lastVector3 = replaceVectors(v3);
			fileWriting(lastVector3);
			vector<int> v4;
			for (int i = 30; i < 40; i++) {
				v4.push_back(vec[i]);
				label8->Text += vec[i] + " ";

			}
			vector<string> lastVector4 = replaceVectors(v4);
			fileWriting(lastVector4);
			vector<int> v5;
			for (int i = 40; i < 50; i++) {
				v5.push_back(vec[i]);
				label9->Text += vec[i] + " ";

			}
			vector<string> lastVector5 = replaceVectors(v5);
			fileWriting(lastVector5);
			vector<int> v6;
			for (int i = 60; i < 70; i++) {
				v6.push_back(vec[i]);
				label10->Text += vec[i] + " ";

			}
			vector<string> lastVector6 = replaceVectors(v6);
			fileWriting(lastVector6);
			vector<int> v7;
			for (int i = 70; i < 80; i++) {
				v7.push_back(vec[i]);
				label11->Text += vec[i] + " ";

			}
			vector<string> lastVector7 = replaceVectors(v7);
			fileWriting(lastVector7);
			vector<int> v8;
			for (int i = 80; i < 90; i++) {
				v8.push_back(vec[i]);
				label12->Text += vec[i] + " ";

			}
			vector<string> lastVector8 = replaceVectors(v8);
			fileWriting(lastVector8);
			vector<int> v9;
			for (int i = 90; i < 100; i++) {
				v9.push_back(vec[i]);
				label13->Text += vec[i] + " ";

			}
			vector<string> lastVector9 = replaceVectors(v9);
			fileWriting(lastVector9);
		}
		int s=0;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (s != 1) {
			s++;
			label1->Text = "Выполнил работу: Осипов Кирилл Денисович";
			label2->Text = "Время на момент запуска программы: ";
			label4->Text = "Вектора после считывания из файла и разбиения: ";
			DateTime dtTmp = DateTime::Now;
			label3->Text = dtTmp.TimeOfDay.ToString();
			ifstream fin("numbers.txt");
			vector <int> mainVector;
			int buffer;
			for (int i = 0; i < 100; i++) {
				fin >> buffer;
				mainVector.push_back(buffer);
			}

			fin.close();
			makeVectors(mainVector);
		}
	}
	private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	label4->Text = "Вектора после преобразования: ";
	label5->Text = "";
	label6->Text = "";
	label7->Text = "";
	label8->Text = "";
	label9->Text = "";
	label10->Text = "";
	label11->Text = "";
	label12->Text = "";
	label13->Text = "";
	label14->Text = "";
	label5->Text = File::ReadAllText(L"vectors.csv");
	
	
}
};
}
