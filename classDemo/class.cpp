#include<bits/stdc++.h>
using namespace std;
class Person{
   public:
     Person(string nm , int a){
       setName(nm);
       setAge(a);
     }
     
    void setName(string x){
        name = x;
    }

    void setAge(int y){
        age = y;
    }
    
    string getName(){
        return name;
    }
   
    int getAge(){
        return age;
    }
private:
 string name;
 int age;


};



int main(){
    
    string a1;
    string a2;
int b1;
int b2;

cout<<"Enter the first name:"<<endl;
cin>>a1;

cout<<"Enter the first age:"<<endl;
cin>>b1;
cout<<"Enter the second name:"<<endl;
cin>>a2;
cout<<"Enter the second age:"<<endl;
cin>>b2;
    Person p1(a1,b1);
    Person p2(a2,b2);
    cout<<p1.getName()<<" loves "<<p2.getName()<<endl;
    if(p1.getAge() >= p2.getAge()){
    cout<<"They are "<<p1.getAge()<<" and "<<p2.getAge()<<" years old so the marriage will be satisfing."<<endl;
    } 

    else{
      cout<<"They are "<<p1.getAge()<<" and "<<p2.getAge()<<" years old so the marriage will not be satisfing."<<endl;

    }
}
