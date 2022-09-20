#include<bits/stdc++.h>
using namespace std;


// number that is evenly divisible by each number from 1 to n 
// ex. 5 => 60 which is divisible by 1,2,3,4 and 5

long long gcd(long long a, long long b)
{
	if(a==0)
		return b;
	else
		return gcd(b%a, a);
}

long long sdn(long long n)
{
	long long ans = 1;

	for(long long i=1; i<=n; i++)
	{
		ans = (ans*i)/(gcd(ans, i));
	}

	return ans;
}

int main()
{
	cout<<sdn(5)<<endl;
	return 0;
}