#include <stdio.h>
#include <stdlib.h>
#define size 10
#define pi 3.14



void Q1(){
 int arr[size],i,min=123456789,max=-123456789,sum=0;
 float avg=0;
 for(i=0;i<size;i++)
 {
     printf("Enter num arr[%d]= ",i);
     scanf("%d",&arr[i]);
 }
 for(i=0;i<size;i++){
    sum+=arr[i];
    if(arr[i]>=max)max=arr[i];
    if(arr[i]<=min)min=arr[i];
 }
 avg=(float)sum/size;

 printf("\n max=%d min=%d avg=%f \n",max,min,avg);

 }
/******************************************************/

void Q2(){
 char arr[size],i;
  for(i=0;i<size;i++)
 {
     printf("Enter char arr[%d]= ",i);
     scanf("%c",&arr[i]);
     getchar();
 }
 for(i=0;i<size;i++){
 if(arr[i]=='z'){
    printf("Found char z at pos %d",i+1);
    return;
 }
 }
 printf("Not Found");

 }
 /******************************************************/

int Q3(int arr[size]){
    int i;
    for(i=0;i<size-1;i++){
        if(arr[i]>arr[i+1])return 0;
    }
    return 1;
 }
 /******************************************************/
void Q4(){
     int arr[size],i,sumodd=0,sumeven=0;
  for(i=0;i<size;i++)
 {
     printf("Enter num arr[%d]= ",i);
     scanf("%d",&arr[i]);
 }
  for(i=0;i<size;i++)
 {
 if(arr[i]%2==0)sumeven+=arr[i];
 else sumodd+=arr[i];
 }
 printf("\n sumEven=%d sumOdd=%d \n",sumeven,sumodd);

 }
 /******************************************************/

void Q5(){
  int arr[size],i,inc=0,dec=0,noch=0,incdec=0,againfalg=0;
  for(i=0;i<size;i++)
 {
     printf("Enter num arr[%d]= ",i);
     scanf("%d",&arr[i]);
 }
 for(i=0;i<size-1;i++)
 {
     if(arr[i]<=arr[i+1]){
            inc++;
            if(incdec>0)againfalg=1;
     }
     else if(arr[i]>=arr[i+1]){
            dec++;
            if(inc>0){
            incdec++;
            inc=0;
                        }
     }
     else if(arr[i]==arr[i+1])noch++;
 }
 if(inc==size-1)printf("the numbers in the array are increasing");
 else if(dec==size-1)printf("the numbers in the array are decreasing");
 else if(noch==size-1)printf("the numbers in the array are not changing");
 else if(incdec>0&&!againfalg)printf("the numbers in the array are increasing and then decreasing.");
 else printf("the numbers in the array are increasing and decreasing.");
 }
 /******************************************************/

void Q6(){
    int arr[3][4],i,j,n;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
       printf("Enter num arr[%d][%d]= ",i,j);
       scanf("%d",&arr[i][j]);
        }
    }
    printf("\n Enter Num to search about it in arr:\n");
           scanf("%d",&n);

        for(i=0;i<3;i++){
        for(j=0;j<4;j++){
         if(arr[i][j]==n)
         {
             printf("Number %d was found in arr(%d,%d)\n",n,i,j);
             return;
         }
    }
  }
  printf("Not Found\n");
}
 /******************************************************/

void Q7(){
    int rows,cols,sum=0,max=-1,pos;
    printf("Enter number of Rows and Columns \n");
    scanf("%d%d",&rows,&cols);
 int arr[rows][cols],i,j,n;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
       printf("Enter num arr[%d][%d]= ",i,j);
       scanf("%d",&arr[i][j]);
        }
    }
        for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
                sum=+arr[i][j];
        }
        if(sum>max)pos=i;
        }
 printf("the max rows is %d with sum =%d",i,sum);

 }
 /******************************************************/

void Q8(){
    int rows;
    printf("Enter number of Rows \n");
    scanf("%d",&rows);
 int arr[rows][rows],i,j,n;
    for(i=0;i<rows;i++){
        for(j=0;j<rows;j++){
         if(i==j)arr[i][j]=0;
         else if(i>j)arr[i][j]=-1;
         else arr[i][j]=1;
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<rows;j++){
                printf("%2d",arr[i][j]);
        }
        printf("\n");
    }
 }
 /******************************************************/

void Q9(){
 int rows;
    printf("Enter size of Pascal Triangle \n");
    scanf("%d",&rows);
 int arr[rows][rows],i,j,n;
    for(i=0;i<rows;i++){
        for(j=0;j<rows;j++){
         if(i==j)arr[i][j]=1;
         else if (j==0)arr[i][j]=1;
         else if(i>j)arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
         else arr[i][j]=-1;

        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<rows;j++){
                if(arr[i][j]!=-1)
                printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
 }
 /******************************************************/

void Q10(int arr[size],int arr2[10]){
    int i,j;
    for(i=size-1,j=0;i>=0;i--,j++)
        arr2[j]=arr[i];

 }
 /******************************************************/

void Q11(){
 int rows,cols,sum=0;

    printf("Enter number of Student \n");
    scanf("%d",&rows);
 int arr[rows][5],i,j,n;
 float avg[rows];
    for(i=0;i<rows;i++){
        for(j=0;j<5;j++){
       printf("Enter subject grade arr[%d][%d]= ",i,j);
       scanf("%d",&arr[i][j]);
       sum+=arr[i][j];
        }
        avg[i]=(float)sum/5;
        sum=0;
    }
    for(i=0;i<rows;i++)
    printf("avg grade for student %d = %f\n",i,avg[i]);
 }
 /******************************************************/

void Q12(){
int rows,cols,zer=0;
 float avg=0;
    printf("Enter number of Rows and Columns \n");
    scanf("%d%d",&rows,&cols);
 int arr[rows][5],i,j,n;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
       printf("Enter elemnt arr[%d][%d]= ",i,j);
       scanf("%d",&arr[i][j]);
       if(arr[i][j]==0)zer++;
        }
       if(zer>(rows*cols)/2){
        printf("Sparse matrix");
        return;

        }
    }
     printf("Not Sparse matrix\n");
 }
 /******************************************************/

void Q13(){
    int rows;
    printf("Enter size of matrix\n");
    scanf("%d",&rows);
    int i,j,mat[rows][rows];
        for(i=0;i<rows;i++){
        for(j=0;j<rows;j++){
                printf("Enter elemnt arr[%d][%d]= ",i,j);
                scanf("%d",&mat[i][j]);
        }
        }
    for(i=0;i<rows;i++){
        for(j=0;j<rows;j++){
            if(mat[i][j]!=mat[j][i]){printf("Not Symmetric \n");return;}
        }
    }
    printf("Symmetric\n");

 }
 /******************************************************/

void Q14(int r,float *area,float *cir){
    *area=pi*r*r;
    *cir=2*pi*r;

 }

 /******************************************************/

void Q15(int arr[],int rows,int *max,int *min,float *avg){
    int i,sum=0;
    for(i=0;i<rows;i++){
        sum+=arr[i];
        if(arr[i]>= *max) *max=arr[i];
        if(arr[i]<= *min) *min=arr[i];
    }
    *avg=sum/rows;

 }

int main()
{
    /*
    int b[3],rad=3,min=123456789,max=-1,rows;
    printf("Enter nuber of rows:");
    scanf("%d",&rows);
    int arr[rows];
    float area,cir,avg=0;
    */
/*
    int i,j;

    int a[size];
     for(i=0;i<size;i++)
 {
     printf("Enter num arr[%d]= ",i);
     scanf("%d",&a[i]);
 }
*/

        /****Q1****/
// Q1();

        /****Q2****/
 //Q2();

        /****Q3****/
 //Q3(a)?printf("array is in an ascending order"):printf("array is in not an ascending order");
        /****Q4****/
// Q4();
        /****Q5****/
 Q5();
        /****Q6****/
// Q6();
        /****Q7****/
 //Q7();
     /****Q8****/
 //Q8();
      /****Q9****/

  // Q9();
      /****Q10****/

  // Q10(a,b);
   //for(i=0;i<size;i++)printf("%d ",b[i]);
         /****Q11****/
//Q11();
         /****Q12****/
//Q12();
         /****Q13****/
//Q13();
         /****Q14****/
//Q14(rad,&area,&cir);
//printf("Area=%f  Circ=%f",area,cir);
  /****Q15****/
 /* printf("Enter number of rows\n");
  scanf("%d",&rows);
  for(i=0;i<rows;i++){
    scanf("%d",&arr[i]);
  }
  Q15(arr,rows,&max,&min,&avg);
  printf("max=%d min=%d avg=%f",max,min,avg);
  */
     return 0;
}
