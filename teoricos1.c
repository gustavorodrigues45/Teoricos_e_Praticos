/*
Gustavo da Encarncao Rodrigues e João Pedro Mendes Nogueira
    

Seja o seguinte trecho de programa:

*/


int i=3,j=5;
int *p, *q;
p = &i;
q = &j;


/*Qual é o valor das seguintes expressões ?
a) p == &i; b) *p - *q c) **&p           */

/* a) p == &i

p é um ponteiro que aponta para o endereço de i. Então,
p == &i é verdadeiro, ou seja, retorna 1.


b) *p - *q

*p é o valor no endereço para o qual p aponta, que é 3, e 
*q é o valor no endereço no qual q aponta, que é 5. Portanto, 
*p - *q é 3 - 5, que é -2.


c) **&p 

**&p é o valor armazenado no endereço apontado por p, que é 3


*/


