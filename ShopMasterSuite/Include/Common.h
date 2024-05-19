//
// by Ahmed Rodriguez
// den 19-05-2024
//
// A common functions that could be used anywhere. Its more like a library 
// that include many functions.
//


#pragma once

#include <string>
#include <cctype>
#include <msclr/marshal_cppstd.h>
using namespace System;


bool checkInputValidationIntegers(const std::string& my_string);

bool checkInputVaidationString(const std::string& my_string);

std::string convertVisualStringToStdString(System::String^ my_string);

System::String^ convertStdStringToVisualString(std::string my_string);

// My solution to cherck if entered numbers
System::Void checkIfDigits(System::Windows::Forms::KeyPressEventArgs^ e);