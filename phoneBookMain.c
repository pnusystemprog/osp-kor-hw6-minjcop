#include <stdio.h>
#include "phone.h"

#define MAX 50

int size = 0;

struct phonebook book[MAX];

static int count_service = 0;

int main(void)
{
	int service;
	do
	{
		printf(" ============ Telephone Book MAnagement ========== ");
		printf(" <<< 1. Register	2. Print All	3. Search	4. Delete	5.Exit >>> ");
		scanf("%d", &service);
		switch(service){
			case 1 :
				registerPhoneData();
				break;
			case 2 :
				printAll();
				break;
			case 3 :
				searchByName();
				break;
			case 4 :
				DeleteByName();
				break;
			case 5 : 
				repeat = 0;
				break;
		}
	} while (service != 5);
	return 0;
}
