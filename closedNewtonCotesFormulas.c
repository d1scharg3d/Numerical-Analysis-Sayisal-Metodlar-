#include <stdio.h>
#include <math.h>
#define e 2.71828182

double func(double x); //ornek fonksiyon f(x)=e^x
double trapezoidal(double x0, double x1);
double simpson(double x0, double x2);
double simpsonThreeEights(double x0, double x3);
double fourth(double x0, double x4);

int main() {
    int opt;
    printf("n=?(1,2,3,4)");
    scanf("%i", &opt);
    double x0, x1, x2, x3, x4, integra;
    switch (opt) {
        case 1:
            printf("x0,x1 girin\n");
            scanf("%lf %lf", &x0, &x1);
            integra = trapezoidal(x0, x1);
            printf("\nSonuc: %lf", integra);
            break;
        case 2:
            printf("x0,x2 girin");
            scanf("%lf %lf", &x0, &x2);
            integra = simpson(x0, x2);
            printf("\nSonuc: %lf", integra);
            break;
        case 3:
            printf("x0,x3 girin");
            scanf("%lf %lf", &x0, &x3);
            integra = simpsonThreeEights(x0, x3);
            printf("\nSonuc: %lf", integra);
            break;
        case 4:
            printf("x0,x4 girin");
            scanf("%lf %lf", &x0, &x4);
            integra = fourth(x0, x4);
            printf("\nSonuc: %lf", integra);
            break;
        default:
            printf("\nHatali secim.\n");
            break;
    }
    return 0;
}

double func(double x){
    return pow(e,x);
}

double trapezoidal(double x0, double x1){
    double h = (x1-x0);
    return (h/2)*(func(x0)+func(x1));

}

double simpson(double x0, double x2){
    double h = (x2-x0);
    double x1 = h/2;
    return (h/3)*(func(x0)+4*func(x1)+func(x2));
}

double simpsonThreeEights(double x0, double x3){
    double h = (x3-x0);
    double x1 = h/3;
    double x2 = (2*h)/3;
    return (3*h/8)*(func(x0)+3*func(x1)+3*func(x2)+func(x3));
}

double fourth(double x0, double x4){
    double h = (x4-x0);
    double x1 = h/4;
    double x2 = (2*h)/4;
    double x3 = (3*h)/4;
    return ((2*h)/45)*(7*func(x0)+32*func(x1)+12*func(x2)+32*func(x3)+7*func(x4));
}
