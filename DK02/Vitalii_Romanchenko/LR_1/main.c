
#include "math.h"
int main(int argc, char *argv[])
{
    
    int A, B, C;
    printf("Variant number: 5\n");
    printf("Ånter A value (-1000 <A< 1000): ");
    scanf("%d", &A);
    if(A < -1000 || A > 1000){
         printf("Re-enter the program and enter the correct values\n");
         system("PAUSE");
         exit(0);
         }
    
    printf("Ånter C value (-100 <C< 100): ");
    scanf("%d", &C);
    if(C < -100 || C > 100){
         printf("Re-enter the program and enter the correct values\n");
         system("PAUSE");
         exit(0);
         }
   
    printf("Ånter B value (100 >B>= 0): ");
    scanf("%d", &B);
    if(B > 100 || B <= 0){
         printf("Re-enter the program and enter the correct values\n");
         system("PAUSE");
         exit(0);
         }
    
    printf("\n");
    
    double Q = q(A, B, C);
    printf("Q = %lf\n", Q);
  
  system("PAUSE");	
  return 0;
}
