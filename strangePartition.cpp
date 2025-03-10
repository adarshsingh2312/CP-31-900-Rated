#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;
bool allDiv(vector<ll>&a,int x){
    for(int i=0; i<a.size(); i++){
        if(a[i]%x!=0)   return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll>a(n);
        ll sum = 0;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(allDiv(a,x)){
            cout<<(sum/x)<<" "<<(sum/x)<<endl;
            continue;
        }
        ll maxi = 0;
        ll mini = 0;
        if(sum%x==0)    mini = sum/x;
        else    mini = (sum/x)+1;
        for(ll i=0; i<n; i++){
            if(a[i]%x==0)   maxi+=(a[i]/x);
            else    maxi+=((a[i]/x)+1);
        }
        cout<<mini<<" "<<maxi<<endl;
    }
    return 0;
}