#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void encryptText(long double p, long double q, unsigned char m[]);

int main(){
	long double P=11, Q=13;
	unsigned char text1[]="ENCRYPTION";
	unsigned char text2[]="RASTAMAN";
	encryptText(P,Q,text1);
	printf("\n\n");
	encryptText(P,Q,text2);
	return 0;
}

void encryptText(long double p, long double q, unsigned char m[]){
	long double E=7;
	long double D=7;
	long int ctr;
	long double n = p*q;
	double temporary;
	
	printf("Before Encryption: %s\n",m);
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

