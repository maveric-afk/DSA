#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class test{
    public:
int a;
int b;
test(int i,int j):a(i),b(j)
//test(int i,int j):a(i),b(i+j)
// test(int i,int j):a(i),b(a+j)
//test(int i,int j):b(j),a(b+i) //RED flag this will create garbage value bcoz b is inilialized after a
{
    cout<<"Constructor was called"<<endl;
}
};
class Hero{
    //properties/data members
    private:
    int health;
    public:
    char level;
    char* name;
   static int timeTocomplete;

    Hero(){
        cout<<" Simple constructor called"<<endl;
        name=new char[100];
    }
//parameterised constructor
    Hero(int health){
        cout<<"this-> "<<this<<endl;
        this->health=health;
    }

    Hero(int health,char level){
        this->health=health;
        this->level=level;
    }
    //copy constructor
    Hero(Hero& temp){
        char* ch=new char[7];
        ch=temp.name;
        this->name=ch;
        cout<<"copy constructor was called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }

    void print(){
        cout<<this->name<<endl;
        cout<<this->health<<endl;
        cout<<this->level<<endl<<endl;
    }

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health=h;
    } 

    void setlevel(char c){
        level=c;
    }

    void setname(char name[]){
        this->name=name;
    }

    static int random(){
       return timeTocomplete;
    }
    //desturctor
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};
int Hero:: timeTocomplete=5;
int main(){

// // creation of object(statically)
// Hero a;
// cout<<"size: "<<sizeof(a)<<endl;
// a.sethealth(10);
// cout<<a.gethealth();
// a.setlevel('A');
// cout<<a.getlevel();

// //dynamically

// Hero* b=new Hero;
// (*b).sethealth(10);
// cout<<(*b).gethealth()<<endl;
// b->setlevel('B');
// cout<<b->getlevel()<<endl;

//     //constructor
// Hero ramesh(10);
// cout<<ramesh.gethealth()<<endl;
// Hero* suresh=new Hero;
// Hero *naresh=new Hero(22,'A');
// cout<<"health of naresh: "<<naresh->gethealth()<<endl;
// cout<<"level of naresh: "<<naresh->getlevel();

//copy constructor
// Hero R1(12,'A');
// R1.print();
// cout<<endl;
// Hero G1(R1);
// G1.print();

// //shallow copy[default copy constructor]
// Hero h;
// char name[7]="chirag";
// h.sethealth(20);
// h.setlevel('C');
// h.setname(name);
// h.print();

// Hero k(h);
// k.print();

// h.name[0]='S';
// h.print();
// k.print();

//copy constructor
// Hero h;
// char name[7]="chirag";
// h.sethealth(20);
// h.setlevel('C');
// h.setname(name);
// h.print();

// Hero k(h);
// k.print();

// h.name[0]='S';
// h.print();
// k.print();


// //copy assignment operator
// Hero a(1,'S');
// Hero b(2,'D');
// char name[5]="lala";
// a.setname(name);
// b.setname(name);
// a.print();
// b.print();
// a=b;
// a.print();
// b.print();


//Destructor

// Hero p;
// Hero r;
// Hero* q=new Hero;
// delete q;


//initialisation list in constructor

//static data members
// cout<<Hero::timeTocomplete<<endl;

// Hero l;
// cout<<l.timeTocomplete<<endl;


//static functions
//  cout<<Hero::random()<<endl;



test t(1,2);
cout<<t.a<<" "<<t.b<<endl;


}