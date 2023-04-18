#include <iostream>
#include <string>
#include "Niz.h"

Niz::Niz(){}
Niz::Niz(int vel){ velicina = vel;}
void Niz::unesiNiz(){

    cout<<"Unesi cjelobrojne elemente niza: \n";
    for(int i(0); i < velicina; i++){
        cin>>elementi[i];
    }
}
void Niz::IspisiNiz(){
     for(int i(0); i < velicina; i++){
        cout<<elementi[i]<<" ";
    }
    cout<<endl;
}
int Niz::velicinaNiza(){
    return velicina;
}
void Niz::sortirajNiz(){

    int min, temp;

    for (int i(0) ; i < velicina - 1; i++) {
      min = i;

      for (int j(i + 1); j < velicina; j++){
         if (elementi[j] < elementi[min])
            min = j;
      }

      temp = elementi[i];
      elementi[i] = elementi[min];
      elementi[min] = temp;
   }
}


int& Niz::operator[](int indeks){

 if (indeks >= velicina || indeks < 0) throw string("Indeks nije u dozvoljenom opsegu.");

    return elementi[indeks];
}
Niz Niz::operator+(Niz niz1){

    Niz rezultat(velicina + niz1.velicina);

    for(int i(0); i < velicina; i++){
        rezultat.elementi[i] = elementi[i];
    }

    for(int i(0); i < niz1.velicina; i++){
        rezultat.elementi[velicina+i] = niz1.elementi[i];
    }

    return rezultat;
}
Niz Niz::operator-(Niz niz1){

    if (velicina != niz1.velicina) throw string("Velicine nizova moraju biti iste! ");
    Niz rezultat(velicina);

    for(int i(0); i < rezultat.velicina; i++){
        rezultat.elementi[i] = elementi[i] - niz1.elementi[i];
    }

    return rezultat;
}
bool Niz::operator>(Niz niz1){

    if (velicina > niz1.velicina) return true;
    else return false;

}
bool Niz::operator<(Niz niz1){

    if (velicina < niz1.velicina) return true;
    else return false;

}
bool Niz::operator==(Niz niz1){

    if (velicina == niz1.velicina) return true;
    else return false;

}
/*void Niz::meni(){
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
    cout <<"Unesite redni broj: ";
}
*/ 
