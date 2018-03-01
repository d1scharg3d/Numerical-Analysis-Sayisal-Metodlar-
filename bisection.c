#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x){
	return (x*x-x*2-2);
}
void main(){
float p,p1,a,b,tol=0.001;
int i=1,n;
printf("Alt aralik, ust aralik ve maksimum iterasyon sayisini girin\n");
scanf("%f%f%d",&a,&b,&n);
p=(a+b)/2;
printf("iterasyon no %d) p=%f\n",i,p);
i++;
while(i<n){
	if(f(a)*f(p)<0){
		b=p;	
	}
	else{
		a=p;
	}
	p=(a+b)/2;
	printf("Iterasyon no %d) p=%f\n",i,p);
	if(fabs(p1-p)<tol){
		printf("\n%d iterasyon sonrasi, kokun degeri: %f\n",i,p);
		break;
	}
	p1=p;
	i++;
	}
if(i>=n){
	printf("\nmetod basarisiz oldu");
}
getch();
}

