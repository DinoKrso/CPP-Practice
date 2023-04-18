#include<iostream>
#include<cmath>
using namespace std;
int main (){
	int a,zbirparnih=0,zbirneparnih=0 ;
	cout<<"Enter number: ";
	cin>> a ;
	for(int i=1;i<=a;i++){
		if(i%2==0) zbirparnih+=i ;
		else zbirneparnih+=i ;
	}
	cout<<"Sum even numbers until given number:   "<<zbirparnih ;
	cout<<"          Sum odd numbers until given number :     "<<zbirneparnih ;
}
