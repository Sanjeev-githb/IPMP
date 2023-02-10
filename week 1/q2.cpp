#include <bits/stdc++.h>
using namespace std;

int getOddOccur(int a[], int a_size)
{
	int s = 0;
	for (int i = 0; i < a_size; i++)	
		s = s ^ a[i];
	
	return s;
}

int main()
{
	int a[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2,5,2,3};
	int n = sizeof(a)/sizeof(a[0]);
	
	cout << getOddOccurr(a, n);
	
	return 0;
}
//I used bitwise because this is considered as best solution
