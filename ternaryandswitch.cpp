#include<iostream>
using namespace std;
int main(){

    //  expression 2 :- what if true
    // expression 3 :- what if false
    //  expression 1 ? expression 2 : expression 3 ;

    // expression 1 :- condition

    // int n;
    // cin>>n;
    // n%5==0 ? cout<<"divisible by 5" : cout<<"not divisible by 5";

// // make a calculator ?

// int a;
// cin>>a;
// char x;
// cin>>x;
// int b;
// cin>>b;
// switch(x){
//     case '+':
//         cout<<a+b;
//         break;
//     case '-':
//         cout<<a-b;
//         break;
//     case '*':
//         cout<<a*b;
//         break;
//     case '/':
//         cout<<a/b;
//         break;
//     default:
//         cout<<"INVALID";


// }

// if switch is in infinite loop and we have to come out
// of the loop wthot using break

// int i=1;
// char ch='a';
// int x=8;
// while(i==1){
//     switch(ch){
//         case 'a' : {switch(x){
//             case 8 : cout<<"true";
//             break;
//         }
//          }
//          break;
//         case 'b' : cout<<"false";
//     }
// exit(ch);
// }

//continue can't be used in switch

// int num=4;
// switch(num){
//     case 6 : cout<<"NotNum"<<endl;
//     case 4 : cout<<"NUM"<<endl;

//    continue;
//     default : cout<<"default case";
// }

// Q. take the input and divide it into number of notes 
// of Rs.100 , 50, 20 and 1

// int A;
//     cin>>A;
//     int note=100;
//     int note1=50;
//     int note2=20;
//     int note3=1;
    
//     int hundred,fifty,twenty,one;
//     switch(note){
//         case 100: hundred=A/100;
//         switch(note1){
//             case 50 : fifty=(A%100)/50;
//             switch(note2){
//                 case 20 : twenty=((A%100)%50)/20;
//                 switch(note3){
//                     case 1 : one=(((A%100)%50)%20)/1;
//                 }
//             }
//         }
//             break;
        
//     }
//     cout<<"Distribution of notes : "<<hundred<< " of hundred "<<fifty<<" of fifty "<<twenty<<" of twenty "<<one<<" of one ";

}