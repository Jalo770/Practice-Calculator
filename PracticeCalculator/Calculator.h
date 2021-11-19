#pragma once

namespace PracticeCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
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
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ textDisplay;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Button^ ButtonCancel;
	private: System::Windows::Forms::Button^ buttonCancelE;
	private: System::Windows::Forms::Button^ buttonPlus;
	private: System::Windows::Forms::Button^ buttonMinus;
	private: System::Windows::Forms::Button^ buttonMultiple;
	private: System::Windows::Forms::Button^ buttonDivision;
	private: System::Windows::Forms::Button^ buttonNine;
	private: System::Windows::Forms::Button^ buttonEight;
	private: System::Windows::Forms::Button^ buttonSeven;
	private: System::Windows::Forms::Button^ buttonSix;
	private: System::Windows::Forms::Button^ buttonFive;
	private: System::Windows::Forms::Button^ buttonFour;
	private: System::Windows::Forms::Button^ buttonThree;
	private: System::Windows::Forms::Button^ buttonTwo;
	private: System::Windows::Forms::Button^ buttonOne;
	private: System::Windows::Forms::Button^ buttonEqual;
	private: System::Windows::Forms::Button^ buttonZero;
	private: System::Windows::Forms::Button^ buttonDecimal;

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
			this->textDisplay = (gcnew System::Windows::Forms::TextBox());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->ButtonCancel = (gcnew System::Windows::Forms::Button());
			this->buttonCancelE = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonMultiple = (gcnew System::Windows::Forms::Button());
			this->buttonDivision = (gcnew System::Windows::Forms::Button());
			this->buttonNine = (gcnew System::Windows::Forms::Button());
			this->buttonEight = (gcnew System::Windows::Forms::Button());
			this->buttonSeven = (gcnew System::Windows::Forms::Button());
			this->buttonSix = (gcnew System::Windows::Forms::Button());
			this->buttonFive = (gcnew System::Windows::Forms::Button());
			this->buttonFour = (gcnew System::Windows::Forms::Button());
			this->buttonThree = (gcnew System::Windows::Forms::Button());
			this->buttonTwo = (gcnew System::Windows::Forms::Button());
			this->buttonOne = (gcnew System::Windows::Forms::Button());
			this->buttonZero = (gcnew System::Windows::Forms::Button());
			this->buttonDecimal = (gcnew System::Windows::Forms::Button());
			this->buttonEqual = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textDisplay
			// 
			this->textDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textDisplay->Location = System::Drawing::Point(12, 12);
			this->textDisplay->Multiline = true;
			this->textDisplay->Name = L"textDisplay";
			this->textDisplay->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textDisplay->Size = System::Drawing::Size(318, 56);
			this->textDisplay->TabIndex = 4;
			this->textDisplay->Text = L"0";
			// 
			// buttonDelete
			// 
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"Wingdings", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->buttonDelete->Location = System::Drawing::Point(12, 88);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(75, 70);
			this->buttonDelete->TabIndex = 0;
			this->buttonDelete->Text = L"";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &Calculator::enterDelete);
			// 
			// ButtonCancel
			// 
			this->ButtonCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonCancel->Location = System::Drawing::Point(93, 88);
			this->ButtonCancel->Name = L"ButtonCancel";
			this->ButtonCancel->Size = System::Drawing::Size(75, 70);
			this->ButtonCancel->TabIndex = 1;
			this->ButtonCancel->Text = L"C";
			this->ButtonCancel->UseVisualStyleBackColor = true;
			this->ButtonCancel->Click += gcnew System::EventHandler(this, &Calculator::enterClear);
			// 
			// buttonCancelE
			// 
			this->buttonCancelE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCancelE->Location = System::Drawing::Point(174, 88);
			this->buttonCancelE->Name = L"buttonCancelE";
			this->buttonCancelE->Size = System::Drawing::Size(75, 70);
			this->buttonCancelE->TabIndex = 2;
			this->buttonCancelE->Text = L"CE";
			this->buttonCancelE->UseVisualStyleBackColor = true;
			this->buttonCancelE->Click += gcnew System::EventHandler(this, &Calculator::enterClearE);
			// 
			// buttonPlus
			// 
			this->buttonPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPlus->Location = System::Drawing::Point(255, 88);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(75, 70);
			this->buttonPlus->TabIndex = 3;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = true;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &Calculator::enterOperator);
			// 
			// buttonMinus
			// 
			this->buttonMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMinus->Location = System::Drawing::Point(255, 164);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(75, 70);
			this->buttonMinus->TabIndex = 8;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = true;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &Calculator::enterOperator);
			// 
			// buttonMultiple
			// 
			this->buttonMultiple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMultiple->Location = System::Drawing::Point(255, 240);
			this->buttonMultiple->Name = L"buttonMultiple";
			this->buttonMultiple->Size = System::Drawing::Size(75, 70);
			this->buttonMultiple->TabIndex = 12;
			this->buttonMultiple->Text = L"*";
			this->buttonMultiple->UseVisualStyleBackColor = true;
			this->buttonMultiple->Click += gcnew System::EventHandler(this, &Calculator::enterOperator);
			// 
			// buttonDivision
			// 
			this->buttonDivision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDivision->Location = System::Drawing::Point(255, 316);
			this->buttonDivision->Name = L"buttonDivision";
			this->buttonDivision->Size = System::Drawing::Size(75, 70);
			this->buttonDivision->TabIndex = 16;
			this->buttonDivision->Text = L"%";
			this->buttonDivision->UseVisualStyleBackColor = true;
			this->buttonDivision->Click += gcnew System::EventHandler(this, &Calculator::enterOperator);
			// 
			// buttonNine
			// 
			this->buttonNine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonNine->Location = System::Drawing::Point(174, 164);
			this->buttonNine->Name = L"buttonNine";
			this->buttonNine->Size = System::Drawing::Size(75, 70);
			this->buttonNine->TabIndex = 7;
			this->buttonNine->Text = L"9";
			this->buttonNine->UseVisualStyleBackColor = true;
			this->buttonNine->Click += gcnew System::EventHandler(this, &Calculator::enterNumber);
			// 
			// buttonEight
			// 
			this->buttonEight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEight->Location = System::Drawing::Point(93, 164);
			this->buttonEight->Name = L"buttonEight";
			this->buttonEight->Size = System::Drawing::Size(75, 70);
			this->buttonEight->TabIndex = 6;
			this->buttonEight->Text = L"8";
			this->buttonEight->UseVisualStyleBackColor = true;
			this->buttonEight->Click += gcnew System::EventHandler(this, &Calculator::enterNumber);
			// 
			// buttonSeven
			// 
			this->buttonSeven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSeven->Location = System::Drawing::Point(12, 164);
			this->buttonSeven->Name = L"buttonSeven";
			this->buttonSeven->Size = System::Drawing::Size(75, 70);
			this->buttonSeven->TabIndex = 5;
			this->buttonSeven->Text = L"7";
			this->buttonSeven->UseVisualStyleBackColor = true;
			this->buttonSeven->Click += gcnew System::EventHandler(this, &Calculator::enterNumber);
			// 
			// buttonSix
			// 
			this->buttonSix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSix->Location = System::Drawing::Point(174, 240);
			this->buttonSix->Name = L"buttonSix";
			this->buttonSix->Size = System::Drawing::Size(75, 70);
			this->buttonSix->TabIndex = 11;
			this->buttonSix->Text = L"6";
			this->buttonSix->UseVisualStyleBackColor = true;
			this->buttonSix->Click += gcnew System::EventHandler(this, &Calculator::enterNumber);
			// 
			// buttonFive
			// 
			this->buttonFive->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonFive->Location = System::Drawing::Point(93, 240);
			this->buttonFive->Name = L"buttonFive";
			this->buttonFive->Size = System::Drawing::Size(75, 70);
			this->buttonFive->TabIndex = 10;
			this->buttonFive->Text = L"5";
			this->buttonFive->UseVisualStyleBackColor = true;
			this->buttonFive->Click += gcnew System::EventHandler(this, &Calculator::enterNumber);
			// 
			// buttonFour
			// 
			this->buttonFour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonFour->Location = System::Drawing::Point(12, 240);
			this->buttonFour->Name = L"buttonFour";
			this->buttonFour->Size = System::Drawing::Size(75, 70);
			this->buttonFour->TabIndex = 9;
			this->buttonFour->Text = L"4";
			this->buttonFour->UseVisualStyleBackColor = true;
			this->buttonFour->Click += gcnew System::EventHandler(this, &Calculator::enterNumber);
			// 
			// buttonThree
			// 
			this->buttonThree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonThree->Location = System::Drawing::Point(174, 316);
			this->buttonThree->Name = L"buttonThree";
			this->buttonThree->Size = System::Drawing::Size(75, 70);
			this->buttonThree->TabIndex = 15;
			this->buttonThree->Text = L"3";
			this->buttonThree->UseVisualStyleBackColor = true;
			this->buttonThree->Click += gcnew System::EventHandler(this, &Calculator::enterNumber);
			// 
			// buttonTwo
			// 
			this->buttonTwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTwo->Location = System::Drawing::Point(93, 316);
			this->buttonTwo->Name = L"buttonTwo";
			this->buttonTwo->Size = System::Drawing::Size(75, 70);
			this->buttonTwo->TabIndex = 14;
			this->buttonTwo->Text = L"2";
			this->buttonTwo->UseVisualStyleBackColor = true;
			this->buttonTwo->Click += gcnew System::EventHandler(this, &Calculator::enterNumber);
			// 
			// buttonOne
			// 
			this->buttonOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonOne->Location = System::Drawing::Point(12, 316);
			this->buttonOne->Name = L"buttonOne";
			this->buttonOne->Size = System::Drawing::Size(75, 70);
			this->buttonOne->TabIndex = 13;
			this->buttonOne->Text = L"1";
			this->buttonOne->UseVisualStyleBackColor = true;
			this->buttonOne->Click += gcnew System::EventHandler(this, &Calculator::enterNumber);
			// 
			// buttonZero
			// 
			this->buttonZero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonZero->Location = System::Drawing::Point(93, 392);
			this->buttonZero->Name = L"buttonZero";
			this->buttonZero->Size = System::Drawing::Size(75, 70);
			this->buttonZero->TabIndex = 18;
			this->buttonZero->Text = L"0";
			this->buttonZero->UseVisualStyleBackColor = true;
			this->buttonZero->Click += gcnew System::EventHandler(this, &Calculator::enterNumber);
			// 
			// buttonDecimal
			// 
			this->buttonDecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDecimal->Location = System::Drawing::Point(12, 392);
			this->buttonDecimal->Name = L"buttonDecimal";
			this->buttonDecimal->Size = System::Drawing::Size(75, 70);
			this->buttonDecimal->TabIndex = 17;
			this->buttonDecimal->Text = L".";
			this->buttonDecimal->UseVisualStyleBackColor = true;
			this->buttonDecimal->Click += gcnew System::EventHandler(this, &Calculator::enterDecimal);
			// 
			// buttonEqual
			// 
			this->buttonEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEqual->Location = System::Drawing::Point(174, 392);
			this->buttonEqual->Name = L"buttonEqual";
			this->buttonEqual->Size = System::Drawing::Size(156, 70);
			this->buttonEqual->TabIndex = 19;
			this->buttonEqual->Text = L"=";
			this->buttonEqual->UseVisualStyleBackColor = true;
			this->buttonEqual->Click += gcnew System::EventHandler(this, &Calculator::enterEquals);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(342, 477);
			this->Controls->Add(this->textDisplay);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->ButtonCancel);
			this->Controls->Add(this->buttonCancelE);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonMultiple);
			this->Controls->Add(this->buttonDivision);
			this->Controls->Add(this->buttonNine);
			this->Controls->Add(this->buttonEight);
			this->Controls->Add(this->buttonSeven);
			this->Controls->Add(this->buttonSix);
			this->Controls->Add(this->buttonFive);
			this->Controls->Add(this->buttonFour);
			this->Controls->Add(this->buttonThree);
			this->Controls->Add(this->buttonTwo);
			this->Controls->Add(this->buttonOne);
			this->Controls->Add(this->buttonZero);
			this->Controls->Add(this->buttonDecimal);
			this->Controls->Add(this->buttonEqual);
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstNum, secondNum, result;
		String^ operators;

	private: System::Void enterNumber(System::Object^ sender, System::EventArgs^ e) {
		Button^ numbers = safe_cast<Button^>(sender);

		if (textDisplay->Text == "0") {
			textDisplay->Text = numbers->Text;
		} else {
			textDisplay->Text = textDisplay->Text + numbers->Text;
		}
	}

	private: System::Void enterOperator(System::Object^ sender, System::EventArgs^ e) {
		Button^ operatorNum = safe_cast<Button^>(sender);
		firstNum = Double::Parse(textDisplay->Text);
		textDisplay->Text = "";
		operators = operatorNum->Text;
	}

	private: System::Void enterDecimal(System::Object^ sender, System::EventArgs^ e) {
		if (textDisplay->Text->Contains(".")) {
			textDisplay->Text = textDisplay->Text + ".";
		}
	}
	private: System::Void enterEquals(System::Object^ sender, System::EventArgs^ e) {

		secondNum = Double::Parse(textDisplay->Text);

		if (operators == "+") {
			result = firstNum + secondNum;
			textDisplay->Text = System::Convert::ToString(result);
		}
		else if (operators == "-") {
			result = firstNum - secondNum;
			textDisplay->Text = System::Convert::ToString(result);
		}
		else if (operators == "*") {
			result = firstNum * secondNum;
			textDisplay->Text = System::Convert::ToString(result);
		}
		else if (operators == "/") {
			result = firstNum / secondNum;
			textDisplay->Text = System::Convert::ToString(result);
		}
	}
	private: System::Void enterClear(System::Object^ sender, System::EventArgs^ e) {
		textDisplay->Text = "0";
	}	
	private: System::Void enterClearE(System::Object^ sender, System::EventArgs^ e) {
		textDisplay->Text = "0";
	}

	private: System::Void enterDelete(System::Object^ sender, System::EventArgs^ e) {
		if (textDisplay->Text->Length > 0) {
			textDisplay->Text = textDisplay->Text->Remove(textDisplay->Text->Length - 1, 1);
		}
	}
};
}
