#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr: m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){

    map<int,string >m;
    m[1]="abc";
    m[5]="efwe";
    m[3]="efwef";
    m.insert({4,"dqd"});
    auto it=m.find(3);//logn 
    m.erase(3);//logn
    m.erase(it);
    print(m);








    // if(it==m.end()){
    //     cout<<"NO VALUE";

    // }
    // else{
    //     cout<<(*it).first<<" "<<(*it).second;
    // }
    // for(auto &pr : m){
    //     cout<<pr.first<<" "<<pr.second<<endl;
    // }

    return 0;
}