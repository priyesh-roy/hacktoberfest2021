#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rows,columns,i,j;
    printf("Enter the number of rows: ");
    scanf("&d",&rows);
    //Takes input from user for rows
    printf("Enter the number of columns: ");
    scanf("&d",&columns);
     //Takes input from user for columns
     for(i=1; i<=rows; i++){//outer for loop
    for (j=1; j<=columns; j++){//inner for loop
        printf("*");//print star
    }
    //printf("\n");//move to next line
}
    return 0;
}


