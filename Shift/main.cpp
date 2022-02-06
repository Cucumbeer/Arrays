#include <iostream>
using namespace std;
#define TAB "\t"

void main()
{

	setlocale(LC_ALL, "");
	const int SIZE = 10;
	int arr[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//вывод исходного массива на экран
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << TAB;
	}
	cout << endl;
	for (int i = 0; i < 3; i++)
	{

	/////////////////////////////////////////////////////////
	//					Сдвиг массива:

	int buffer = arr[0];  // Нулевой элемент сохраняем в буфере
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = arr[i + 1];
	}
		arr[SIZE - 1] = buffer;
	}

	/////////////////////////////////////////////////////////
	// Вывод сдвинутого массива на экран:
	
		for (int i = 0; i < SIZE; i++)
		{
			cout << arr[SIZE] << TAB;
		}
}