#include<stdio.h>
#include<stdint.h>

int main (int argc, char* argv[]){
int32_t nombre1 = 1;
int32_t nombre2 = 2;
int32_t stock;


printf ("la valeur du nombre 1 est %d\n"nombre1);
printf ("la valeur du nombre 2 est %d\n"nombre2);

*stock = &nombre1;
*nombre1 = &nombre2;
*nombre2 = &stock;


printf ("la nouvelle valeur du nombre 1 est %d\n"nombre1);
printf ("la nouvelle valeur du nombre 2 est %d\n"nombre2);

return 0;
}
