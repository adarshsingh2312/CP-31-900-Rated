#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<" "<<0<<endl;
            continue;
        }
        ll gcdMax = abs(a-b);
        ll ops = 0;
        ops = min(b%gcdMax,gcdMax-(b%gcdMax));
        cout<<gcdMax<<" "<<ops<<endl;
    }
    return 0;
}