#include <iostream>
#include <string>

using namespace std;

void vowels(string str)
{
	string s, vow = "AaEeIiOoUuYy";
	for (int i = 0; i < str.length(); i++)
	{
		for (int j = 0; j < vow.length(); j++)
		{
			if (str[i] == vow[j])
				s += str[i];
		}
	}
	cout << "Гласные в строке\n";
	cout << s << endl;
}

void main()
{
	setlocale(LC_ALL, "Russian");
	string str;
	cout << "Введите строку\n";
	cin >> str;
	vowels(str);
	system("pause");
}