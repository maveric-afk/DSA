#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
//int main(){
    //sieve of eratosthenes theorm[count primes]
    //    int count=0;
    //    int n;
    //    cin>>n;
    //     vector<bool> prime(n+1,true);
    //     prime[0]=prime[1]=false;
    //     for(int i=2;i<n;i++){
    //         if(prime[i]){
    //             count++;
    //         }
    //         for(int j=2*i;j<n;j=j+i){
    //             prime[j]=false;
    //         }
    //     }
    //     cout<<count;

//}
   
   
   
 // euclid's gcd algorithm  GCD(a,b)=GCD(a-b , b) or GCD(a%b , b)

// int gcd(int a , int b){
//     if(a==0) return b;
//     if(b==0) return a;
//     while(a!=b){
//         if(a>b){
//             a=a-b;
//         }
//         else{
//             b=b-a;
//         }
//     }
//     return a;
// }
//  int main(){
// int a,b;
// cout<<"enter a: ";
// cin>>a;
// cout<<"enter b: ";
// cin>>b;
// cout<<gcd(a,b);
//  }



//          power exponentiation

// int main(){
//     int x,n;
//     cin>>x>>n;
//     int ans=1;
//     while(n>0){
//         if(n%2!=0){
//             ans*=x;
//             n-=1;
//         }
//         x*=x;
//         n/=2;
//     }
//     cout<<ans;
// }



//      SEGMENTED SIEVE


