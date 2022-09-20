#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if(a==0)
		return b;
	else
		return gcd(b%a, a);
}

int main()
{
	cout<<gcd(42, 30)<<endl;
	return 0;
}