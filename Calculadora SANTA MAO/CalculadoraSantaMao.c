#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{

int escolha=1;
int Q=0;
int B=0;
int C=0;
int S=0;
int Cd=0;
float D=0;
float aux=0;
float Y;
char SN;




// se a escolha for
//diferente de 5, ele continua... o que inicialmente é verdade
// pois escolha é igual a 1
while (escolha!=4)
{
system("CLS");
printf("\n\n CALCULADORA DE CUSTOS SANTA MAO v1.0 ");

printf("\n 1 - Apartamento");
printf("\n 2 - Casa");
printf("\n 3 - Escritorio");
printf("\n 4 - Fechar Programa ");
printf("\n\n Escolha uma opcao: ");
scanf("%d",&escolha);


// estrutura switch
switch (escolha) {

case 1:
{
system("CLS");

fflush(stdin);
printf("\n\n Digite a quantidade de QUARTOS: ");
scanf("%d", &Q);
printf("\n\n Digite a quantidade de BANHEIROS: ");
scanf("%d", &B);
fflush(stdin);

Y=(65+8*Q+7*B)*1.06;

printf("\n\n Desenha adicionar AREA EXTERNA (S/N): ");
scanf("%c", &SN);

printf("\n\n Digite a percentagem do desconto: ");
scanf("%f", &D);
D=D/100;
fflush(stdin);
if (SN == 'S' || SN == 's'){
    Y=Y+10;
    aux=Y*D;
    Y=Y-aux;
    if(Y>=150){
        Y=150;
}
    printf("\n\n O VALOR CALCULADO PARA A LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    Y=0;
    Q=0;
    B=0;
    D=0;
    fflush(stdin);
    getch();
    break;
}
else{
        aux=Y*D;
        Y=Y-aux;
        if(Y>=150){
        Y=150;
}
    printf("\n\n O VALOR CALCULADO PARA A LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    Y=0;
    Q=0;
    B=0;
    D=0;
    fflush(stdin);
    getch();
    break;
}

break;
}

case 2:
{
 system("CLS");
fflush(stdin);
printf("\n\n Digite a quantidade de QUARTOS: ");
scanf("%d", &Q);
printf("\n\n Digite a quantidade de BANHEIROS: ");
scanf("%d", &B);
printf("\n\n Digite a quantidade de COZINHAS: ");
scanf("%d", &C);
printf("\n\n Digite a quantidade de SALAS: ");
scanf("%d", &S);
fflush(stdin);

Y=(65+8*Q+7*B+4*C+7*S)*1.06;

printf("\n\n Desenha adicionar AREA EXTERNA (S/N): ");
scanf("%c", &SN);

printf("\n\n Digite a percentagem do desconto: ");
scanf("%f", &D);
D=D/100;
fflush(stdin);
if (SN == 'S' || SN == 's'){
    Y=Y+10;
    aux=Y*D;
    Y=Y-aux;
if(Y>=150){
        Y=150;
}
    printf("\n\n O VALOR CALCULADO PARA A LIMPEZA DA CASA E: %.2f", round(Y));
    Y=0;
    Q=0;
    B=0;
    C=0;
    S=0;
    D=0;
    fflush(stdin);
    getch();
    break;
}
else{
        aux=Y*D;
        Y=Y-aux;
        if(Y>=150){
        Y=150;
}
    printf("\n\n O VALOR CALCULADO PARA A LIMPEZA DA CASA E: %.2f", round(Y));
    Y=0;
    Q=0;
    B=0;
    C=0;
    S=0;
    D=0;
    fflush(stdin);
    getch();
    break;
}

break;
}

case 3:
{
system("CLS");

fflush(stdin);
printf("\n\n Digite a quantidade de COMODOS: ");
scanf("%d", &Cd);
printf("\n\n Digite a quantidade de BANHEIROS: ");
scanf("%d", &B);
fflush(stdin);

Y=(55+8*Cd+7*B)*1.06;

printf("\n\n Desenha adicionar AREA EXTERNA (S/N): ");
scanf("%c", &SN);

printf("\n\n Digite a percentagem do desconto: ");
scanf("%f", &D);
D=D/100;
fflush(stdin);
if (SN == 'S' || SN == 's'){
    Y=Y+10;
    aux=Y*D;
    Y=Y-aux;
    if(Y>=150){
        Y=150;
}
    printf("\n\n O VALOR CALCULADO PARA A LIMPEZA DO ESCRITORIO E: %.2f", round(Y));
    Y=0;
    Cd=0;
    B=0;
    D=0;
    fflush(stdin);
    getch();
    break;
}
else{
        aux=Y*D;
        Y=Y-aux;
        if(Y>=150){
        Y=150;
}
    printf("\n\n O VALOR CALCULADO PARA A LIMPEZA DO ESCRITORIO E: %.2f", round(Y));
    Y=0;
    Cd=0;
    B=0;
    D=0;
    fflush(stdin);
    getch();
    break;
}

break;
}

}

}

if( escolha==4)
printf("\n\n O PROGRAMA FOI FECHADO");

getch();

}
