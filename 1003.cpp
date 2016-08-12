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
		arr0[i] = arr0[i - 1] + arr0[i - 2]; //fibo(n)일때 fibo(0)이 호출 되는 횟수
		arr1[i] = arr1[i - 1] + arr1[i - 2]; //fibo(n)일때 fibo(1)이 호출 되는 횟수
	}
	while (n--)
	{
		cin >> k;
		cout << arr0[k] << " " << arr1[k] << endl;
	}
}