#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
#include <math.h>
using namespace std;

char ch[10][10] = { "black","brown","red","orange","yellow","green","blue","violet","grey","white" };
int n = 3;
int main()
{
	long long temp = 0;
	string s;
	while (n--)
	{
		cin >> s;
		if (n >= 1)
			for (int i = 0; i < 10; i++)
			{
				if (s == ch[i])
					temp += i*pow(10, n - 1);
			}
		else
			for (int i = 0; i < 10; i++)
			{
				if (s == ch[i])
					temp *= pow(10, i);
			}
	}
	cout << temp;

}