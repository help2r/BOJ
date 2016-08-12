#include <iostream>
#include <string.h>
using namespace std;

int n, cnt;
char ch[30];
int arr[26];
int main()
{
	cin >> n;

	while (n--)
	{
		cin >> ch;
		arr[ch[0] - 97]++;
	}
	for (int i = 0; i < 26; i++)
		if (arr[i] >= 5)
		{
			printf("%c", 97 + i);
			cnt++;
		}
	if (cnt == 0)
		printf("PREDAJA");

}