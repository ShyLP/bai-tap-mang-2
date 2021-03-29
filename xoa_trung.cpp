#include<iostream>
using namespace std;
#define MAX 100
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
		cout << a[i] << "   ";
	}
}
void xoa(int a[], int& n, int vt)
{
	for (int i = vt; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void  xoa_trung(int a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				xoa(a, n, j);
				j--;
			}
		}
	}
}
int main()
{
	int a[MAX];
	int n;
	do
	{
		cout << "nhap so phan tu cua mang: "; cin >> n;
	} while (n <= 0 || n > MAX);
	nhapmang(a, n);
	xuatmang(a, n);
	cout << endl;
	cout << "mang sau khi xoa: " << endl;
	xoa_trung(a, n);
	xuatmang(a, n);
	return 0;
}
