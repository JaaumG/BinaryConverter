#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
	int bin, back, k, i, val,j, potencia, num;
	printf("Entre com o valor em binario para conveter\n");
	scanf("%d", &bin);
	back=bin;
	while(bin!=0){
		bin/=10;
		k++;
	}
	bin=back;
	char binstring[k];
	sprintf(binstring, "%d", bin);
	val=0;
	for(i=0,j=k-1;i<k;i++,j--){
		potencia = pow(2,i);
		if(binstring[j]=='0'){
			num = 0;
		}
		else if(binstring[j]=='1'){
			num = 1;
		}
		val+=num*potencia;
	}
	printf("%d", val);
	
}
