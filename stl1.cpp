#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> v){
	cout<<"size "<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

void printvec1(vector<string> &v){
	cout<<"size "<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}



int main(){
	
	vector<int> v;
	vector<string> v1;
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x); 
	}
	
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		v1.push_back(s);
	}
	printvec(v);
	printvec1(v1);	

	return 0;
}
