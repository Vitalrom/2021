#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#ifndef dk_tool_h
#define dk_tool_h

int* MemoryFoMatrix(int columns, int lines);
void filing_matrix(int* PointerForMasiv, int lines, int columns);
void printf_matrix1(int* PointerForMasiv, int lines, int columns);

void printf_matrix2(int* PointerForMasiv, int columns, int lines);
void delete_matrix(int* PointerForMasiv);

#endif

