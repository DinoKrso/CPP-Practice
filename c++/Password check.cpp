#include<iostream>

using namespace std;
int main (){
char a,b,c,e,f,g ;
char i,j,k,l,m,n ;
cout<<"Enter password of 6 characters: ";
cin>>a>>b>>c>>e>>f>>g ;
cout<<"Confirm password: " ;
cin>>i>>j>>k>>l>>m>>n ;
 
if(a==i && b==j && c==k && e==l && f==m && g==n) cout<<"Password is correct" ;
else cout<<"Error, password doesn't match" ;





return 0 ;
}
