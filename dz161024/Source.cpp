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
	std::cout << "\n\n----------Занаие 1----------\n\n";

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

	std::cout << "Минимальный елемент массива: " << minElmnt << "\n"
		<< "Максимальный елемент массива: " << maxElmnt << "\n";
}

void Task2()
{
	std::cout << "\n\n----------Занаие 2----------\n\n";

	const int size = 10;
	int arr[size]{};

	int startOfRange{}, endOfRange{};

	std::cout << "Введите начало диапозона: ";
	std::cin >> startOfRange;
	std::cout << "Введите конец диапозона: ";
	std::cin >> endOfRange;

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (endOfRange + 1 - startOfRange) + startOfRange;
	}

	int chooseNum{}, sum{};

	std::cout << "Выберите число в этом лиапозоне: ";
	std::cin >> chooseNum;

	for (int i = 0; i < size; i++)
	{
		int tmp = arr[i];
		if (chooseNum < tmp) {
			sum += tmp;
		}
	}
	
	std::cout << "Сумма елементов < " << chooseNum << " = " << sum << "\n";
}

void Task3()
{
	std::cout << "\n\n----------Занаие 3----------\n\n";

	const int size = 12;
	int arr[size]{};

	for (int i = 0; i < size; i++)
	{
		std::cout << "Введите прибыль за " << i+1 << " месяц: ";
		std::cin >> arr[i];
	}

	int startOfRange{}, endOfRange{};

	std::cout << "\nВведите начало диапозона: ";
	std::cin >> startOfRange;
	std::cout << "Введите конец диапозона: ";
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

	std::cout << "\nМинимальная прибыль: " << minElmnt << "\n"
		<< "Максимальная прибыль: " << maxElmnt << "\n";
}
