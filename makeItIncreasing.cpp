#include <iostream>
#include <vector>
#include <string>
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
        if(a.size()==1){
            cout<<0<<endl;
            continue;
        }
        int ops = 0;
        for(int i=n-1; i>=1; i--){
            while(a[i] <= a[i-1]){
                if(a[i-1]==0){
                    ops = -1;
                    break;
                }
                a[i-1]/=2;
                ops++;
            }
            if(ops==-1) break;
        }
        cout<<ops<<endl;
    }
    return 0;
}