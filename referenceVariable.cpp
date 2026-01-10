#include<iostream>
using namespace std;

int& hi(int& a){
  int num=a;
  int& ans=num;
  return ans;
}
void update(int& x ){        // new memory is not created same memory is passed
    x++;

}
int main(){
    // int i=1;
    // int& j=i;
    // cout<<i<<endl;  
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;

//     int n=5;
//     cout<<"Before: "<<n<<endl;
//     update(n);
//     cout<<"After: "<<n<<endl;
//    cout<< hi(n);



}