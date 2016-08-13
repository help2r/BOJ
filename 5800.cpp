#include <iostream>
#include <algorithm>
using namespace std;

int n, k,arr[101],cnt;
int main()
{
	cin >> n;
	while (n--)
	{
		int gaptemp = 0;
		int gap = 0;
		cin >> k;
		for (int i = 1; i <= k; i++)
		{
			cin >> arr[i];
		}
		sort(arr + 1, arr + (k + 1));
		for (int i = 2; i <= k; i++)
		{
			gap = arr[i - 1] > arr[i] ? arr[i - 1] - arr[i] : arr[i] - arr[i - 1];
			if (gaptemp < gap)
				gaptemp = gap;
		}
		printf("Class %d\n", ++cnt);
		printf("Max %d, Min %d, Largest gap %d\n", arr[k], arr[1], gaptemp);
	
	
	}
}