#include <iostream>
#include <vector>
#include <string>
using namespace std;
const int N = 2*(1e5);
vector<int> pf(N);
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        pf[0] = 0;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            pf[i] = pf[i-1]+a[i];
        }
        int sumAll = pf[n-1];
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            int sumRange = pf[r-1] - pf[l-2];
            int s = (sumAll-sumRange)+((k*(r-l-1)));
            if(s%2!=0){
                cout<<"YES"<<endl;
                continue;
            }
            cout<<"NO"<<endl;
        }
    }
    return 0;
}