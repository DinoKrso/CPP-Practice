#include<iostream>

using namespace std ;
int main ()
{
int a ;
cout<<"Enter age: ";
cin>> a ;
if(a < 17) {
	cout<<"You are underage" ;
}
if (a>=18 and a<60) {
	cout<<"You are adult" ;
} 
if(a>60) {
	cout<<"You are old!" ;
}
return 0 ;

}
 

