#include<stdio.h>

#include <locale.h>

#define ex4

#ifdef ex1 //1 da lista de vetores
int A[12];

armazena() {
int i=0;
  for(i=0; i <12; i++){
  printf("Digite o termo: ");
  scanf("%i", &A[i]);
  }

for(i=0; i <12; i++){
  if (A[i]>121) {
    printf ("%i é maior que 121\n", A[i]);
}
   }
}

int main(void) {
setlocale(LC_ALL, "Portuguese");

 armazena();
return 0;
}
#endif // ex1

#ifdef ex2 //2 da lista de vetores
int A[8], B[8];

multiplica(){
int i=0;

  for(i=0; i <8; i++){
  printf("Digite o termo: ");
  scanf("%i", &A[i]);
}

for(i=0; i<8; i++) {
    B[i] = A[i] * 3;
    printf ("Vetor A: %i e Vetor B: %i\n", A[i], B[i]);
}
}

int main () {
setlocale(LC_ALL, "Portuguese");

multiplica();

return 0;
}
#endif // ex2

#ifdef ex3 //3 da lista de vetores
int A [6], B[6];

soma_quadrados() {
int i=0, soma=0;

do{
  for(i=0; i <6; i++){
  do{
  printf("Digite o termo: ");
  scanf("%i", &A[i]);

  B[i]=A[i]*A[i];

  if (A[i]>0)
    printf ("Número inválido, tente novamente\n");
  } while (A[i]>0);
  }

  for (i=0; i<6; i++) {
printf ("Quadrado do núemro: %i\n", B[i]);
soma+= B[i];
}
if (soma<1000) {
  printf ("%i\n", soma);
  printf ("Soma insuficiente, insira novos dados\n");
    }
} while (soma<1000);
printf ("%i\n", soma);
}

int main () {
setlocale(LC_ALL, "Portuguese");

soma_quadrados();
return 0;
}
#endif // ex3

#ifdef ex4 //ex 10 da lista de vetores
int A [10];

numero() {
    int num;

    do {
    printf ("Digite um número: ");
    scanf ("%i", &num);

    if (num<0) printf ("Número inválido, tente novamente\n");
    } while (num<0);
   return num;
}
 tabuada(int n){
    int cont;

    for (cont=0;cont<10;cont++){
        A[cont]= n*(cont+1);
        printf ("%i x %i = %i\n", n, cont+1, A[cont]);
        }
    }

    int main () {
    setlocale(LC_ALL, "Portuguese");

    int n;
    n = numero();
    tabuada(n);

    return 0;
    }
#endif // ex4

#ifdef ex5 // ex 11 da lista de vetores
float A[12];

temperatura(){
int x;

  for (x=1; x<=12; x++) {
  printf ("Digite a temperatura do %iº mês: ", x);
  scanf ("%f", &A[x-1]);
  }
  maior_e_menor(x);
  media(x);
}
maior_e_menor(int x){
  float maior= A[0], menor= A[0];

  for (x=1; x<=12; x++) {
  if (A[x-1]>maior) {
    maior = A[x-1];
    }
    }
  printf ("A maior temperatura informada é: %.2f\n", maior);

  for (x=1; x<=12; x++) {
  if (A[x-1]<menor) {
    menor = A[x-1];
    }
    }
  printf ("A menor temperatura informada é: %.2f\n", menor);
    }

media(int x) {
  float soma=0,m;

   for (x=1; x<=12; x++) {
  soma+= A[x-1];
  }
  m = soma / 12;

  printf ("A média das temperaturas é: %.2f", m);
  }

int main () {
setlocale(LC_ALL, "Portuguese");

temperatura();

return 0;

}
#endif // ex5

#ifdef ex6 // ex 12 da lista de vetores
int notas[10];

verificar(){
int x;

 for (x=1; x<=10; x++) {
  do{
  printf ("Digite a nota do %iº aluno: ", x);
  scanf ("%i", &notas[x-1]);

  if (notas[x-1]<0 || notas[x-1]>10) {
  printf("Nota inválida, tente novamente\n");
}

} while (notas[x-1]<0 || notas[x-1]>10);
}
media(x);
apv_e_rep(x);
}

media(int x){
 float soma=0,media;

  for (x=1; x<=10; x++) {
  soma+= notas[x-1];
  }
  media = soma / 10;
  printf ("A média da classe foi: %.2f\n", media);
}

apv_e_rep(int x) {
  int conta=0, contr=0;

  for(x=1; x<=10;x++) {
   if (notas[x-1] >=7) {
     conta++;
}
    else  {
  contr++;
    }
    }

   printf ("Reprovados: %i\n", contr);
   printf("Aprovados: %i", conta);

}
int main (){
setlocale(LC_ALL, "Portuguese");

verificar();
}
#endif // ex6

#ifdef ex7// ex14 da lista de vetores
int A[10], B[10];

leitura(){
int x;

for(x=0; x<10; x++)
{
printf("Digite um número: ");
scanf("%d", &A[x]);
}
}

calc(){
int i;

for(i=0; i<10; i++)
{
  if (i % 2 == 0) // o índice do vetor deve ser par, não o conteúdo do vetor em si
{
B[i] =A[i] * 5;
}
  else {
    B[i] = A[i] + 5;
  }
  printf ("Valor original: %i e valor com a regra: %i\n", A[i], B[i]);
  }
  }

  int main(){
    setlocale(LC_ALL, "Portuguese");

    leitura();
    calc();

    return 0;
  }

#endif // ex7

#ifdef ex8 // ex 16 da lista de vetores
int A[12], B[12];

cadastro(){
int x;

for(x=0; x<12; x++)
{
printf("Digite um número: ");
scanf("%d", &A[x]);
}
}

calculo(){
int i;

for(i=0; i<12; i++)
{
  if (A[i] % 2 == 0)
{
B[i] =A[i];
}
  else {
    B[i] = A[i] * 2;
  }
  printf ("Valor original: %i e valor com a regra: %i\n", A[i], B[i]);
  }
  }

  int main(){
    setlocale(LC_ALL, "Portuguese");

    cadastro();
    calculo();

    return 0;
  }
#endif // ex8

#ifdef ex9 // ex5 da lista de vetores
int A[10], B[10];

info(){
  int x;

  for (x=0;x<10;x++){
    do{
    printf ("Digite um número: ");
    scanf ("%i", &A[x]);
      if (A[x]<0){
        printf ("Número inválido, tente novamente\n");
  }
      } while (A[x]<0);
    }
  vetb(x);

  }

vetb(int x){
  for (x=0; x<10;x++){
    B[x]=-A[x];
    printf ("Valor digitado: %i e valor inverso: %i\n", A[x], B[x]);
  }
}

int main(){
  setlocale(LC_ALL, "Portuguese");

  info();

  return 0;
  }

#endif // ex9

#ifdef ex10 // ex9 da lista de vetores
float A[10], B[10];

num(){
int cont;

for(cont=0; cont<10; cont++) {

do{
printf ("Digite um número positivo: ");
scanf ("%f", &A[cont]);
if (A[cont]<0){
printf ("Número inválido, tente novamente\n");
}
} while (A[cont]<0);
}
  vetb(cont);
  maiorq(cont);
}
vetb(int cont){
  for (cont=0; cont<10; cont++){
  B[cont] = A[cont] / 2;
  printf("Metade dos valores: %.2f\n", B[cont]);
  }
}
 maiorq(int cont){
   for (cont=0; cont<10; cont ++){
     if (A[cont]>4) {
       printf ("Números maiores do que 4 no vetor A: \n");
       printf ("Posição: %i Número: %f\n",cont, A[cont]);
     }
     }
   for (cont=0; cont<10; cont++){
      if (B[cont]>4){
       printf ("Números maiores do que 4 no vetor B: \n");
       printf ("Posição: %i Número: %f\n",cont, B[cont]);
     }
   }
  }

int main(){
setlocale(LC_ALL, "Portuguese");

num();

return 0;
}
#endif // ex10

