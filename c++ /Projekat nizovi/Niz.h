#ifndef Niz_H
#define Niz_H

const int MaxDimenzija(100);

class Niz {

    int velicina; 
    int elementi[MaxDimenzija]; 
    public:
    Niz(); 
    Niz(int vel); 
    void unesiNiz(); 
    int velicinaNiza(); 
    void IspisiNiz();
    void sortirajNiz(); 
    int& operator[](int indeks); 
    Niz operator-(Niz niz1); 
    bool operator>(Niz niz1); 
    bool operator<(Niz niz1); 
    bool operator==(Niz niz1); 

#endif 
