//
// MainPage.xaml.cpp
// Реализация класса MainPage.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace Convert;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

using namespace std;

#include <string>
#include "Calculation.h"
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <iostream> 
#include <sstream> 

MainPage::MainPage()										
{															
	InitializeComponent();									
	int i;                                                  
	Object^ value;											
	for (i = 0; i <= Quantity_Of_Elements; i++)				
	{														
		value = Element_Currency(i);						
		Type_Entrance_Сurrency->Items->InsertAt(i, value);	
		Type_Target_Сurrency->Items->InsertAt(i, value);	
	}
}

double ToDouble(String ^Element)			// Конвертация из String^ в Double
{											
	String^ temp_text = Element;			//
	wstring temp_line(temp_text->Data());	//
	wstringstream convertor;				//
	double Totols_Value;					//
	convertor << temp_line;					//
	convertor >> Totols_Value;				//
	return Totols_Value;					//
}

void Convert::MainPage::Power_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	int in = Type_Entrance_Сurrency->SelectedIndex, 
		out = Type_Target_Сurrency->SelectedIndex; 
	Target_Сurrency->Text = Currency_Сalculation(in, out, ToDouble(Entrance_Сurrency->Text)).ToString(); // Функция перевода валюты из файла Calculation.cpp
}
