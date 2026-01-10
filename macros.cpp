#include<iostream>
using namespace std;
#define PI 3.14     //object like macro
#define EVEN(a) ((a%2==0) ? cout<<"even" : cout<<"odd")     //function like macro
int main(){
int r=5;
double area=PI*r*r;
cout<<area<<endl;

int num;
cin>>num;
EVEN(num);
}