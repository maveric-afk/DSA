#include<iostream>
using namespace std;

int loseWin(char board[][3],char p1,char p2,string P1,string P2){
if((board[0][0]==p1 && board[0][1]==p1 && board[0][2]==p1) || (board[1][0]==p1 && board[1][1]==p1 && board[1][2]==p1) || (board[2][0]==p1 && board[2][1]==p1 && board[2][2]==p1)
|| (board[0][0]==p1 && board[1][0]==p1 && board[2][0]==p1) || (board[0][1]==p1 && board[1][1]==p1 && board[2][1]==p1) || (board[0][2]==p1 && board[1][2]==p1 && board[2][2]==p1)
|| (board[0][0]==p1 && board[1][1]==p1 && board[2][2]==p1) || (board[0][2]==p1 && board[1][1]==p1 && board[2][0]==p1) ){
    cout<<endl<<endl;
    cout<<"      "<<P1<<" WINS";
    return 0;
}
else if((board[0][0]==p2 && board[0][1]==p2 && board[0][2]==p2) || (board[1][0]==p2 && board[1][1]==p2 && board[1][2]==p2) || (board[2][0]==p2 && board[2][1]==p2 && board[2][2]==p2)
|| (board[0][0]==p2 && board[1][0]==p2 && board[2][0]==p2) || (board[0][1]==p2 && board[1][1]==p2 && board[2][1]==p2) || (board[0][2]==p2 && board[1][2]==p2 && board[2][2]==p2)
|| (board[0][0]==p2 && board[1][1]==p2 && board[2][2]==p2) || (board[0][2]==p2 && board[1][1]==p2 && board[2][0]==p2) ){
    cout<<endl<<endl;
    cout<<"      "<<P2<<" WINS";
    return 2;
}
else return 1;
}
void printBoard(char board[][3]){
 cout<<"       |       |       "<<endl;
   cout<<"   "<<board[0][0]<<"   "<<"|"<<"   "<<board[0][1]<<"   "<<"|"<<"   "<<board[0][2]<<"   "<<endl;
cout<<"_______|_______|_______"<<endl;
cout<<"       |       |       "<<endl;
cout<<"   "<<board[1][0]<<"   "<<"|"<<"   "<<board[1][1]<<"   "<<"|"<<"   "<<board[1][2]<<"   "<<endl;
cout<<"_______|_______|_______"<<endl;
cout<<"       |       |       "<<endl;
cout<<"   "<<board[2][0]<<"   "<<"|"<<"   "<<board[2][1]<<"   "<<"|"<<"   "<<board[2][2]<<"   "<<endl;
cout<<"       |       |       "<<endl;
}
void player2(char board[][3],char p2,string P2,char p1,string P1){
char num2;    
cout<<P2<<" enter: ";
cin>>num2;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(board[i][j]==num2)
        board[i][j]=p2;
    }
}
printBoard(board);
}
void player1(char board[][3],char p1,string P1,char p2,string P2){
char num1;    
cout<<P1<<" enter: ";
cin>>num1;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(board[i][j]==num1)
        board[i][j]=p1;
    }
}
printBoard(board);
}
int main(){
    char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    string P1,P2;
    char p1,p2;
    cout<<"       |       |       "<<endl;
   cout<<"   "<<board[0][0]<<"   "<<"|"<<"   "<<board[0][1]<<"   "<<"|"<<"   "<<board[0][2]<<"   "<<endl;
cout<<"_______|_______|_______"<<endl;
cout<<"       |       |       "<<endl;
cout<<"   "<<board[1][0]<<"   "<<"|"<<"   "<<board[1][1]<<"   "<<"|"<<"   "<<board[1][2]<<"   "<<endl;
cout<<"_______|_______|_______"<<endl;
cout<<"       |       |       "<<endl;
cout<<"   "<<board[2][0]<<"   "<<"|"<<"   "<<board[2][1]<<"   "<<"|"<<"   "<<board[2][2]<<"   "<<endl;
cout<<"       |       |       "<<endl;
cout<<endl;
cout<<endl;
cout<<"Player 1 Enter your name: ";
getline(cin,P1);
cout<<endl;
cout<<"Player 2 Enter your name: ";
getline(cin,P2);
cout<<endl;
cout<<P1<<" choose: ";
cin>>p1;
cout<<endl;
if(p1=='X') p2='O';
if(p1=='O') p2='X';
cout<<P2<<" you've got "<<p2;
cout<<endl;
cout<<endl;
cout<<"     O_O Let's begin our awesome tic tac toe X_X";
cout<<endl;
cout<<endl;
cout<<endl;
player1(board,p1,P1,p2,P2);
for(int i=1;i<=4;i++){
    if(loseWin(board,p1,p2,P1,P2)==0 or loseWin(board,p1,p2,P1,P2)==2) {break;}
    player2(board,p2,P2,p1,P1);
    if(loseWin(board,p1,p2,P1,P2)==0 or loseWin(board,p1,p2,P1,P2)==2) {break;}
    player1(board,p1,P1,p2,P2);
}
if(loseWin(board,p1,p2,P1,P2)==1){cout<<endl<<endl<<"     IT'S A TIE!!  ";}
}