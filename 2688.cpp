#include <iostream>
using namespace std;

long long n, arr[65][10],sum,temp,k;
int main()
{
	cin >> n;
	for (int i = 0; i < 10; i++)
	{
		arr[1][i] = 1;
		sum += arr[1][i];
	}
	for (int i = 2; i < 65; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 0)
				arr[i][j] = sum;
			else
			{
				sum -= arr[i - 1][j - 1];
				arr[i][j] = sum;
			}
			temp += arr[i][j];
		}
		sum = temp;
		temp = 0;
	}
	while (n--)
	{
		sum = 0;
		scanf("%lld", &k);
		for (int i = 0; i < 10; i++)
			sum += arr[k][i];
		printf("%lld\n", sum);	
	}
}