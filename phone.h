#define MAX 50

void registerPhoneData(void);
void printAll(void);
void searchByName(void);
void DeleteByName(void);

extern int size; // 

struct phonebook{
	char name[MAX];
	char number[MAX];
};

extern struct phonebook book[MAX];
