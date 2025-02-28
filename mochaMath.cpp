#include <iostream>
#include <vector>
#include <climits>
using namespace std;


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
        int result = a[1];
        for(int i=2; i<=n; i++){
            result&=a[i];
        }
        cout<<result<<endl;
    }
    return 0;
}