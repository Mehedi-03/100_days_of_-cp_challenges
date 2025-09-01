#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; 
    cin>>s;
    int fre[26] = {0}; 
    int count = 0; 
    for(int i = 0; i<s.length(); i++)
    {
        int index = s[i] - 'a'; 
        fre[index] = 1; 
    }
    for(int i = 0; i<26; i++)
    {
        if(fre[i] == 1 )
        {
            count++; 
        }
    }
    if(count % 2 == 0)
    {
        cout<<"CHAT WITH HER!"<<endl; 
    }
    else 
    {
        cout<<"IGNORE HIM!"<<endl; 
    }
    
    return 0; 
}