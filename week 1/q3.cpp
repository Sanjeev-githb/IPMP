#include <bits/stdc++.h>
using namespace std;

void printRepeatingnum(int a[], int size)
{
	int* count = new int[sizeof(int) * (size - 2)];
	int i;

	cout << " Repeating elements are ";
	for (i = 0; i < size; i++) {
		if (count[a[i]] == 1)
			cout << a[i] << " ";
		else
			count[a[i]]++;
	}
}
int main()
{
	int a[] = { 4, 2, 4, 5, 2, 3, 1 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	printRepeatingnum(arr, arr_size);
	return 0;
}
