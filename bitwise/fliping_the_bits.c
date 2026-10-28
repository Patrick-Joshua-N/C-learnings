#include<stdio.h>
int main()
{
    int A=23,B=43;
     int i=0,flip=0;
    while(i<=31)
    {
        int bit1=A&(1<<i);
        int bit2=B&(1<<i);
        if(bit1!=bit2)
        flip++;
        i++;
    }
    B=B|A;
    B=B&A;
    printf("Updated B value is %d",B);
    printf("\nNumber of flips : %d ",flip);
}
