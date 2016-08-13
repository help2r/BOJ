#include <iostream>//3
#include <string.h>
using namespace std;

char ch[101];
int cnt;
int main()
{
	cin >> ch;
	int len = strlen(ch);
	for (int i = 0; i < len; i++)
		if (ch[i] == ',')
			cnt++;

	cout << ++cnt;
}