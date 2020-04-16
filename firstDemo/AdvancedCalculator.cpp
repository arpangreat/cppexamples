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

void norCal(){
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

}

void matrix2(){
	double matrix2arr[2][2];
	double r1c1,r1c2,r2c1,r2c2;
	r1c1 = matrix2arr[0][0];
	r1c2 = matrix2arr[0][1];
	r2c1 = matrix2arr[1][0];
	r2c2 = matrix2arr[1][1];
	cout<<"Enter Row1-Col1"<<endl;
	cin>>r1c1;
	cout<<"Enter Row1-Col2"<<endl;
	cin>>r1c2;
	cout<<"Enter Row2-Col1"<<endl;
	cin>>r2c1;
	cout<<"Enter Row2-Col2"<<endl;
	cin>>r2c2;
        int n;
	cout<<"Enter 1 for normal and 2 for determinante"<<endl;
	cin>>n;
	switch(n){
		case 1:
		 cout<<" "<<endl;
		 cout<<"| "<<r1c1<<" "<<r1c2<<" |"<<endl;
		 cout<<"| "<<r2c1<<" "<<r2c2<<" |"<<endl;
		 break;
		case 2:
		 cout<<"Your result of determinante of given Matrix is:"<<endl;
		 cout<<((r1c1*r2c2)-(r1c2*r2c1))<<endl;
		 break;
	}
}

void matrix3(){
	double matrix3arr[3][3];
	double r1c1,r1c2,r1c3,r2c1,r2c2,r2c3,r3c1,r3c2,r3c3;
	r1c1 = matrix3arr[0][0];
	r1c2 = matrix3arr[0][1];
	r1c3 = matrix3arr[0][2];
	r2c1 = matrix3arr[1][0];
 	r2c2 = matrix3arr[1][1];
	r2c3 = matrix3arr[1][2];
	r3c1 = matrix3arr[2][0];
	r3c2 = matrix3arr[2][1];
        r3c3 = matrix3arr[2][2];

	cout<<"Enter Row1-Col1"<<endl;
	cin>>r1c1;
	cout<<"Enter Row1-Col2"<<endl;
	cin>>r1c2;
	cout<<"Enter Row1-Col3"<<endl;
	cin>>r1c3;
	cout<<"Enter Row2-Col1"<<endl;
	cin>>r2c1;
 	cout<<"Enter Row2-Col2"<<endl;
	cin>>r2c2;
	cout<<"Enter Row2-Col3"<<endl;
	cin>>r2c3;
	cout<<"Enter Row3-Col1"<<endl;
	cin>>r3c1;
	cout<<"Enter Row3-Col2"<<endl;
	cin>>r3c2;
	cout<<"Enter Row3-Col3"<<endl;
	cin>>r3c3;
        int n;
	cout<<"Enter 1 for normal and 2 for determinante"<<endl;
	cin>>n;
	double val1 = ((r2c2*r3c3)-(r2c3*r3c2));
	double val2 = ((r2c1*r3c3)-(r2c3*r3c1));
	double val3 = ((r2c1*r3c2)-(r3c1*r2c2));
	switch(n){
		case 1:
		 cout<<" "<<endl;
		 cout<<"| "<<r1c1<<" "<<r1c2<<" "<<r1c2<<" |"<<endl;
		 cout<<"| "<<r2c1<<" "<<r2c2<<" "<<r2c3<<" |"<<endl;
		 cout<<"| "<<r3c1<<" "<<r3c2<<" "<<r3c3<<" |"<<endl;
		 break;
		case 2:
		 cout<<"Your result of determinante of given Matrix is:"<<endl;
		 cout<<((r1c1*val1)-(r1c2*val2)+(r1c3*val3))<<endl;
		 break;
	}

}
int main(){
    int x;
    cout<<"Enter 1 for normal calculator or 2 for (2*2) matrix calulator or 3 for (3*3) matrix calculator or 4 for quit"<<endl;
    cin>>x;
    switch(x){
	    case 1:
		norCal();
		break;
	    case 2:
		matrix2();
		break;
	    case 3:
		matrix3();
		break;
	    case 4:
		break;

            default:
		break;

	     
    }
   return 0;
}
