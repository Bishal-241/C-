#include<stdio.h>
int main(){
    int* pointer ;
    int a = 1000;
    pointer = &a;
    printf("The address of variable a is %p \n ",pointer);          //output = The address of variable a is 0x7fff2688b49c 
    printf("The value of variable a is %d",*p);
    printf("the next address afer that is %p\n",(pointer+1));       // -o = the next address afer that is 0x7fff2688b4a0
    // printf("The address of pointer is %x\n",&pointer);
    // printf("the value at address 0x7fff2688b4a0 is %p \n",pointer);

    return 0;
}