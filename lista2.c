#include <stdio.h>
#include <locale.h>
main(){

  setlocale(LC_ALL, "Portuguese");

char n;
int chute=50, ct;
char usuario;

volta: chute=50;




printf("O n�mero � maior que %i?", chute);
n=getchar();
getchar();

if(n == '<'){
do{
chute-=10;

 if(chute==0){goto zero;}

printf("O n�mero � maior que %i?", chute);
n=getchar();
getchar();


if (n == '='){ printf (" E %d !", chute);

    printf(" Quer continuar? Se sim aperte s, se n�o aperte qualquer tecla");
    usuario=getchar();
    getchar();
    if (usuario == 's'){goto volta; }//volta para o come�o
    else{ exit(0);}
    }

if(n == '>'){


do{
zero: //leva o 0 direto pra c�
    printf("� maior que %d", chute+=5);
n=getchar();
getchar();
       if(n=='>'){ for (int cont=0; n != '='; chute++){

printf("� %i ?", chute);
n=getchar();
getchar();

if (n == '='){ printf (" � %d!", chute);

    printf(" Quer continuar? Se sim aperte s, se n�o aperte qualquer tecla");
    usuario=getchar();
    getchar();
    if (usuario == 's'){goto volta;}
    else{ exit(0);}
    }
                            }}


    else if ( n == '<'){

    for (int cont=0; n != '='; chute--){
        printf("� %i ?", chute);
                        n=getchar();
                            getchar();
}

if (n == '='){ printf (" � %d!", chute+1);

printf(" Quer continuar? Se sim aperte s, se n�o aperte qualquer tecla");
    usuario=getchar();
    getchar();
    if (usuario == 's'){goto volta;}
    else{ exit(0);}
    }}



}while(n == '>');


}

}while(n == '<');
}



else if(n == '>'){
do{

chute+=10;

if(chute==100){goto noventenove;}

printf("O n�mero � maior que %i?", chute);
n=getchar();
getchar();




if (n == '='){ printf (" E %d !", chute);

    printf(" Quer continuar? Se sim aperte s, se n�o aperte qualquer tecla");
    usuario=getchar();
    getchar();
    if (usuario == 's'){goto volta; }//volta para o come�o
    else{ exit(0);}
    }

if(n == '<'){

do{
noventenove: //leva o 100 direto pra c�

    printf("� maior que %d", chute-=5);
n=getchar();
getchar();
       if(n=='>'){ for (int cont=0; n != '='; chute++){

printf("� %i ?", chute);
n=getchar();
getchar();

if (n == '='){ printf (" � %d!", chute);

    printf(" Quer continuar? Se sim aperte s, se n�o aperte qualquer tecla");
    usuario=getchar();
    getchar();
    if (usuario == 's'){goto volta;}
    else{ exit(0);}
    }
                            }}


    else if ( n == '<'){

    for (int cont=0; n != '='; chute--){
        printf("� %i ?", chute);
                        n=getchar();
                            getchar();
}

if (n == '='){ printf (" � %d!", chute+1);

printf(" Quer continuar? Se sim aperte s, se n�o aperte qualquer tecla");
    usuario=getchar();
    getchar();
    if (usuario == 's'){goto volta;}
    else{ exit(0);}
    }}



}while(n == '<');}



}while(n == '>');



}
return 0;

}


