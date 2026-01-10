#include<iostream>
#include<cmath>
using namespace std;
int main(){

// Calculate area of a circle ?
// int r; // we can use float also
// r= 9 ;
// float pi=3.14;
// cout<<pi*r*r;

// calculate simple interest ?
// float p=800,r=3,t=50;
// float SI=p*r*t/100;
// cout<<SI;

//alternative
// float p=800,r=3.6,t=50;
// cout<<p*r*t/100;

// // Calculate Volume of a sphere ?
// float r=4;
// float pi=3.14;
// float V=4*pi*r*r*r/3;
// cout<<V;

// USER INPUT
// square of a given number
// int x;
// cout<<"Enter the number : ";
// cin>>x;
// cout<<"Square of number is : ";
// cout<<x*x;

// Sum of two given numbers
// int a;
// cout<<"Enter a : ";
// cin>>a;
// int b;
// cout<<"Enter b : ";
// cin>>b;
// cout<<"Sum : ";
// cout<<a+b;

// imp.

// The expressions, float a=7/22*(3.14+2)*3/5 evaluates to :- 0
// cout<<5/2<<endl;
// cout<<5.0/2<<endl;
// cout<<5.0/2.0<<endl;
// cout<<5/2.0;

// CONDITIONALS
// Take positive integer input and tell if it is even or odd ?
// int x;
// cin>>x;
// if(x%2==0)cout<<"it is even";
// else cout<<"it is odd";

// int n;
// cout<<"Enter n : ";
// cin>>n;
// if(n%2==0) 
//     cout<<"Even number \n";
// if(n%2!=0) 
//     {cout<<"Odd number \n";
//     cout<<"DONE";}

// Take positive integer input and tell if it is divisible 
// by 5 or not
    // int n;
    // cout<<"ENTER n : ";
    // cin>>n;
    // if(n%5==0) cout<<"DIVISIBLE";
    // else cout<<"NOT DIVISIBLE";

//* Take integer input and print the absolute value of that integer
// int i;                   
// cout<<"ENTER i : ";
// cin>>i;
// if(i%(i+1)==i)
//     cout<<i;
// else cout<<(-1)*i;

// int i;
// cin>>i;
// if(i>=0) 
//     cout<<i;
// else
//     cout<<-i;

// if cost price and selling price of an item is 
// input through the keyboard, write a program to determine 
// whether the seller has made profit or incurred loss or no profit 
// no loss.Also determine how much profit or loss he made

// float C;
// cout<<"COST PRICE : ";
// cin>>C;
// float S;
// cout<<"SELLING PRICE : ";
// cin>>S;
// if(C-S<0) 
//     cout<<"PROFIT OF : "<<S-C;
// if(C==S)
//      cout<<"NO PROFIT NO LOSS";
// if(C-S>0)
//     cout<<"LOSS OF : "<<C-S;

        // ALTERNATIVE :-
// float C;
// cout<<"COST PRICE : ";
// cin>>C;
// float S;
// cout<<"SELLING PRICE : ";
// cin>>S;
// if(C-S<0) 
//     cout<<"PROFIT OF : "<<S-C;
// else if(C==S)
//      cout<<"NO PROFIT NO LOSS";
// else
//     cout<<"LOSS OF : "<<C-S;

// Given the length and breadth of a rectangle,check whether the area of rectangle
// is greater than its perimeter ?

// float l;
// cout<<"ENTER THE LENGTH : ";
// cin>>l;
// float b;
// cout<<"ENTER THE BREADTH : ";
// cin>>b;
// float AREA = l*b;
// float perimeter=2*(l+b);
// if(AREA>perimeter)
// cout<<"hurray!!";
// else
//     cout<<"ohh shit!!";

// Take a integer and tell if it is a three digit number ?
// int x;
// cin>>x;
// if(x>=100 && x<=999) // multiple condition
//     cout<<"3 digit number";
// else
//     cout<<"not a 3 digit number";

// Take positive integer input and tell if it is
// divisible by 5 & 3

// int x;
// cin>>x;
// if(x%5==0 && x%3==0)
//     cout<<"SUCCESSFUL !!";
// else
//     cout<<"unsuccessful !!";

// int x;
// cin>>x;
// if(x%5==0 || x%3==0)
//     cout<<"SUCCESSFUL !!";
// else
//     cout<<"unsuccessful !!";

// take 3 inputs and tell if they can be the sides of a triangle ? 

// int a,b,c;
// cin>>a>>b>>c;
// if(a+b>c && b+c>a && a+c>b)
//     cout<<"IT IS A TRIANGLE";
// else
//     cout<<"NOT A TRIANGLE";

// Take three positive inputs and print
// graetest of them ?

// int a,b,c;
// cin>>a>>b>>c;
// if(a>b && a>c)
// cout<<a;
// else if(b>a && b>c)
// cout<<b;
// else
// cout<<c;

// Take a positive integer input and tell if it is
// divisible by 5 or 3 but not by 15.

// int n;
// cout<<"ENTER n : ";
// cin>>n;
// if((n%5==0 or n%3==0) && n%15!=0)
// cout<<"MISSION COMPLETE !!";
// else
//     cout<<"MISSION FAILED !!!";

// IF THE AGES OF RAM,SHYAM & AJAY ARE INPUT
// WRITE A PROGRAM TO DETERMINE THE YOUNGEST

// int R,S,A;
// cout<<"ENTER RAM'S AGE : ";
// cin>>R;
// cout<<"ENTER SHYAM'S AGE : ";
// cin>>S;
// cout<<"ENTER AJAY'S AGE : ";  
// cin>>A;
// if(R<A){
//     if(R>S)
//         cout<<"SHYAM";
//     else
//         cout<<"RAM";             // NESTED IF/ELSE

// }
// else{
//     if(A>S)
//         cout<<"SHYAM";
//     else
//         cout<<"AJAY";
// }

// Take input %age of a student and print the grade according
// to marks

// float x;
// cout<<"MARKS : ";
// cin>>x;
// if(x>=81 && x<=100)
//     cout<<"VERY GOOD";
// else if (x>=61 && x<=80)
//     cout<<"GOOD";
// else if (x>=41 && x<=60)
//     cout<<"AVERAGE";
// else
//     cout<<"FAIL";

// make a calculator ?

// int a,b;
// cin>>a;
// char x;
// cin>>x;
// cin>>b;
// if(x=='+')
//     cout<<a+b;
// else if (x=='-')
//         cout<<a-b;
// else if (x=='*')   // operator always in ' '
//         cout<<a*b;
// else if (x=='/')
//         cout<<a/b;

//v.v. imp..
// predict the output ???

// int x=3,y,z;
// y=x=10;           //heirarchy will be right to left comparing operatos 
// z=x<10;              // x is 10 s0 x<10 is false & false means zero
// cout<<x<<" "<<y<<" "<<z;

// Q. count digits of a given number
//     int n;
//     cin>>n;
//     int count=0;
//   while(n>0)
//  { n=n/10;
//   count+=1;}
//   cout<<count;

// Q. fibonacci(no. of terms is input )

    // int n;
    // cin>>n;
    // int fibo1=0;
    // int fibo2=1;
    // cout<<fibo1<<endl;
    //  cout<<fibo2<<endl;
    // for(int i=1;i<=n;i++){
    //     fibo1=fibo1+fibo2;
    //     fibo2=fibo2+fibo1;
    //     cout<<fibo1<<endl;
    //     cout<<fibo2<<endl;
    // }

    // #alternative

    // int n;
    // cin>>n;
    // int a=0;
    // int b=1;
    // cout<<a<<endl<<b<<endl;
    // for(int i=1;i<=n;i++){
    //     int nextNumber=a+b;
    //     a=b;
    //     b=nextNumber;
    //     cout<<nextNumber<<endl;;
    // }


// Q. write sum of digits of a given number

//     int n;
//     cout<<"enter a number : ";
//     cin>>n;
//     int sum=0;
//     while(n>0)
//  { sum+=(n%10);  // n%10 gives the last digit
//    n=n/10;
//     }
//     cout<<sum;    

// Q. write product of digits of given number

// int n;
// cin>>n;
// int product=1;
// while(n>0)
// {product*=(n%10);
// n/=10;}
// cout<<product;

// Q. write sum of all the even digits of a number

// int n;
// cin>>n;
// int sum=0;
// while(n>0)
// {if((n%10)%2==0)
// sum=sum+(n%10);
// n/=10;}
// cout<<sum;

// Q. print reverse of a number

//     int n;
//     cin>>n;
//     int x;
//     while(n>0)
//  {x=n%10;
//     n/=10;   // har loop k sath x ki value change hori h 
//     cout<<x;}   //isliye end m print na karke loop k sath print kiya

// Q. print sum of digit of a given number and it's reverse

//     int n;
//     cin>>n;
//     int sum=0;
//     int x;
//     while(n>0)
//    { sum=sum+(n%10);
//     x=n%10;
//     n/=10;
//     cout<<x;}
//     cout<<endl;
//     cout<<sum;

// Q. power of two[leetcode]

// int x;
// bool flag;
// cin>>x;
// for(int i=0;i<=30;i++){
//     if(x>0 && x==pow(2,i))
//    {flag=true;
//    break;}
//     else if(x<0 && ((-1)*x)==pow(2,i))
//   { flag=true;
//    break;}
//     else flag=false;
// }
// if(flag==true) cout<<"true";
// else cout<<"false";

// alternative
//if number of setBits is one then it is power of two

// int x;
// cin>>x;
// int count=0;
// for(int i=1;x>0;i++){
// if(x&1==1) count++;
// x=x>>1;
// }
// if(count==1) cout<<"given number is a power of two";
// else cout<<"given number is not a power of two";
}

