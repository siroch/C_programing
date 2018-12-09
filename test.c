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
	char input[]="i am a boy";
	int i;
	for(i=0; input[i]!='\0'; i++){
		if(input[i] == ' ')
			printf("\n");
		else
			printf("%c",input[i]);
	}
}

void my_strtok2(){
	char input[100];
	int i;
	gets(input);
	for(i=0; input[i]!='\0'; i++){
		if(input[i] == ' ')
			printf("\n");
		else
			printf("%c",input[i]);
	}
}


