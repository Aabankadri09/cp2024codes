#include<stdio.h>
int main()
{
    printf("Enter First array:");
    int a[2][2],b[2][2],rows=2,cols=2,add[2][2];

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter Second Array:");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
    add[i][j] = a[i][j] + b[i][j];
    }
    }

    printf("First Array:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    printf("Second Array:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d",b[i][j]);
        }
        printf("\n");
    }

    printf("The Sum of Both Array:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d",add[i][j]);
        }
         printf("\n");
    }

    return 0;
}




