#include <stdio.h>
#include "phone.h"

void printAll(void){
	int i;
	printf("<< Display all contacts in the PhoneBook >>");
	for(i = 0; i < size; i++){
		printf("%s\t%s\n", book[i].name, book[i].number);
	}
}

