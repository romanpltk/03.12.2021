#include "Header.h"
 int main() {
	int b = 9;
	const int n = 10;
	int arr[n];
	fill_array(arr, n, 0, 10);
	print_array(arr, n);
	cout << sum_array(arr, n) << endl;
	cout << arifm(arr, n) << endl;
	cout << boolalpha << bol(arr, n, b);
}