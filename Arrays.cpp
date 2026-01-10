#include<iostream>
using namespace std;     // list of particular datatype
int main(){           // when we have to store multiple things of same type
   //array elements occupy contigous locations and name of the array declare 1st element's location
   
    // int arr[5]; 
    // arr[0]=6;              // arr is a container/array having 5 array elements which have indexing from 0 to 4
    // arr[1]=0; 
    // arr[2]=5;       // we can also use for loop for giving input in array elemets
    // arr[3]=1; 
    // arr[4]=9; 
    // for(int i=0;i<=4;i++)
    // cout<<arr[i]<<" ";
    // arr[1]=3;        // updating an element
    // cout<<endl;
    // for(int i=0;i<=4;i++)
    // cout<<arr[i]<<" ";

// array ke first element ka address array ka naam hi hota hai
    // int arr[10]={4,3,2,4,6,2,1,8,7,9};  // declaration + initialization. if we do not mention size of array,code will run
    //  for(int i=0;i<=9;i++)
    // cout<<arr[i]<<" ";

// int arr[5]={};   // if we've not initialised the array it will fill garbage values but if we've initialised an array but given no value then it will fill 0
// for(int i=0;i<=4;i++){
//   cout<<arr[i]<<endl;
// }

// arr[i] == i[arr]

// char ch[6]={'c','h','i','r','a','g'};
// for(int i=0;i<=5;i++){
//   cout<<ch[i];
// }

    // array is pass by reference means if we make a function
   // to change value of any array element, no new array is
    // formed.

// Q. find sum of elements of an array
// int arr[5]={3,5,7,8,12};
// int sum=0;
// for(int i=0;i<=4;i++)
// sum+=arr[i];
// cout<<sum;

//  int arr[]={6,1,4,2,3,7,8,9,99};
//  int n=sizeof(arr)/4;
//  int sum=0;
//  for(int i=0;i<=n-1;i++)
// sum+=arr[i];
// cout<<sum;

// Q. find the maximum value in the array
      //   int arr[]={3,6,90,13,46,7,45};
      //   int n=sizeof(arr)/4;
      //   int f=arr[0];
      //   for(int i=0;i<n;i++)
      // {if(arr[i+1]>f)
      //   f=arr[i+1];}
      //   cout<<f;

      // INT_MIN print the minimum value & INT_MAX print the maximum value.

// Q. find the minimum value in the array
      //   int arr[]={30,6,90,13,46,7,45};
      //   int n=sizeof(arr)/4;
      //   int f=arr[0];
      //   for(int i=1;i<n;i++)
      // {if(arr[i]<f)
      //   f=arr[i];}
      //   cout<<f;

   // Q. given an integer n. create an array containing squares
   // of all natural numbers till n and print the elements of array
      // int n;
      // cin>>n;
      // int arr[n];
      // for(int i=0;i<=n-1;i++)
      // arr[i]=(i+1)*(i+1);

      // for(int i=0;i<n;i++)
      // cout<<arr[i]<<endl;

    // Q. Given an array of integers, change the value of all
    // odd indexed elements to its second multiple and increment 
    // all even indexed value by 10

  //   int arr[8]={4,5,2,9,7,56,6,3};
  //   for(int i=0;i<=7;i++)
  //   cout<<arr[i]<<" ";
  //   cout<<endl;
  //   for(int i=0;i<=7;i++)
  //  { if(i%2==0) arr[i]+=10;
  //   else arr[i]*=2;
  //   cout<<arr[i]<<" ";}

    // Q. count the number of elements in given array 
    // greater than a given number x

  //   int arr[10]={1,4,2,33,54,6,8,70,12,65};
  //   int count=0;
  //   int x;
  //   cin>>x;
  //   for(int i=0;i<10;i++)
  // {if(arr[i]>x)
  //   count+=1;}
  //   cout<<count;

  // Q. find the difference between the sum of elements
  // at even indices to the sum of elements at odd indices

  //   int arr[10]={5,6,34,9,67,11,44,98,10,61};
  //   int sumO=0,sumE=0;
  //   for(int i=0;i<10;i++)
  // {  if(i%2==0) sumE+=arr[i];
  //   else sumO+=arr[i];}
  //   cout<<sumO-sumE;

  // Q. find the second largest element in an array

//   int arr[10]={4,6,78,2,32,8,9,11,23,50};
//   int mx=arr[0];
//   int smx=arr[0];
//   for(int i=1;i<10;i++)
//  { if(arr[i]>mx) mx=arr[i];}
//     for(int i=1;i<10;i++)
//     {if(arr[i]>smx && arr[i]!=mx)
//     smx=arr[i];}
//     cout<<smx;

// // Q. write a program to copy the contents of one array 
// // into another in the reverse order

// int arr1[5]={45,23,89,70,11};
// int arr2[5];
// for(int i=0;i<5;i++)
// cout<<arr1[i]<<" ";
// cout<<endl;
// for(int i=4;i>=0;i--)
// arr2[4-i]=arr1[i];   // i wrote arr1[i]=arr2[4-i]; & it gave error
// for(int i=0;i<=4;i++)
// cout<<arr2[i]<<" ";


  // Q. write a program to reverse the array without using 
  // any extra array ?

// int arr[6]={45,23,89,70,11,22};
// for(int i=0;i<=5;i++)
// cout<<arr[i]<<" ";
// cout<<endl;
// for(int i=0;i<=5;i++)
// {if(i<5-i)
// {int temp=arr[i];
// arr[i]=arr[5-i];
// arr[5-i]= temp;}}

//  for(int i=0;i<=5;i++)
// cout<<arr[i]<<" ";



// Q. if an array arr contains n elements, then check if the 
// given array is a palindrome or not




      // * 2-D ARRAYS *


      // int arr[5][3];  // arr[rows][columns]
      // arr[0][0]=7; 
      // arr[0][1]=5; 
      // arr[0][2]=51; 
      // arr[1][0]=53; 
      // arr[1][1]=9; 
      // arr[1][2]=90; 
      // arr[2][0]=8; 
      // arr[2][1]=6; 
      // arr[2][2]=2; 
      // arr[3][0]=11; 
      // arr[3][1]=13; 
      // arr[3][2]=4; 
      // arr[4][0]=54; 
      // arr[4][1]=34; 
      // arr[4][2]=87;    // 4th row 3rd column box gets 87
      // for(int i=0;i<=4;i++){
      //   for(int j=0;j<=2;j++)
      //   cout<<arr[i][j]<<"  ";
      //   cout<<endl;
      // }

    //initialisation 
    // int arr[2][3]={{1,2,3},{5,6,7}};
    //  int arr[2][3]={1,2,3,5,6,7};
    //   int arr[][3]={1,2,3,5,6,7};

  //  Q. store 10 at every index of a 2d matrix with 5 rows and 5 cols

  // int arr[5][5];
  // for(int i=0;i<=4;i++){
  //   for(int j=0;j<=4;j++)
  //   {arr[i][j]=10;
  //   cout<<arr[i][j]<<" ";}
  //   cout<<endl;
  // }     

  // Q. write a program to add two matrices

  // int a[2][3]={9,4,2,0,1,7};
  //  int b[2][3]={2,1,6,5,9,4};
  //  for(int i=0;i<=1;i++){
  //   for(int j=0;j<=2;j++)
  //   cout<<a[i][j] + b[i][j]<<" ";
  //   cout<<endl;
  //  }

  // Q. find maximum element in a given matrix

//     int a[2][3]={9,4,22,0,1,7};
//     int f=a[0][0];
//       for(int i=0;i<=1;i++){
//     for(int j=0;j<=2;j++)
//     {if(a[i][j]>f) f=a[i][j];}
// }
// cout<<f;

// Q. Given a matrix 'a' of dimensions nxm and 2 coordinates
// (l1,r1) & (l2,r2). return the sum of the rectangle from (l1,r1) to (l2,r2)

// int arr[3][3]={4,1,3,2,7,6,5,9,8};
// int sum=0;
// for(int i=1;i<=2;i++){
//   for(int j=1;j<=2;j++)
//   sum+=arr[i][j];}
//   cout<<sum;

// Q. wap to create and print the transpose of a given matrix

  // int arr[2][3]={1,2,3,4,5,6};
  // for(int j=0;j<=2;j++){
  //   for(int i=0;i<=1;i++)
  //   cout<<arr[i][j]<<" ";
  //   cout<<endl;
  // }


}

