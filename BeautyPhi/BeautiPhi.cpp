#include<bits/stdc++.h>
using namespace std;
int main(){
 long double a,b,res1,res2,points;
 cout<<"Enter the distance between HEAD and BOTTOM of NECK in CM:"<<endl;
 cin>>a;
 cout<<"Enter the value between EyeBrows and BOTTOM of NECK in CM"<<endl;
 cin>>b;
 res1 = a / b;
 res2 = (a+b)/a;
 points = ((100*res1)/res2)/10L;

 cout<<"The point of your beauty is "<<points<<endl;
}

