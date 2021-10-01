#include<stdio.h>
 
int main()
{
    int i, j, m, n;
     
    printf("Enter the Number of rows:\n");
    scanf("&d", &m);
    
    printf("Enter the Number of Columns:\n");
    scanf("&d", &n);
	 
    for(i = 1; i <= m; i++)
    {
        for(j = 1; j <=n; j++)
	{
	  if(i == 1 || i == m || j == 1 || j == n)
	  {
		printf("*");
	  }
	  else
	  {
		printf(" ");
	  }          
        }
        printf("\n");
    }
    return 0;
}
