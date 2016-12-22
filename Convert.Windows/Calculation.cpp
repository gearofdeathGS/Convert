#include "pch.h"
#include "Calculation.h" // Подключение Файла Связи с Главной программой
#include <stdio.h>
#include <iostream>
#include <string>

String^ Element_Currency(int i)
{							   
	String^ The_Currency_Name;  
	switch (i)                 
	{                          
	case(0) : The_Currency_Name = "RUB"; break;
	case(1) : The_Currency_Name = "USD"; break; 
	case(2) : The_Currency_Name = "EUR"; break; 
	}
	return The_Currency_Name; 
}

double Currency_Сalculation(int From_Сurrency, int In_Currency, double Quantity_Currency)
{										  
	double coef[Quantity_Of_Elements + 1];
	double Final_Value = 0;				  
										   
	coef[0] = 0.0153;					   
	coef[1] = 1;						  
	coef[2] = 1.13;						 
										  
	Final_Value = (Quantity_Currency * coef[From_Сurrency]) / coef[In_Currency];
																				 
	if (Final_Value < 0)
	{					
		Final_Value = 0;
	}
	return Final_Value;
}