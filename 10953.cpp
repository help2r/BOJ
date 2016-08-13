#include <iostream> //3
using namespace std;

char ch[3];
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		cin >> ch;
		printf("%d\n", (ch[0] - 48) + (ch[2] - 48));
	}
}