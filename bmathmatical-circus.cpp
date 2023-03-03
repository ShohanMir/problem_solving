#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t; cin>>t;
    while (t--) {
        int n, k;
        cin>>n>>k;
        if (n == 2&&k==0) cout << "NO" << endl;
        if(n>=2&&k>=1) {
            if(k%2 == 1) {
                cout<<"YES"<<endl;
                for(int i=1;i<=n;i+=2) {
                    cout<<i<<" "<<i+1<<endl;
                }
            }
            if(k%4==2) {
                cout<<"YES"<<endl;
                for(int i=2;i<=n;i+=4) {
                    cout<<i<<" "<<i-1<<endl;
                }
                for(int i=3; i<=n; i+=4) {
                    cout<<i<<" "<<i+1<<endl;
                }
            }
            if(k%4==0)cout<<"NO"<<endl;
        }
    }
    return 0;
}
