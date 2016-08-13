#include <iostream>
#include <stdio.h>
using namespace std;

int arr[1001] = { 0,1,3 };
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 3; i <= n; i++)
	{
		arr[i] = arr[i - 1] + 2 * arr[i - 2];
		arr[i] %= 10007;
	}
	printf("%d", arr[n] % 10007);
}