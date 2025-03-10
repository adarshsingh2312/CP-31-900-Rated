#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        pair<int,int>a;
        cin>>a.first>>a.second;
        ll x = a.first;//yoyo 1 x
        ll y = a.second;//yoyo 1 y
        ll w = 0;//yoyo 2 x
        ll z = 0;//yoyo 2 y
        pair<ll,ll>c1;
        pair<ll,ll>c2;
        pair<ll,ll>c3;
        pair<ll,ll>c4;
        c1 = make_pair(1,1);
        c2 = make_pair(1,m);
        c3 = make_pair(n,1);
        c4 = make_pair(n,m);
        ll d1 = abs((a.first)-(c1.first)) + abs((a.second)-(c1.second));
        ll d2 = abs((a.first)-(c2.first)) + abs((a.second)-(c2.second));
        ll d3 = abs((a.first)-(c3.first)) + abs((a.second)-(c3.second));
        ll d4 = abs((a.first)-(c4.first)) + abs((a.second)-(c4.second));
        ll k = max(d1,d2);
        k = max(k,d3);
        k = max(k,d4);
        if(k==d1){
            cout<<c4.first<<" "<<c4.second<<" "<<c1.first<< " "<<c1.second<<endl;
        }
        else if(k==d2){
            cout<<c3.first<<" "<<c3.second<<" "<<c2.first<< " "<<c2.second<<endl;

        }
        else if(k==d3){
            cout<<c2.first<<" "<<c2.second<<" "<<c3.first<< " "<<c3.second<<endl;

        }
        else if(k==d4){
            cout<<c1.first<<" "<<c1.second<<" "<<c4.first<< " "<<c4.second<<endl;

        }
    }
    return 0;
}