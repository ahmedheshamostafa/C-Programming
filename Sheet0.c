#include <stdio.h>
#include <stdlib.h>

void Q1(){
    printf("Welcome!\nYou are able to test your skill of writing C code here.");
}
/******************************************************/
void Q2(){
int a=10,b=15;
float c=12.6;
printf("%d %d %f",a,b,c);
}
/******************************************************/
void Q3(){
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
printf("%d %d %d",a,b,c);
}
/******************************************************/
void Q4(){
int x,y,p,s,total;
scanf("%d%d",&x,&y);
p=x*y;
s=x+y;
total=s*s+p*(s-x)*(p+y);
printf("Total=%d",total);
}
/******************************************************/
float Q5(float b,float h){
 return .5*b*h;
}
/******************************************************/
int Q6(int x,int y,int z){
return (x>=y&&x>=z)?x:(y>=x&&y>=z)?y:z;
}
/******************************************************/
char Q7(float a,float b, float c){
    float g=((a+b+c)/3)/100;
    if(g>=.9) return 'A';
    else if (g<.9 && g>=.7)return 'B';
    else if (g<.7 && g>=.5)return 'C';
    else return 'D';
}
/******************************************************/
int Q8(int n){
    return (n%2==0)?1:0;
}
/******************************************************/
int Q9(int x,int y){
return (x==y)?0:(x>y)?1:2;
}
/******************************************************/
int Q10(int x,int y,int z){
return (x==y&&x==z)?0:(x==y||x==z||y==z)?1:2;
}
/******************************************************/
void Q11(){
/*Go To Q16*/
}
/******************************************************/
void Q12(int rows){
    int i,j;
    for(i=rows;i>=1;i--){
        for(j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }
}
/******************************************************/
void Q13(int rows){
    int i,j;
    for(i=1;i<=rows;i++){
        for(j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }
    Q12(rows);
}
/******************************************************/
int Q14(int n){
    int sum=0,i=0;
    for(;i<n;i++)sum+=i;
return sum;
}
/******************************************************/
int Q15(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n=n/10;
    }
return sum;
}
/******************************************************/
void Q16(){
int a,b,res;
float resf;
char c;
while(1){
printf("Enter Two Numbers\n");
scanf("%d%d",&a,&b);
getchar();
printf("Enter + for addition , - for subtraction , * for Mul and / for Div \n To Exit Enter e or E \n");
scanf("%c",&c);
switch(c){
case '+':res=a+b;
    break;
case '-':res=a-b;
    break;
case '*':res=a*b;
    break;
case '/':resf=(float)a/b;
    break;
case 'e':case 'E':exit(0);
default:printf("Enter Correct choice !!!\n");
}
if(c=='+'||c=='-'||c=='*')
printf("The result of %d %c %d =%d\n",a,c,b,res);
else if(c=='/')
printf("The result of %d %c %d =%f\n",a,c,b,resf);

}
}
/******************************************************/

void Q18(){
    int j=0,i=0,max=0,min=123456789,arr[10],count=0,maxf=-123456 ,n;


    while(i<10){
      scanf("%d",&n);
      arr[i]=n;
      if(n>=max)max=n;
      if(n<=min)min=n;
      i++;
    }
    for(i=0;i<10;i++){
    for(j=i+1;j<10;j++){
        if(arr[i]==arr[j])count++;
    }
    if(count>maxf){
            maxf=count;
            n=arr[i];
    }
    count=0;
}
     for(i=0;i<10;i++){
        printf(" %d ",arr[i]);
     }
     printf("\n");
     printf("Max=%d,Min=%d,diff=%d and most occured =%d",max,min,diffe(max,min),n);

}

int diffe(int a,int b){
return a-b;
}
/******************************************************/
void Q18_2(){
    int n,i=0,max=0,min=123456789,arr[10],count=0, maxf=-123456, maxfarr[10],res[10],m=0,j=0;
    while(i<10){
      scanf("%d",&n);
      arr[i]=n;
      if(n>=max)max=n;
      if(n<=min)min=n;
      i++;
    }
    for(i=0;i<10;i++){
    for(j=i+1;j<10;j++){
        if(arr[i]==arr[j])count++;
    }
    if(count>=maxf){
            maxf=count;
            maxfarr[m]=count;
            res[m]=arr[i];
            m++;

    }
    count=0;
}

     for(i=0;i<10;i++){
        printf(" %d ",arr[i]);
     }
     printf("\n");
     printf("Max=%d,Min=%d,diff=%d and most occured =",max,min,diffe(max,min));
     for(i=m-1;i>=0;i--){
        if(maxfarr[m-1]==maxfarr[i])
        printf("%d ",res[i]);
        if(maxfarr[i]<maxfarr[m-1])break;
        if(i!=0)
        printf("and ");
     }
}


/******************************************************/
int Q19(int n){
    if(n==0)return 0;
    else return n+Q19(n-1);

}
/******************************************************/
int Q20(int n,int i){
    if(i==1) return 1;
    else if(n%i==0)return 0;
    else  Q20(n,i-1);
}
/******************************************************/
int Q20_2(int n){
    static int i=2;
    printf("i=%d\n",i);
    if(i==n/2) return 1;
    else if(n%i==0)return 0;
    else  {i++;
            Q20_2(n);
    }

}
/******************************************************/
void Q21(char name[],int i){
    if(name[i]){
        Q21(name,i+1);
    printf("%c",name[i]);
    }
}
/******************************************************/
int Q22(int a,int b){
    if(b==1)return a;
else return a+Q22(a,b-1);

}

/******************************************************/
int main()
{
 /****Q1****/
 //Q1();
 /**********/
  /****Q2****/
 //Q2();
 /**********/
   /****Q3****/
 //Q3();
 /**********/
   /****Q4****/
 //Q4();
 /**********/
    /****Q5****/
// printf("Area=%f",Q5(2,3));
 /**********/

    /****Q6****/
// printf("%d",Q6(5,7,3));
 /**********/
     /****Q7****/
//printf("%c",Q7(50,50,50));
 /**********/
      /****Q8****/
//printf("%s",Q8(5)?"even":"odd");
 /**********/
       /****Q9****/
/*
       int x=4,y=5;
       int t=Q9(x,y);
if(t==0)printf("%d and %d are EQ",x,y);
else if (t==1)printf("%d is greater than %d",x,y);
else printf("%d is greater than %d",y,x);


 /**********/
        /****Q10****/
/*
       int x=30,y=30,z=120;
       int t=Q10(x,y,z);
if(t==0)printf("EQ Tri" );
else if (t==1)printf("Isosceles Tri");
else printf("Acute Tri",y,x);


 /**********/
  /****Q12***/
 //Q12(7);
 /**********/
   /****Q13***/
// Q13(7);
 /**********/
      /****Q14****/
//printf("%d",Q14(5));
 /**********/      /****Q14****/
//printf("%d",Q15(123));
 /**********/
    /****Q16****/
 //Q16();
 /**********/
    /****Q18****/
// Q18();
 /**********/
     /****Q18_2****/
 //Q18_2();
    /****Q19****/
 //printf("%d",Q19(5));
 /**********/
     /****Q20****/
  //printf("%s",Q20(8,8/2)?"prime":"not prime");
 /**********/
      /****Q21****/
 Q21("ahmed",0);
 /**********/
     /****Q22****/
 //printf("%d",Q22(5,4));
 /**********/
     return 0;
}
