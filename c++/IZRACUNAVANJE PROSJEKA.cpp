#include<iostream>
#include<iomanip>

using namespace std;

inline void kraj(){
	cout<<endl;
	   cout<<"-----------------------------KRAJ-------------------------------";
	   cout<<endl;
}
void ukras(){
	cout<<"\t+------------------------------------------------+"<<endl;
	cout<<"\t|            IZRACUNAVANJE PROSJEK               |"<<endl;
	cout<<"\t+------------------------------------------------+"<<endl;
	cout<<"\t|                   UPUTE:                       |"<<endl;
	cout<<"\t|Ocjene unositi odvojeno space-om                |"<<endl;
	cout<<"\t|Kada zavrsite unestite nulu za sljedeci predmet |"<<endl;
	cout<<"\t|Primjer(BOSANSKI: 5 4 4 0 )                     |"<<endl;
	cout<<"\t+------------------------------------------------+";
}



double   bosanski(int a){
	int bb=0;
	cout<<"BOSANSKI: ";
    
    	double bosanskii=0;
	while(a!=0){
		cin>>a;
		 if(a==0) break;
		else {
		bosanskii+=a;
		bb++;
	 }
	}
	double prosjecna;
	prosjecna=bosanskii/bb;
	
	return prosjecna;
    
}

double matematika(int a){
	  int bb=0;
		cout<<"MATEMATIKA: ";
    
    	double matematikaa=0;
	while(a!=0){
		cin>>a;
		if(a==0) break;
		else{
		 matematikaa+=a;
		 bb++;
	 }
	}
	double prosjecna;
	prosjecna=matematikaa/bb;
	
	return prosjecna;
}
double engleski(int a){
	int bb=0;
		cout<<"ENGLESKI: ";
    
    	double engleskii=0;
	while(a!=0){
		cin>>a;
		if(a==0) break;
		else{
	    engleskii+=a;
		bb++;
		}
	}
	double prosjecna;
	prosjecna=engleskii/bb;
	
	return prosjecna;
}
double njemacki(int a){
	int bb=0;
		cout<<"NJEMACKI: ";
    
    	double  njemackii=0;
	while(a!=0){
		cin>>a;
		if(a==0) break;
		else{
		 njemackii+=a;
		bb++;
	}
	}
	
	double prosjecna;
	prosjecna=njemackii/bb;
	
	return prosjecna;
}
double biologija(int a){
	int bb=0;
		cout<<"BIOLOGIJA: ";
    
    	double biologijaa=0;
	while(a!=0){
		cin>>a;
		if(a==0) break;
		else {
		biologijaa+=a;
		bb++;
		}
	}
	
	double prosjecna;
	prosjecna=biologijaa/bb;
	
	return prosjecna;
}
double  hemija(int a){
	int bb=0;
		cout<<"HEMIJA: ";
    
    	double hemijaa=0;
	while(a!=0){
		cin>>a;
		if(a==0) break;
		else{
		 hemijaa+=a;
		bb++;
	}
	}
	
	double prosjecna;
	prosjecna=hemijaa/bb;
	
	return prosjecna;
}
double programiranje(int a){
	int bb=0;
		cout<<"PROGRAMIRANJE: ";
    
    	double programiranjee=0;
	while(a!=0){
		cin>>a;
		if(a==0) break;
		else {
		programiranjee+=a;
		bb++;
	}
	}
	
	double prosjecna;
	prosjecna=programiranjee/bb;
	
	return prosjecna;
}
double informatika(int a){
	int bb=0;
		cout<<"INFORMATIKA: ";
    
    	double informatikaa=0;
	while(a!=0){
		cin>>a;
		if(a==0) break;
		else {
		informatikaa+=a;
		bb++;
	}
	}
	
	double prosjecna;
	prosjecna=informatikaa/bb;
	
	return prosjecna;
}
double sport(int a){
	int bb=0;
		cout<<"SPORT: ";
    
    	double sportt=0;
	while(a!=0){
		cin>>a;
		if(a==0) break;
		else {
		sportt+=a;
		bb++;
	}
	}
	
	double prosjecna;
	prosjecna=sportt/bb;
	
	return prosjecna;
}
double fizika(int a){
	int bb=0;
		cout<<"FIZIKA: ";
    
    	double fizikaa=0;
	while(a!=0){
		cin>>a;
		if(a==0) break;
		else{
		 fizikaa+=a;
		bb++;
	}
	}
	
	double prosjecna;
	prosjecna=fizikaa/bb;
	
	return prosjecna;
}
double  vjeronauka(int a){
	int bb=0;
		cout<<"VJERONAUKA/DKR: ";
    
    	double vjeronaukaa=0;
	while(a!=0){
		cin>>a;
		if(a==0) break;
		else{
		 vjeronaukaa+=a;
		bb++;
	}
	}
	
	double prosjecna;
	prosjecna=vjeronaukaa/bb;
	
	return prosjecna;
}
double historija(int a){
	int bb=0;
		cout<<"HISOTRIJA: ";
    
    	double  historijaa=0;
	while(a!=0){
		cin>>a;
		if(a==0) break;
		else{
		historijaa+=a;
		bb++;
	}
	}
	
	double prosjecna;
	prosjecna=historijaa/bb;
	
	return prosjecna;
}
double geografija(int a){
	int bb=0;
		cout<<"GEOGRAFIJA: ";
    
    	double geografijaa=0;
	while(a!=0){
		cin>>a;
		if(a==0) break;
		else {
		geografijaa+=a;
		bb++;
	}
	}
	
	double prosjecna;
	prosjecna=geografijaa/bb;
	
	return prosjecna;
}
double  muzicko(int a){
	int bb=0;
		cout<<"MUZICKO: ";
    
    	double muzickoo=0;
	while(a!=0){
		cin>>a;
		if(a==0) break;
		else {
		muzickoo+=a;
		bb++;
		}
	}
	
	double prosjecna;
	prosjecna=muzickoo/bb;
	
	return prosjecna;
}



int main(){
	int a;
	
	double prosjek=0;
	char odabir;
	ukras();
	cout<<endl;
	cout<<"Zelite li nastaviti (d/n): ";
	cin>>odabir;
	if(odabir=='d'){
	
    prosjek=(bosanski(a)+matematika(a)+engleski(a)+njemacki(a)+biologija(a)+hemija(a)+programiranje(a)+informatika(a)+sport(a)+fizika(a)+vjeronauka(a)+historija(a)+geografija(a)+muzicko(a))/14;
	cout<<"Vas prosjek je: "<<prosjek ;
}
else kraj();
            
	return 0;
}
