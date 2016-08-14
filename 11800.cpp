#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
using namespace std;

int n, cnt;
string s[7] = { " ", "Yakk","Doh","Seh","Ghar","Bang","Sheesh" };
string s2[7] = { " ","Habb Yakk","Dobara","Dousa","Dorgy","Dabash","Dosh" };
int main()
{
	int a, b;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		if (a == b)
		{
			cout << "Case " << i << ": " << s2[a] << endl;
		}
		else
		{
			if((a==6&&b==5)||(a==5&&b==6))
				cout << "Case " << i << ": " << "Sheesh Beesh" << endl;
			else if(a>b)
				cout << "Case " << i << ": " << s[a]<<" "<<s[b]<< endl;
			else
				cout << "Case " << i << ": " << s[b] << " " << s[a] << endl;
		}
	}
	return 0;
}