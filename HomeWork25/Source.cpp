#include<iostream>
#include<string>

bool palindrome(std::string str);

int main() {

	setlocale(LC_ALL, "rus");
	//Home work 25
	//  Задача 1
	//  Дана строка str.Пользователь вводит символ sym.
	//	Программа создаёт новую строку, которая состоит из
	//	символа sym.Длина новой строки равна количеству
	//	совпадений введённого символа в изначальной строке str.
	std::cout << "\n\n\t\tEx1\n\n";
	std::string str1 = "If our offer suits you, please visit us to discuss the details.";
	std::cout << str1 << std::endl;
	std::string new_str1;
	char n1;
	std::cout << "Enter symbol -> ";
	std::cin >> n1;	
	for (int i = 0; i < str1.length(); i++)	{
		if (str1[i] == n1)
			new_str1 += n1;
	}	
	std::cout << new_str1;


	//Задача 2
	//  Создайте функцию, которая принимает слово и
	//  возвращает true, если оно является палиндромом.В
	//  противном случае возвращается false.Функция должна
	//  быть нерегистрозависимой.

	std::cout << "\n\n\t\tEx2\n\n";
	std::cout << "Enter word -> ";
	std::string str2;
	std::getline(std::cin, str2);
	if (palindrome(str2))
		std::cout << "Word is palindrome" << std::endl;
	else
		std::cout << "Word is't palindrome" << std::endl;

	






	return 0;
}
bool palindrome(std::string str) {
		for (int i = 0; i < str.length() / 2; i++) {
			if (str[i] == str[str.length() - i])
				return true;
			else
				return false;
		}
	}




