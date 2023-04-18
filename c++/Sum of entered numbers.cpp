#include<iostream>

using namespace std;
int main(){
	int broj, zbirbrojeva=0;
	cout<<"Enter numbers (0 means end): " ;
     while(broj!=0){
     	cin>>broj;
     	if(broj==0) break;
     	else zbirbrojeva+=broj;
	 }
	cout<<"Sum of entered numbers: "<<zbirbrojeva;
	
	
	
	
	return 0 ;
}
