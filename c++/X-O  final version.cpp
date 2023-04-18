#include <iostream>
#include <string>
 
using namespace std;
 
//-----DECLARATION OF FUNCTIONS-----
//------------------------------
string newGame();
void result();
inline void drawLine();
void empty(int table[3][3]);
void row (int table[3][3]);
inline void switch();s
bool filled();
void repeat(int table[3][3]);
void namePlayers();
void decoration ();
void menu();
//------------------------------
//------------------------------
 
//-----GLOBAL VARIABLES-----
//------------------------------
bool end = false;            
int turn=1;                    
int table[3][3];              
int move=2;                   
string playerOne, playerTwo;    
//------------------------------
//------------------------------
 
 
int main () { // Main function
    int a, b, puno;
    char sign;
    string answer;
   
        do {
            system("CLS");
            menu();
            namePlayers();
            empty(table);
            end = false;
            move=2;
            repeat(table);
            answer = newGame();
           
        } while(answer == "Yes" or answer == "yes");
       
    getch();
    return 0;
}
 
 
 
 
 
 
//-----------------------------------------------
//------------------FUNCTIONS---------------------
//-----------------------------------------------
 
string newGame(){
   
    string answer;
   
        cout << "\n\n\tDo you want to play a new game (Yes / No) : ";    
        cin>>answer;
       
    return answer;
}
 
 
void result(){
   
    bool A(false), B(false); //PLAYERS
       
    if ((((table[0][0] == table[0][1]) && (table[0][1] == table[0][2]))&& table[0][0]==1)
    or (((table[1][0] == table[1][1]) && (table[1][1] == table[1][2]))&& table[1][0]==1)
    or (((table[2][0] == table[2][1]) && (table[2][1] == table[2][2]))&& table[2][0]==1)
    or (((table[0][0] == table[1][0]) && (table[1][0] == table[2][0]))&& table[0][0]==1)
    or (((table[0][1] == table[1][1]) && (table[1][1] == table[2][1]))&& table[0][1]==1)
    or (((table[0][2] == table[1][2]) && (table[1][2] == table[2][2]))&& table[0][2]==1)
    or (((table[0][0] == table[1][1]) && (table[1][1] == table[2][2]))&& table[0][0]==1)
    or (((table[0][2] == table[1][1]) && (table[1][1] == table[2][0]))&& table[0][2]==1)){
       
    /* --------------------------------------------------------------------------------------
        ------------------------------------------------------------------------------------
          Checks all possible winning combinations of which there are a total of 16 for both players
                            Vertically, horizontally, diagonally
                           If this is true the winner is player A
        ------------------------------------------------------------------------------------
       --------------------------------------------------------------------------------------
    */
   
    A = true;
    end = true;
    }
   
    if ((((table[0][0] == table[0][1]) && (table[0][1] == table[0][2]))&& table[0][0]==2)
    or (((table[1][0] == table[1][1]) && (table[1][1] == table[1][2]))&& table[1][0]==2)
    or (((table[2][0] == table[2][1]) && (table[2][1] == table[2][2]))&& table[2][0]==2)
    or (((table[0][0] == table[1][0]) && (table[1][0] == table[2][0]))&& table[0][0]==2)
    or (((table[0][1] == table[1][1]) && (table[1][1] == table[2][1]))&& table[0][1]==2)
    or (((table[0][2] == table[1][2]) && (table[1][2] == table[2][2]))&& table[0][2]==2)
    or (((table[0][0] == table[1][1]) && (table[1][1] == table[2][2]))&& table[0][0]==2)
    or (((table[0][2] == table[1][1]) && (table[1][1] == table[2][0]))&& table[0][2]==2)){
   
    /* --------------------------------------------------------------------------------------
        ------------------------------------------------------------------------------------
             If this returns true or if the fields requirow to win are equal to 2
                                     user B is the winner
        ------------------------------------------------------------------------------------
       --------------------------------------------------------------------------------------
    */
       
    B = true;
    end = true;
    }
   
    if(A == true && move==1) {
    cout << endl;
    decoration();
    cout << "\tPlayer " <<playerOne<<" won. Congratulations!"<<endl;
    decoration();
    }
    else if (B == true  && move==2) {
        cout << endl;
        decoration();
        cout << "\tPlayer"<<playerTwo<<" won. Congratulations!"<<endl;
        decoration();
        }
   
    else if(filled()){
         cout << endl;
         decoration();
         cout << "\tThe game is a draw."<<endl;
         decoration();
         end=true;
    }
   
}
 
inline void drawLine () {
     cout << "\t+----+----+----+"<<endl;
}
 
 
void empty(int table[3][3]){
   
    /*  Fills all fields in the table with indexes [0] [0] to [2] [2]
     with a value of zero to signal that the field is empty */
   
     for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
                     table[i][j]=0; // <--- initialize the field to 0
             }
     }
}
 
void row (int table[3][3]) {
   
     drawLine();
     
     for (int i = 0; i < 3; i++) {
       
         cout << "\t|";
                                                 
         for (int j = 0; j < 3; j++) {                       //print the top row of the table
                                                             //print the top row of the table
             if (table[i][j] == 0) cout << "    |";         //print the top row of the table
             else if (table[i][j] == 1) cout << " \\/ |";   //print the top row of the table
             else if (table[i][j] == 2) cout << " /\\ |";   //print the top row of the table
         
         }
         
         cout<<endl;  
         cout << "\t|";
                                                             
         for (int j = 0; j < 3; j++) {                       //print the bottom row of the table
                                                             //print the bottom row of the table
             if (table[i][j] == 0) cout << "    |";         //print the bottom row of the table
             else if (table[i][j] == 1) cout << " /\\ |";   //print the bottom row of the table
             else if (table[i][j] == 2) cout << " \\/ |";   //print the bottom row of the table
                                                                 
         }
         
         cout<<endl;
         drawLine();
         
     }
         
}
 
inline void switch(){
   
    /*Shift among players, ie. among the moves of the players
          1 is an X player, 2 is an O player     ---*/
   
                if (move==2) move=1;
                else move=2;
               
}
bool filled() {
   
    /*  Checks if all fields are non-zero to know
         whether the game is a draw or has a result  ------*/
   
     bool different(true);
     for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
                     if(table[i][j] == 0) {
                                     different=false;
                                     break; /*if all fields are not equal to 0
                                          coming out of the loop ----- */
                     }
             }
     }
     return different;
}
 
 
 
void unos(int a, int b,int table[3][3]){
     
     char sign;
     
     switch(); //We need to call the function at the beginning to return the move to player 1
     
     do {
       
        if (move == 1) cout<<"\tPlayer "<<playerOne<<" is on the move: ";
        else if (move == 2) cout<<"\tPlayer "<<playerTwo<<" is on the move: ";
        cin>> a>> sign>> b;
       
       
        if (table [a-1][b-1]== 0){             // Assigns value to fields
        if (move==1) table[a-1][b-1]=1;       // 1 for player X, 2 for player O
        else if (move==2) table[a-1][b-1]=2;         
        }
       
       
        else if (table [a-1][b-1]!= 0)  { // 1 for player X, 2 for player O
        while (table [a-1][b-1]!= 0) {    // that is, if it is occupied, the following is done:
           
                cout<< "\n\tThe field is occupied, select someone else: ";
                cin>> a>> sign>> b;
                    }
       
        if(move==1) table[a-1][b-1]=1;
        else if (move==2) table[a-1][b-1]=2;
                }
     
        if(!cin or a > 3 or b > 3 or a < 1 or b < 1)           
            cout<<"\tInvalid entry, try again on template [Row, Column]"; // Until an integer is enterow or until
    }  while(!cin or a > 3 or b > 3 or a < 1 or b < 1);                          // the coordinates do not match the fields
}
 
void repeat(int table[3][3]){
   
     int a, b;
     int igrac=1;
     
     row(table);
     
     do {
                               
         cout<<endl<<endl;  
         unos(a,b,table);  //    
         cout<<endl<<endl;  //  This is done in function until the bool end is true
         row(table);       //                         
         result();          
                           
                           
         
         } while (end==false );
}
 
void namePlayers() {  
   
    cout <<endl;
    decoration();
    cout << "\tEnter the name of the first player : ";   //
    cin >> playerOne;                           //
    decoration();                                   //  Player name entry function
    cout << "\tEnter the name of another player : ";  //
    cin >> playerTwo;                          //
    cout << endl;
   
}
 
void decoration () {2
    cout << "        +-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=+"<<endl;
}
void menu(){
	cout<<"\t+-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=+"<<endl;
	cout<<"\t|               Tic Tac Toe                |"<<endl;
	cout<<"\t+-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=+"<<endl;
	cout<<"\t|                   Rules:                 |"<<endl;
	cout<<"\t|     1. Enter name of the players         |"<<endl;
	cout<<"\t|   2. Each player enters coordinates      |"<<endl;
	cout<<"\t|3.Be careful not to enter occupied fields |"<<endl;
	cout<<"\t+-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=+";
}
