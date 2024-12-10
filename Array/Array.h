#pragma once


class Array
{
private:
	int* ar;
	int size;

public:
	// ¦ Створення пустого масиву на n елементів.
	Array(int n) : size(n) {
		ar = new int[size] {};
	}

	//■ Створення масиву на n елементів з x значеннями iз вказаного діапазону(min / max).
	Array(int n, int min, int max) : size(n) {
		ar = new int[size] {};
		for (int i = 0; i < size; i++)
		{
			ar[i] = min + rand() % max + rand();
		}
	}
	//  ■ Деструктор.
	~Array() {
		delete[] ar;
	}
	//■ Відображати вміст масиву;
	void display() {
		for (int i = 0; i < size; i++)
		{
			std::cout << ar[i];
		}
		std::cout << std::endl;
	}

};

