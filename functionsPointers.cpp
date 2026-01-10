#include<iostream>  
#include<cmath>         // used to tackle with repetition
using namespace std;        // we put a piece of code in a function
//when we have to return any value, we use int function otherwise
// if we print anything then we use void function

// void usa(){
//     cout<<"you are in usa"<<endl;
//     return;   // to end the function
//      cout<<"you are in usa"<<endl;
// }
// void india(){
//     cout<<"you are in india"<<endl;
//     usa();
// }
//                             // main func to sabse niche likhte h
// int main(){
//     cout<<"hi i am chirag"<<endl;
//     usa();
//     india();
//     usa();
//     india();
// }

// void sum(int a,int b){
//     cout<<a+b;       
// }
// int main(){
//     int a;
//     cin>>a;
//     int b;
//     cin>>b;
//    sum(a,b);         // in void , we call the function

// }

// int sum(int a,int b){
//     return a+b;
// }
// int main(){
//     int a;
//     cin>>a;
//     int b;
//     cin>>b;
//     cout<<sum(a,b);     // other than void, we print the value
// }

// int fact(int x){
//   int f=1;
//   for(int i=1;i<=x;i++)
//   f*=i;
//   return f;
// }

// void swap(int x,int y){
//   int temp=x;
//   x=y;
//   y=temp;
//    cout<<x<<" "<<y<<endl;
// }

// int main(){
    // Library functions
    // int n;
    // cin>>n;
    //cout<<sqrt(n);
   // cout<<cbrt(n);
//    cout<<max(6,0);
    // cout<<min(7,3);
   // cout<<pow(4,9);

  //  Q. combination nCr
   
  //   int n;
  //   cin>>n;
  //   int a=1;
  //   for(int i=1;i<=n;i++)
  //     a*=i;
  //   int r;
  //   cin>>r;
  //   int b=1;
  //   for(int i=1;i<=r;i++)
  //   b*=i;
  //   int c=1;
  //   for(int i=1;i<=n-r;i++)
  //   c*=i;

  //   cout<<a/(b*c);
    

    // int n,r;
    // cin>>n>>r;
    // int a= fact(n);
    // int b= fact(r);
    // int c= fact(n-r);
    // cout<<a/(b*c);

    //Q.  permutation
    // int n,r;
    // cin>>n>>r;
    // int a=fact(n);
    // int b=fact(n-r);
    // cout<<a/b;

// void Even(int n){
//     cin>>n;
// if(n%2==0)
// cout<<"even";
// else    cout<<"odd";
// }
// int main(){
//     int x;
// Even(x);

    // Q. pascal triangle





    // Q.  swap two numbers ?
     
    //  int x=2,y=5;
    //  cout<<x<<" "<<y<<endl;
    //  int temp=x;                 // method 1
    //  x=y;
    //  y=temp;
    //   cout<<x<<" "<<y<<endl;

    // int x=4,y=9;
    //  cout<<x<<" "<<y<<endl;
    //  x=x+y;
    //  y=x-y;                       // method 2
    //  x=x-y;
    //   cout<<x<<" "<<y<<endl;

// int x,y;
// cin>>x>>y;
//  swap(x,y);    // by using function

//main func ka variable aur other function ka variable same ho jroori nhi

        // P O I N T E R S

    //  int x=5;
    //   int* p=&x;      // int* stores address of a variable
    //   cout<<&x<<endl;
    //   cout<<p<<endl;
    //   cout<<*p;       // print the integer whose address is in p
 
//   int x=3,y=6;
//   cout<<x<<" "<<y;
//   int* p=&x;
//   x=y;
//   y= *p;
//    cout<<x<<" "<<y;


// bool isPrime(int n){
//     for(int i=2;i<=n/2;i++){
//  if(n%i==0) 
// { break; return false;}
//  else return true;

//     }
// }
// int main(){
//     int x;
//     cin>>x;
//     if(isPrime(x)==true) cout<<"prime number";
//     else cout<<"not a prime number";
// }

//Q. n is input,return nth term
// void nthTerm(int n){
//     cout<<(3*n+7);
// }
// int main(){
//     int n;
//     cin>>n;
//     nthTerm(n);
// }

//Q, return total set bits in a&b

// int setBit(int x){
// int count=0;
// for(int i=1;x>0;i++){
// if(x&1==1) count++;
// x>>=1;}
// return count;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//  cout<<(setBit(a) + setBit(b));
// }

// function call-stack:- function that is made in starting will be called in the end
//order of function is important nhi toh error

// pass by value
// x of main func and dummy func are diff storages,dummy x is just a copy of main x
// change in x of dummy doesn't alter x of main func

// void dummy(int x){
//     x++;
//     cout<<x<<endl;
// }
// int main(){
//     int x;
//     cin>>x;
//     dummy(x);
//     cout<<x;
// }

//quiz

// int update(int a){
//     a-=5;
//     return a;
// }
// int main(){
//     int a=15;
//     update(a);
//     cout<< a <<endl;
// }

// int update(int a){
//     int ans=a*a;
//     return ans;
// }
// int main(){
//     int a=14;
//     a=update(a);
//     cout<<a<<endl;
// }