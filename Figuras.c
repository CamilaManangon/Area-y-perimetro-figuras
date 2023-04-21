#include <stdio.h>
#include <math.h>
#define PI 3.141592

float perimetroCirculo(float r){
    float p;
    p = 2*PI*r;
    return p;
}

float areaCirculo(float r){
    float a;
    a = PI * pow(r, 2);
    return a;
}

float areaTriangulo(float base, float alt){
    float a;
    a = (base*alt)/2;
    return a;
}

float perimetroTriangulo(float base, float lado1, float lado2){
    float p;
    p = lado1 + lado2 + base;
    return p;
}

float perimetroRectangulo(float base, float alt){
    float p;
    p = (2*base) + (2*alt);
    return p;
}

float areaRectangulo(float base, float alt){
    float a;
    a = base * alt;
    return a;
}

float perimetroCuadrado(float lado){
    float p;
    p = 4 * lado;
    return p;
}

float areaCuadrado(float lado){
    float a;
    a = lado * lado;
    return a;
}

float perimetroTrapecio(float b1, float b2, float l1, float l2){
  float p;
    p = b1 + b2 + l1 + l2;
    return p;
}

float areaTrapecio(float b1, float b2, float alt){
    float a;
    a = ((b1+b2)/2)*alt;
    return a;
}

void Circulo(){
  float r;
  do{
        printf("Ingrese radio del circulo.\n");
        scanf("%f", &r);
        if(r<0){
            printf("Dato invalido.\n");
        }
  } while (r<0);
    printf("Perimetro del circulo: %.2f\n", perimetroCirculo(r));
    printf("Area del circulo: %.2f\n", areaCirculo(r));
}

void Triangulo(){
  float base, alt, lado1, lado2;
  do{
        printf("Ingrese la base del triangulo:\n");
        scanf("%f", &base);
        if(base<0){
            printf("Dato invalido.\n");
        }
    }while(base<0);

    do{
        printf("Ingrese el lado 1 del triangulo:\n");
        scanf("%f", &lado1);
        if(lado1<0){
            printf("Dato invalido.\n");
        }
    }while(lado1<0);

  do{
        printf("Ingrese el lado 2 del triangulo:\n");
        scanf("%f", &lado2);
        if(lado2<0){
            printf("Dato invalido.\n");
        }
    }while(lado2<0);

    do{
        printf("Ingrese la altura:\n");
        scanf("%f", &alt);
        if(alt<0){
            printf("Dato invalido.\n");
        }
    }while(alt<0);
  
    printf("Perimetro del triangulo: %.2f\n", perimetroTriangulo(base, lado1, lado2));
    printf("Area del triangulo: %.2f\n", areaTriangulo(base, alt));
}

void Rectangulo(){
  float base, alt;
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
    printf("Perimetro del rectangulo: %.2f\n", perimetroRectangulo(base, alt));
    printf("Area del rectangulo: %.2f\n", areaRectangulo(base, alt));
}

void Cuadrado(){
  float lado;
    do{
        printf("Ingrese el lado del cuadrado:\n");
        scanf("%f", &lado);
        if(lado<0){
            printf("Dato invalido.\n");
        }
    }while(lado<0);
    printf("Perimetro del cuadrado: %.2f\n", perimetroCuadrado(lado));
    printf("Area del cuadrado: %.2f\n", areaCuadrado(lado));
}

void Trapecio(){
  float b1, b2, l1, l2, alt, p;
    do{
        printf("Ingrese la base mayor:\n");
        scanf("%f", &b1);
        if(b1<0){
            printf("Dato invalido.\n");
        }
    }while(b1<0);
    do{
        printf("Ingrese la base menor:\n");
        scanf("%f", &b2);
        if(b2<0){
            printf("Dato invalido.\n");
        }
    }while(b2<0);
    do{
        printf("Ingrese el uno de los lados:\n");
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
    printf("Perimetro del trapecio: %.2f\n", perimetroTrapecio(b1, b2, l1, l2));
    printf("Area del trapecio: %.2f\n", areaTrapecio(b1, b2, alt));
}


void menu(){
    int opc;
    do{
        printf("Menu de opciones.\n");
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

        switch(opc){
            case 1:
            Circulo();
            break;
            case 2:
            Triangulo();
            break;
            case 3:
            Rectangulo();
            break;
            case 4:
            Cuadrado();
            break;
            case 5:
            Trapecio();
            break;
            default:
            printf("Ha salido del menu.\n");
            break;
        }
    }while(opc!=6);
}

int main(void){
    menu();
    return 0;
}