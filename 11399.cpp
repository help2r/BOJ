#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> v;
int arr[1001], n,sum,total;
int main()
{
	int k;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		v.push_back(k);
	}
	sort(v.begin(), v.end());
	vector <int>::iterator it;
	for (it = v.begin(); it != v.end(); ++it)
	{
		sum += *it;
		total += sum;
	}
	cout << total;
}