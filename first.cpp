#include<bits/stdc++.h>
using namespace std;
double sum(double a, double b){
   return a + b;
}

double mult(double c,double d){
    return c * d;
}

double subs(double e,double f){
    return e - f;
}

double divi(double g,double h){
    return g / h;
}





int main(){
     
     double x,y;
     int num;
     cout<<"first:"<<endl;
   cin>>x;
   cout<<"second:"<<endl;
   cin>>y;
 

   cout<<"enter your choice"<<endl;
   cout<<"enter 1 for sum,2 for sub,3 for multi,4 for divide"<<endl;
   cin>>num;

   switch (num) {

    case 1:
      cout<<"The sum is "<<sum(x,y)<<endl;
      break;
    case 2:
      cout<<"The subs is "<<subs(x,y)<<endl;
      break;
    case 3:
      cout<<"The mult is "<<mult(x,y)<<endl;
      break;
    case 4:
      cout<<"The divi is "<<divi(x,y)<<endl;
      break;
    default:
      cout<<"enter between 1-4."<<endl;    


   }

   return 0;
 



}