#include <stdio.h>

struct fecha {
    int anno;
    int mes;
    int dia;
};

int main() {
    int n = 10;
    char c = '\n';
    float x = 3.14159;
    struct fecha h = { 2012, 2, 29 };
    char d = '!';
    char palabra[10] = {'x'};   //  |   |   |   |  ...... |   |   |   |

    printf("var\taddress\t\tsizeof\n");
    printf("n:\t%p\t%lu\n", &n, sizeof(n));
    printf("c:\t%p\t%lu\n", &c, sizeof(c));
    printf("x:\t%p\t%lu\n", &x, sizeof(x));
    printf("h:\t%p\t%lu\n", &h, sizeof(h));
    printf("d:\t%p\t%lu\n", &d, sizeof(d));

    printf("\n");
    printf("h.anno:\t%p\t%lu\n", &h.anno, sizeof(h.anno));
    printf("h.mes :\t%p\t%lu\n", &h.mes,  sizeof(h.mes));
    printf("h.dia :\t%p\t%lu\n", &h.dia,  sizeof(h.dia));
    printf("\n");
  
    for(int i = 0; i < 10; ++i){
      printf("h.dia :\t%p\t%lu\n", &palabra[i],  sizeof(palabra[i]));
    }

    return 0;
}