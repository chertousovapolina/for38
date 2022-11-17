// дз чертоусова for38
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int k, n, sum = 0;
	
	cin >> n;
	k = n;
	for (int i = 1; i <= n; i++) {
		sum += pow(i, k);
		k--;
	}
	cout << sum << " ";




}

