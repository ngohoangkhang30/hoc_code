#include <bits/stdc++.h>
using namespace std;

int main(){
	float a,b,c,p,min1,max1,mid1,min2,max2;
    cin >>a;
    cin >>b;
    cin >>c;
    p=(a+b+c)/2;
    min2=min(b,c) ;
    max2=max(b,c) ;
    min1= min ( min2 ,a);       
    max1= max ( max2 ,a);
    mid1= p*2-min1-max1;
    if(min1 == mid1 && mid1 != max1 ) {
        cout<<fixed<<setprecision(2)<<"Tam giac can, dien tich = "<<sqrt(p*(p-a)*(p-b)*(p-c));
        return 0;
    }
    if ((pow (min1 ,2) + pow(mid1,2))==pow(max1,2)){
        cout<<fixed<<setprecision(2)<<"Tam giac vuong, dien tich = "<<min1*mid1*0.5;
        return 0;
    }
    if (min1==max1 && min1==mid1){
        cout<<fixed<<setprecision(2)<<"Tam giac deu, dien tich = "<<(pow(mid1,2)*sqrt(3))/2;
        return 0;}
    if (min1 + mid1 <= max1 ||a==0 ||b==0 ||c==0 ){
        cout <<"Khong phai tam giac"; 
        return 0;
    }
    else {cout<<fixed<<setprecision(2)<<"Tam giac thuong, dien tich = "<< sqrt(p*(p-a)*(p-b)*(p-c));
    }
}
