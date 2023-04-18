#include<iostream>

using namespace std;
int main(){
	int stanjeracuna=0,uplataisplata;
	char izbor ;
	do{
	 cout<<" "<<endl;
	
	cout<<"U-Uplata na racun"<<endl;
	cout<<"I-Isplata sa racuna"<<endl;
	cout<<"S-Stanje racuna"<<endl;
	cout<<"K-kraj"<<endl;
	cout<<"Izaberite uslugu : " ;
	cin>>izbor ;
	if(izbor=='u'or 'U') {
		cout<<"Koliko zelite uplatit: ";
		cin>>uplataisplata ;
		stanjeracuna+=uplataisplata ;
		cout<<"Uplatili ste: "<<uplataisplata<<" Tretuntno stanje racuna je: "<<stanjeracuna ;
	}
	else if(izbor=='i'or'I'){
		cout<<"Koliko zelite isplatiti sa racuna: ";
		cin>>uplataisplata;
		stanjeracuna-=uplataisplata;
		cout<<"Isplatili ste: "<<uplataisplata<<"Trenutno stanje racuna je: "<<stanjeracuna;
	}
	else if(izbor=='s'or'S'){
		cout<<"Balance: "<<stanjeracuna;
		cout<<"------------------------";
	}
}
	while(izbor!='K'or'k') ;
	return 0 ;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
