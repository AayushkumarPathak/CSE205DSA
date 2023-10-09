#include<stdio.h>
int main(){
    int m,n;
    int arr[m][n];
    
    
    printf("Enter m and n:");
    scanf("%d %d",&m,&n);
    
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){

            printf("Enter at[%d][%d]:",row,col);
            scanf("%d",arr[row][col]);
        }
    }
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){

            printf("%d",arr[row][col]);
            
        }
        printf("\n");
    }
    
}
