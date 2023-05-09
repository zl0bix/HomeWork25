#include<iostream>
#include<string>
//#include<Windows.h>
//#include<conio.h>


bool palindrome(std::string str);//Ex2
int punctuation(std::string str);//Ex3
std::string last_enter(std::string str, char sym) {
	if (str.rfind(sym) == std::string::npos) {
		std::string tmp = "";
		return tmp;
	}
	else {
		int num = str.rfind(sym);
		return str.substr(num);
	}
}
int main() {
	//int n = 11;
	
	setlocale(LC_ALL, "rus");
	//Home work 25
	//Задача 1
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
	std::cin.ignore();
	std::getline(std::cin, str2);
	if (palindrome(str2))
		std::cout << "Word is palindrome" << std::endl;
	else
		std::cout << "Word is't palindrome" << std::endl;

	//Задача 3
	//  Создайте функцию, которая принимает строку.
	//  Функция считает все пробелы, точки, запятые,
	//  восклицательные и вопросительные знаки, которые есть
	//  в переданной строке и возвращает их общее количество.

	std::cout << "\n\n\t\tEx3\n\n";
	std::string str3;//, str3_result;
	str3 = "a!..b,,c!!d??e.a,bc d!e?";
	//int length3 = str3.length() ;
	//std::cout <<"test " << str3.find("a") << std::endl;
	std::cout << str3 << std::endl;
		//std::cout << "!" << std::endl;
	std::cout << punctuation(str3) << std::endl;
	
	//Задача 4
	//	Создайте функцию, которая принимает строку и
	//	символ.Функция ищет последнее вхождение символа в
	//	переданную строку и возвращает подстроку,
	//	начинающуюся с этого символа и заканчивающуюся
	//	концом строки.Если символа в строке нет, то функция
	//	возвращает пустую строку.
	std::cout << "\n\n\t\tEx4\n\n";
	std::string str4 = "Hellow world!!!";
	char sym4 = 'l';
	std::cout << last_enter(str4, sym4);
		
		
	
	return 0;
}
bool palindrome(std::string str) {
	if (str.length() == 1)
		return false;
		for (int i = 0; i < str.length() / 2; i++) {
			if (str[i] == str[str.length() - 1 - i])
				return true;
			else
				return false;
		}
	}
int punctuation(std::string str) {
	int k1 = 0;
	int m1 = 0;
	int k2 = 0;
	int m2 = 0;
	int k3 = 0;
	int m3 = 0;
	int k4 = 0;
	int m4 = 0;
	int k5 = 0;
	int m5 = 0;
	m1 = str.find("!");
	while (str.find("!", m1) <= str.rfind("!")) {
		m1 = str.find("!", (str.find("!", m1) + 1));
		k1++;
	}
	m2 = str.find("?");
	while (str.find("?", m2) <= str.rfind("?")) {
		m2 = str.find("?", (str.find("?", m2) + 1));
		k2++;
	}
	m3 = str.find(".");
	while (str.find(".", m3) <= str.rfind(".")) {
		m3 = str.find(".", (str.find(".", m3) + 1));
		k3++;
	}
	m4 = str.find(" ");
	while (str.find(" ", m4) <= str.rfind(" ")) {
		m4 = str.find(" ", (str.find(" ", m4) + 1));
		k4++;
	}
	m5 = str.find(",");
	while (str.find(",", m5) <= str.rfind(",")) {
		m5 = str.find(",", (str.find(",", m5) + 1));
		k5++;
	}
	return k1 + k2 + k3 + k4 + k5;
}
	





