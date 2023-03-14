#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 5
#define pi 3.14



int Q1(int arr[]){
 int i,c;
 for(i=0,c=0;i<size-1;i++,c++){   //Ascending
    if(!(arr[i]<=arr[i+1]))break;
 }
 if(c==size-1)return 1;
 else{                          //Descending
    for(i=0,c=0;i<size-1;i++,c++){
    if(!(arr[i]>=arr[i+1]))return 0;
 }
 }
 return (c==size-1)?1:0;
}
/******************************************************/

void swap(float *a,float *b){
    float t;
    t=*a;
    *a=*b;
    *b=t;
}
void Q2(float a[],int arraysize){
 int pass,i,isSwap=0;
 printf("\n");
 for(pass=0;pass<arraysize-1;pass++){
    for(i=0;i<arraysize-pass-1;i++){
       if(a[i]>a[i+1]){
        swap(&a[i],&a[i+1]);
        isSwap=1;
       }
    }
    if(!isSwap)break;
 }
 }
 /******************************************************/

int Q3(int arr[],int key,int arrsize){
   if(arrsize){
    if(key==arr[arrsize-1])return arrsize-1;
    else return Q3(arr,key,arrsize-1);

   }
   return -1;
 }
 /******************************************************/

float mean(float arr[]){
int i;
float sum=0;
for(i=0;i<size;i++)sum+=arr[i];

return sum/size;
}

float median(float arr[]){

if(size%2)return arr[size/2];
else return (arr[size/2]+arr[(size/2)-1])/2;
}
float mode(float arr[]){
int i,freq=1,maxf=1;
float mod;
for(i=0;i<size;i++){
        if(arr[i]==arr[i+1]&&i!=size-1){
         freq++;
    }
    else{
        if(freq>=maxf){
            maxf=freq;
            mod=arr[i];
        }
        freq=1;
    }
}
return mod;
}

void Q4(float arr[]){
    int c,i;
    Q2(arr,size);  //bubble sort
    while(1){
    printf("\n1-Mean\n2-Mode\n3-Median\n4-Exit.\n");
    scanf("%d",&c);
    switch(c){
    case 1:printf("Mean = %f\n",mean(arr));break;
    case 2:printf("Mode = %f\n",mode(arr));break;
    case 3:printf("Median = %f\n",median(arr));break;
    case 4:exit(0);
    default:printf("Please enter Correct choice\n");
    }
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

void Q6(char f1name[100],char f2name[100]){
    FILE*f,*f2;
    char a,b;
    if((f=fopen(f1name,"r"))!=NULL){
    if((f2=fopen(f2name,"r"))==NULL) printf("File 2 can not be opened\n ");
    else{
           do{
    a=fgetc(f);
    b=fgetc(f2);
   }while(a!=EOF&&b!=EOF&&a==b);
   if(a==b)printf("Identical");
   else printf("Different");
    }
    }
    else{
        printf("File 1 can not be opened\n ");
    }
    fclose(f);
    fclose(f2);


}
 /******************************************************/

void Q7(char f1name[100],char f2name[100]){
    FILE*f,*f2;
    char c;
     if((f=fopen(f1name,"r"))!=NULL){
        f2=fopen(f2name,"w");

    while((c=fgetc(f))!=EOF){
        if(c>=32&&c<=127)fputc(c,f2);
    }
     }
     else{
     printf("File 1 can not be opened\n ");
     }
    fclose(f);
    fclose(f2);
 }
 /******************************************************/

void Q8(char f1name[100]){
     FILE*f;
     int i=0;
     f=fopen(f1name,"w");
     while(++i<=10) fprintf(f,"%d , %d\n",i,i*i);
    fclose(f);
 }
 /******************************************************/

void Q9(){
  FILE*f;
  int id,g;
  char name[20];
  printf("Enter Idno:");
  scanf("%d",&id);
  printf("Enter grade:");
  scanf("%d",&g);
  getchar();
  printf("Enter Name:");
  gets(name);

    f=fopen("student.txt","w+");
    fprintf(f,"%d %s %d",id,name,g);

    rewind(f);
    fscanf(f,"%d %[ ]s %d",&id,name,&g);
    printf("%d %s %d\n",id,name,g);
    fclose(f);
 }
 /******************************************************/

void Q10(char f1name[100],char f2name[100]){
 FILE*f,*f2;
 int emptyline=0;
    char c[100];
     if((f=fopen(f1name,"r"))!=NULL){
        f2=fopen(f2name,"w+");

    while(( fgets(c,100,f))){
          if(strcmp(c,"\n"))fputs(c,f2);
        }
     }
     else{
     printf("File 1 can not be opened\n ");
     }
    fclose(f);
    fclose(f2);

 }
 /******************************************************/

int  Q11( FILE*f){
int i=0;char c;
while((c=fgetc(f))!=EOF)i++;
return i;
 }
 /******************************************************/

void Q12(char f1name[100]){
  FILE*f;
    char c,q;
    int i=0;
     if((f=fopen(f1name,"r"))!=NULL){


    while((c=fgetc(f))!=EOF){
       printf("%c",c);
       if(c=='\n')i++;
       if(i==20){
            i=0;
        printf("Enter any key to contione if not enter Q:");
        scanf("%c",&c);
        if(q=='Q')break;

       }

    }
     }
     else{
     printf("File 1 can not be opened\n ");
     }
    fclose(f);

 }
 /******************************************************/
 void dec2bin(int num){
 if(num>0){
    dec2bin(num/2);
    printf("%d",num%2);
 }
 }

 int bin2dec(int num){
 int dec=0,i=0;
 while(num>0){
    if(num%10)dec+=pow(2,i);
    num/=10;
    i++;
   // printf("\n%d",dec);
 }
 return dec;
 }
 void setBit(unsigned char *num,int pos){

     *num=*num|(1<<pos);

 }
  int getBit(unsigned char *num,int pos){
      return (*num&(1<<pos))?1:0;
 }

/***clearBit will replace the bit with 0**/
  void clearBit(unsigned char *num,int pos){
      *num=*num&(~(1<<pos));
 }
 /***rmvBit will remove the bit from the input */
 void rmvBit(unsigned char *num,int pos){
  *num=*num>>pos;
 }
 void flip(unsigned char *num,int pos){
     *num=*num^pos;
 }

 void Q14(){
 int in,inputb,i=0;
 unsigned char c,input;
 while(1){


 printf("\n To Enter Input in Decimal Format press 1 for Binary enter 2 to Exit 3\n");
 scanf("%d",&in);
 switch(in){
 case 1:printf("Ebnter Dec Num:\n");
        scanf("%d",&input);
     break;
 case 2:
    printf("Ebnter Bin Num in 8-bit format:\n");
        scanf("%d",&inputb);
        input=(unsigned char)bin2dec(inputb);
    break;
 case 3:exit(0);
 default:printf("Enter correct choices\n");
        continue;
 }
 getchar();

 printf("a.  Get the rightmost bit of any input.\n"
        "b   Get the 3 rightmost bits of any input.\n"
        "c.  Get the leftmost bit of any input.\n"
        "d.  Get the 3 leftmost bits of any input.\n"
        "e.  Remove the rightmost bit of any input.\n"
        "f.  Remove the rightmost 3 bits of any input.\n"
        "g   Set the leftmost bit of any input to one.\n"
        "h.  Set the 3 leftmost bits of any input to one.\n"
        "i.  Set the 4 th , 5 th , 6 th , and 7 th  rightmost bits of any input to one.\n"
        "j.  Remove the 4 th , 5 th , 6 th , and 7 th  rightmost bits of any input.\n"
        "k.  Flip the 4 th , 5 th , 6 th , and 7 th  rightmost bits of any input.\n"
        "l.  Remove the first bit of any input, and add it to the right.\n"
        "To Exit Enter q|Q\n");

 printf("Enter choice \n");
 scanf("%c",&c);
 switch(c){
  case 'a':printf("the rightmostbit for %d (",input);
           (in==2)?printf("%d",inputb):dec2bin(input);
           printf(") is =");
           printf("%d",getBit(&input,0));
      break;
  case 'b':printf("the 3 rightmost bits for %d (",input);
           (in==2)?printf("%d",inputb):dec2bin(input);
           printf(") is =");
           for(i=2;i>=0;i--) printf("%d",getBit(&input,i));
      break;
  case 'c':printf("the leftmost bit for %d (",input);
           (in==2)?printf("%d",inputb):dec2bin(input);
           printf(") is =");
           printf("%d",getBit(&input,7));
      break;
  case 'd':printf("the 3 leftmost bits for %d (",input);
           (in==2)?printf("%d",inputb):dec2bin(input);
           printf(") is =");
           for(i=7;i>4;i--)printf("%d",getBit(&input,i));
      break;
  case 'e':printf("the %d (",input);
           (in==2)?printf("%d",inputb):dec2bin(input);
           /***rmvBit will remove the bit from the input */
           rmvBit(&input,1);
            /****Another Solution***/
           /***clearBit will replace the bit with 0**/
           /***clearBit(&input,0);*/
           printf(") after removing rightmost bit is = %d",input);
           printf(" (");
           dec2bin(input);
           printf(")");
      break;
  case 'f':printf("the %d (",input);
           (in==2)?printf("%d",inputb):dec2bin(input);
           /***rmvBit will remove the bit from the input */
           rmvBit(&input,3);
           printf(") after removing rightmost 3 bits is = %d",input);
           printf(" (");
           dec2bin(input);
           printf(")");
      break;
  case 'g':printf("the %d (",input);
           (in==2)?printf("%d",inputb):dec2bin(input);
           setBit(&input,7);
           printf(") after setting leftmost bit is = %d",input);
           printf(" (");
           dec2bin(input);
           printf(")");
      break;
  case 'h':printf("the %d (",input);
           (in==2)?printf("%d",inputb):dec2bin(input);
           for(i=7;i>4;i--)setBit(&input,i);
           printf(") after setting the 3 leftmost bits is = %d",input);
           printf(" (");
           dec2bin(input);
           printf(")");
      break;
  case 'i':printf("the %d (",input);
           (in==2)?printf("%d",inputb):dec2bin(input);
           for(i=0;i<=3;i++)setBit(&input,i);
           printf(") after setting the 4 th , 5 th , 6 th , and 7 th  rightmost bits is = %d",input);
           printf(" (");
           dec2bin(input);
           printf(")");
      break;
  case 'j':printf("the %d (",input);
           (in==2)?printf("%d",inputb):dec2bin(input);
           /****Another Solution***/
           /***clearBit will replace the bit with 0**/
           /***for(i=0;i<=3;i++)clearBit(&input,i);**/
           /****rmvBit will remove the bit from the input **/
           rmvBit(&input,4);
           printf(") after removing the 4 th , 5 th , 6 th , and 7 th  rightmost bits is = %d",input);
           printf(" (");
           dec2bin(input);
           printf(")");
      break;
  case 'k':printf("the %d (",input);
           (in==2)?printf("%d",inputb):dec2bin(input);
           flip(&input,15);
           printf(") after Flipping the 4 th , 5 th , 6 th , and 7 th  rightmost bits is = %d",input);
           printf(" (");
           dec2bin(input);
           printf(")");
      break;
  case 'l':printf("the %d (",input);
           (in==2)?printf("%d",inputb):dec2bin(input);
           if((getBit(&input,7))){
           input=input<<1;
           flip(&input,1);
           }
           else{
            input=input<<1;
           }
           printf(") after Flipping the 4 th , 5 th , 6 th , and 7 th  rightmost bits is = %d",input);
           printf(" (");
           dec2bin(input);
           printf(")");

      break;
  case 'q':case 'Q':exit(0);
  default:printf("Enter correct choices\n");
 }
 }
 }
int main()
{




        /****Q1****/
  /*
         int i,j;

    int a[size];
    for(i=0;i<size;i++)
 {
     printf("Enter num arr[%d]= ",i);
     scanf("%d",&a[i]);
 }
 */
 //printf("%s",Q1(a)?"Sorted":"Not Sorted");

        /****Q2****/
 /*
 int i,j;
 float af[size];
 for(i=0;i<size;i++)
 {
     printf("Enter num arr[%d]= ",i);
     scanf("%f",&af[i]);
 }
 */
 //Q2(af,size);

        /****Q3****/
/*
 int n,res;
 /*
         int i,j;

    int a[size];
    for(i=0;i<size;i++)
 {
     printf("Enter num arr[%d]= ",i);
     scanf("%d",&a[i]);
 }

 printf("Enter Number to search\n");
 scanf("%d",&n);
 res=Q3(a,n,size);
(res>=0)?printf("found at index %d",res):printf("not found");
*/
        /****Q4****/

           int i;

    float a[size];
     for(i=0;i<size;i++)
 {
     printf("Enter num arr[%d]= ",i);
     scanf("%f",&a[i]);
 }

 Q4(a);
        /****Q5****/
/*
        char s1[100];
        printf("enter string:\n");
        gets(s1);
        printf("the string after replacing spaces is %s where it has %d spaces",s1,Q5(s1));
*/
        /****Q6****/
 /*
char f1[100]="f1.txt";
char f2[100]="f2.txt";
 Q6(f1,f2);
*/
        /****Q7****/
/*
char f1[100]="Q7f1.txt";
char f2[100]="Q7f2.txt";
 Q7(f1,f2);
 */
     /****Q8****/
/*
char f1[100]="Q8f1.txt";
Q8(f1);
*/
      /****Q9****/

  // Q9();
      /****Q10****/
/*
char f1[100]="Q10f1.txt";
char f2[100]="Q10f2.txt";
 Q10(f1,f2);
*/
         /****Q11****/
/*
         FILE*f;

     if((f=fopen("f1.txt","r"))!=NULL){
      printf("Number of char =%d",Q11(f));
     }
     else{
     printf("File 1 can not be opened\n ");
     }
    fclose(f);
*/
         /****Q12****/
/*
char f1[100]="Q12.txt";
Q12(f1);
*/
         /****Q14****/
//Q14();


     return 0;
}
