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
bool kiemtrasdx(int x)
{
	int dao = 0;
	int temp = x;
	while (x != 0)
	{
		dao = dao * 10 + (x % 10);
		x = x / 10;
	}
	if (dao == temp)
	{
		return true;
	}
	return false;
}
void xoa(int a[], int &n, int vt)
{
	for (int i = vt + 1; i < n; i++)
	{
		a[i - 1] = a[i];
	}
	n--;
}
void xoasodoixung(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		if (kiemtrasdx(a[i]) == true)
		{
			xoa(a, n, i);
			i--;
		}
	}
}
int main()
{
	int a[MAX];
	int n;
	do
	{
		cout << "\nnhap vao so luong phan tu cua mang: ";
		cin >> n;
		if (n <= 0 || n > MAX)
		{
			cout << "\nso luong khong hop le";
		}
	} while (n <= 0 || n > MAX);
	nhapmang(a, n);
	xuatmang(a, n);
	cout << endl;
	xoasodoixung(a, n);
	cout << endl;
	cout << "mang sau khi xoa la :" << endl;
	xuatmang(a, n);
	return 0;
}
