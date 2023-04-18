#include<iostream>

using namespace std;

int racunanje(int n){
	if(n<0) throw "U entered negative number";
	if(n!=int(n)&&cin)throw "Decimal number was entered";
	return  n+10 ;
}


int main(){
	int n ;
	cout<<"Enter number: " ;
	cin>> n;
	try{
		int rezultat=racunanje(n);
		cout<<rezultat;
	}
	catch(const char poruka[]){
		cout<<poruka ;
		
	}
	
	
	
	
	return 0;
}
