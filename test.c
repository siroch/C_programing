#include<stdio.h>

void my_strtok1();
void my_strtok2();

int main(){
	printf("my_strtok1\n");
	my_strtok1();
	printf("\n");
	printf("my_strtok2 --> input String :");
	my_strtok2();
	return 0;
}

void my_strtok1(){
	char str[]="i am a boy";
	int i;
	for(i=0; str[i]!='\0'; i++){
		if(str[i] == ' ')
			printf("\n");
		else
			printf("%c",str[i]);
	}
}

void my_strtok2(){
	char str[50];
	int i;
	gets(str);
	for(i=0; str[i]!='\0'; i++){
		if(str[i] == ' ')
			printf("\n");
		else
			printf("%c",str[i]);
	}
}





