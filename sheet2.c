#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 10




void Q1(char s1[],char s2[]){
  int i,j=0;
  i=strlen(s1);
  while(s2[j]!='\0'){
    s1[i++]=s2[j++];
  }
  s1[i]='\0';
}
/******************************************************/

int Q2(char str[],char c){
 int i=0,count=0;
 while(str[i++]){
    if(str[i]==c)count++;
 }
 return count;

 }
 /******************************************************/

int Q3(char s1[],char s2[]){
    int i=0,j=0,k=0,c=0;
    int str1len=strlen(s1);
    for(j=0;s2[j];j++){
        for(i=0,c=0,k=j;s1[i];i++,k++){
            if(s1[i]==s2[k])c++;
            else break;
        }
        if(c==str1len)return 1;
    }
return 0;
 }
/******************************************************/
void Q4(char *str ){
     if(*str!='\0'){
        Q4(str+1);
        printf("%c",*str);
     }
 }

/******************************************************/
int  Q5(char s[]){
   int i,sp=0;
   while(s[i++]){
    if(s[i]==' '){
            s[i]='-';
            sp++;
    }
   }
return sp;
 }
/******************************************************/

void Q6_A(){
       enum status {pass, fail, absent};
    enum status stud1, stud2, stud3;
    stud1 = pass;
    stud2 = absent;
    stud3 = fail;
    printf("%d %d %d\n", stud1, stud2, stud3);
}
void Q6_B(){
    enum days {MON=-1, TUE, WED=6, THU, FRI, SAT};
    printf("%d, %d, %d, %d, %d, %d\n", MON, TUE, WED, THU, FRI, SAT);
}
 /******************************************************/

typedef struct birth_date{
    int d,m,y;
    }BD;

typedef struct Employee{
    int id,salary,task[5];
    BD bd;
}emp;


void Q7_a(emp *e){
    int i;
    printf("Enter emp id:\n");
    scanf("%d",&e->id);
    printf("Enter emp salary:\n");
    scanf("%d",&e->salary);
    printf("Enter birth date in format m d y id:\n");
    scanf("%d%d%d",&e->bd.d,&e->bd.m,&e->bd.y);
    printf("Enter emp task id:\n");
    for(i=0;i<5;i++){
     scanf("%d",&e->task[i]);
    }
    }

int Q7_b(emp *e,int idno){
    while(e!=NULL){
        if(e->id==idno)return e->salary;
        e++;
    }
    return -1;
    }
/*another sol*/

int Q7_b_2(emp e[],int idno,int noemp){
    int i;
    for(i=0;i<noemp;i++){
        if(e[i].id==idno)return e[i].salary;
    }
    return -1;
    }
 /******************************************************/
void Q8(){
     struct s {
        double x;
        int  y;
    } a_struct;
    printf("The size of a_struct: %d-byte\n", sizeof(a_struct));
 }
 /******************************************************/
void Q9_A(){
 char ch = 'c';
    char *chptr = &ch;
    int i = 20;
    int *intptr = &i;
    float f = 1.20000;
    float *fptr = &f;
    char *ptr = "I am a string";
    printf("\n [%c], [%d], [%f], [%c], [%s]\n", *chptr, *intptr,  *fptr, *ptr, ptr);
 }
void Q9_B(){
    int array[10] = { 2, 5, 9, 0, 3, 7 , 2};
    int *data_ptr;
    int value;
    data_ptr = &array[0];
    value = *data_ptr++;
    printf("%d\n", value);
    value = *++data_ptr;
    printf("%d\n", value);
    value = ++*data_ptr;
    printf("%d\n", value);
    value = *data_ptr;
    printf("%d\n", value);
}
 /******************************************************/
 void Q10_Q1(){
    int i,min=123456789,max=-123456789,sum=0;
    int *arr=(int*)malloc(size*sizeof(int));
 float avg=0;
 for(i=0;i<size;i++)
 {
     printf("Enter num arr[%d]= ",i);
     scanf("%d",(arr+i));
 }
 for(i=0;i<size;i++){

    sum+=arr[i];
    if(*(arr+i) >=max) max= *(arr+i);
    if(*(arr+i)<=min) min= *(arr+i);
 }
 avg=(float)sum/size;

 printf("\n max=%d min=%d avg=%f \n",max,min,avg);
 }
 /******************************************************/
 void Q10_Q2(){
 char *arr;
 int i;
  for(i=0;i<size;i++)
 {
     printf("Enter char arr[%d]= ",i);
     scanf("%c",(arr+i));
     getchar();
 }
 for(i=0;i<size;i++){
 if(*(arr+i)=='z'){
    printf("Found char z at pos %d",i+1);
    return;
 }
 }
 printf("Not Found");
 }
  /******************************************************/
  int Q10_Q3(int *arr){
int i;
    for(i=0;i<size-1;i++){
        if(*(arr+i)>*(arr+i+1))return 0;
    }
    return 1;
 }
 /******************************************************/
 void Q10_Q4(){
   int i,sumodd=0,sumeven=0;
   int *arr=(int*)malloc(size*sizeof(int));

  for(i=0;i<size;i++)
 {
     printf("Enter num arr[%d]= ",i);
     scanf("%d",&arr[i]);
 }
  for(i=0;i<size;i++)
 {
 if(*(arr+i)%2==0)sumeven+=*(arr+i);
 else sumodd+=*(arr+i);
 }
 printf("\n sumEven=%d sumOdd=%d \n",sumeven,sumodd);

  }
 /******************************************************/
 void Q10_Q5(){
  int i,inc=0,dec=0,noch=0,incdec=0,againfalg=0;
  int *arr=(int*)malloc(size*sizeof(int));

  for(i=0;i<size;i++)
 {
     printf("Enter num arr[%d]= ",i);
     scanf("%d",(arr+i));
 }
 for(i=0;i<size-1;i++)
 {
     if(*(arr+i)<= *(arr+i+1)){
            inc++;
            if(incdec>0)againfalg=1;
     }
     else if(*(arr+i)>= *(arr+i+1)){
            dec++;
            if(inc>0){
            incdec++;
            inc=0;
                        }
     }
     else if(*(arr+i) == *(arr+i+1))noch++;
 }
 if(inc==size-1)printf("the numbers in the array are increasing");
 else if(dec==size-1)printf("the numbers in the array are decreasing");
 else if(noch==size-1)printf("the numbers in the array are not changing");
 else if(incdec>0&&!againfalg)printf("the numbers in the array are increasing and then decreasing.");
 else printf("the numbers in the array are increasing and decreasing.");
 }
  /******************************************************/

int main()
{

        /****Q1****/
/*
        char s1[100],s2[100];
        printf("enter first string:\n");
        gets(s1);
        printf("enter second string:\n");
        gets(s2);

        Q1(s1,s2);
        printf("%s",s1);
*/


        /****Q2****/
/*
        char s1[100];
        printf("enter string:\n");
        gets(s1);
        char c='h';
        printf("enter char:\n");
        c=getchar();
        printf("Number of occurance of char %c is %d\n ",c,Q2(s1,c));
*/

        /****Q3****/
/*
        char s1[100],s2[100];
        printf("enter first string:\n");
        gets(s1);
        printf("enter second string:\n");
        gets(s2);
        printf("%s %s sub string of %s ",s1,Q3(s1,s2)?"is":"is not",s2);
*/
    /****Q4****/
/*
        char s1[100];
        printf("enter string:\n");
        gets(s1);
        Q4(s1);
*/

        /****Q5****/
/*
        char s1[100];
        printf("enter string:\n");
        gets(s1);
        printf("the string after replacing spaces is %s where it has %d spaces",s1,Q5(s1));
*/
        /****Q6****/
/*
        Q6_A();
        Q6_B();
*/
     /****Q7****/

/*
         int i=0;
         int idno,arrsize;
         printf("Enter number of employees\n");
         scanf("%d",&arrsize);

          emp e[arrsize];

         for(i=0;i<2;i++) Q7_a(&e[i]);
          printf("Enter id_no for an employee to search\n");
         scanf("%d",&idno);
         int r;
         r=Q7_b(e,idno);
         //or
         //r=Q7_b_2(e,idno,arrsize);
          if(r!=-1)printf("salary =%d\n",r);
          else printf("Not Found");
*/
         //printf("\nid:%d sal:%d Birth:%d %d %d with Tasks[",e.id,e.salary,e.bd.d,e.bd.m,e.bd.y);
         //for(i=0;i<5;i++)printf("%d ",e.task[i]);printf("]");
     /****Q8****/
 //Q8();
      /****Q9****/
/*
   Q9_A();
   Q9_B();
*/

      /****Q10****/
        //Q10_Q1();
      /***********/
        //Q10_Q2();
      /***********/
 /*
           int a[size],i;
             for(i=0;i<size;i++)
         {
             printf("Enter num arr[%d]= ",i);
             scanf("%d",&a[i]);
         }
         Q10_Q3(a)?printf("array is in an ascending order"):printf("array is in not an ascending order");
 */
       /***********/

          //Q10_Q4();
      /***********/
         // Q10_Q5();


     return 0;
}
