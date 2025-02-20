#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,n;
        cin>>x>>n;
        ll d = 0;
        switch(n%4){
            case 0 : d = 0;
                break;
            case 1 : d = -n;
                break;
            case 2 : d = 1;
                break;
            case 3 : d = n+1;
                break;
        }
        if(x%2==0)  cout<<(x+d)<<endl;
        else    cout<<(x-d)<<endl;
    }
    return 0;
}