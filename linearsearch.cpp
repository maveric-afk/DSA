// searching anything in unidirection
#include<iostream>
using namespace std;
// int main(){
//     int arr[10]={5,7,-2,10,22,1,0,5,22,10};

//     //tell whether 1 is present or not

// for(int i=0;i<=9;i++){
//     if(arr[i]==1)
//    { cout<<"yes 1 is there in the array";
//    break;
//     }
// }    
// }

//or

int Search(int arr[],int n,int key){

for(int i=0;i<=n-1;i++){
    if(arr[i]==key){
        return 1;
    }
}
}
int main(){
 int Arr[10]={5,7,-2,10,22,1,0,5,22,10};
//search for any element
int key;
cin>>key;
if(Search(Arr,10,key)==1)
cout<<"yes there is a "<<key<<" in the array";
}