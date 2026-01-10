#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // use of nested loops

    // 1. solid rectangle

    // int m;
    // cout<<"enter m : ";
    // cin>>m;
    // int n;
    // cout<<"enter n : ";
    // cin>>n;
    // for(int i=1;i<=m;i++){
    //     for(int j=1;j<=n;j++)
    //     cout<<"*  ";
    //     cout<<endl;   // we did not add endl in upper line 
    // }                // to exclude it from loop.

//     2. 1 2 3 4
//        1 2 3 4
//        1 2 3 4
//        1 2 3 4

    // int n;
    // cout<<"ENTER n : ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++)
    //     cout<<j<<" ";
    //     cout<<endl;
    // }

    // 3. 1 1 1 1
    //    2 2 2 2
    //    3 3 3 3
    //    4 4 4 4

    // int n;
    // cout<<"ENTER n : ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++)
    //     cout<<i<<" ";
    //     cout<<endl;
    // }

    // 4. A B C D 
    //    A B C D 
    //    A B C D 
    //    A B C D

    // int n;
    // cout<<"ENTER n : ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=65;j<=64+n;j++)
    //     {cout<<char(j)<<" ";}
    //     cout<<endl;
    // }

    // 5. A A A A 
    //    B B B B 
    //    C C C C 
    //    D D D D

    // int n;
    // cin>>n;
    // for(int i=65;i<=64+n;i++){
    //     for(int j=1;j<=n;j++)
    //    { cout<<char(i)<<" ";}
    //     cout<<endl;
    // }

    // star triangle

    // 6. *
    //    * *
    //    * * *
    //    * * * *

    // int n;
    // cout<<"enter n : ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++)
    //     cout<<"*"<<" ";
    //     cout<<endl;
    // }

    // 7. 1
    //    1 2
    //    1 2 3
    //    1 2 3 4

    // int n;
    // cout<<"enter n : ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++)
    //     cout<<j<<" ";
    //     cout<<endl;
    // }

    // 8. A 
    //    A B 
    //    A B C 
    //    A B C D

    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=65;j<=64+i;j++)
    //     cout<<char(j)<<" ";
    //     cout<<endl;
    // }

    // 9. 1
    //    2 2
    //    3 3 3
    //    4 4 4 4

    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++)
    //     cout<<i<<" ";
    //     cout<<endl;
    // }

    // 10. 1
    //     A B 
    //     1 2 3
    //     A B C D 
    //     1 2 3 4 5

    // int n;
    // cout<<"enter n : ";
    // cin>>n;
    // for(int i=1;i<=n;i+=2){
    //     for(int j=1;j<=i;j++)
    //     cout<<j<<" ";
    //     cout<<endl;           // THIS IS INCORRECT CODE
    // }
    // for(int i=2;i<=n;i+=2){
    //     for(int j=65;j<=64+i;j++)
    //     cout<<char(j)<<" ";
    //     cout<<endl;
    // }

    // int n;
    // cout<<"enter n : ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //   if(i%2!=0)
    //   {for(int j=1;j<=i;j++)
    //   {cout<<j<<" ";}          // brackets ka dhyaan !!!!!
    //   cout<<endl;}             // endl line is included in condition but not in loop!!
    //   if(i%2==0)
    // {  for(int j=65;j<=64+i;j++)
    //  { cout<<char(j)<<" ";}
    //   cout<<endl;}
    // }

//     11. * * * *
//         * * *
//         * *
//         *
    // int n;
    // cout<<"enter n : ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n+1-i;j++)
    //     cout<<"*"<<" ";
    //     cout<<endl;
    // }

    // 12. 1 2 3 4
    //     1 2 3
    //     1 2 
    //     1

    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n+1-i;j++)
    //     cout<<j<<" ";
    //     cout<<endl;
    // }

    // 13. A B C D 
    //     A B C 
    //     A B 
    //     A

    // int n;
    // cout<<"enter n : ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=65;j<=64+n+1-i;j++)
    // {    cout<<char(j)<<" ";}
    //     cout<<endl;
    // }

    // 14. 1 1 1 1
    //     2 2 2
    //     3 3
    //     4

    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n+1-i;j++)
    //     cout<<i<<" ";
    //     cout<<endl;
    //         }

    // 15. 4
    //     4 3 
    //     4 3 2
    //     4 3 2 1

    // int n;
    // cout<<"enter n : ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=n;j>=n+1-i;j--)  //j>= is different observation
    //     cout<<j<<" ";
    //     cout<<endl;
    // }

    // 16. 1
    //     1 3 
    //     1 3 5
    //     1 3 5 7

        // int n;
        // cout<<"enter n : ";
        // cin>>n;
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=2*i-1;j+=2)
        //     cout<<j<<" ";
        //     cout<<endl;
        // }

    //    A B C D
    //    E F G H 
    //    I J K L 
    //    M N O P


    // int n;
    // cin>>n;
    // int count=65;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++)
    //     {cout<<char(count);
    //     count++;}
    //     cout<<endl;
    // }

        // int n;
        // cin>>n;
        // for(int i=1;i<=n;i++){
        //     for(int j=65+n-i;j<=64+n;j++)
        //     cout<<char(j)<<" ";
        //     cout<<endl;
        // }


    // A 
    // B C 
    // C D E 
    // D E F G
    
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=i+64;j<=i+64+i-1;j++)
    //     {cout<<char(j)<<" ";
    //     }
    //     cout<<endl;
    // }


    // *17 1
    //     2 3 
    //     4 5 6
    //     7 8 9 10
    
        // int n;
        // cin>>n;
        // for(int i=1;i<=n;i++){
        //     for(int j=(i*i-i+2)/2;j<=(i*i+i)/2;j++)  // method of difference
        //     cout<<j<<" ";
        //     cout<<endl;
        // }
 
    //         1
    //       2 3
    //     4 5 6 
    //   7 8 9 10   

        // int n;
        // cin>>n;
        // int count=1;
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=n;j++)
        //     {if(j>=n-i+1)
        //     cout<<count<<" ";
        //     else cout<<"  ";
        //     count++;}
        //     cout<<endl;
        // }

    // 18. 1
    //     0 1
    //     1 0 1
    //     0 1 0 1

        // int n;
        // cin>>n;
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=i;j++)
        //    { if((i+j)%2==0) cout<<1;
        //     else cout<<0;}
        //     cout<<endl;

        // }


    //         *
    //         *
    // 19. * * * * *
    //         *
    //         *

        //    int n;   // take only odd input
        // cin>>n;
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=n;j++)
        //     {if(i==(n+1)/2 || j==(n+1)/2)   // dont use && here
        //             cout<<"*"<<" ";
        //     else cout<<"  ";}
        //     cout<<endl;
        // }

        //  20.  * * * * * *
        //       *         *
        //       *         *
        //       * * * * * *

    //     int n;
    //     cin>>n;
    //     int m;
    //     cin>>m;
    //     for(int i=1;i<=n;i++){
    //         for(int j=1;j<=m;j++)
    //    {if((i!=1 && i!=n) && (j!=1 && j!=m))
    //       cout<<"  ";
    //       else
    //         cout<<"* ";}
    //         cout<<endl;
    //     }


        // 21.  *       *
        //        *   *
        //          *
        //        *    *
        //      *        *

        // int n;
        // cin>>n;
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=n;j++)
        //    { if(j==i || j==n+1-i)       // if we use && instead of ||
        //     cout<<"* ";                // it will print only in centre
        //     else 
        //         cout<<"  ";}
        //         cout<<endl;
       
        // }
        
        // 22.         *
        //           * *
        //         * * *
        //       * * * * 

    //     int n;
    //     cin>>n;
    //     for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++)
    //   {if(j>=1 && j<=n-i)
    //         cout<<"  ";
    //     else 
    //         cout<<"* "; }
    //     cout<<endl;
    //     }

    // 23.          1
    //            1 2
    //          1 2 3
    //        1 2 3 4  

    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++)
    //     {if(j>=1 && j<=n-i)
    //     cout<<"  ";
    //     else cout<<j+i-n<<" ";}
    //     cout<<endl;
    // }

  


    // 24.         A 
    //           A B 
    //         A B C 
    //       A B C D

        // int n;
        // cin>>n;
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=n;j++)
        //    { if(j>=65 && j<=64+n-i)
        //         cout<<"  ";
        //     else cout<<char(j+i-4)<<" ";}
        //     cout<<endl;
        // }


    // 25.             * * * *
    //               * * * *
    //             * * * *
    //           * * * * 


            // int n;
            // cin>>n;
            // for(int i=1;i<=n;i++){
            //     for(int j=1;j<=3+n;j++)
            //    { if(j>=5-i && j<=8-i)
            //         cout<<"* ";
            //     else    
            //         cout<<"  ";}
            //     cout<<endl;
            // }


    // 26.             *
    //               * * *
    //             * * * * *
    //           * * * * * * * 

        //   int n;
        //   cin>>n;
        //   for(int i=1;i<=n;i++){
        //     for(int j=1;j<=2*n-1;j++)
        //   {if(j>=n-i+1 && j<=n+i-1)
        //     cout<<"* ";
        //     else    cout<<"  ";}
        //     cout<<endl;
        //   }




    // 27.                 1
    //                   1 2 3
    //                 1 2 3 4 5
    //               1 2 3 4 5 6 7    

        //   int n;
        //   cin>>n;
        //   for(int i=1;i<=n;i++){
        //   for(int j=1;j<=2*n-1;j++)
        //   {if(j>=n-i+1 && j<=n+i-1)
        //     cout<<j+i-4<<" ";
        //     else    cout<<"  ";}
        //     cout<<endl;
        //   }

    // 28.                     A 
    //                       A B C 
    //                     A B C D E 
    //                   A B C D E F G      

    
        //   int n;
        //   cin>>n;
        //   for(int i=1;i<=n;i++){
        //   for(int j=65;j<=2*n-1+64;j++)
        //   {if(j>=n-i+65 && j<=n+i+63)
        //     cout<<char(j+i-4)<<" ";
        //     else    cout<<"  ";}
        //     cout<<endl;
        //   }

    // 29.                          *
    //                            * * *
    //                          * * * * *
    //                        * * * * * * *
    //                          * * * * *
    //                            * * *
    //                              *    

// 30.                 1
//                   1 2 1
//                 1 2 3 2 1
//               1 2 3 4 3 2 1    

        // int n;
        // cin>>n;
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=2*n-1;j++)
        //     if(j<=n && j>=n-i+1) cout<<j<<" ";
        //     else if(j>=n && j<=n+i-1)
        //     cout<<
        // }

   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
    {if(i<=(n+1)/2 && j>=((n+1)/2)-i+1 && j<=((n+1)/2)+i-1) cout<<"* ";
    else if(i>(n+1)/2 && j>=((n+1)/2)+i-n && j<=((n+1)/2)+n-i) cout<<"* ";
    else cout<<"  ";}
    cout<<endl;
   }

    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=64+i;j<=63+i+n;j++)
    //     cout<<char(j)<<" ";
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++)
    //    { if(j>=i) cout<<"* ";
    //     else cout<<"  ";}
    //     cout<<endl;
    // }


}