#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{

int escolha=1;
int desejo;
int Q=0;
int B=0;
int C=0;
int S=0;
int Cd=0;
int A=0;
float M=0;
float D=0;
float aux=0;
float aux2=0;
float aux3=0;
float aux4=0;
float Y;
char SN;
char RESP;




// se a escolha for
//diferente de 5, ele continua... o que inicialmente é verdade
// pois escolha é igual a 1
while (escolha!=4)
{
system("CLS");
printf("\n\n CALCULADORA DE CUSTOS SANTA MAO v1.4 ");

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
printf("\n\n Digite quantos andares: ");
scanf("%d", &A);
fflush(stdin);

if(A==1){
Y=(68+8*Q+7*B)*1.06;

printf("\n\n Desenha adicionar AREA EXTERNA (S/N): ");
scanf("%c", &SN);


printf("\n\n Digite a percentagem do desconto: ");
scanf("%f", &D);
D=D/100;
/*
printf("\n\n Digite a percentagem do lucro no servico: ");
scanf("%f", &M);*/
M=0.2;

fflush(stdin);
if (SN == 'S' || SN == 's'){
    Y=Y+10;
    aux=Y*D;
    Y=Y-aux;
    aux3=M*Y;
    aux4=Y-aux3;
    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;

        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    aux3=0;
    aux4=0;
        M=0;
    getch();
    fflush(stdin);/*
    printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
    scanf("%c", &RESP);
    fflush(stdin);*/

    while(RESP=='s' || RESP=='S'){
        system("CLS");
        fflush(stdin);
        printf("\n\n Digite a percentagem do lucro no servico: ");
        scanf("%f", &M);
        Y=Y+15;
        M=M/100;
        aux=Y*D;
        aux3=M*Y;
        aux4=Y-aux3;


    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
        aux3=0;
        aux4=0;
        M=0;
    getch();
        fflush(stdin);/*
        printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
        scanf("%c", &RESP);
        fflush(stdin);*/
    }
    Y=0;
    Q=0;
    B=0;
    D=0;
    break;
}

else{
            fflush(stdin);
    aux=Y*D;
    Y=Y-aux;
    aux3=M*Y;
    aux4=Y-aux3;
    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    aux3=0;
    aux4=0;
    M=0;
    getch();
    fflush(stdin);/*
    printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
    scanf("%c", &RESP);
    fflush(stdin);*/

    while(RESP=='s' || RESP=='S'){
        system("CLS");
        fflush(stdin);
        printf("\n\n Digite a percentagem do lucro no servico: ");
        scanf("%f", &M);
        Y=Y+15;
        M=M/100;
        aux=Y*D;
        aux3=M*Y;
        aux4=Y-aux3;

    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));

        aux3=0;
        aux4=0;
        M=0;
        system("CLS");
        fflush(stdin);
        printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
        scanf("%c", &RESP);
        fflush(stdin);
    }
    Y=0;
    Q=0;
    B=0;
    D=0;
    break;
}
}

else{
        fflush(stdin);
    aux2=A*15;
    Y=(68+8*Q+7*B)*1.06+aux2;

printf("\n\n Desenha adicionar AREA EXTERNA (S/N): ");
scanf("%c", &SN);


printf("\n\n Digite a percentagem do desconto: ");
scanf("%f", &D);
D=D/100;

/*
printf("\n\n Digite a percentagem do lucro no servico: ");
scanf("%f", &M);*/
M=0.2;


fflush(stdin);
if (SN == 'S' || SN == 's'){
    Y=Y+10;
    aux=Y*D;
    Y=Y-aux;
    aux3=M*Y;
    aux4=Y-aux3;
    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    aux3=0;
    aux4=0;
    M=0;
    getch();
    fflush(stdin);/*
    printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
    scanf("%c", &RESP);
    fflush(stdin);*/

    while(RESP=='s' || RESP=='S'){
        system("CLS");
        fflush(stdin);
        printf("\n\n Digite a percentagem do lucro no servico: ");
        scanf("%f", &M);
        Y=Y+15;
        M=M/100;
        aux=Y*D;
        aux3=M*Y;
        aux4=Y-aux3;

    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));

        aux3=0;
        aux4=0;
        M=0;
    getch();
        fflush(stdin);/*
        printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
        scanf("%c", &RESP);
        fflush(stdin);*/
    }
    Y=0;
    Q=0;
    B=0;
    D=0;
    break;
}

else{
        fflush(stdin);
    aux=Y*D;
    Y=Y-aux;
    aux3=M*Y;
    aux4=Y-aux3;
    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));

    aux3=0;
    aux4=0;
    M=0;
    fflush(stdin);/*
    printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
    scanf("%c", &RESP);
    fflush(stdin);*/
    while(RESP=='s' || RESP=='S'){
        system("CLS");
        fflush(stdin);
        printf("\n\n Digite a percentagem do lucro no servico: ");
        scanf("%f", &M);
        Y=Y+15;
        M=M/100;
        aux=Y*D;
        aux3=M*Y;
        aux4=Y-aux3;

    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
        aux3=0;
        aux4=0;
        M=0;
    getch();
        fflush(stdin);/*
        printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
        scanf("%c", &RESP);*/
    }
    Y=0;
    Q=0;
    B=0;
    D=0;
    break;
}
}
}
    fflush(stdin);
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
printf("\n\n Digite quantos andares: ");
scanf("%d", &A);
fflush(stdin);

if(A==1){
Y=(70+8*Q+7*B+4*C+7*S)*1.08;

printf("\n\n Deseja adicionar AREA EXTERNA (S/N): ");
scanf("%c", &SN);

printf("\n\n Digite a percentagem do desconto: ");
scanf("%f", &D);
D=D/100;

/*
printf("\n\n Digite a percentagem do lucro no servico: ");
scanf("%f", &M);*/
M=0.2;

fflush(stdin);
if (SN == 'S' || SN == 's'){
    Y=Y+10;
    aux=Y*D;
    Y=Y-aux;
    aux3=M*Y;
    aux4=Y-aux3;
    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));


    aux3=0;
    aux4=0;
    M=0;
    getch();
    fflush(stdin);/*
    printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
    scanf("%c", &RESP);
    fflush(stdin);*/
    while(RESP=='s' || RESP=='S'){
        system("CLS");
        fflush(stdin);
        printf("\n\n Digite a percentagem do lucro no servico: ");
        scanf("%f", &M);
        Y=Y+15;
        M=M/100;
        aux=Y*D;
        aux3=M*Y;
        aux4=Y-aux3;

    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));

        aux3=0;
        aux4=0;
        M=0;
    getch();
        fflush(stdin);/*
        printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
        scanf("%c", &RESP);*/
    }
    Y=0;
    Q=0;
    B=0;
    C=0;
    S=0;
    D=0;
    break;
}

else{
        fflush(stdin);
        aux=Y*D;
        Y=Y-aux;
    aux3=M*Y;
    aux4=Y-aux3;
    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));

    aux3=0;
    aux4=0;
    M=0;
    getch();
    fflush(stdin);/*
    printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
    scanf("%c", &RESP);
    fflush(stdin);*/
    while(RESP=='s' || RESP=='S'){
        system("CLS");
        fflush(stdin);
        printf("\n\n Digite a percentagem do lucro no servico: ");
        scanf("%f", &M);
        Y=Y+15;
        M=M/100;
        aux=Y*D;
        aux3=M*Y;
        aux4=Y-aux3;

    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));

        aux3=0;
        aux4=0;
        M=0;
    getch();
        fflush(stdin);/*
        printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
        scanf("%c", &RESP);*/
    }
    Y=0;
    Q=0;
    B=0;
    C=0;
    S=0;
    D=0;
    break;
}
}

else{
        fflush(stdin);
    Y=(70+8*Q+7*B+4*C+7*S)*1.08;

printf("\n\n Deseja adicionar AREA EXTERNA (S/N): ");
scanf("%c", &SN);

printf("\n\n Digite a percentagem do desconto: ");
scanf("%f", &D);
D=D/100;

/*
printf("\n\n Digite a percentagem do lucro no servico: ");
scanf("%f", &M);*/
M=0.2;

fflush(stdin);
if (SN == 'S' || SN == 's'){
    Y=Y+10;
    aux=Y*D;
    Y=Y-aux;
    aux3=M*Y;
    aux4=Y-aux3;
    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));

    aux3=0;
    aux4=0;
    M=0;
    getch();
    fflush(stdin);/*
    printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
    scanf("%c", &RESP);*/
    fflush(stdin);
    while(RESP=='s' || RESP=='S'){
        system("CLS");
        fflush(stdin);
        printf("\n\n Digite a percentagem do lucro no servico: ");
        scanf("%f", &M);
        M=M/100;
        Y=Y+15;
        aux=Y*D;
        aux3=M*Y;
        aux4=Y-aux3;
    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
        aux3=0;
        aux4=0;
        M=0;
    getch();
        fflush(stdin);/*
        printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
        scanf("%c", &RESP);*/
    }
    Y=0;
    Q=0;
    B=0;
    C=0;
    S=0;
    D=0;
    break;
}

else{
        fflush(stdin);
        aux=Y*D;
        Y=Y-aux;
    aux3=M*Y;
    aux4=Y-aux3;
    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));

    aux3=0;
    aux4=0;
    M=0;
    getch();
    fflush(stdin);/*
    printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
    scanf("%c", &RESP);
    fflush(stdin);*/
    while(RESP=='s' || RESP=='S'){
        system("CLS");
        fflush(stdin);
        printf("\n\n Digite a percentagem do lucro no servico: ");
        scanf("%f", &M);
        M=M/100;
        Y=Y+15;
        aux=Y*D;
        aux3=M*Y;
        aux4=Y-aux3;

    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));

        aux3=0;
        aux4=0;
        M=0;
    getch();
        fflush(stdin);/*
        printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
        scanf("%c", &RESP);*/
    }
    Y=0;
    Q=0;
    B=0;
    C=0;
    S=0;
    D=0;
    break;
}
}
    fflush(stdin);
case 3:
{
system("CLS");

fflush(stdin);
printf("\n\n Digite a quantidade de COMODOS: ");
scanf("%d", &Cd);
printf("\n\n Digite a quantidade de BANHEIROS: ");
scanf("%d", &B);
printf("\n\n Digite quantos andares: ");
scanf("%d", &A);
fflush(stdin);

if(A==1){
Y=(58+8*Cd+7*B)*1.06;

printf("\n\n Desenha adicionar AREA EXTERNA (S/N): ");
scanf("%c", &SN);

printf("\n\n Digite a percentagem do desconto: ");
scanf("%f", &D);
D=D/100;

/*
printf("\n\n Digite a percentagem do lucro no servico: ");
scanf("%f", &M);*/
M=0.2;

fflush(stdin);
if (SN == 'S' || SN == 's'){
    Y=Y+10;
    aux=Y*D;
    Y=Y-aux;
    aux3=M*Y;
    aux4=Y-aux3;
    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));

    aux3=0;
    aux4=0;
    M=0;
        getch();
    fflush(stdin);/*
    printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
    scanf("%c", &RESP);
    fflush(stdin);*/
    while(RESP=='s' || RESP=='S'){
        system("CLS");
        fflush(stdin);
/*
printf("\n\n Digite a percentagem do lucro no servico: ");
scanf("%f", &M);*/
M=0.2;
        Y=Y+15;
        aux=Y*D;
        aux3=M*Y;
        aux4=Y-aux3;

    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));

        aux3=0;
        aux4=0;
        M=0;
            getch();
        fflush(stdin);/*
        printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
        scanf("%c", &RESP);*/
    }
    Y=0;
    Cd=0;
    B=0;
    D=0;
    break;
}

else{
        fflush(stdin);
    aux=Y*D;
    Y=Y-aux;
    aux3=M*Y;
    aux4=Y-aux3;
    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));

    aux3=0;
    aux4=0;
    M=0;
            getch();
    fflush(stdin);/*
        printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
    scanf("%c", &RESP);
    fflush(stdin);*/
    while(RESP=='s' || RESP=='S'){
        system("CLS");
        fflush(stdin);
        printf("\n\n Digite a percentagem do lucro no servico: ");
        scanf("%f", &M);
        M=M/100;
        Y=Y+15;
        aux=Y*D;
        aux3=M*Y;
        aux4=Y-aux3;
    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));

        aux3=0;
        aux4=0;
        M=0;
            getch();
        fflush(stdin);/*
        printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
        scanf("%c", &RESP);*/
    }
    Y=0;
    Cd=0;
    B=0;
    D=0;
    break;
}

}

else{
    fflush(stdin);
    Y=(58+8*Cd+7*B)*1.06;

printf("\n\n Desenha adicionar AREA EXTERNA (S/N): ");
scanf("%c", &SN);

printf("\n\n Digite a percentagem do desconto: ");
scanf("%f", &D);
D=D/100;

/*
printf("\n\n Digite a percentagem do lucro no servico: ");
scanf("%f", &M);*/
M=0.2;

fflush(stdin);
if (SN == 'S' || SN == 's'){
    Y=Y+10;
    aux=Y*D;
    Y=Y-aux;
    aux3=M*Y;
    aux4=Y-aux3;
    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));

    aux3=0;
    aux4=0;
    M=0;
        getch();
    fflush(stdin);/*
    printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
    scanf("%c", &RESP);
    fflush(stdin);*/
    while(RESP=='s' || RESP=='S'){
        system("CLS");
        fflush(stdin);
        printf("\n\n Digite a percentagem do lucro no servico: ");
        scanf("%f", &M);
        Y=Y+15;
        M=M/100;
        aux=Y*D;
        aux3=M*Y;
        aux4=Y-aux3;
    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));

        aux3=0;
        aux4=0;
        M=0;
            getch();
        fflush(stdin);/*
        printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
        scanf("%c", &RESP);*/
    }
    Y=0;
    Cd=0;
    B=0;
    D=0;
    break;
}

else{
        fflush(stdin);
    aux=Y*D;
    Y=Y-aux;
    aux3=M*Y;
    aux4=Y-aux3;
    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));

    aux3=0;
    aux4=0;
    M=0;
        getch();
    fflush(stdin);/*
    printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
    scanf("%c", &RESP);
    fflush(stdin);*/
    while(RESP=='s' || RESP=='S'){
        system("CLS");
        fflush(stdin);
        printf("\n\n Digite a percentagem do lucro no servico: ");
        scanf("%f", &M);
        M=M/100;
        Y=Y+15;
        aux=Y*D;
        aux3=M*Y;
        aux4=Y-aux3;

    printf("\n\n O VALOR CALCULADO PARA 1 LIMPEZA DO APARTAMENTO E: %.2f", round(Y));
    printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
    printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
    Y=Y-5;
    aux4=(Y-Y*0.2);
    aux3=M*Y;
        printf("\n\n O VALOR CALCULADO PARA 2 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
        printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
        printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
            Y=Y-5;
            aux4=(Y-Y*0.2);
            aux3=M*Y;
            printf("\n\n O VALOR CALCULADO PARA 3 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
            printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
            printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));
                Y=Y-5;
                aux4=(Y-Y*0.2);
                aux3=M*Y;
                printf("\n\n O VALOR CALCULADO PARA 4 LIMPEZAS DO APARTAMENTO E: %.2f", round(Y));
                printf(" - O VALOR PAGO AS PROFISSIONAIS: %.2f", round(aux4));
                printf("\n O LUCRO DA SANTA MAO: %.2f", round(aux3));

        aux3=0;
        aux4=0;
        M=0;
            getch();
        fflush(stdin);/*
        printf("\n\n Deseja recalcular o valor do lucro? (S/N): ");
        scanf("%c", &RESP);*/
    }
    Y=0;
    Cd=0;
    B=0;
    D=0;
    break;
}

}



}
}

}

}

if( escolha==4)
printf("\n\n A SANTA MAO AGRADECE");

getch();

}
