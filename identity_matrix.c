#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter no. of element\n");
    scanf("%d",&n);
    int a[n][n], c,i,j;
    for(i = 0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter element %d %d\t",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if (i!=j){
                if (a[i][j]==0){
                    printf("identity matrix");
                }
            }
    }
    }
    
    return 0;
}
