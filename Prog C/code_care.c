#include <stdio.h>

int int_of_char (char c) {  //Traduis un char en int.
	return (c-65);
}

char char_of_int (int n) { //Traduit un int en Char.
	return (n+65);
}

void code_cara (char mot[],int size) { 
	char motcode[size+1];
	int intmot[size];
	int intmotcode[size];
	for(int i=0;i<size;i++){
		intmot[i]=int_of_char(mot [i]);
		intmotcode[i]=intmot[i]+13;
		if (intmotcode[i]>25){
			intmotcode[i]-=26;
		}
		motcode[i]=char_of_int(intmotcode[i]);
	}
	motcode[size+1]="\0";
	printf("%s\n",motcode);
}

int main (){
	char mot[100];
	int size;
	printf("La longueur du mot stp (max 100) :");
	scanf("%d",&size);
	for (int i=0;i<size;i++){
		scanf(" %c",&mot[i]);	
	}
	mot[size+1]="\0";
	printf("%s\n",mot);
	code_cara(mot,size);	
	return 0;
}

