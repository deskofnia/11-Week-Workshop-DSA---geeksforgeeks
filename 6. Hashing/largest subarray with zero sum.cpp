#include<bits/stdc++.h>
using namespace std;

//the task if to compute the lenght of the largest subarray with sum 0

int maxlen(vector<int>&A, int n)
{
	map<int, int> p;
	int sum = 0;
	int len = 0;

	for(int i=0; i<n; i++)
	{
		sum += A[i];
		if(A[i]==0 && len==0)
			len=1;
		if(sum==0)
			len=i+1;

		if(p.find(sum) != p.end())
		{
			len = max(len, i-p[sum]);
		}
		else
		{
			p[sum]=i;
		}

		return len;
	}
}

int main()
{
	vector<int> v = {15, -2, 2, -8, 1, 7, 10, 23};
	cout<<maxlen(v, v.size());
	return 0;
}