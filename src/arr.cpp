#include <iostream>
int* createarr(int size) {
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		*(arr + i) =0;
	}
	return arr;
}
void assigncor(int* arr, int size) {
	for (int i{}; i < size; i++) {
		*(arr + i) = i + 1;
		std::cout << *(arr + i) << " ";
	}
	std::cout << std::endl;
}
void doublearr(int* arr, int size) {
	for (int i{}; i < size; i++) {
		*(arr + i) = *(arr+i)*2;
		std::cout << *(arr + i) << " ";
	}
	std::cout << std::endl;
}
int findbiggest(int* arr, int size) {
	int first = *arr;
	for (int i{1}; i < size; i++) {
		if (*(arr + i) > first) {
			first = *(arr + i);
		}
	}
	return first;
}
void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}
void reversearr(int* arr, int size) {
	int j = 0;
	for (int i = size - 1; i >= 0; i--) {
		if (j == i) {
			break;
		}
		swap(*(arr + i), *(arr + j));
		j++;
	}
	for (int i = 0; i < size; i++) {
		std::cout << *(arr + i) << " ";
	}
	std::cout << std::endl;
}