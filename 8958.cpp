#include <iostream> //7
#include <string.h>
using namespace std;

int n,cnt,temp;
char ch[81];
int main()
{
	cin >> n;
	while(n--)
	{
		cin >> ch;
		int len = strlen(ch);
		for (int i = 0; i < len; i++)
		{
			if (ch[i] == 'O')
			{
				cnt++;
				temp += cnt;
			}
			else
				cnt = 0;
		}
		cout << temp << endl;
		temp = 0;
		cnt = 0;
	}
}