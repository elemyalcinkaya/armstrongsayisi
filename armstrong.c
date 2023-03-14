# include<stdio.h>
#include <math.h>
int main(){
	
	int sayi,sum,a,islenenSayi;
	sum=0;
	scanf("%d",&sayi);
	islenenSayi=sayi;
	while(islenenSayi>0){
		a=islenenSayi%10;
		sum=sum+pow(a,3);
		islenenSayi=(islenenSayi-a)/10;
	}
	if(sum==sayi){
		printf("%d armstrong sayisi",sayi);
	}
	else{
		printf("%d armstrong sayisi degil",sayi);
	}
	
	return 0;
	
}
