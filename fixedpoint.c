#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x){
	return x*x-x*2-2;
}
float g(float x){
	return pow(2*x+2,.5);
}
int main(){
	float p, p0, tol=0.001;
	int n,i=1;
	printf("Tahmini cozum, ve maksimum iterasyon sayisini girin\n");
	scanf("%f%d",&p0,&n);
	while (i<=n){
		p=g(p0);
		if((fabs(p-p0))<tol){
			break;
		}
		printf("Iterasyon no %d) p=%f\n", i, p);
		i++;
		p0=p;
		if (i>n){
			printf("Metod basarisiz oldu.");
		}
	}
	return 0;
}
