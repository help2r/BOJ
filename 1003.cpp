#include <iostream>
using namespace std;

int arr0[41] = { 1,0 }; 
int arr1[41] = { 0,1 };
int n, k;
int main()
{
	cin >> n;
	for (int i = 2; i < 41; i++)
	{
		arr0[i] = arr0[i - 1] + arr0[i - 2]; //fibo(n)�϶� fibo(0)�� ȣ�� �Ǵ� Ƚ��
		arr1[i] = arr1[i - 1] + arr1[i - 2]; //fibo(n)�϶� fibo(1)�� ȣ�� �Ǵ� Ƚ��
	}
	while (n--)
	{
		cin >> k;
		cout << arr0[k] << " " << arr1[k] << endl;
	}
}