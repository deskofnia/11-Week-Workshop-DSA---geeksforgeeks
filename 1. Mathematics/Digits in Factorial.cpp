#include<bits/stdc++.h>
using namespace std;

int digitsInFactorial(int n)
{
	int sum=0;

	for(int i=1; i<=n; i++)
	{
		sum += log10(i);
	}

	return 1+floor(sum);
}

int main()
{
	cout<<digitsInFactorial(5)<<endl;
	return 0;
}