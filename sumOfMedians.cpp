#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>a((n*k)+1);
        for(ll i=1; i<=(n*k); i++){
            cin>>a[i];
        }
        ll i = (n*k)-n/2;
        ll sum = 0;
        while(k--){
            sum+=a[i];
            i = i-n/2-1;
        }
        cout<<sum<<endl;
    }
    return 0;
}