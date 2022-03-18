#include <bits/stdc++.h>
using namespace std;

void zathras(int a, int b, int alpha, int beta, long long int y) {
	if(y==0)
		return;
	int babyzath = (min(a,b))*0.02;

	int babyacro = (babyzath * alpha)/100;

	int babybonc = (babyzath * beta)/100;

	int rembaby = babyzath - babyacro - babybonc;

	int decompa = a*0.01;

	int decompb = b*0.01;

	a+=babyacro+(rembaby/2);

	if (rembaby % 2 == 0) 
		b+=babybonc+(rembaby/2);
	else 
		b+=babybonc+((rembaby/2) +1);

	a-=decompa;
	b-=decompb;
	zathras(a,b,alpha,beta,y-1);

}

int main() {
	int a,b,alpha,beta,y;
	cin>>a>>b>>alpha>>beta>>y;

	zathras(a,b,alpha,beta,y);

	cout<<a<<" "<<b;
	return 0;
}