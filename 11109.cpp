#include <iostream>
using namespace std;

int t;
int b, g;
int main()
{
	int d, n, s, p;
	cin >> t;
	
	while (t--)
	{
		scanf("%d %d %d %d", &d, &n, &s, &p);
		b = d +n*p;
		g = s*n;
		if (b < g)
			printf("parallelize\n");
		else if (b>g)
			printf("do not parallelize\n");
		else
			printf("does not matter\n");
	}
	return 0;
}