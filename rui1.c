#include <stdio.h>
#define ex3
#ifdef ex1
int main(){

int segs=0;
int mins=0;
int hs=0;

printf("Insira quantos segundos vc quer: ");
scanf("%d", &segs);

do{
        if(segs>=60){
 segs= segs-60;
    mins = mins+1;}
}while(segs>=60);

do{

 if(mins>=60){
    mins=mins-60;
    hs=hs+1;
 }
} while(mins>=60);


printf("S�o %d hs %d mins e %d segs", hs, mins, segs);
}
#endif

#ifdef ex2
int main() {
    int numero, limiteMinimo;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    printf("Digite o limite m�nimo: ");
    scanf("%d", &limiteMinimo);

    int multiplo = numero;

    while (multiplo <= limiteMinimo) {
        multiplo += numero;
    }

    printf("O menor m�ltiplo de %d maior que %d �: %d\n", numero, limiteMinimo, multiplo);

    return 0;
}
#endif // ex2

#ifdef ex3

int main() {
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Valores antes da troca: a = %d, b = %d\n", a, b);

    // Troca usando XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("Valores depois da troca: a = %d, b = %d\n", a, b);

    return 0;
}
#endif // ex3
