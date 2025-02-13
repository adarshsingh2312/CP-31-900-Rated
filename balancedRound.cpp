#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int gap = 0;
        int current = 1;
        int maximum = 1;
        for(int i=0; i<n-1; i++){
            gap = a[i+1] - a[i];
            if(gap<=k){
                current++;
            }
            else current = 1;
            maximum = max(current,maximum);
        }
        cout<<(n-maximum)<<endl;
    }
    return 0;
}