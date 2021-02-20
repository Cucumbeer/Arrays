#include<iostream>
using namespace std;

#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = { 3, 5, 8 };
	cout << int() << endl; // ���������� �������� �� ���������
	//������� �������� ������� �� �����: 
	for (int i = 0; i < SIZE; i++)
	{ 
		cout << arr[i] << tab;
	}
	cout << "������� �������� ��������� �������: \n";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];    // ������ �������� �������� �������� � ����������.
	}
	//����� ������� �� �����:
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	// ����� ������� �� ����� � �������� �������:
	for (int i = SIZE - 1; i >=0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//���������� ����� ��������� �������:
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "����� ��������� �������: " << sum << endl;
	cout << "������� ��������������: " << (double)sum / SIZE << endl;
	
	//����������� � ������������ �������� �������:
	int max = arr[0];
	int min = arr[0];
	
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	cout << "Max = " << max << "\n\n";
	cout << "Min = " << min << "\n\n";
}