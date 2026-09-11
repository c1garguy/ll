#include <iostream>
#include "arr.h"
int main() {
	int N;
	std::cin >> N;
	const int size = N;
	int* arr = createarr(size);
	assigncor(arr, size);
	doublearr(arr, size);
	std::cout<<findbiggest(arr, size);
	std::cout << std::endl;
	reversearr(arr, size);
	delete[] arr;
	arr = nullptr;
	return 0;
}