#include<iostream>
using namespace std;
double racunocjena(int ocjena,int ocjene[]){
	int racun=0;
	for(int i=0;i<ocjena;i++){
		racun+=ocjene[i];
		
	}
   racun=racun/ocjena;
   return racun;
	
}
int main(){
	string predmeti[15];
	int brojpredmeta;
	cout<<"Unesite broj predemeta: ";
	cin>>brojpredmeta;
	cout<<"+----------------------------------------+"<<endl;
	for(int i=0;i<brojpredmeta;i++){
		cout<<"Unesi "<<i+1<<" Predmet: ";
		cin>>predmeti[i];
	}
	double prosjek=0;
	int ocjena;
	int ocjene[5];
	for(int i=0;i<brojpredmeta;i++){
		cout<<"+----------------------------------------+"<<endl;
		
		cout<<"Koliko imate ocjena iz "<<predmeti[i]<<" :";
		cin>>ocjena;
		
		for(int j=0;j<ocjena;j++){
			cout<<"Unesi "<<j+1<<" ocjenu: ";
			cin>>ocjene[j];
			
		}
		
		prosjek+=racunocjena(ocjena,ocjene);
		
		
	}
	cout<<"+----------------------------------------+"<<endl;
	cout<<"Vas prosjek je: "<<prosjek/brojpredmeta;
	

	
  

	
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	return 0 ;
	
	}
	

