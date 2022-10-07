#include<bits/stdc++.h>
using namespace std;

int largest(int a[], int k, int n)
{
	priority_queue<int, greater<int>> pq;
	for(int i=0; i<k; i++)
	{
		pq.push(a[i]);
		cout<<pq.top()<<endl;
	}

	for(int i=k; i<n; i++)
	{
		if(pq.top() < a[i])
		{
			pq.pop();
			pq.push(a[i]);
		}
	}

	return pq.top();
}


int main()
{
	int arr[] = {20,10,60,30,50,40};
	cout<<largest(arr, 3, 6);

	return 0;
}