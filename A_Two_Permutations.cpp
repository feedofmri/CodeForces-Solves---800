#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a, b; cin >> t;
    while(t--){
        cin >> n >> a >> b;
        if(n==a && a==b || n>a+b+1){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
}