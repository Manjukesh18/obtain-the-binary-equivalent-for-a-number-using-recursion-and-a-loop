#include<stdio.h>
int rec(int);
int recbyloop(int);
int main()
{
    int num=13;
   // scanf("%d",&num);
    printf("%d",rec(num));
    printf("\n%d",recbyloop(num));

}
int rec(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
       return ((n%2)+10*rec(n/2));
    }

}
int recbyloop(int n)
{
    int rem=0,place=1,x;
    while(n!=0)
    {                          //r1:              r2               r3                      r4
        x=n%2;                 //x=1              x=0             x=1                      x=1
        rem=rem+(x*place);     //rem=0+(1*1)     rem=1+0          rem=1+(1*100) i.e 101    rem=101+(1*1000) =>1101
        place=10*place;        //place=10        //place=100      place =1000
        n=n/2;                 //n=6              n=3             n=1
    }
   return rem;
}
