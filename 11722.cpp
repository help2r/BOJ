#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int n;
int sum;
int temp;
char ch[11];
int main()
{
	cin >> n;
	while (n--)
	{
		temp = 0;
		cin >> ch;
		int len = strlen(ch);
		for (int i = 0; i < len-1; i++)
			temp += (ch[i] - 48)*pow(10,len-i-2);
		sum += pow(temp, ch[len - 1] - 48);
	}
	cout << sum;
}