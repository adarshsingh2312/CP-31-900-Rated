#include <iostream>
#include <vector>
#include <map>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        map<int,int>m;
        for(auto val : a){
            m[val]++;
        }
        int maxi = 0;
        for(auto pr : m){
            maxi = max(maxi,pr.second);
        }
        int current = maxi;
        int clone = 0;
        int swaps = 0;
        while(current<n){
            clone+=1;
            swaps += min(current,(n-current));
            current*=2;
        }
        cout<<(clone+swaps)<<endl;
    }
    return 0;
}