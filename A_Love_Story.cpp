#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t; 
    string s = "codeforces";
    while(t--)
    {
        string a; 
        cin>>a; 
        int count = 0; 
        for(int i = 0; i<10; i++)
        {
            if(a[i] != s[i])
            {
                count++; 
            }
        }
        cout<<count<<endl;
    }
    return 0; 
}