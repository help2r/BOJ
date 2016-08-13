#include <iostream>
#include <stdio.h>
using namespace std;

int L, A, B, C, D;
int main()
{
	cin >> L >> A >> B >> C >> D; // L : 방학, A : 국어, B : 수학, C : 1일당 국어 페이지, D : 1일당 수학 페이지
	A%C == 0 ? A /= C : A = A / C + 1;
	B%D == 0 ? B /= D : B = B / D + 1;
	int max = A >= B ? A : B;
	cout << L - max;

}