#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        string s; 
        cin >> s; 
        
        int a = 0, b = 0;
        bool found = false; 
        
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') a--;
            else if (s[i] == 'R') a++;
            else if (s[i] == 'D') b--;
            else if (s[i] == 'U') b++;
            
            if (a == 1 && b == 1) {
                found = true;
                break; 
            }
        }
        
        if (found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
