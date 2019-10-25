#include<stdio.h>
int main(){
    int a,i=1,b;
    printf("Enter value of factorial of : ");
    scanf("%d",&b);
    a=1;
    while (a<=b)
    {
        i = i*a;
        a++;
    }
    printf("The factorial value is = %d\n",i);
    return 0 ;

    
}
// int main(){
// int i , f =1 , n=5;
// i =1;
// while (i<=n)
// {
//     f=f*i;
//     i++;


    
// }
// printf("Value %d",f);

// }