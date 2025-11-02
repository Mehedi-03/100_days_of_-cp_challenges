#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ; 
    cin>>t; 
    while(t--)
    {
        string s; 
        cin>>s; 
        int len = s.size();
        int x = len - 2;  
        s.erase(s.begin() + x, s.begin() + len);
        s.insert(s.end(), 'i');
        cout<<s<<endl; 
    }
    return 0; 
}