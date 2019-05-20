#include <stdio.h>
#include <string.h>
#include "phone.h"

#define MAX 50

void searchByName(void){
	int i;
	int founded = 0;
	char str[MAX] = { 0, };
	printf("Enter a name to search :");
	scanf("%s", str);

	for(i = 0; i < size; i++){
		if(strcmp(str, book[i].name) == 0){
			printf("%s\t%s", book[i].name, book[i].number);
			founded = 1;
			break;
		}
	}
	if(founded == 0)
		printf("Oops! %s is not in the PhoneBook", str);
}
