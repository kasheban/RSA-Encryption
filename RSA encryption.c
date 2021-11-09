#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void encryptText(int p, int q, char m[]);

int main(){
	int P=11, Q=13;
	char text1[]="ENCRYPTION";
	char text2[]="RASTAMAN";
	encryptText(P,Q,text1);
	printf("\n\n");
	encryptText(P,Q,text2);
	return 0;
}

void encryptText(int p, int q, char m[]){
	int E=7;
	int D=223;
	int ctr;
	int n = p*q;
	double temporary;
	
	printf("Before Encryption: ENCRYPTION\n");
	printf("After Encryption: ");
	
	for(ctr=0; m[ctr]!='\0';ctr++){
		temporary = pow(m[ctr],E);
		temporary = fmod(temporary, n);
		m[ctr] = temporary;
		printf("%c", m[ctr]);
	}
	
	printf("\n");
	printf("After Decryption: ");
	for(ctr=0; m[ctr]!='\0';ctr++){
		temporary = pow(m[ctr],D);
		temporary = fmod(temporary, n);
		m[ctr] = temporary;
		printf("%c",m[ctr]);
	}
	
}

