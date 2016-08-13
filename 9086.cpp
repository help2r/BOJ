#include <iostream>
#include <string.h>
using namespace std;

int n;
char ch[1001];
int main()
{
	cin >> n;
	while (n--)
	{
		cin >> ch;
		cout << ch[0] << ch[strlen(ch) - 1] << endl;
	}
}