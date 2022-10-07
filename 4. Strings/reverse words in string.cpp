#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "world corporate of reality dark the into Welcome";
    string temp="";
    string result="";
    int count=0;

    for(int i=s.length()-1; i>=0; i--)
    {
        if(s[i] != ' ')
        {
            temp += s[i];
            count++;
        }
        if(s[i] == ' ' || i==0)         //i=0 for printing last word
        {
            for(int j=0; j<count/2; j++)
            {
                char t = temp[j];
                temp[j] = temp[count-j-1];
                temp[count-j-1] = t;
            }
            result += temp+" ";
            temp = "";
            count=0;
        }
    }                           //output = Welcome into the dark reality of corporate world 
    cout<<result;
    
    return 0;
}