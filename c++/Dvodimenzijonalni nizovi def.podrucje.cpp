#include<iostream>

using namespace std;
int main(){
	 
    int niz[3][3];
    cout<<"Unesi prvi red: ";
    for(int i=0;i<3;i++){
    	cin>> niz[i][0] ;
	}
	
	cout<<"Unesi drugi red: ";
   for (int i=0;i<3;i++){
   	cin>> niz[1][i] ;
   }
	cout<<"Unesi treci red: ";
	for (int i=0;i<3;i++){
		cin>>niz[2][i];
	}
	
	
	cout<<"  |"<<niz[1][0]<<" "<<niz[2][0]<<" "<<niz[3][0]<<"|"<<endl ;
	cout<<"  |                                               |"<<endl;
	cout<<"D=|"<<niz[1][0]<<" "<<niz[1][1]<<" "<<niz[1][2]<<"|=0"<<endl ;
    cout<<"  |                                               |"<<endl;
	cout<<"  |"<<niz[2][0]<<" "<<niz[2][1]<<" "<<niz[2][2]<<"|" <<endl;
	
	
	
	
	
	
	
	
	
	return 0 ;
}
