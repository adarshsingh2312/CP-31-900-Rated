#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool isAllZero(vector<int>&a){
    for(auto val : a){
        if(val!=0)  return false;
    }
    return true;
}
int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(isAllZero(a)){
            cout<<0<<endl;
            continue;
        }
        int k = 0;
        if(n%2==0){
            k = 2;
            cout<<k<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else{
            k = 4;
            cout<<k<<endl;
            cout<<1<<" "<<(n-1)<<endl;
            cout<<1<<" "<<(n-1)<<endl;
            cout<<(n-1)<<" "<<n<<endl;
            cout<<(n-1)<<" "<<n<<endl;
        }
    }
    return 0;
}