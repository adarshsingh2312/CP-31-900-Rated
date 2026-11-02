#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;//
        cin>>a>>b;
        pair<int,int>k;// 1 2
        cin>>k.first>>k.second;
        pair<int,int>q;//3 3
        cin>>q.first>>q.second;
        set<pair<int,int>>co_king = {{k.first+a,k.second+b},{k.first+a,k.second-b},{k.first-a,k.second+b},{k.first-a,k.second-b},
                                            {k.first+b,k.second+a},{k.first-b,k.second+a},{k.first+b,k.second-a},{k.first-b,k.second-a}};
        
        set<pair<int,int>>co_queen = {{q.first+a,q.second+b},{q.first+a,q.second-b},{q.first-a,q.second+b},{q.first-a,q.second-b},
                                                {q.first+b,q.second+a},{q.first-b,q.second+a},{q.first+b,q.second-a},{q.first-b,q.second-a}};
        set<pair<int,int>>s;
        int count = 0;
        for(auto &pos : co_queen){
            if(co_king.count(pos)){
                count++;
            }
        }
        cout<<count<<endl;
    }          
    return 0;          
}