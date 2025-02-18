#include <iostream>
#include <vector>
#include <string>
using namespace std;
void continuousNonZero(vector<int>&a){
    int l = -1;
    int r = -1;
    for(int i=1; i<=a.size()-1; i++){
        if(a[i]!=0){
            if(l==-1 && r==-1){
                l = i;
                r = i; 
            }
            else{
                r = i;
            }
        }
    }
    if(l==-1 && r==-1){//only zeros are present
        cout<<0<<endl;
        return;
    }
    else{
        for(int i=l; i<=r; i++){
            if(a[i]==0){
                cout<<2<<endl;
                return;
            }
        }
        cout<<1<<endl;
    }
}
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
        continuousNonZero(a);
    }
    return 0;
}