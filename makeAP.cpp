#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        bool yes = false;
        if((((2*b)-c)%a==0) && (2*b - c)>0){
            yes = true;
        }
        if((c+a)%(2*b)==0){
            yes = true;
        }
        if((2*b-a)>0 && ((2*b)-a)%c==0){
            yes = true;
        }
        if(yes) cout<<"yEs"<<endl;
        else    cout<<"nO"<<endl;
    }
    return 0;
}