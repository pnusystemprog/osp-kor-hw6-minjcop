#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "phone.h"

#define MAX 50

char *password = "123";

void registerPhoneData(void){
	int i;
	int BoolPW = 0;
	char InputPW[MAX] = { 0, };
	for(i = 0; i < 3; i++){
		printf("Password : ");
		scanf("%s", InputPW);
		if(strcmp(InputPW, password) == 0){
			BoolPW = 1;
			break;
		}
		if(i == 0)
			printf("Not Matched !!!");
		else if(i == 1)
			printf("Not matched (twice) !!!");
		else if(i == 2)
			printf("Not matched (3 times) !!!");
		else 
			printf("You are not allowed to access PhoneBook");
	}
	if(BoolPW){
		printf("New User Name :");
		scanf("%s", book[size].name);
		printf("Phone Number :");
		scanf("%s", book[size].number);
		size++;
	}
}
