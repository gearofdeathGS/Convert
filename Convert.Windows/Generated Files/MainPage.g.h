﻿

#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------

namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class TextBlock;
                ref class TextBox;
                ref class ComboBox;
                ref class Button;
            }
        }
    }
}

namespace Convert
{
    partial ref class MainPage : public ::Windows::UI::Xaml::Controls::Page, 
        public ::Windows::UI::Xaml::Markup::IComponentConnector
    {
    public:
        void InitializeComponent();
        virtual void Connect(int connectionId, ::Platform::Object^ target);
    
    private:
        bool _contentLoaded;
    
        private: ::Windows::UI::Xaml::Controls::TextBlock^ Lable1;
        private: ::Windows::UI::Xaml::Controls::TextBox^ Entrance_Сurrency;
        private: ::Windows::UI::Xaml::Controls::TextBox^ Target_Сurrency;
        private: ::Windows::UI::Xaml::Controls::ComboBox^ Type_Entrance_Сurrency;
        private: ::Windows::UI::Xaml::Controls::ComboBox^ Type_Target_Сurrency;
        private: ::Windows::UI::Xaml::Controls::Button^ Convert;
    };
}

