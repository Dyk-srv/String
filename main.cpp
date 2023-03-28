#include <iostream>
#include <string>	// Библиотека, позволяющая работать со строками языка C++


int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Строки из языка Си
	/*char c_str[]{'H', 'e', 'l', 'l', 'o', '\0'}; // В конец добавляем нуль-терминатор
	for (int i = 0; i < 5; i++)
		std::cout << c_str[i];
	std::cout << std::endl;

	std::cout << c_str << std::endl;

	char c_str2[]{ "Hello world!" };
	std::cout << c_str2 << std::endl;*/

	// Объекты string
	/*std::string new_str;
	std::cout << new_str << std::endl;
	new_str = "Hello World!";
	std::cout << new_str << std::endl;
	new_str = "Bye World!";
	std::cout << new_str << std::endl;

	// Конкатенация строк
	new_str = new_str + " (C) student";	
	new_str += "!!!";
	std::cout << new_str << std::endl;*/


	// Ввод строки
	/*std::cout << "Привет! Какое твоё имя?\nВвод -> ";
	std::string name;
	std::cin >> name;
	std::cout << "Привет, " << name << "!\n";
	std::cout << "Кем ты работаешь?\nВвод -> ";
	std::string job;
	std::cin.ignore();	// Перед getline(), если до этого использовался ввод через cin
	std::getline(std::cin, job);
	std::cout << "Ого, " << job << "? Круто!\n";
	std::cout << "А сколько тебе лет?\nВвод -> ";
	int age;
	std::cin >> age;
	std::cout << "Когда-то и мне было " << age << " лет...\n";*/

	// Методы строк
	/*std::string str = "Hello world!";

	// Методы length и size, возвращающие длину строки
	//std::cout << str.size() << std::endl;
	//std::cout << str.length() << std::endl;

	// Метод insert, вставляющий подстроку в строку
	//str.insert(3, "OOOOOO");
	//std::cout << str << std::endl;
	
	// Метод replace, заменяющий часть строки
	//str.replace(3, 5, "OOO");
	//std::cout << str << std::endl;

	// Метод find, возвращающий позицию первого вхождения подстроки в строку
	//std::cout << str.find('l') << std::endl;		// 2
	//std::cout << str.find('l', 6) << std::endl;	// 9

	// Метод rfind, возвращающий позицию последнего вхождения подстроки в строку
	//std::cout << str.rfind('o') << std::endl;		// 7
	//std::cout << str.rfind('o', 6) << std::endl;	// 4
	//std::cout << str.rfind("wo") << std::endl;	// 6

	// Метод substr, возвращающий подстроку из строки
	//std::cout << str.substr(3) << std::endl;
	//std::cout << str.substr(3, 5) << std::endl;*/

	// Функции для работы со строками
	n = 123;
	std::string num_str = std::to_string(n);
	num_str += "!";
	std::cout << num_str << std::endl;	// 123!
	
	std::cout << "Введите число -> ";
	std::getline(std::cin, num_str);
	n = std::stoi(num_str);
	std::cout << ++n << std::endl;

	std::string hello = "HelLo";
	// Возведение в нижний регистр
	for (int i = 0; i < hello.length(); i++)
		hello[i] = std::tolower(hello[i]);
	std::cout << hello << std::endl;

	// Возведение в верхний регистр
	for (int i = 0; i < hello.length(); i++)
		hello[i] = std::toupper(hello[i]);
	std::cout << hello << std::endl;


	return 0;
}