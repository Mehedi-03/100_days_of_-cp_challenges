#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t; 
    while(t--)
    {
        int n ;
        cin>>n;
        string s; 
        cin>>s; 
        string a = "Timur";
        sort(a.begin(), a.end());
        sort(s.begin(), s.end());
        if(a == s)
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