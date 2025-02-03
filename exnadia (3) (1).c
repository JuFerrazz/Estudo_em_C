#include <stdio.h>
#include <locale.h>
#define ex10


#ifdef ex1
//*exercico2//*
int A[7];
int B[7];

 recebe(){
   int i;
for(i=0; i<8; i++)
{
printf("Digite o %dº termo: ", i+1);
  scanf("%d", &A[i]);
}
}

passa(){
  int j;
for(j=0; j<8; j++)
{
  B[j]=A[j]*3;
}
}

exibe(){
  int c;
  for(c=0; c<8; c++)
  {
  printf("Vet A posição %d: %d\n",c+1, A[c]);
  }

  for(c=0; c<8; c++)
  {
  printf("Vet B posição %d: %d\n",c+1, B[c]);
  }
}
int main(){

    setlocale(LC_ALL, "Portuguese");

recebe();
  passa();
  exibe();


    return 0;
}
#endif ex1

#ifdef ex2
//*exercicio9//*
float A[9];
float B[9];

int i;

rece(){
    int i;

for(i=0; i<10; i++)
    {
        do{
    printf("Insira o termo %dº: ", i+1);
scanf("%f", &A[i]);
if(A[i]<0){}
        }while(A[i]<0);

}

}

metade(){
    int i;
    for(i=0;i<10;i++)
    {
B[i]=A[i]/2;
}

for(i=0;i<10;i++)
    {
    printf("%d: %.1f\n",i+1, B[i]);
}
}


exibe4(){
    int i;
for(i=0;i<10;i++)
    {
    if (A[i]>4){  printf("Vet A posição %d: %.1f\n",i+1, A[i]);}

}

for(i=0;i<10;i++)
    {
    if (B[i]>4){  printf("Vet B posição %d: %.1f\n",i+1, B[i]);}

}
}

int main()
{
     setlocale(LC_ALL, "Portuguese");
rece();

printf("\nMetade dos valores: \n\n");

metade();

 printf("\nNúmeros maiores que 4: \n\n");

exibe4();

return 0;
}
#endif ex2

#ifdef ex3
//*exercicio16//*
int A [11];
int B[11];

int main()
{
     setlocale(LC_ALL, "Portuguese");
     recebe();
     calcula();
     exibe();
return 0;
}
recebe(){
   int i;
for(i=0; i<12; i++)
{
printf("Digite o %dº termo: ", i+1);
  scanf("%d", &A[i]);
}}

calcula(){
    int i;

    for(i=0;i<12;i++)
    {
 B[i]=A[i];

        if (A[i] % 2 == 1){

                B[i]= B[i]*2;
}}
}
exibe(){
    int i;

    for(i=0;i<12;i++)
    {
         printf("Vet A posição %d: %d\n",i+1, A[i]);}

    for(i=0;i<12;i++)
    {
         printf("Vet B posição %d: %d\n",i+1, B[i]);}

}
#endif ex3

#ifdef ex4
//*exercicio10//*
int A [10];

recebe(){
  int i, num;
printf("Digite o número da tabuada que vc deseja: ");
scanf("%d", &num);
conta(num);
}

conta(int num){
    int i;
for(i=0; i<11; i++)
{
A[i]= i * num;

         printf("Vet A %d\n", A[i]);
         }
         }

int main(){

    recebe();
   int conta(int num);

return 0;
}
#endif // ex4

#ifdef ex5
//*exercicio14//*
int A [9];
int B[9];

recebe(){
    int i;
for(i=0; i<10; i++)
{
printf("Digite o %dº termo: ", i+1);
  scanf("%d", &A[i]);
}
}

por5(){
    int i;
for(i=0; i<10; i++)
{
    if (i % 2 == 1)
{
            B[i]= A[i]*5;
}
    else
{
            B[i]= A[i]+5;
}
    printf("vet A: %d    |   vet B: %d\n", A[i], B[i]);
}}

int main(){
int i;

recebe();
por5();

return 0;}

#endif

#ifdef ex6
//*exercicio18//*
int A [9];
int B[9];

int main(){
         setlocale(LC_ALL, "Portuguese");
         recebe();
         somaimp();
        int exibe(somaimp);
return 0;
}
recebe(){
   int i, ib=0;
for(i=0; i<10; i++){
    printf("Digite o %dº termo desejado: ", i+1);
    scanf("%d", &A[i]);
}}
somaimp(){

    int somaimp=0, i, ib;

for(i=0; i<10; i++){
    if (A[i] % 2 == 1)
{
somaimp = somaimp + A[i];

B[ib]=i+1; //esse ib faz com que não tenha buraco no vetor
ib++;      //aqui incrementa
}
}

    exibe(somaimp);
}

exibe(int x){
int i;

    printf("\n A soma dos ímpares é: %d\n", x);

for(i=0; i<10; i++){
        printf("\n Posição dos números ímpares: %d  ", B[i]);}

for(i=0; i<10; i++){
printf(" \nVet A: %d ", A[i]);
}
}


#endif // ex6

#ifdef ex7
//*exercicio5//*

int A [9];
int B[9];

recebe(){
    int i;
for(i=0; i<10; i++){
        do{
    printf("Digite o %dº termo desejado: ", i+1);
    scanf("%d", &A[i]);

    if(A[i]<0){}
}while(A[i]<0);
}
}

calcula(){
    int i;
for(i=0; i<10; i++){
    B[i]= -1*A[i];
    printf("\nVet B: %d  |  Vet A: %d", B[i], A[i]);
}
}

int main (){
     setlocale(LC_ALL, "Portuguese");

     recebe();
calcula();

return 0;
}
#endif // ex7

#ifdef ex8
//*exercicio12//*
int A [9];

recebe(){
    int i;
for(i=0; i<10; i++){
        do{
    printf("Digite a %dº nota: ", i+1);
    scanf("%d", &A[i]);

    if(A[i]<0){}
}while(A[i]<0);
}}

media(){
    int i, soma=0, media=0;

for(i=0; i<10; i++){
soma= soma+A[i];
media= soma/10;
}
printf("%d", media);
}

quant(){
    int i, quantmais=0, quantmenos=0;
for(i=0; i<10; i++){

if(A[i]>=7){
        quantmais+=1;
        }
else{quantmenos+=1;}
}

printf("\nmaior q 7: %d", quantmais);
printf("\nmenor q 7: %d", quantmenos);
}

int main(){
setlocale(LC_ALL, "Portuguese");

    recebe();
    media();
    quant();


return 0;}

#endif // ex8


#ifdef ex9
//*exercicio 7
 int A[20];
    int B[20];

    passa(n);
   exibe(n);

int main() {
    recebe();



 return 0;
}
recebe(){
int n, i;
    do {
        printf("Quantos termos você deseja? ");
        scanf("%d", &n);
    } while (n>=20 || n<3);

    for (int i = 0; i < n; i++) {
        printf("Digite o termo %d: ", i+1);
        scanf("%d", &A[i]);
    }
    passa(n);
    exibe(n);
}
passa(int n){
    int i;
    for (int i=0; i<n; i++) {
        B[i] = A[n-i-1];
    }
}
exibe(int n){
    int i;
    printf("\nVetor B:");
    for (int i=0; i<n; i++) {
        printf(" %d", B[i]);
    }

}

#endif // ex9

#ifdef ex10
//exercicio19
  int A[6];
    int B[6];
    int C[12];
int main() {

    recebe();
    exibevet();
    exibevetc();

   return 0;
}


    recebe (){
    int i;

    printf("Insira 6 números pares:\n");
    for (i = 0; i < 6; i++) {
        do {
            printf("Digite o valor %d: ", i + 1);
            scanf("%d", &A[i]);
        } while (A[i] % 2 != 0);
    }

    printf("\nInsira 6 números ímpares:\n");
    for (i = 0; i < 6; i++) {
        do {
            printf("Digite o valor %d: ", i + 1);
            scanf("%d", &B[i]);
        } while (B[i] % 2 == 0);
    }
    }

    exibevet(){
        int i;
    printf("\nVetor A: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", A[i]);
    }

    printf("\nVetor B: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", B[i]);
    }
    }
exibevetc(){
     int iA=0, i;
    int iB=0;
    printf("\nVetor C: ");
    for (i = 0; i < 12; i++) {
        if (i % 2 == 0) {
            C[i] = A[iA];
            printf("%d ", C[i]);
            iA++;
        } else {
            C[i] = B[iB];
            printf("%d ", C[i]);
            iB++;
        }
    }

}
#endif // ex10
