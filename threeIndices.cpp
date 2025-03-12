#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n+1);
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        bool found = false;
        for(int i=2; i<=n-1; i++){
            if(a[i-1]<a[i] && a[i]>a[i+1]){
                cout<<"YES"<<endl;
                cout<<(i-1)<<" "<<i<<" "<<(i+1)<<endl;
                found = true;
                break;
            }
        }
        if(!found)  cout<<"NO"<<endl;
    }
    return 0;
}//optimal solution