#include<iostream>
#include<cmath>
using namespace std;
 bool isPowerOfTwo(int n) {
        int count=0;
        while(n>0){
            if(n&1)count++;
            n>>=1;
        }
        if(count==1) return true;
        else return false;
    }
     int reverse(int x) {
        int ans=0;
        while(x!=0){
            int digit=x%10;
            if(ans>'INT_MAX'/10 or ans<'INT_MIN'/10)return 0;
            ans=ans*10 + digit;
            x/=10;
        }
        return ans;
    }
int main(){
    // decimal to binary
// int x;
// cin>>x;
// int ans=0;
// for(int i=0;x>0;i++){
//     int digit=x&1;
//     ans=digit*pow(10,i) + ans;
//     x>>=1;}
//     cout<<ans;

//2nd approach
// int x;
// cin>>x;
// int ans=0;
// for(int i=0;x>0;i++){
//   int digit=x%2;
//   ans=digit*pow(10,i) + ans;
//   x/=2;
// }
// cout<<ans<<endl;


// negative decimal to binary
// int x;
// cin>>x;
// x = ~(-x) + 1;  
// int ans=0;
// int place=1;
// while(x>0){
//   int digit=(x&1);
//   ans = digit*place + ans;
//   x>>=1;
//   place*=10;
// }
// cout<<ans<<endl;



// binary to decimal

// int x;
// cin>>x;
// int sum=0;
// for(int i=0;x>0;i++){
// int digit=x%10;
// if(digit==1){
// sum+=pow(2,i);
// }
// x/=10;
// }
// cout<<sum;





// Q. complement of base 10 integer[leetcode]
  //  int n;
  // cin>>n;
  //if(n==0) {cout<<1;
//return 0;}
  // int ans=0;
  // for(int i=0;n>0;i++){
  //   int digit=n&1;
  //   ans+=digit*pow(10,i);
  //   n>>=1;
  // }
  // int digit;
  // int NewAns=0;
  // for(int i=0;ans>0;i++){
  //   if(ans%10==0) digit=1;
  //   if(ans%10==1) digit=0;
  //   NewAns=digit*pow(10,i) + NewAns;
  //   ans/=10;
  // }
  // int sum=0;
  // for(int i=0;NewAns>0;i++){
  //   if(NewAns%10==1){
  //     sum+=pow(2,i);
  //   }
  //   NewAns/=10;
  // }
  // cout<<sum;
//ALTERNATIVE SHORT METHOD:
// int n;
// cin>>n;
//if(n==0) {cout<<1;
//return 0;}
// int m=n;
// int mask=0;
// int ans=0;
// for(int i=1;m>0;i++){
//   m=m>>1;
//   mask=(mask<<1)|1;
// }
//  ans=mask&(~n);
// cout<<ans;




//reverse integr
// int x;
// cin>>x;
// reverse(x);

//power of two
// int n;
// cin>>n;
// cout << isPowerOfTwo(n);
}