#include<stdio.h>
int main(){
    int i,j,l,m;


    // input i ,j value
    printf("Enter (i,j) of matrics");
    scanf("%d,%d",&l,&m);

    int  myarr1[l][m] ,myarr2[l][m];


    // taiking 1st matrics
    for(i = 0;i<l;i++){
       for(j = 0;j<m;j++){
            printf("Enter (%d,%d)th term : ",(i+1),(j+1));
            scanf("%d",&myarr1[i][j]);
       }
    }
    printf("\n");

    // taking second matrics value
    for(i = 0;i<l;i++){
        for(j = 0;j<m;j++){
            printf("Enter (%d,%d)th term : ",(i+1),(j+1));
            scanf("%d",&myarr2[i][j]);
        }
    }
    printf("\n");


    // printing 1st matrix in matrix format
    printf("The sum of A and B  is  >> \n");

    for(i = 0;i<l;i++){
        for(j = 0;j<m;j++){
            printf("%d \t",(myarr1[i][j]));
        }
        printf("\n");
    }
    printf("\n ----------------------------- \n");

    // printing 2nd matrix in matrix format
    for(i = 0;i<l;i++){
        for(j = 0;j<m;j++){
            printf("%d \t",(myarr2[i][j]));
        }
        printf("\n");
    }
    printf("\n ----------------------------- \n");
    for(i = 0;i<l;i++){
        for(j = 0;j<m;j++){
            printf("%d \t",(myarr1[i][j]+myarr2[i][j]));
        }
        printf("\n");
    }

    return 0;
}



