#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 0;
    while(n--)
    {
        int p, q;
        cin>>p>>q;
        if(p != q && p+1 < q)
        {
            count += 1;
        }
        else
        {
            count;
        }

    }
    cout<<count<<endl;
    
    return 0; 
}