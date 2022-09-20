#include<bits/stdc++.h>
using namespace std;

bool keypair(vector<int> array, int n, int x)
{
	unordered_map<int, int>mp;

	for(int i=0; i<n; i++)
	{
		int target = x - array[i];

		if(mp.find(target) != mp.end())
			return 1;
		if(mp.find(array[i])== mp.end())
			mp[array[i]] = i;
	}

	return 0;
}

int main()
{	
	int arr[] = {1,4,4,5,6,10,8};
	std::vector<int> dest(arr, arr+7);
	cout<<keypair(dest, 7, 16);

	return 0;
}