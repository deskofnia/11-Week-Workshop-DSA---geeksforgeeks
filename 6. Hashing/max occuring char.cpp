#include<bits/stdc++.h>
using namespace std;

char getMaxOcc(char str[])
{
    vector<int> hash(26, 0);

    for(auto i: hash)
    {
        hash[i-'a']++;
    }
    int maxi =0;
    char ch;

    for(int i=0; i<26; i++)
    {
        if(hash[i]>maxi)
        {
            maxi = hash[i];
            ch = i +'a';
        }
    }

    return ch;
}

int main()
{
    
    char arr[] = "ddfhfbhbfufhdfd";
    char c = getMaxOcc(arr);
    cout<<"Maximum occuring character is "<<c;
    return 0;
}