#include<stdio.h>
int main(){
    // pointer variables
    int a;
    int *p ;            //initializing pointer
    p  = &a;            //refering address of a to p


    // used base input
    printf("Enter a integer");
    scanf("%d",&a);

    printf("\n");

    

    printf("%p  >> the address where value of a is stored",p);
    printf("\nthe value at address %p is %d \n ",p,*p);
    return 0;
}