#include <iostream>
#include <stdio.h>
using namespace std;

void funav(int h,int w,int l,int &area,int &vol){

area=h*w;
vol=h*w*l;
}

/*Overloaded Function*/
void funav(int h,int w,int l){
printf("%d %d \n",h*w,h*w*l);
}

int main()
{
    int a,v;
    int hight,width,length;
    scanf("%d%d%d",&hight,&width,&length);
    funav(hight,width,length,a,v);
    printf("%d %d\n",a,v);
    funav(hight,width,length);
     return 0;
}
