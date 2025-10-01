#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int pas[105] = {0};
    int p; 
    cin>>p;
    for(int i = 0; i<p; i++)
    {
        int x; 
        cin>>x;
        pas[x] = 1; 
    }
    int q; 
    cin>>q; 
    for(int i = 0; i<q; i++)
    {
        int y; 
        cin>>y; 
        pas[y] = 1; 
    }
    int flag = 1; 
    for(int i = 1; i<=n; i++)
    {
        if(pas[i] == 0)
        {
            flag = 0; 
            break;
        }
        else
        {
            flag ; 
        }
    }
    if(flag == 1)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0; 
}