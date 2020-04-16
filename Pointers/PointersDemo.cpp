#include<bits/stdc++.h>
using namespace std;
int main(){

int i = 10;
int* p = &i;
cout<<p<<endl;
cout<<*p<<endl;
cout<<&p<<endl;
cout<<sizeof(p)<<endl;
i++;
cout<<p<<endl;
cout<<*p<<endl;
cout<<&p<<endl;
cout<<sizeof(p)<<endl;

return 0;


}

