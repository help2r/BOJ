#include <iostream>
#include <stdio.h>
using namespace std;

int arr[10], brr[10],cnta,cntb;
int main()
{
	for (int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &brr[i]);
		if (arr[i] > brr[i])
			cnta++;
		else if(arr[i]<brr[i])
			cntb++;
	}

	if (cntb == cnta)
		printf("D");
	else if (cnta > cntb)
		printf("A");
	else
		printf("B");
}