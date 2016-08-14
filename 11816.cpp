#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int k,cnt;
int main()
{
	string s;
	cin >> s;
	int len = s.length();
	if (s[0] == '0' && s[1] == 'x')
		for (int i = 2; i < len; i++)
		{
			if(s[i]-97>=0)
				k += (s[i] - 87) * pow(16, len - 1 - i);
			else
				k += (s[i] - 48) * pow(16, len - 1 - i);
		}
	else if(s[0]=='0')
		for (int i = 1; i < len; i++)
		{
				k += (s[i] - 48) * pow(8, len - 1 - i);
			
		}
	else
	{
		for (int i = 0; i < len; i++)
		{
			k += (s[i] - 48) * pow(10, len - 1 - i);

		}
	}
	cout << k;
}