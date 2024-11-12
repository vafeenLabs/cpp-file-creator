#include <iostream>
#include <fstream>
#include<filesystem>
#include<conio.h>
#include<string>
#define for(i, n) for(int i=0; i<n; i++)
using std::cin;
using std::cout;
using std::ofstream;
using std::to_string;
using std::filesystem::exists;
int main()
{
	int number_of_files;
	system("mode con cols=80 lines=5");
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Введите количество файлов для создания!\n->";
	cin >> number_of_files;
	ofstream filew;
	int x = 1;
	for (i, number_of_files)
	{
		while (true)
		{
			if (!exists("[" + to_string(x) + "] TXT {by Lord-Vafin}.txt"))
			{
				filew.open("[" + to_string(x) + "] TXT {by Lord-Vafin}.txt");
				filew.close();
				break;
			}
			else
			{
				x++;
			}
		}
	}
	std::cout << "\nРабота программы успешно завершена!\nСпасибо за работу!";
	_getch();
	return 0;

}
