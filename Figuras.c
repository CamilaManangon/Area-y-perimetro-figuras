#include <stdio.h>
#include <math.h>
#define PI 3.141592

float perimetroCirculo(){
    float p;
    float r;
    do{
        printf("Ingrese radio del circulo.\n");
        scanf("%f", &r);
        if(r<0){
            printf("Dato invalido.\n");
        }
    } while (r<0);
    p = 2*PI*r;
    return p;
}

float areaCirculo(){
    float a, r;
    do{
        printf("Ingrese radio del circulo.\n");
        scanf("%f", &r);
        if(r<0){
            printf("Dato invalido.\n");
        }
    } while (r<0);
    a = PI * pow(r, 2);
    return a;
}


float areaTriangulo(){
    float base, alt, a;
    do{
        printf("Ingrese la base:\n");
        scanf("%f", &base);
        if(base<0){
            printf("Dato invalido.\n");
        }
    }while(base<0);
    do{
        printf("Ingrese la altura:\n");
        scanf("%f", &alt);
        if(alt<0){
            printf("Dato invalido.\n");
        }
    }while(alt<0);
    a = (base*alt)/2;
    return a;
}

float perimetroTriangulo(){
    float lado, p;
    do{
        printf("Ingrese el lado del triangulo:\n");
        scanf("%f", &lado);
        if(lado<0){
            printf("Dato invalido.\n");
        }
    }while(lado<0);
    p = 3 * lado;
    return p;
}

float perimetroRectangulo(){
    float base, alt, p;
    do{
        printf("Ingrese la base:\n");
        scanf("%f", &base);
        if(base<0){
            printf("Dato invalido.\n");
        }
    }while(base<0);
    do{
        printf("Ingrese la altura:\n");
        scanf("%f", &alt);
        if(alt<0){
            printf("Dato invalido.\n");
        }
    }while(alt<0);
    p = (2*base) + (2*alt);
    return p;
}

float areaRectangulo(){
    float base, alt, a;
    do{
        printf("Ingrese la base:\n");
        scanf("%f", &base);
        if(base<0){
            printf("Dato invalido.\n");
        }
    }while(base<0);
    do{
        printf("Ingrese la altura:\n");
        scanf("%f", &alt);
        if(alt<0){
            printf("Dato invalido.\n");
        }
    }while(alt<0);
    a = base * alt;
    return a;
}

float perimetroCuadrado(){
    float lado, p;
    do{
        printf("Ingrese el lado del triangulo:\n");
        scanf("%f", &lado);
        if(lado<0){
            printf("Dato invalido.\n");
        }
    }while(lado<0);
    p = 4 * lado;
    return p;
}

float areaCuadrado(){
    float lado, a;
    do{
        printf("Ingrese el lado del triangulo:\n");
        scanf("%f", &lado);
        if(lado<0){
            printf("Dato invalido.\n");
        }
    }while(lado<0);
    a = lado * lado;
    return a;
}

float perimetroTrapecio(){
    float l1, l2, l3, p;
    do{
        printf("Ingrese el primer lado:\n");
        scanf("%f", &l1);
        if(l1<0){
            printf("Dato invalido.\n");
        }
    }while(l1<0);
    do{
        printf("Ingrese el segundo lado:\n");
        scanf("%f", &l2);
        if(l2<0){
            printf("Dato invalido.\n");
        }
    }while(l2<0);
    do{
        printf("Ingrese el tercer lado:\n");
        scanf("%f", &l3);
        if(l3<0){
            printf("Dato invalido.\n");
        }
    }while(l3<0);
    p = l1 + l1 + l2 + l3;
    return p;
}

float areaTrapecio(){
    float l1, l2, alt, a;
    do{
        printf("Ingrese el primer lado:\n");
        scanf("%f", &l1);
        if(l1<0){
            printf("Dato invalido.\n");
        }
    }while(l1<0);
    do{
        printf("Ingrese el segundo lado:\n");
        scanf("%f", &l2);
        if(l2<0){
            printf("Dato invalido.\n");
        }
    }while(l2<0);
    do{
        printf("Ingrese la altura del trapecio:\n");
        scanf("%f", &alt);
        if(alt<0){
            printf("Dato invalido.\n");
        }
    }while(alt<0);
    a = ((l1+l2)/2)*alt;
    return a;
}



void menu(){
    int opc;
    do{
        pritnf("Menu de opciones.\n");
        printf("1.Circulo\n");
        printf("2.Triangulo\n");
        printf("3.Rectangulo\n");
        printf("4.Cuadrado\n");
        printf("5.Trapecio\n");
        printf("6.Salir\n");
        do{
            printf("Ingrese la opcion que desea realizar.\n");
            scanf("%d", &opc);
            if(opc<1 || opc>6){
                printf("Opcion ivalida.\n");
            }
        }while(opc<1 || opc>6);

    }while(opc!=6);
}

int main(void){
    
    return 0;
}