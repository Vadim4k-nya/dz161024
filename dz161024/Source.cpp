#include <iostream>
#include <Windows.h>
#include <cstdlib>

void Task1();
void Task2();
void Task3();

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	Task1();
	Task2();
	Task3();

	return 0;
}

void Task1()
{
	std::cout << "\n\n----------������ 1----------\n\n";

	const int size = 10;
	int arr[size]{};

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10 + 1;
	}

	int maxElmnt{}, minElmnt{};

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > maxElmnt)
		{
			maxElmnt = arr[i];
		}
	}
	minElmnt = maxElmnt;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < minElmnt)
		{
			minElmnt = arr[i];
		}
	}

	std::cout << "����������� ������� �������: " << minElmnt << "\n"
		<< "������������ ������� �������: " << maxElmnt << "\n";
}

void Task2()
{
	std::cout << "\n\n----------������ 2----------\n\n";

	const int size = 10;
	int arr[size]{};

	int startOfRange{}, endOfRange{};

	std::cout << "������� ������ ���������: ";
	std::cin >> startOfRange;
	std::cout << "������� ����� ���������: ";
	std::cin >> endOfRange;

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (endOfRange + 1 - startOfRange) + startOfRange;
	}

	int chooseNum{}, sum{};

	std::cout << "�������� ����� � ���� ���������: ";
	std::cin >> chooseNum;

	for (int i = 0; i < size; i++)
	{
		int tmp = arr[i];
		if (chooseNum < tmp) {
			sum += tmp;
		}
	}
	
	std::cout << "����� ��������� < " << chooseNum << " = " << sum << "\n";
}

void Task3()
{
	std::cout << "\n\n----------������ 3----------\n\n";

	const int size = 12;
	int arr[size]{};

	for (int i = 0; i < size; i++)
	{
		std::cout << "������� ������� �� " << i+1 << " �����: ";
		std::cin >> arr[i];
	}

	int startOfRange{}, endOfRange{};

	std::cout << "\n������� ������ ���������: ";
	std::cin >> startOfRange;
	std::cout << "������� ����� ���������: ";
	std::cin >> endOfRange;

	int maxElmnt{}, minElmnt{};

	for (int i = startOfRange; i < endOfRange; i++)
	{
		if (arr[i] > maxElmnt)
		{
			maxElmnt = arr[i];
		}
	}
	minElmnt = maxElmnt;
	for (int i = startOfRange; i < endOfRange; i++)
	{
		if (arr[i] < minElmnt)
		{
			minElmnt = arr[i];
		}

	}

	std::cout << "\n����������� �������: " << minElmnt << "\n"
		<< "������������ �������: " << maxElmnt << "\n";
}
