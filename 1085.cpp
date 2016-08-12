#include <iostream>
using namespace std;

int x, y, w, h;
int main()
{
	cin >> x >> y >> w >> h;

	int tmp1 = (w - x) > x ? x : w - x;
	int tmp2 = (h - y) > y ? y : h - y;

	if (tmp1 > tmp2)
		cout << tmp2;
	else
		cout << tmp1;


}