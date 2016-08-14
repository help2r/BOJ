#include <iostream>
#include <string>
using namespace std;

int n, m;
int main()
{
	cin >> n >> m;
	string str = to_string(n);
	
	if (str.length()*n > m)
	{
		int size = m / str.length();
		for (int i = 0; i < size; i++)
			cout << str;
		size = m%str.length();
		for (int i = 0; i < size; i++)
			cout << str[i];
	}
	else
	{
		for (int i = 0; i < n; i++)
			cout << n;
	}
	return 0;
}