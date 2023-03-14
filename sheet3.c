#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FLOAT_TYPE 1
#define CHAR_TYPE 2
#define INT_TYPE 3




void Q1( ){
 int x=25;
 int *p=&x;
 printf("%d",*p);
}
/******************************************************/

int Q2(){

 char x[100]="ahmedheshamostafa";
 char *p=x;
 printf("%s",p);

 }
 /******************************************************/

void Q3(float c,float m,float *pm){
    *pm=c/m;

 }
/******************************************************/
void Q4(  ){

 int a[5],i;
 for(i=0;i<5;i++){
  printf("Enter a[%d]=",i);
  scanf("%d",(a+i));
 }
 for(i=0;i<5;i++){
    printf("%d\n",*(a+i));
 }

 }

/******************************************************/
void  Q5(){
 int a[5],i,sum=0;
 for(i=0;i<5;i++){
  printf("Enter a[%d]=",i);
  scanf("%d",(a+i));
  sum+=*(a+i);
 }
 printf("sum=%d",sum);


 }
/******************************************************/
int Q6(int a[],int size){
    int i,max=-123456;
    for(i=0;i<size;i++){
        if(a[i]>=max)max=a[i];
    }
 return max;
}

 /******************************************************/
int Q7(char s[]){
    if(*s=='\0')return 0;
    else return 1+Q7(s+1);
    }
 /******************************************************/
int Q8(char s[]){
    if(*s=='\0')return 0;
    else if(*s==' ')return 1+Q8(s+1);
    else Q8(s+1);

 }
 /******************************************************/
int Q9(char s[]){
    if(*s=='\0')return 1;
    else{
        if(*s<'0'||*s>='9')return 0;
        Q9(s+1);
    }
 }

 /******************************************************/
 typedef struct data{
 char name[100];
 int age;
 union {
     char state[100],count[100];
 }d;
 }pers;
 void Q10(){
     char c;
     pers p;
     printf("Enter name:");
     gets(p.name);
     printf("enter age:");
     scanf("%d",&p.age);
     getchar();
     printf("are u U.S citizen (y|n)");
     scanf("%c",&c);
     getchar();
     if(c=='y'){
        printf("enter ur state:");
        gets(p.d.state);
        printf("%s %d %s",p.name,p.age,p.d.state);
     }
     else{
        printf("enter ur country:");
        gets(p.d.count);
        printf("%s %d %s",p.name,p.age,p.d.count);
     }

 }
 /******************************************************/
 typedef struct mem{
 char first[100],last[100],gender[100];
 float h,w;
 struct{
     int d,m,y;
 }bd;
 }member;

 void getData(member *m){
 printf("Enter first name:");
 gets(m->first);
  printf("Enter last name:");
 gets(m->last);
  printf("Enter gender:");
 gets(m->gender);
 printf("Enter hight followed by width:");
 scanf("%f%f",&m->h,&m->w);
 printf("enter birth data in format d m y");
 scanf("%d%d%d",&m->bd.d,&m->bd.m,&m->bd.y);
 }
 int age(member m){
 return 2020 - m.bd.y;
 }

 float BMI(member m){
 return (m.w/(m.h*m.h));
 }

void Q11(){
member m;
getData(&m);
printf("Name:%s %s\n",m.first,m.last);
printf("Gender:%s\n",m.gender);
printf("Hight:%f Width:%f\n",m.h,m.w);
printf("BirthDate %d - %d - %d \n",m.bd.d,m.bd.m,m.bd.y);
printf("Age:%d years\n",age(m));
printf("BMI : %f \n",BMI(m));

 }
  /******************************************************/
 void swap_nums( int *x, int *y ) {
   int tmp;
   tmp = *x;
   *x = *y;
   *y = tmp;
}

void swap_pointers( char *x, char *y ) {
   char *tmp;
   tmp = x;
   x = y;
   y = tmp;
}

Q12_A() {
   int a,b; char *s1,*s2;
   a = 3; b=4;
   swap_nums( &a, &b );
   printf( "a is %d\n", a);
   printf( "b is %d\n", b);
   s1 = "I should print second";
   s2 = "I should print first";
   swap_pointers( s1, s2 );
   printf( "s1 is %s\n", s1 );
   printf( "s2 is %s\n", s2 );

}
 /******************************************************/
 int add_two( int x, int y )
{
   static int counter = 1;
   printf("This is the function call of %d,\n", counter++);
   return ( x + y );
}

void Q12_B()
{
   int i, j;
   for ( i = 0, j = 5; i < 5; i++, j-- )
   printf( "the addition of %d and %d is %d.\n\n", i, j, add_two( i, j ) );

}
 /******************************************************/

 void Q13(){
 union u {
double x;
int y;
} a_union;
struct s {
double x;
int  y;
} a_struct;
printf("The size of  a_union:  %d-byte\n",   sizeof(a_union));
printf("The size of a_struct: %d-byte\n", sizeof(a_struct));

 }
  /******************************************************/
struct var_type {
      int type_in_union;
      union {
              float un_float;
              char un_char;
              int un_int;
      } vt_un;
} var_type;

void print_vt( void ) {
      switch( var_type.type_in_union ) {
              default:
                      printf("Unknown type in union\n");
                      break;
              case FLOAT_TYPE:
                      printf("%f\n", var_type.vt_un.un_float);
                      break;
              case CHAR_TYPE:
                      printf("%c\n", var_type.vt_un.un_char);
                      break;
              case INT_TYPE:
                      printf("%d\n", var_type.vt_un.un_int);
                      break;
      }
}
void Q14(){
  var_type.type_in_union = FLOAT_TYPE;
      var_type.vt_un.un_float = 3.5;
      print_vt();
      var_type.type_in_union = CHAR_TYPE;
      var_type.vt_un.un_char = 'a';
      print_vt();
}
  /******************************************************/
int main()
{

        /****Q1****/
//Q1();


        /****Q2****/
//Q2();

        /****Q3****/
/*
 float c,m,pm;
 scanf("%f%f",&c,&m);
 Q3(c,m,&pm);
 printf("%f",pm);
 */
    /****Q4****/
//Q4();

        /****Q5****/
//Q5();
/******Q6****/
/*
        int i=0,arrsize;
         printf("Enter array size:");
         scanf("%d",&arrsize);
         int a[arrsize];
         for(i=0;i<arrsize;i++){
            printf("Enter a[%d]=",i);
            scanf("%d",&a[i]);
         }
         printf("the max is %d",Q6(a,arrsize));
*/
  /****Q7****/
  /*
char str[]="ahmed hesham";
printf("the length = %d",Q7(str));
*/


     /****Q8****/
/*
char str[]="ahmed hesham mostafa";
printf("Number of space=%d",Q8(str));
*/
      /****Q9****/
/*
char n[100];
printf("Enter String:");
gets(n);
Q9(n)?printf("All Digits"):printf("Not All digits");
*/

      /****Q10****/
    //   Q10();
      /*****Q11******/
       // Q11();
      /******Q12*****/
//Q12_A();
//Q12_B();
 /******Q13*****/
//Q13();
 /******Q14*****/
//Q14();
     return 0;
}
