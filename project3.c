#include <stdio.h>
int main(){
	
	int a;
	
	printf("masukkan nilai a : ");
	scanf("%d", &a);
	
	if(a>0)
	printf("positif");
	else
	if(a<0)
	printf("negatif");
	else
	printf("0");
	
	return 0;
}
