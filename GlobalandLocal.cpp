#include<iostream>
using namespace std;

int score=9;        //global variable[can be acccessed by all functions]
void b(int& k){
    cout<<"in b: "<<k<<endl;
    cout<<score<<" :in b"<<endl;
}
void a(int& f){
cout<<"in a: "<<f<<endl;
cout<<score<<" :in a"<<endl;
b(f);
}
int main(){
    int i=5;
    cout<<"in main: "<<i<<endl;
    cout<<score<<" :in main"<<endl;
    a(i);
}