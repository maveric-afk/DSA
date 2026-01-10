#include<iostream>
#include<algorithm>
#include<string>    
#include<array>   
#include<vector>  
#include<sstream> 
using namespace std;
//int main(){
// string x="chirag gupta";      // 1-D char arrays
// cout<<x;

// string s;
// getline(cin,s);
//  // cin>>s;         // if there is spaces,tab or new line in our string then cin
// cout<<s<<endl;        // will only take 1st word as input
// cout<<s[2];

//there is a null character in the end of char array
// char ch[6];
// cout<<"your name please : ";
// cin>>ch;
// ch[2]=char(0);
// cout<<ch;

//codee for length of char array
// char x[]="chirag";
// cout<<"length of given string is : ";
// int count=0;
// for(int i=0;x[i]!=char(0);i++){
//     count++;
// }
// cout<<count;

   // input a string of length n and count all the vowels in the given string

    // string str="cow is an animal with four legs";
    // int n=str.length();
    // int count=0;
    // for(int i=0;i<=n-1;i++)
    // {if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
    // count+=1;}
    // cout<<count;

    // input a string of size n and update all the even positions
    // in the string to character 'a'.

// string s;
// getline(cin,s);
// for(int i=0;i<s.length();i++)
// { if(i%2==0)
//s[i]='a';}
// cout<<s;


//reverse a string
// string s;
// cin>>s;
// cout<<"reversed string : ";
// for(int i=0;i<s.length();i++){
//     if(s.length()%2==0 && i<=s.length()/2-1){swap(s[i],s[s.length()-1-i]);}
//     if(s.length()%2!=0 && i<=s.length()/2){swap(s[i],s[s.length()-1-i]);}

// }
// cout<<s;


    // string s="chirag";
    // cout<<s<<endl;
    // s.push_back('g');       // put the character behind
    // cout<<s<<endl;
    // s.pop_back();           // remove the character from behind
    // cout<<s<<endl;
    // s.append(" gupta");     // can add another string to back
    // cout<<s<<endl;
    // s=s + " is best";   // '+' operator instaed of append
    // cout<<s<<endl;
    // s="oh! " + s;
    // cout<<s<<endl;
    // s.clear();      // can clear any string
    // cout<<s;
//}



// important concept of delimiter
//:-Delimiters are used as separators between the characters or words
// in a string so that different results can get separated by the delimiter.
// vector<string> split(string str , char ch){
//     stringstream s(str);
//     vector<string> res;
//     string token;
//     while (getline(s, token, ch)) {
//         res.push_back(token);
//     }
//     return res;
// }
// int main(){
//     string s;
//     getline(cin,s);
//     vector<string> res=split(s,' ');
// for(int i=0;i<res.size();i++){
//     cout<<res[i]<<endl;
// }
// }


//int main(){
    // string s="chirag";
    // cout<<s<<endl;
    // reverse(s.begin(),s.end());
    //  cout<<s<<endl;

    // int x=62585;
    // string s=to_string(x);
    // cout<<s<<endl;
    // s.append(" hi");
    //   cout<<s<<endl;

    // string s="636965";
    // cout<<s<<endl;
    // int x=stoi(s);
    // cout<<x;
//}


//Q.check palindrome

// char toLowercase(char ch)
// {
// if('a'<=ch && ch<='z'){return ch;}
// else{
//     char temp=ch-'A'+'a';
//     return temp;
// }
// }
// bool checkPalindrome(string s){
// int S=0;
// int E=s.size()-1;
// while(S<=E){
//     if(toLowercase(s[S])!=toLowercase(s[E])){
//         return 0;
//     }
//     if(toLowercase(s[S])==toLowercase(s[E])) {
//         S++;
//         E--;
//     }
// }
// return 1;
// }

// int main(){
// string s;
// cin>>s;
// cout<<checkPalindrome(s);
// }


//Q* valid palindrome[leetcode]
// char toLower(char ch){
//     if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))return ch;
//     else{
//         char temp=ch-'A'+'a';
//         return temp;
//     }
// }
// char valid(char ch){    //for removing non-alphanumeric char's
//     if((ch>='0' && ch<='9')||(ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
//     return 1;
//     else return 0;
// }
// bool checkPalindrome(string str){
//     string temp="";
// for(int i=0;i<str.length();i++){
// if(valid(str[i])){
//     temp[i]=toLower(str[i]);
// }
// }
// int s=0;
// int e=temp.length()-1;
// while(s<=e){
//     if(temp[s]!=temp[e])return false;
//     else{
//         s++;
//         e--;
//     }
// }
//  return true;   
// }
// int main(){
//     string s;
//     cin>>s;
// cout<<checkPalindrome(s);
// }


//Q. reverse words in a string[reverse the words only,keeping the whitespaces as it is]

// int main(){
//  string s;
//  getline(cin,s);
//  int i=0,j=0;
//  while(j<=s.length()){
//     if(s[j]==' ' || s[j]==char(0)){
//         reverse(s.begin()+i,s.begin()+j);
//         i=j+1;
//     }
//     j++;
//  } 
// cout<<s;
// }


//Q**return the max. occuring character
// int main(){
//   string s="output";
//   int count1=0;
//   int count2=0;
//   char ans=s[0];
//   for(int i=0;i<s.length();i++){
//     count2=count1;
//     count1=0;
//     for(int j=0;j<s.length();j++){
//       if(s[j]==s[i]){
//         count1++;
//       }
//     }
//   if(count1>count2){ans=s[i];}
//   if(count1==count2 && int(s[i])<int(ans)){ans=s[i];}
//   }
//   cout<<ans;
// }


//Q. replace spaces(with @40)
//int main(){
  // string s="chirag gupta is my name";
  // string temp="";
  // for(int i=0;i<s.length();i++){
  //   if(s[i]==' '){
  //     temp.push_back('@');
  //     temp.push_back('4');
  //     temp.push_back('0');
  //   }
  //   else{
  //     temp.push_back(s[i]);
  //   }
  // }
  // cout<<temp; 
//}



//Q. string compression[leetcode]
// int compress(vector<char>& chars) {
//         string s="";
//         int i=0;
//         for(int i=0;i<chars.size();i++){
//             int count=0;
//             for(int j=i;j<=chars.size();j++){
//                 if(j<chars.size() && chars[j]==chars[i]){
//                     count++;
//                 }
//                 else{
//                     i=j-1;
//                     break;
//                 }
//             }           
//             if(count==1){
//                 s.push_back(chars[i]);
//             }
//             if(count!=1){
//                 s.push_back(chars[i]);
//                 s.append(to_string(count));
//             }
//         }
//         chars.clear();
//         for(int i=0;i<s.length();i++){
//             chars.push_back(s[i]);
//         }
//         return chars.size();
// int main(){

// }




//Q. remove all occurence of a substring[leetcode]
// int main(){
//     string s="eemckxmckx";
//     string part="emckx";
//      while(s.length()>0 && s.find(part)<s.length()){
//             s.erase(s.find(part),part.length());
//         }
//         cout<<s;
// }



// //Q. remove all adjacent duplicates in string[leetcode]
// int main(){
// string s="azxxzy";
// for(int i=0;i<s.length();i++){
//             if(s[i]==s[i+1]){
//                 s.erase(i,2);
//                 i=-1;
//             }
//         }
//         cout<<s;
// }



//permutation in string
// bool checkequal(int* count1,int* count2){
//         for(int i=0;i<26;i++){
//             if(count1[i]!=count2[i]){
//                 return 0;
//             }
//         }
//         return 1;
//     }
// bool checkInclusion(string s1, string s2) {
//         int count1[26]={0};
//         for(int i=0;i<s1.length();i++){
//             int index=s1[i]-'a';
//             count1[index]++;
//         }
//         for(int i=0;i<s2.length();i++){
//             int count2[26]={0};
//             for(int j=i;j<i+s1.length() && j<s2.length();j++){
//                 count2[(s2[j]-'a')]++;
//             }
//             if(checkequal(count1,count2)){
//                 return true;
//             }
//         }
//         return false;
//     }
//     int main(){
//          string s1="ab";
//     string s2="eidboaoo";
//     cout<<checkInclusion(s1,s2);
//     }


// //Q. integer to english words
//  string helper(map<int,string> unitplace,map<int,string> tenplace,map<int,string> oneplace,int num){
//     string res="";
//     vector<int> digits;
//     while(num>0){
//         digits.push_back(num%10);
//         num/=10;
//     }
//     while(digits.size()<3){
//         digits.push_back(0);
//     }

//     if(digits[2]!=0){
//         res+=unitplace[digits[2]] + " Hundred ";
//     }
//     if(digits[1]!=0){
//         if(digits[1]==1){
//             res+=oneplace[digits[0]];
//         }
//         else{
//             res+=tenplace[digits[1]]+" ";
//             if(digits[0]!=0){
//                 res+=unitplace[digits[0]];
//             }
//         }
//     }
//     if(digits[1]==0 && digits[0]!=0){
//         res+=unitplace[digits[0]];
//     }

//         if(res.length()>0)
//        { int e=res.length()-1;
//         while(int(res[e])==32){
//             res.pop_back();
//             e--;
//         }}

//     return res;
//   }
// public:
//     string numberToWords(int num) {
//         if(num==0)
//         return "Zero";

//         map<int,string> unitplace;
//         unitplace[1]="One";
//         unitplace[2]="Two";
//         unitplace[3]="Three";
//         unitplace[4]="Four";
//         unitplace[5]="Five";
//         unitplace[6]="Six";
//         unitplace[7]="Seven";
//         unitplace[8]="Eight";
//         unitplace[9]="Nine";

//         map<int,string> tenplace;
//         tenplace[2]="Twenty";
//         tenplace[3]="Thirty";
//         tenplace[4]="Forty";
//         tenplace[5]="Fifty";
//         tenplace[6]="Sixty";
//         tenplace[7]="Seventy";
//         tenplace[8]="Eighty";
//         tenplace[9]="Ninety";

//          map<int,string> oneplace;
//          oneplace[0]="Ten";
//         oneplace[1]="Eleven";
//         oneplace[2]="Twelve";
//         oneplace[3]="Thirteen";
//         oneplace[4]="Fourteen";
//         oneplace[5]="Fifteen";
//         oneplace[6]="Sixteen";
//         oneplace[7]="Seventeen";
//         oneplace[8]="Eighteen";
//         oneplace[9]="Nineteen";

//         string result="";
//         if(num!=0){
//             int digit=0;
//             for(int i=0;i<3;i++){
//                 int a=num%10;
//                 num/=10;
//                 digit=a*pow(10,i)+digit;
//             }
//             string str=helper(unitplace,tenplace,oneplace,digit);
//             if(str.length()>0)
//             result+=str;
//         }
//         if(num!=0){
//             int digit=0;
//             for(int i=0;i<3;i++){
//                 int a=num%10;
//                 num/=10;
//                 digit=a*pow(10,i)+digit;
//             }
//              string str=helper(unitplace,tenplace,oneplace,digit);
//             if(str.length()>0)
//             result=str + " Thousand " + result;
//         }
//         if(num!=0){
//             int digit=0;
//             for(int i=0;i<3;i++){
//                 int a=num%10;
//                 num/=10;
//                 digit=a*pow(10,i)+digit;
//             }
//              string str=helper(unitplace,tenplace,oneplace,digit);
//             if(str.length()>0)
//             result=str + " Million " + result;
//         }
//         if(num!=0){
//             int digit=0;
//             for(int i=0;i<3;i++){
//                 int a=num%10;
//                 num/=10;
//                 digit=a*pow(10,i)+digit;
//             }
//              string str=helper(unitplace,tenplace,oneplace,digit);
//             if(str.length()>0)
//             result=str + " Billion " + result;
//         }

//         int e=result.length()-1;
//         while(int(result[e])==32){
//             result.pop_back();
//             e--;
//         }

//         string ans="";


//         return result;
//     }