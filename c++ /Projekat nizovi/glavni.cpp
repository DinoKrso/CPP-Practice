#include <iostream>
#include <string>
#include "Niz.h"

using namespace std;
int main() {
try{
    int vel1, vel2;
    cout << "Unesi velicinu niza A: ";
    cin >> vel1;
    Niz a(vel1);
    a.unesiNiz();

    cout << "Unesi velicinu niza B: ";
    cin >> vel2;
    Niz b(vel2);
    b.unesiNiz();

    int i(0),broj,pomocna;
    Niz c,d;

    while(i != 12){
    cout<<"------------------------------"<<endl;
    cout<<" 1. Ispisi nizove."<<endl;
	cout<<" 2. Ispisi velicine nizova."<<endl;
	cout<<" 3. Ispisi element niza A."<<endl;
	cout<<" 4. Ispisi element niza B."<<endl;
	cout<<" 5. Sortiraj niz A."<<endl;
    cout<<" 6. Sortiraj niz B."<<endl;
	cout<<" 7. Promijeni element niza A."<<endl;
	cout<<" 8. Promijeni element niza B."<<endl;
	cout<<" 9. Saberi nizove (A+B)."<<endl;
	cout<<" 10. Oduzmi nizove (A-B)."<<endl;
	cout<<" 11. Uporedi velicine nizova."<<endl;
	cout<<" 12. Prekid programa."<<endl;
	cout<<"------------------------------"<<endl;
    cout <<"Unesite redni broj: ";
    cin >>i;

    switch(i){
        case 1:
            cout<<"Niz A: "; a.IspisiNiz();
			cout<<"Niz B: "; b.IspisiNiz();
            break;

        case 2:
            cout<<"Velicina niza A: "<<a.velicinaNiza()<<endl;
			cout<<"Velicina niza B: "<<b.velicinaNiza()<<endl;
            break;
        case 3:
            cout<<"Unesite indeks elementa niza A koji zelite da ispisete: ";
            cin>>broj;
            cout<<"A["<<broj<<"] = "<<a[broj]<<endl;
            break;
        case 4:
            cout<<"Unesite indeks elementa niza B koji zelite da ispisete: ";
            cin>>broj;
            cout<<"B["<<broj<<"] = "<<b[broj]<<endl;
            break;
        case 5:
            a.sortirajNiz();
            cout<<"Niz A: "; a.IspisiNiz();
            break;
        case 6:
            b.sortirajNiz();
            cout<<"Niz B: "; b.IspisiNiz();
            break;
        case 7:
            cout<<"Unesite indeks elementa niza A koji zelite da promijenite: ";
            cin>>broj;
            cout<<"Unesite vrijednost elementa niza A: ";
            cin>>pomocna;
            a[broj] = pomocna;
            cout<<"Niz A: "; a.IspisiNiz();
            break;
        case 8:
            cout<<"Unesite indeks elementa niza B koji zelite da promijenite: ";
            cin>>broj;
            cout<<"Unesite vrijednost elementa niza B: ";
            cin>>pomocna;
            b[broj] = pomocna;
            cout<<"Niz B: "; b.IspisiNiz();
            break;
        case 9:
            c=a+b;
            cout<<"Niz C: "; c.IspisiNiz();
            break;
        case 10:
            d=a-b;
            cout<<"Niz D: "; d.IspisiNiz();
            break;
        case 11:
            if(a>b) std::cout<<"Niz A je duzi od niza B.\n";
            else if(a<b) cout<<"Niz B je duzi od niza A.\n";
            else if(a==b) cout<<"Velicina niza A je jednaka velicini niza B.\n";
            break;
        case 12:
            cout<<"\nDovidjenja!";
            break;
        default:
            cout<<"Nije unesen ispravan broj. Molimo pokusajte ponovo!\n ";
            break;
    }
}
}

catch(string e){
    cout<<e;
}
return 0;
}
