#include <iostream>
#include <string>	// ����������, ����������� �������� �� �������� ����� C++


int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// ������ �� ����� ��
	/*char c_str[]{'H', 'e', 'l', 'l', 'o', '\0'}; // � ����� ��������� ����-����������
	for (int i = 0; i < 5; i++)
		std::cout << c_str[i];
	std::cout << std::endl;

	std::cout << c_str << std::endl;

	char c_str2[]{ "Hello world!" };
	std::cout << c_str2 << std::endl;*/

	// ������� string
	/*std::string new_str;
	std::cout << new_str << std::endl;
	new_str = "Hello World!";
	std::cout << new_str << std::endl;
	new_str = "Bye World!";
	std::cout << new_str << std::endl;

	// ������������ �����
	new_str = new_str + " (C) student";	
	new_str += "!!!";
	std::cout << new_str << std::endl;*/


	// ���� ������
	/*std::cout << "������! ����� ��� ���?\n���� -> ";
	std::string name;
	std::cin >> name;
	std::cout << "������, " << name << "!\n";
	std::cout << "��� �� ���������?\n���� -> ";
	std::string job;
	std::cin.ignore();	// ����� getline(), ���� �� ����� ������������� ���� ����� cin
	std::getline(std::cin, job);
	std::cout << "���, " << job << "? �����!\n";
	std::cout << "� ������� ���� ���?\n���� -> ";
	int age;
	std::cin >> age;
	std::cout << "�����-�� � ��� ���� " << age << " ���...\n";*/

	// ������ �����
	/*std::string str = "Hello world!";

	// ������ length � size, ������������ ����� ������
	//std::cout << str.size() << std::endl;
	//std::cout << str.length() << std::endl;

	// ����� insert, ����������� ��������� � ������
	//str.insert(3, "OOOOOO");
	//std::cout << str << std::endl;
	
	// ����� replace, ���������� ����� ������
	//str.replace(3, 5, "OOO");
	//std::cout << str << std::endl;

	// ����� find, ������������ ������� ������� ��������� ��������� � ������
	//std::cout << str.find('l') << std::endl;		// 2
	//std::cout << str.find('l', 6) << std::endl;	// 9

	// ����� rfind, ������������ ������� ���������� ��������� ��������� � ������
	//std::cout << str.rfind('o') << std::endl;		// 7
	//std::cout << str.rfind('o', 6) << std::endl;	// 4
	//std::cout << str.rfind("wo") << std::endl;	// 6

	// ����� substr, ������������ ��������� �� ������
	//std::cout << str.substr(3) << std::endl;
	//std::cout << str.substr(3, 5) << std::endl;*/

	// ������� ��� ������ �� ��������
	n = 123;
	std::string num_str = std::to_string(n);
	num_str += "!";
	std::cout << num_str << std::endl;	// 123!
	
	std::cout << "������� ����� -> ";
	std::getline(std::cin, num_str);
	n = std::stoi(num_str);
	std::cout << ++n << std::endl;

	std::string hello = "HelLo";
	// ���������� � ������ �������
	for (int i = 0; i < hello.length(); i++)
		hello[i] = std::tolower(hello[i]);
	std::cout << hello << std::endl;

	// ���������� � ������� �������
	for (int i = 0; i < hello.length(); i++)
		hello[i] = std::toupper(hello[i]);
	std::cout << hello << std::endl;


	return 0;
}