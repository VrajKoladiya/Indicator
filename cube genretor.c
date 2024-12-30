#include<stdio.h>
#include<string.h>

void cube(int *number){

    *number=(*number)*(*number);

}

int main(){

    int size,i,j;

    printf("Enter array's size : ");
    scanf("%d",&size);
    
    int arr[size][size];

    printf("Enter array Elements : \n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("array[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cube(&arr[i][j]);
        }
        
    }
    
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
       
    

    return 0;

}