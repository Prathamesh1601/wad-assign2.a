#include<iostream>
using namespace std;

int main(){
	
	int a=10;
	int &b=a;
	int *c=&a;
	cout<<c;
	
	cout<<b;
	return 0;
}
