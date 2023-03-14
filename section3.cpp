#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>




using namespace std;

int strcomp(char str1[],char str2[]){
 int i,j;
if(strlen(str1)!=strlen(str2))return 0;
 for(i=0,j=0;str1[i]!='\0'&&str2[j]!='\0';i++,j++){
    if(str1[i]!=str2[j])return 0;
 }
 return 1;
}
/***************************************/
int strcomp2(string &str1,string &str2){
 int i,j;
if(str1.size()!=str2.size())return 0;
 for(i=0,j=0;str1[i]!='\0'&&str2[j]!='\0';i++,j++){
    if(str1[i]!=str2[j])return 0;
 }
 return 1;
}
/***************************************/
void reverse2(string &s,int i){

if(i!=s.size()){
reverse2(s,i+1);
printf("%c",s[i]);
}
}
/***************************************/
void printnum(int n){
if(n>0){
    printnum(n/10);
    printf("%d\n",n%10);
}
}
/***************************************/

int main()
{

 /*
 char a[]="ahmeh";
 char b[]="ahmed";
printf("%s",strcomp(a,b)?"Same String":"Different String");
 */
/***************************************//*
 string a="ahmed";
 string b="ahmed";
 printf("%s",strcomp2(a,b)?"Same String":"Different String");
*/
/***************************************//*
string a="ahmed";
reverse2(a,0);
*/
/***************************************/
/*
string a="ahmed";
printf("%s\n",a.c_str());
cout<<a<<endl;

 char s1[50];
 gets(s1);
 printf("%s  %d\n",s1,strlen(s1));
 string ss;
 getline(cin,ss);
 printf("%s  %d\n",ss.c_str(),ss.size());
*/
/********************************/
//printnum(517);




     return 0;
}
