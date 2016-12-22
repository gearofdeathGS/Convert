#ifndef	CALCULATION_H						  
using namespace Platform;					   // Подключение для работы с String^ 
const int Quantity_Of_Elements = 2;            
#define CALCULATION_H                          // Перечисление доступных функций
String^ Element_Currency(int);                 // Функция для записи названий Валют
double Currency_Сalculation(int, int, double); // Функция конвертации валюты
#endif										   