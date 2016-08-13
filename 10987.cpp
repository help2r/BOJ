#include <iostream>//8
#include <string.h>
using namespace std;

char ch[101];
int cnt;
int main()
{
	cin >> ch;
	int len = strlen(ch);
	for (int i = 0; i < len; i++)
	{
		if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')
			cnt++;
	}
	cout << cnt;
}