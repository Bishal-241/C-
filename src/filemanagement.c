#include<stdlib.h>
#include<stdio.h>
using namespace std;
FILE *fptr;

void myfilereader(){
    char fname = "myfile.txt"
    char[500] mytext;
    char path = "../static/"+fname;
    fptr = fopen(path,"-r");
    if(fptr == NULL){
        printf("Could not open file");
        exit(1);
    }
   else{
        fscanf(fptr , "%s",&mytext);
        printf("%s",mytext);
    }

}


int main(){
    myfilereader();
}