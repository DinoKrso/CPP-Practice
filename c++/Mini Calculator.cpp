#include<iostream>

using namespace std;
int main(){
	int brojevi ;
	cout<<"\t CALCULATOR" ;
	cout<<endl;
	
	cout<<"How much numbers u want to enter?(up to 3 numbers) : ";
    cin>> brojevi ;
    
    if(brojevi==2){
    	int a,b ;
    	cout<<"Enter first number: ";
    	cin>> a ;
    	cout<<"Enter second number: ";
    	cin>> b ;
    	int racunskar ;
    	cout<<"Enter operation(+, - , * , /): " ;
    	cin>> racunskar ;
            if(racunskar=='+') cout<<"Result is: "<<a+b ;
            else if(racunskar=='-') cout<<"Result is: "<<a-b;
            else if(racunskar=='*') cout<<"Result is: "<<a*b;
            else if(racunskar=='/') cout<<"Result is: "<<a/b ;
	}
else if(brojevi==3){
	int a,b,c ;
		cout<<"Enter first number: ";
    	cin>> a ;
    	cout<<"Enter second number: ";
    	cin>> b ;
    	cout<<"Enter third number:" ;
    	cin>> c ;
    	int racunskar ;
    	cout<<"Enter operation(+, - , * , /): ";
    		cin>> racunskar ;
            if(racunskar=='+') cout<<"Result is: "<<a+b+c ;
            else if(racunskar=='-') cout<<"Result is: "<<a-b-c;
            else if(racunskar=='*') cout<<"Result is: "<<a*b*c;
            else if(racunskar=='/') cout<<"Result is: "<<a/b/c ;
}
	
	return 0 ;
}
