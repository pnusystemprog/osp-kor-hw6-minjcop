#include <stdio.h>
#include <string.h>
#include "phone.h"

#define MAX 50

void DeleteByName(){
	int i;
	int founded = 0;
	int foundedIndex = 0;
	char str[MAX] = { 0, };
	
	printf("Enter a name to search :");
	scanf("%s", str);

	for(i = 0; i < size; i++){
		if(strcmp(str, book[i].name) == 0){
			printf("%s is deleted", book[i].name);
//			printf("%s\t%s", book[i].name, book[i].number);
			founded = 1;
			foundedIndex = i;
			break;
		}
	}
	if(founded == 1){
		for(int j = foundedIndex; j < size - 1; j++){
//			book[j].number = book[j + 1].number;
			strcpy(book[j].number, book[j+1].number);
//			book[j].name = book[j + 1].name;
			strcpy(book[j].name, book[j+1].name);
		}
		size = size - 1;
	}
	if(founded == 0)
		printf("Oops! %s is not in the PhoneBook", str);
}
