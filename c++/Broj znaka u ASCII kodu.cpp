#include<iostream>

using namespace std;
int main() {
	char znak ;
	cout<<"Unesi znak: " ;
	cin>> znak ;
	cout<<"Broj u ASCII kodu ovog znaka je:"<<int(znak)<<endl;
	cout<<"Iza njega je;"<<char(znak+1)<<endl;
	return 0;
}
