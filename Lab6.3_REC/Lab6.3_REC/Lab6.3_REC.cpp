#include <iostream>
#include <iomanip>

using namespace std;

void output(int a[], int n, int i);
int sumA(int a[], int n, int& sum,int i);

int main()
{
	const int n = 4;
	int i = 0, sum = 0;
	int a[n] = { 1,2,3,4 };
	cout << "a= ";
	output(a, n, i);
	cout << "Sum= " << sumA(a, n, sum, i);
}

void output(int a[], int n,int i)
{
	if (i < n)
	{
		cout << a[i] << setw(4);
		output(a, n, i + 1);
	}
	cout << endl;
}

int sumA(int a[], int n, int& sum,int i)
{
	if (i < n)
	{
		if (a[i] % 2 == 0)
		{
			sum += a[i];
		}
		sumA(a, n, sum, i + 1);
	}
	return sum;
}