#include<iostream>
#include<time.h>
using namespace std;
int main(){
int godine,godina,dan,mjesec ;
cout<<"Enter age: ";
cin>>godine;
 if(godine<18) cout<<"You are underage!";
 else if(godine>=18){ 
                 cout<<"U are adult! Please enter date of birth: "<<endl;
                 cout<<"Year: "<<endl;
                 cin>> godina;
                 cout<<"Month: "<<endl;
                 cin>> mjesec;
                 cout<<"Day: ";
                 cin>> dan;
             }
	time_t theTime = time(NULL);
	struct tm *aTime = localtime(&theTime);
	
	int day= aTime->tm_mday;
	int month= aTime->tm_mon + 1 ;
	int year= aTime->tm_year + 1900 ;
	

if(mjesec!=month)cout<<"Your birthday isn't soon!";
else if(mjesec==month || dan<(day+5))cout<<"Your birthday is soon!" ;

















return 0 ;
}
