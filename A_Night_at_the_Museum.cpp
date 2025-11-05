#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; 
    cin>>s; 
    char ch = 'a'; 
    int count = 0;
    for(int i = 0; i<s.size(); i++)
    {
        int d = abs(s[i] - ch); 
        count += min(d, 26 - d);
        ch = s[i]; 
        
    }
    cout<<count<<endl; 
    return 0; 
}