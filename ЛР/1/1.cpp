#include <iostream>

using namespace std;

void set(int* a, int size)
{
	cout << "Введите элементы массива\n";
	for (int i = 0; i < size; i++)
		cin >> a[i];
}

void get(int* a, int size)
{
	cout << "\nМассив\n";
	for (int i = 0; i < size; i++)
		cout << a[i] << "  ";
	cout << endl;
}

int* change(int* a, int& size)
{
	int* b;
	int M = 0, j = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] >= 0)
			M++;
	}
	b = new int[M];
	for (int i = 0; i < size; i++)
	{
		if (a[i] >= 0)
		{
			b[j] = a[i];
			j++;
		}
	}
	size = M;
	a = b;
	return a;
}

void main()
{
	setlocale(LC_ALL, "Russian");
	int* array;
	int N;
	cout << "Введите количество элементов в массиве\n";
	cin >> N;
	array = new int[N];
	set(array, N);
	get(array, N);
	array = change(array, N);
	get(array, N);
	system("pause");
}