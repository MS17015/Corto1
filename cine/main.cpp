#include <iostream>

int main() {

    int cine[5][5];
do{
    int i,j,l;
int i1,j1,p1;
int e=0;
double p2,p3;
double pt=0;
int opcion;

    printf("1.Comprar ticket 2.Salir %i" ,opcion);
    scanf("% i" opcion);
printf("la posicion aparece al lado derecho del asiento");
    for (int i = 0; i < 5 ; ++i) {
        for (int j = 0; j < 5; ++j) {
     printf( cine[i][j],"-",e);
     printf("\n");
     e=e+1;
        }

    }


printf("Ingrese la posicion que desea ocupar %i" ,l);
scanf("% i",l);

if(l=21){
    cine[4][0]=1;
    p2=2.50;
    }
    if(l=22){
        cine[4][1]=1;
        p2=2.5;
    }
    if(l=23){
        cine[4][2]=1;
        p2=2.5;
    }
    if(l=24){
        cine[4][3]=1;
        p2=2.5;
    }
    if(l=25){
        cine[4][4]=1;
        p2=2.5;
    }

    if(l=11){
        cine[1][0]=1;
        p3=3.50;
    }
    if(l=12){
        cine[1][1]=1;
        p3=3.5;
    }
    if(l=13){
        cine[1][2]=1;
        p3=3.5;
    }
    if(l=14){
        cine[1][3]=1;
        p3=3.5;
    }
    if(l=15){
        cine[1][4]=1;
        p3=3.5;
    }
    if(l=1){
        cine[0][0]=1;
        p1=5;
    }
    if(l=2){
        cine[0][1]=1;
        p1=5;
    }
    if(l=3){
        cine[0][2]=1;
        p1=5;
    }
    if(l=4){
        cine[0][3]=1;
        p1=5;
    }
    if(l=5){
        cine[0][4]=1;
        p1=5;
    }

    if(l=11){
        cine[2][0]=1;
        p3=3.50;
    }
    if(l=12){
        cine[2][1]=1;
        p3=3.5;
    }
    if(l=13){
        cine[2][2]=1;
        p3=3.5;
    }
    if(l=14){
        cine[2][3]=1;
        p3=3.5;
    }
    if(l=15){
        cine[2][4]=1;
        p3=3.5;
    }
    if(l=16){
        cine[3][0]=1;
        p3=3.5;
    }
    if(l=17){
        cine[3][1]=1;
        p3=3.5;
    }
    if(l=18){
        cine[3][2]=1;
        p3=3.5;
    }
    if(l=19){
        cine[3][3]=1;
        p3=3.5;
    }
    if(l=20){
        cine[3][4]=1;
        p3=3.5;
    }
    pt=pt+p1+p2+p3;
    printf("pago:", pt);
    for (i=,i<5,i++){
        for (j=0,j<5,j++){

        }
    }

}
}while(opcion=1);
}
    return 0;
}