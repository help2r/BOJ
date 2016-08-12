#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

char ch[11];
long long n, k;
int main()
{

	scanf("%s %lld", ch, &n);
	int len = strlen(ch);

	int temp = len - 2;
	for (int i = 0; i < len - 2; ++i)
		k += (ch[i] - 48)*pow(10, --temp);

	k *= 100;
	temp = k;
	for (int i = 0; i < 101; i++)
	{
		if (k%n == 0)
		{
			if (k - temp < 10)
				cout << 0 << k - temp;

			else
				cout << k - temp;
			break;
		}
		k++;
	}
}