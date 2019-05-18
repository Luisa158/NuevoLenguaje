#include <stdio.h>
#include <math.h>
#include <iostream>
int main(void){
   float numero = 12.345;
   int parte_entera;
   double parte_decimal;

   parte_entera = numero/1;
   parte_decimal = numero-parte_entera;

   system( "cls" );
   printf( "\n La parte entera   %d", parte_entera );
   printf( "\n La parte decimal  %f", parte_decimal );

   return 0;
}
