#include <bits/stdc++.h>
using namespace std;

int main(){
   float a,b,c,delta;
   cin >> a;
   cin >> b;
   cin >> c;
   delta =pow(b,2)-4*a*c;
   if (delta>0 && a!=0 ) {
	cout<<"PT co hai nghiem phan biet:"<<endl;
	cout<<"x1 = "<< (-b+sqrt(delta))/(2*a)<<endl;
	cout<<"x2 = "<< (-b-sqrt(delta))/(2*a);
	return 0;
   }
   if(delta==0 && a!=0 ){
	cout<<"PT co nghiem kep: x1 = x2 = "<<-b/(2*a);
	return 0;
   }
   else {cout << "PTVN";}
}
