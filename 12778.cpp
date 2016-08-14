#include <iostream>
using namespace std;

int n;
int arr[501];
char ch[501];
int main()
{
	int k;
	char c;
	cin >> n;
	
	while (n--)
	{
		scanf("%d %c ", &k, &c);
		if (c == 'C')
		{
			for (int i = 0; i < k; i++)
				scanf(" %c", &ch[i]);
			for (int i = 0; i < k; i++)
				printf("%d ", ch[i] - 64);
			
		}
		else if(c=='N')
		{
			for (int i = 0; i < k; i++)
				scanf("%d", &arr[i]);
			for (int i = 0; i < k; i++)
				printf("%c ", arr[i] + 64);
		}
		cout << endl;
	}


}