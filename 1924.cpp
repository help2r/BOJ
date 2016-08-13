#include <iostream>

using namespace std;

int main()
{
	int Arr[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	char date[][7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int Mon, day;
	int sum = 0;
	int total;
	cin >> Mon >> day;
	if (Mon == 1)
		total = Mon % 7;

	else
		for (int i = 0; i < Mon - 1; i++)
			sum += Arr[i];

	total = ((sum % 7) + day) % 7;

	cout << date[total];



	return 0;


}