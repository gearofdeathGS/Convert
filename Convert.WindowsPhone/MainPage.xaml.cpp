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

// Шаблон элемента пустой страницы задокументирован по адресу http://go.microsoft.com/fwlink/?LinkId=234238

MainPage::MainPage()
{
	InitializeComponent();
}

/// <summary>
/// Вызывается перед отображением этой страницы во фрейме.
/// </summary>
/// <param name="e">Данные о событиях, описывающие, каким образом была достигнута эта страница.  Свойство Parameter
/// обычно используется для настройки страницы.</param>
void MainPage::OnNavigatedTo(NavigationEventArgs^ e)
{
	(void) e;	// Неиспользуемый параметр

	// TODO: Подготовьте здесь страницу для отображения.

	// TODO: Если приложение содержит несколько страниц, обеспечьте
	// обработку нажатия аппаратной кнопки "Назад", выполнив регистрацию на
	// событие Windows::Phone::UI::Input::HardwareButtons.BackPressed.
	// Если вы используете NavigationHelper, предоставляемый некоторыми шаблонами,
	// данное событие обрабатывается для вас.
}
