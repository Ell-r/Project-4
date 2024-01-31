#include <iostream>
using namespace std;

int inSize(int size) {
	cout << "¬вед≥ть розм≥р масива: ";
	cin >> size;
	return size;
}

int* newArray(int size) {
	int* array = new int[size];
	return array;
}

void initArray(int* array, int size) {
	cout << "¬вед≥ть значенн€ дл€ масива: ";
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}
}

void coutArray(int* array, int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

int findMinElement(int size, int* array) {
	int count = array[0], result = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] < count) {
			count = array[i];
			result = i;
		}
	}
	return result;
}

int main() {
	setlocale(LC_ALL, "rus");
	int Size = 0;
	while (true) {
		Size = inSize(Size);
		int* Array = newArray(Size);
		initArray(Array, Size);
		coutArray(Array, Size);
		cout <<"≤ндекс м≥н≥мального елемента: " << findMinElement(Size, Array) << endl;
	}
}