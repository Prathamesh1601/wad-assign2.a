#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={2,3,5,6,7};
	for(int i=0;i<v.size();++i){
		cout<< v[i]<<" ";
	}
	
	cout<<endl;
	vector<pair<int,int> > v_p={{2,3},{1,2},{3,4}};
	vector<pair<int,int> > :: iterator it;
	for(auto it= v_p.begin();it !=v_p.end();it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
    
    for(int value: v){
        cout<<value;
    }
    cout<<endl; 

    vector<pair<int,int> >v_p1={{1,2},{2,3},{3,4}};
    for(auto value: v_p1){
        cout<<value.first<<" "<<value.second<<endl;
    }
    cout<<endl;


    for(auto it=v.begin();it!=v.end();it++){
        cout<<(*it)<<" ";
    }
    return 0;
}