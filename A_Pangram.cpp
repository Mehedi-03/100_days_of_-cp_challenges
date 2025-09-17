#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    string s; 
    cin>>s;  
    int fre[26] = {0}; 
    for(int i = 0; i<n ;i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32; 
        }
    }
    for(int i = 0; i<n; i++)
    {
        int index = s[i] - 'a';
        fre[index] = 1;
    }
    bool x = 1; 
    
    for(int i = 0;i<26; i++)
    {
        if(fre[i] != 1)
        {
            x = 0; 
            break;
        }
        else
        {
            x;
        }
    }
    if(x == 1)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl; 
    }
    return 0; 
}