#include<bits/stdc++.h>
using namespace std;

int trailingZeros(int n)
{
	int count;
	if(n<0)
		return -1;
	
	for (int i = 5; n/i >= 1; i*=5)
	{
		count += n/i;
	}

	return 0;
}

int main()
{
	cout<<trailingZeros(5)<<endl;
	return 0;
}