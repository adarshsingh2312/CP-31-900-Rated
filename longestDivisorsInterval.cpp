#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef unsigned long long ull;

int main(){
    int t;
    cin>>t;
    while(t--){
        ull n;
        cin>>n;
        ull i = 1;
        while(i++){
            if(n%i!=0){
                cout<<(i-1)<<endl;
                break;
            }
        }
    }
    return 0;
}