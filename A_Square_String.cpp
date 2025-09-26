#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t; 
    while(t--)
    {
        string s; 
        cin>>s; 
        string a = "";
        string b = "";
        int len = s.size();
        for(int i = 0; i<len/2; i++)
        {
            a += s[i];
        }
        for(int i = len/2; i<len; i++)
        {
            b += s[i]; 
        }
        if(a == b)
        {
            cout<<"YES"<<endl; 
        }
        else
        {
            cout<<"NO"<<endl;
        }
    
    }
    return 0; 
}