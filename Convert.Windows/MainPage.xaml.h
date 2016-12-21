//
// MainPage.xaml.h
// Объявление класса MainPage.
//

#pragma once

#include "MainPage.g.h"

namespace Convert
{
	/// <summary>
	/// Пустая страница, которую можно использовать саму по себе или для перехода внутри фрейма.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		void Power_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
