#include <iostream>
#include <iomanip>
using namespace std;


void Print(int* a, const int size, int i)
	{
		cout << setw(4) << a[i];
		if (i < size - 1)
			Print(a, size, i + 1);
		else
			cout << endl;
	}
	void Sort(int* a, const int size, int i)
	{
		for (int j = 0; j < size - i; j++) 
			if (a[j] > a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		if (i < size - 1) 
			Sort(a, size, i + 1);
	}
	int main()
	{
		const int n = 5;
		int a[n] = { 9, 3, 4,7,5};
		Print(a, n, 0);
		Sort(a, n, 1); 
		Print(a, n, 0);
		return 0;
	}
