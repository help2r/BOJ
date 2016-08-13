#include <iostream>
#include <vector>
using namespace std;

#define NUM(n) n*n
vector <int> v;
int sum;
int main()
{
	int k;
	for (int i = 0; i < 5; i++)
	{
		cin >> k;
		v.push_back(k);
		sum+=NUM(v.back());
	}
	cout << sum%10;
}