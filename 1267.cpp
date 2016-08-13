#include <iostream>
using namespace std;

int arr[21], sumM, sumY, Y, M, n;
int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		Y = (arr[i] / 30) + 1;
		M = (arr[i] / 60) + 1;

		sumY += (Y * 10);
		sumM += (M * 15);
	}
	if (sumM > sumY)
		printf("Y %d", sumY);
	else if (sumM < sumY)
		printf("M %d", sumM);
	else
		printf("Y M %d", sumM);
}