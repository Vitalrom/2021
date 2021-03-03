

#include "dk_tool.h"

int* MemoryFoMatrix(int columns, int lines) {
    return (int*)malloc(sizeof(int) * lines * columns);
}


//////////////////////// Fill a two-dimensional array ////////////////////////////
void filing_matrix(int*PointerForMasiv, int lines, int columns ){
    int i,j;
    for(i = 0; i<columns; i++){
         for(j = 0; j<lines; j++){
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", (PointerForMasiv + i*lines + j));
    }}
}



void printf_matrix1(int* PointerForMasiv, int lines, int columns){
    int i,j;
    for(i = 0; i<columns; i++){
        for(j = 0; j<lines; j++) 
          {
            printf("%d  ", *(PointerForMasiv + i*lines + j));
          }
    printf("\n");
}}




////////////////// Outputting the transposed matrix ///////////////////////////
void printf_matrix2(int* PointerForMasiv,  int columns, int lines ){
    int i,j;
    for(i = 0; i<lines; i++){
        for(j = 0; j<columns; j++) 
          {
              
            printf("%d  ",  *(PointerForMasiv+j*lines+i));
          }
    printf("\n");
}}



void delete_matrix(int* PointerForMasiv) {
    if (PointerForMasiv != NULL) {
        free(PointerForMasiv);
    }
}


