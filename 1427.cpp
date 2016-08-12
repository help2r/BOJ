#include <iostream>
#include <algorithm>
#include <functional>
#include <string.h>
using namespace std;


char ch[11];
int main()
{
	cin >> ch;
	int len = strlen(ch);
	sort(ch, ch + len, greater<int>());
	for (int i = 0; i < len; i++)
		cout << ch[i];
}