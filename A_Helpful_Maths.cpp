#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; 
    cin>>s;
    sort(s.begin(),s.end());
    string digit = "";  
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] != '+')
        {
            digit += s[i]; 
        }
    }
    for(int i = 0; i<digit.size(); i++)
    {
        cout<<digit[i]; 
        if(i != digit.size()-1)
        {
            cout<<"+"; 
        }
    }
    cout<<endl; 
    return 0; 
}