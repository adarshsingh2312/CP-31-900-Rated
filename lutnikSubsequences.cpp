#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int s = 0;
        int count_1 = 0;
        int count_0 = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==1) count_1++;
            if(a[i]==0) count_0++;
            s+=a[i];
        }
        ll subsequences = count_1*(pow(2,count_0));
        cout<<subsequences<<endl;
    }
    return 0;
}