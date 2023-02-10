#include <iostream>
using namespace std;

void printPairs(int a[], int n, int x)
{
	int i;
	int rem[x];
	for (i = 0; i < x; i++)
		rem[i] = 0;
	for (i = 0; i < n; i++)
		if (a[i] < x)
			rem[a[i] % x]++;
	for (i = 1; i < x / 2; i++) {
		if (rem[i] > 0 && rem[x - i] > 0) {
			cout << "Yes\n";
			break;
		}
	}
	if (i >= x / 2) {
		if (x % 2 == 0) {
			if (rem[x / 2] > 1)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
		else {
			if (rem[x / 2] > 0 && rem[x - x / 2] > 0)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
	}
}
int main()
{
	int A[] = { 1, 4, 45, 6, 10, 8 };
	int n = 16;
	int arr_size = sizeof(A) / sizeof(A[0]);
	printPairs(A, arr_size, n);
    return 0;
}

