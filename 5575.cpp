#include <iostream>//4
using namespace std;

int arr[3], brr[3];
int cnt = 3;
int main()
{
	while (cnt--)
	{
		cin >> arr[0] >> arr[1] >> arr[2] >> brr[0] >> brr[1] >> brr[2];
		if (brr[2] - arr[2] >= 0)
			brr[2] -= arr[2];
		else
		{
			brr[1]--;
			brr[2] = 60 + brr[2] - arr[2];
		}
		if (brr[1] - arr[1] >= 0)
			brr[1]-=arr[1];
		else
		{
			brr[0]--;
			brr[1] = 60 + brr[1] - arr[1];
		}
		if (brr[0] - arr[0] >= 0)
			brr[0] -= arr[0];
		else
		{
			brr[0] = 24 + brr[0] - arr[0];
		}
		cout << brr[0]<<" "<<brr[1]<<" "<<brr[2]<<endl;
	}

}