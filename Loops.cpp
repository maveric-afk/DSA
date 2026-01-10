#include<iostream>
using namespace std;
int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
// { cout<<"Hello chirag \n";}  // check condition,work and increment

// *    for(int a=1,b=3;a>=0,b<=4;a--,b++){
//    cout<<a<<" "<<b<<endl;}

// int n;
// cin>>n;
// for(int i=2;i<=n+1;i++)
// cout<<"HELLO 13 \n";

// Q. print numbers from 1 to 100
// for(int i=1;i<101;i++)
// {cout<<i<<endl;}

// Q. print all the even numbers from 1 to 100

// for(int i=2;i<=100;i+=2)
// {
//     cout<<i<<endl;      // we can use if condition also
// }

// print the table of 19.

// for(int i=1;i<=190;i++)
// if(i%19==0)cout<<i<<endl;

// print the table of n

// int n;
// cin>>n;
// for(int i=n;i<=10*n;i+=n)
// {cout<<i<<" ";}

// Display this A.P. 1,3,5,7,9 upto n terms

// int n;
// cin>>n;
// for(int i=1;i<=2*n-1;i+=2){
//     cout<<i<<"\n";
// }

// display this a.p. 4,7,10... upto n

// int n;
// cin>>n;
// int a =4;
// for(int i=1;i<=n;i++)
// {cout<<a<<endl;
// a+=3;}
// 

// display this G.P. 1,2,4,8,16.. upto n terms

// int n;
// cin>>n;
// int a=1;
// for(int i=1;i<=n;i++)
// {cout<<a<<endl;
// a*=2;}

// Write a program to find the highest factor of n other than n

// int n;
// cin>>n;
// for(int i=n/2;i>=1;i--)
// if(n%i==0){cout<<i<<endl;
// break;}

// Q check if a number is composite or not ?

// int n;
// cin>>n;
// bool flag = true;
// for(int i=2;i<=n/2;i++)  // bool operator
// {if(n%i==0) 
// {flag = false;
// break;}}

// if(n==1) cout<<"Neither prime nor composite";
// else if(flag==true) cout<<"Prime";
// else cout<<"Composite";

// for(int i=1;i<=20;i++)
// if(i!=3 && i!=7) cout<<i<<endl;

// for(int i=1;i<=100;i++)
// if(i%2==0) continue;   
// cout<<i<<endl;

// WHILE loop

// int i=1;
// while(i<=20)
// {cout<<i<<endl;
// i++;}   // {} is necessary in for and while loops if there 
            // is more than one statements otherwise the one 
            // statement just below the loop will be part of loop

// int i;
// while(i=69)                // assign
//    { cout<<i<<endl;          // infinite loop
//     i++;}

// while('a'<'b')      // comparing characters means comparing ascii value
// {cout<<"chirag";
// cout<<"Gupta";}

// int i=10;
// while(i=20)      // infinite loop
// cout<<"hi !!";

// int x=4,y=0;
// while(x>=0){
//     x--;
//     y++;
//     if(x==y)continue;
//     else cout<<x<<" "<<y<<endl;
// }


// Q. count digits of a given number
//     int n;
//     cin>>n;
//     int count=0;
//   while(n>0)
//  { n=n/10;
//   count+=1;}
//   cout<<count;

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

// Q. find sum from 1 to n
    // int n;
    // cout<<"Enter n : ";
    // cin>>n;
    // int sum=0;
    // for(int i=1;i<=n;i++)
    // sum+=i;
    // cout<<sum;

// Q. print the factorial of a number

//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     int product=1;
//     while(n>0)
//    { product*=n;
//     n=n-1;}
//     cout<<product;

//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     int product=1;
//     for(int i=1;i>0;i++)
//  { if(n>0)
//    { product*=n;
//     n=n-1;}}
//     cout<<product;

// Q. print factoral of numbers from 1 to n
 
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     int product=1;
//     for(int i=1;i<=n;i++)
//  { product*=i;
//         cout<<product<<" ";}

// Q. write a program to print all the ascii values and their
// equivalent characters of 26 alphabets using while loop

    // for(int i=65;i<=90;i++)
    // cout<<i<<"="<<char(i)<<endl;

    
}

