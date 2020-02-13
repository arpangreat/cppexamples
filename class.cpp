#include<bits/stdc++.h>
#include<string>
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
    Person p1("Swastik",18);
    Person p2("Priyanka",16);
    cout<<p1.getName()<<" loves "<<p2.getName()<<endl;
    cout<<"They are "<<p1.getAge()<<" and "<<p2.getAge()<<" years old so the marriage will be satisfing."<<endl;
    
}