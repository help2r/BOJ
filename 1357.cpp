#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

char ch1[5], ch2[5];
int k;
int main()
{
	scanf("%s %s", ch1, ch2);
	int len = strlen(ch1);

	for (int i = 0; i < len; i++)
		k += (ch1[i] - 48)*pow(10, i);

	len = strlen(ch2);
	for (int i = 0; i <len; i++)
		k += (ch2[i] - 48)*pow(10, i);

	if (k >= 1000)
		k = (k / 1000) + ((k % 1000) / 100) * 10 + ((k % 100) / 10) * 100 + (k % 10) * 1000;
	else if (k >= 100)
		k = (k / 100) + ((k % 100) / 10) * 10 + (k % 10) * 100;
	else if (k >= 10)
		k = (k / 10) + (k % 10) * 10;

	cout << k;
}