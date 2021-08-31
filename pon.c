#include <stdio.h>

int main(){
int *p, j;
j=2;
p= &j;
printf("%x\n", p);
printf("%d\n", *p);

*p++;

printf("%x\n", p);
printf("%d\n", *p);

}