#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i;
	int *v;
	printf("Tamanho do vetor");
	scanf("%d", &n);
	v = malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		v[i]=i*2;
		printf("%d|", v[i]);
	}//fim for
}//fim main
