#include<iostream>
using namespace std;
void nhapmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nnhap phan tu a[" << i << " ] = ";
		cin >> a[i];
	}
}
void xuatmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " a[" << i << "] : " << a[i] << endl;
	}
}
bool sohoanhao(int x)
{
	int sum = 0;
	for (int i = 1; i < x; i++)
	{
		if (x % i == 0)
		{
			sum += i;
		}
	}
	if (sum == x)
	{
		return true;
	}
	else { return false; }
}
void chen(int a[], int& n, int vt, int m)
{
	for (int i = n; i > vt; i--)
	{
		a[i] = a[i - 1];
	}
	a[vt] = m;
	n++;
}
void chen0(int a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		if (sohoanhao(a[i]) == true)
		{
			chen(a, n, i, 0);
			i++;
		}
	}
}
int main()
{
	int n;
	int a[100];
	do 
	{
		cout << "nhap so phan tu cua mang = "; 
    cin >> n;
	}while (n <= 0 || n > 100);
	nhapmang(a, n);
	xuatmang(a, n);
	cout << endl;
	cout << "mang sau khi them" << endl;
	chen0(a, n);
	xuatmang(a, n);
	return 0;
}
