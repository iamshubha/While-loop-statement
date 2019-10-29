#include<stdio.h>
int main(){
    int pure , time , count;
    float r, si;
    count = 1 ;
    while (count <= 3)
    {
        printf("\n Enter value of pure , time , r : ");
        scanf("%d%d%f",&pure,&time,&r);
        si= pure*time*r/100;

        printf("Simple interest rate = %f",si);

        count = count + 1;

    }
    
}