#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ; 
    cin>>n ; 
    int a[n]; 
    for(int i = 0; i<n; i++)
    {
        cin>>a[i]; 
    }
    bool result = 0; 
    for(int i = 0; i<n; i++)
    {
        if(a[i] == 1)
        {
            result = 1;
            break;
        }
        else 
        {
            result ;
        }
    }
    if(result == 1)
    {
        cout<<"HARD"<<endl;
    }
    else 
    {
        cout<<"EASY"<<endl;
    }
    return 0; 
}