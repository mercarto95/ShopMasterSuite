#include <cctype>
#include <string>
#include "../Include/Common.h"

bool checkInputValidationIntegers(const std::string& my_string)
{
	for (auto c : my_string)
	{
		if (!isdigit(c))
		{
			return false;
		}
	}
	return true;
}

bool checkInputVaidationString(const std::string& my_string)
{
	for (auto c : my_string)
	{
		if (!isalpha(c))
		{
			return false;
		}
	}
	return true;
}

std::string convertVisualStringToStdString(System::String^ my_string)
{
	return msclr::interop::marshal_as<std::string>(my_string);
}

System::String^ convertStdStringToVisualString(std::string my_string)
{
	return msclr::interop::marshal_as<System::String^>(my_string);
}