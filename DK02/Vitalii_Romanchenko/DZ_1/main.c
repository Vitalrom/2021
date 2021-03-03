#include<stdio.h> 
#include<stdlib.h>

#include "dk_tool.h"

int main()
{
  int i, j, lines, columns;
  printf("Ånter the number of lines (<5): ");
  scanf("%d", &lines);
       if(lines>5)
       printf("Fail\n");  
  printf("Ånter the number of columns (<5): ");
  scanf("%d", &columns);
       if(columns>5)
       printf("Fail\n"); 


int* PointerForMasiv = MemoryFoMatrix(lines, columns);
filing_matrix(PointerForMasiv, lines, columns);
printf_matrix1(PointerForMasiv, lines, columns);

printf("Transposed matrix :\n");

printf_matrix2(PointerForMasiv, columns, lines);
delete_matrix(PointerForMasiv);
 




  system("PAUSE");	
  return 0;
}
