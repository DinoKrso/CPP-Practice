#include<iostream>

using namespace std;
int main(){
	int StanjeRacuna ;
	cout<<"\t KUPOVINA VIDEO IGRICA"<<endl ;
	cout<<"Molimo vas unesite stanje vaseg bankovnog racuna: ";
	cin>> StanjeRacuna;
	cout<<endl;
	cout<<"Vas racun iznosi: "<< StanjeRacuna;
	cout<<endl;
	cout<<"IGRICE KOJE SU NA STANJU: "<<endl;
	cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
	int igra1=50,igra2=20,igra3=40,igra4=100 ;
	cout<<"1.GTA5"<<endl;
	cout<<"---------------"<<endl;
	cout<<"2.FarCry 5"<<endl;
	cout<<"---------------"<<endl;
	cout<<"3.FIFA18"<<endl;
	cout<<"---------------"<<endl;
	cout<<"4.FORTNITE"<<endl;
	cout<<"---------------"<<endl;
	cout<<endl;
	int odabir;
	cout<<"Izaberite igricu koju zelite pod njenim rednim brojem: ";
	cin>>odabir;
	if(odabir==1  ){
		cout<<"Odabrali ste igricu GTA5 koja kosta 50KM"<<endl ;
		cout<<"Trenutno stanje vaseg racuna nakon kupovine igrice iznosi: "<<StanjeRacuna-igra1<<endl;
		cout<<endl;
		cout<<"+-----------------+"<<endl;
		cout<<"|Hvala na kupovini|"<<endl;
		cout<<"+-----------------+";
		
		
	}
	else if(odabir==2 ){
			cout<<"Odabrali ste igricu FarCry 5 koja kosta 20KM"<<endl ;
		cout<<"Trenutno stanje vaseg racuna nakon kupovine igrice iznosi: "<<StanjeRacuna-igra2<<endl;
			cout<<endl;
		cout<<"+-----------------+"<<endl;
		cout<<"|Hvala na kupovini|"<<endl;
		cout<<"+-----------------+";
		
	}
	else if(odabir==3 ){
			cout<<"Odabrali ste igricu FIFA18 koja kosta 40KM"<<endl ;
		cout<<"Trenutno stanje vaseg racuna nakon kupovine igrice iznosi: "<<StanjeRacuna-igra3<<endl;
			cout<<endl;
		cout<<"+-----------------+"<<endl;
		cout<<"|Hvala na kupovini|"<<endl;
		cout<<"+-----------------+";
		
		
		
	}
   else if(odabir==4 ){
   		cout<<"Odabrali ste igricu FORTNITE koja kosta 100KM"<<endl ;
		cout<<"Trenutno stanje vaseg racuna nakon kupovine igrice iznosi: "<<StanjeRacuna-igra4<<endl;
			cout<<endl;
		cout<<"+-----------------+"<<endl;
		cout<<"|Hvala na kupovini|"<<endl;
		cout<<"+-----------------+";
		
   }
    
  
   
  
               
	
	
	
	
	
	return 0;
}
