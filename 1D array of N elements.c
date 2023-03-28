#include <stdio.h>  
  
void  main()  
{  
    int a[10]; 
    int i;  

       	
  
    printf("Inter elements in the array :\n");  
    for(i=0; i<10; i++)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &a[i]);  
    }  
  
    printf("\nElements in array are: ");  
    for(i=0; i<10; i++)  
    {  
        printf("%d  ", a[i]);  
    } 
    printf("\n");	
}
