#include <bits/stdc++.h>
using namespace std;

void gendash (int length) {
	cout<<"+-";
		for(int i=0;i<length;i++)
		cout<<"-";
	cout<<"-+"<<endl;
}

int main() {
	int t;
	cin>>t;
	cin.ignore();
	for(int i=1; i<=t; i++) {
		string str;
		getline(cin,str);

		int len = str.size();
		cout<<"Case #"<<i<<":"<<endl;
		gendash(len);
		cout<<"| "<<str<<" |"<<endl;
		gendash(len);
	}
	return 0;
}