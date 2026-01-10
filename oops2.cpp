#include<iostream>
using namespace std;

// //Encapsulation
// class student{
//     private:
//     string name;
//     int age;
//     int height;
//     public:
//     int getage(){
//         return this->age;
//     }
// };
// int main(){
// student first;
// }


// //Inheritance
// //protected is kinda private but it can also accessed in child class
// class human{
// public: 
// int height;
// int weight;
// int age;

// public:
// int getage(){
//     return this->age;
// }
// int setweight(int w){
//     this->weight=w;
// }
// };
// class male:public human{
//     public:
// string color="white";
// void sleep(){
// cout<<"Male sleeping"<<endl;
// }
// };
// int main(){
// male obj1;
// cout<<obj1.age<<endl;
// obj1.setweight(85 );
// cout<<obj1.weight<<endl;
// cout<<obj1.height<<endl;
// cout<<obj1.color<<endl;
// obj1.sleep();
// }


// //single inheritance

// class Animal{
//     public:
//     int age;
//     int weight;

//     public:
//     void speak(){
//         cout<<"speaking"<<endl;
//     }
// };

// class Dog: public Animal{

// };
// int main(){
// Dog d;
// d.speak();
// cout<<d.age<<endl;
// }


// //multiLevel inheritance
// class Animal{
//     public:
//     int age;
//     int weight;

//     public:
//     void speak(){
//         cout<<"speaking"<<endl;
//     }
// };

// class Dog: public Animal{

// };
// class pitbull:public Dog{

// };
// int main(){
// pitbull p;
// p.speak();
// cout<<p.weight<<endl;
// }



// //multiple inheritance

// class Animal{
//     public:
//     int preys=9;

//     public:
//     void bark(){
//         cout<<"barking"<<endl;
//     }
// };
// class Human{
//     public:
//     int age=57;

//     public:
//     void speak(){
//         cout<<"speaking"<<endl;
//     }
// };

// class hybrid:public Animal,public Human{

// };
// int main(){
//     hybrid obj1;
//     obj1.speak();
//     obj1.bark();
//     cout<<obj1.age<<" "<<obj1.preys<<endl;
// }




// //hierarchical inheritance
// class A{
// public:
// void func1(){
//     cout<<"inside function 1"<<endl;
// }
// };

// class B:public A{
//     public:
//     void func2(){
//         cout<<"inside function 2"<<endl;
//     }
// };
// class C:public A{
//     public:
//     void func3(){
//         cout<<"inside function 3"<<endl;
//     }
// };
// int main(){
//     A object1;
//     object1.func1();

//     B object2;
//     object2.func1();
//     object2.func2();

//     C object3;
//     object3.func1();
//     object3.func3();
// }




// //hybride inheritace
//  class A{
// public:
// void funcA(){
//     cout<<"entering fA"<<endl;
// }
// };
// class D{
//     public:
// void funcD(){
//     cout<<"entering fD"<<endl;
// }
// };
// class B:public A{
//     public:
//     void funcB(){
//         cout<<"entering fB"<<endl;
//     }
// };
// class C:public A,public D{
//     public:
//     void funcC(){
//         cout<<"entering fC"<<endl;
//     }
// };
// int main(){
//     B obj1;
//     C obj2;
//     obj1.funcA();
//     obj1.funcB();
//     obj2.funcA();
//     obj2.funcC();
//     obj2.funcD();
// }



//inheritance ambiguity
// class A{
//     public:
//     void func(){
//         cout<<"I am A"<<endl;
//     }
// };
// class B{
//     public:
//     void func(){
//         cout<<"I am B"<<endl;
//     }
// };
// class C:public A,public B{

// };
// int main(){
//     C obj;
//     obj.A::func();
//     obj.B::func();
// }



// //polymorphism[function overloading]
// class A{
//     public:
//     void sayhello(){
//         cout<<"Hello chirag gupta"<<endl;
//     }
//     int sayhello(char name){
//         cout<<"Hello"<<name<<endl;
//         return 1;
//     }
//     void sayhello(string name){
//         cout<<"Hello "<<name<<endl;
//     }
// };
// int main(){
// A obj;
// obj.sayhello("chirag");
// obj.sayhello('C');
// }

// //operator overloading
// class B{
//     public:
//     int a;
//     int b;

//     public:
//     int add(){
//         return a+b;
//     }

//     void operator+ (B& obj){
//         int value1=this->a;
//         int value2=obj.a;
//         cout<<"output: "<<value2-value1<<endl;
//     }

//     void operator() (){
// cout<<"mai braccket hu"<<this->a<<endl;
//     }
// };
// int main(){
// B obj1,obj2;
// obj1.a=7;
// obj2.a=4;

// obj1+obj2;
// obj2();
// }



//method overriding
class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog:public Animal{
    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};
class germanShepherd:public Dog{
    public:
    void speak(){
        cout<<"Tez barking"<<endl;
    }
};
int main(){
    Dog d;
    d.speak();
}