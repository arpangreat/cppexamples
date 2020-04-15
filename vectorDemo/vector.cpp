#include<bits/stdc++.h>
using namespace std;
int main(){

    map<string,int> datab;
    string name;
    int age;
   
    cout<<"Enter the name:"<<endl;
    cin>>name;
    cout<<"Enter the age:"<<endl;
    cin>>age;
    datab[name] = name;
    datab[age] = age;

    cout<<datab[name]<<" "<<"is "<<datab[age]<<" "<<"years old"<<endl;







    
}
