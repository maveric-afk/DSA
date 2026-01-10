#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=6;
    cout<<"a&b :"<<(a&b)<<endl;  //and
    cout<<"a|b :"<<(a|b)<<endl;  //or
    cout<<"a^b :"<<(a^b)<<endl;  //xor
    cout<<"~a :"<<~a<<endl;     //not

    //left shift:- <<  double for smaller numbers, -ve for larger numbers
    cout<<(14<<1)<<endl;
    cout<<(15<<2)<<endl;

    //right shift:- divide by 2
    cout<<(14>>1)<<endl;
    cout<<(14>>2)<<endl;


    //Q.Sum of two numbers
    // class Solution {
    //     public:
    //         int getSum(int a, int b) {
    //              while (b != 0) {
    //                 unsigned carry = (unsigned)(a & b);  // carry now contains common set bits of a and b
    //                 a = a ^ b;  // Sum of bits of a and b where at least one of the bits is not set
    //                 b = carry << 1;  // Carry is shifted by one so that adding it to a gives the required sum
    //             }
    //             return a;
    //         }
    //     };
}