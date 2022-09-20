#include<bits/stdc++.h>
using namespace std;


bool check(vector<long long> A, vector<long long> B, int N)
{
	unordered_map<long long, long long> mp;

	for(long long i=0; i<N; i++)
	{
		mp[A[i]]++;
	}
	for(long long i=0; i<N; i++)
	{
		mp[B[i]]--;
	}
	for(auto i=mp.begin(); i != mp.end(); i++)
	{
		if(i->second != 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	vector<long long> v1 = {1,2,5,4,0};
	vector<long long> v2 = {2,4,5,0,1};
	cout<<check(v1, v2, 5);
}