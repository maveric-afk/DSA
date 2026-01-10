#include<iostream>
using namespace std;
//int main(){
    // int num=5;
    // cout<<num<<endl;
    // cout<<&num<<endl;
    // int *ptr=&num;
    // cout<<*ptr<<" "<<ptr<<endl;
    // cout<<sizeof(ptr);

    // double d=4.56;
    // cout<<d<<endl;
    // cout<<&d<<endl;
    // double *p=&d;
    // cout<<*p<<" "<<p;

    // int i=2;
    // int *ptr=0;
    // ptr=&i;
    // cout<<*ptr<<endl;
    // cout<<ptr;
    
    // int num=5;
    // cout<<num<<endl;
    // int a=num;
    // a++;
    // cout<<num<<endl;

    // int *p=&num;
    // (*p)++;
    // cout<<num;

    // int *q=p;
    // cout<<p<<" - "<<q<<endl;
    // cout<<*p<<" "<<*q;

//    int i=3;
//    int *p=&i;
//    cout<<p<<endl;
//    p=p+1;      // now p will tend to the value at next location
//    cout<<p<<endl;
//    cout<<*p;

//Pointers may be compared by using relational operators, such as ==, 
// <, and >. If p1 and p2 point to variables related to each other,
// such as the same array of elements, then p1 and p2 can be meaningfully compared
// int a=3,b=4;
// int* p1=&a;
// int* p2=&b;
// if(p1<p2)
// cout<<"yes";
// else cout<<"No";


// void pointers:-A void pointer is a generic pointer; it has no 
//associated type with it. A void pointer can hold an address of any type
// and can be typecasted to any type. Thus we can use the void pointer to store the address of any variable
// void* ptr=0;
// int i=6;
// ptr=&i;
// cout<<"Address of variable i"<<&i<<endl;
// cout<<"Address where the void pointer is pointing "<<ptr<<endl;

//Wild Pointers:
// A pointer behaves like a wild pointer when declared but not 
//initialized. So, they point to any random memory location.
// int* ptr;       //wild pointer
// int a=6;
// ptr =&a;        //now it's not a wild pointer



//      <-- pointers in array -->

// int arr[10]={2,5,6};
// cout<<"address of first block is: "<<arr<<endl;
// cout<<arr[0]<<endl;
// cout<<"address of first block is: "<<&arr[0]<<endl;
// for(int i=0;i<10;i++){
//     cout<<(arr + i)<<endl;
//    }
//  cout<<*arr<<endl;
//  cout<<*(arr+1);   
                // //  arr[i] = *(arr+i)
                // //  i[arr] = *(i+arr)
   
//    int temp[10]={1,2};
//    cout<<sizeof(temp)<<endl;
//    int* ptr=&(temp[0]);
//    cout<<sizeof(ptr)<<endl;
// cout<<sizeof(*ptr)<<endl;

// int a[20]={1,2,3};
// cout<<a<<endl;
// cout<<&a<<endl;
// cout<<&a[0]<<endl;
// cout<<*(a+2)<<endl;
// int *p=&a[0];
// cout<<p<<endl;
// cout<<*p<<endl;
// cout<<&p;

// int arr[10];
// int *p=&arr[0];
// arr = arr + 1;  // arr is mapped as address of first block in the symbol table so it can't be modified
// p=p+1;      // when we're doing this , we'are targeting the address stored inside p, not the address of p itself


// int arr[10]={1,2,4,3};
// char ch[6]="abcde";
// cout<<arr<<endl;
// cout<<ch<<endl;
// char *c=ch;
// cout<<c<<endl;

// char temp='z';
// char *b=&temp;
// cout<<b;

//}

//      pointers in functions
// there will be no effect on main function if we update the address but if
// we update the address value , it will also change in main func

// void update(int *p){
//     *p = *p + 1;
//     //p =p+1; 
// }
// // int getSum(int *arr,int n){
// // int sum=0;
// // for(int i=0;i<n;i++){
// //     sum += i[arr];
// // }
// // return sum;
// // }
// int main(){
//     int val=5;
//     int *p=&val;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     update(p);
//     cout<<p<<endl;
//      cout<<*p<<endl;

//     // int arr[5]={1,2,3,4,5};
//     // cout<<getSum(arr,5);
// }


//           <--     DOUBLE POINTER     -->
// void update(int **p2){
//  p2 = p2+1;
// // kuch change hoga - NO

//  *p2 = *p2 + 1;
// // kuch change hoga - YES

//  **p2 = **p2 + 1;
// // kuch change hoga - YES
// }
// // void update2(int* p){
// // *p = *p * 2;
// // }
// int main(){
//     int i=5;
//     int *p1=&i;
//     int **p2=&p1;

//     cout<<p1<<endl;
//     cout<<&p1<<endl;
//     cout<<p2<<endl;
//     cout<<*p2<<endl;

//     cout<<i<<endl;
//     cout<<*p1<<endl;
//     cout<<**p2<<endl;

//     cout<<&i<<endl;
//     cout<<p1<<endl;
//     cout<<*p2<<endl;

// cout<<p2<<endl;
//     update(p2);
// cout<<p2<<endl;

// cout<<*p2<<endl;
// update(p2);
// cout<<*p2<<endl;

// cout<<**p2<<endl;
// update(p2);
// cout<<**p2<<endl;

//}
//MCQs

// int first=8;
// int second=18;
// int *p=&second;
// *p=9;
// cout<<first<<"  "<<second<<endl;

// int first=6;
// int *p=&first;
// int *q=p;
// (*q)++;
// cout<<first<<endl;

// int *p=0;
// int first=110;
// *p = first;          // segmentation fault
// cout<<*p<<endl;

// int arr[5];
// int *ptr;
// cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;


// int arr[]={11,21,31,41};
// int *ptr=arr++;      //symbol table can't be updated
// cout<<*ptr<<"/n";

// char ch='a';
// char *ptr=&ch;
// ch++;
// cout<<*ptr<<endl;

// char ch[]="abcde";
// char *p=&ch[0];
// p++;
// cout<<*p<<" "<<p<<endl;

// char str[]="chirag";
// char *p=str;
// cout<<str[0]<<" "<<p[0]<<endl;

// int i=5;
// update2(&i);
// cout<<i<<endl;

// int first=110;
// int *p=&first;
// int **q=&p;
// int second= (**q)++ + 9;
// cout<<first<<" "<<second;

// int first=100;
// int *p=&first;
// int **q=&p;
// int second=++(**q);
// int *r=*q;
// ++(*r);
// cout<<first<<" "<<second<<endl;
    
//}