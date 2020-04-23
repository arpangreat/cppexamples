#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter the number"<<endl;
cin>>n;
// First Componet
cout<<"*";
for(int i=1;i<=(n-3)/2;i++){
	cout<<" ";
}
for(int i=1;i<=(n+1)/2;i++){
	cout<<"*";
}
cout<<endl;

//second Componet
for(int rows=1;rows<=(n-3)/2;rows++){
	cout<<"*";
	//spaces
	for(int i=1;i<=(n-3)/2;i++){
		cout<<" ";
	}
	cout<<"*"<<endl;
}

//Third
for(int i=1;i<=n;i++){
	cout<<"*";
}
cout<<endl;

//Fourth Component
for(int rows=1;rows<=(n-3)/2;rows++){

	//spaces
	for(int i=1;i<=(n-3)/2+1;i++){
		cout<<" ";
	}
	
	//star
	cout<<"*";

	//spaces
	for(int i=1;i<=(n-3)/2;i++){
		cout<<" ";
	}	

	//star
	cout<<"*"<<endl;

}

//fifth Component
//stars
for(int i=1;i<=(n+1)/2;i++){
	cout<<"*";
}
//spaces
for(int i=1;i<=(n-3)/2;i++){
	cout<<" ";
} 
//single star
cout<<"*"<<endl;
}

