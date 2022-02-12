#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

typedef enum {
	Deposit,
	Withdraw
}TransactionType;

typedef struct
{
	TransactionType type;
	char* DateTime;
	int Value;
	struct Transaction* prev;
	struct Transaction* next;
} Transaction;

typedef struct
{
	char* FirstName;
	char* LastName;
	char* BirthDate;
	char* Adress;
	char* LastLogin;
	int AccountNumber;
	//struct Transaction* Transaction;
	struct BankAccount* prev;
	struct BankAccount* next;
}BankAccount;

#pragma once
void HoldTerminal();
void PrintDatum();
int IsNumber(char* string);
int SeparateThousands(char* text);
void AddDummyData();
void PushAtTheEnd(BankAccount** head, BankAccount** newAccount);
void PrintList(BankAccount* n, int highlightNewest);
void remove_spaces(char* s);
BankAccount CreateBankAccount();
void SaveListInFile(BankAccount* head);

extern BankAccount* _BankAccountTail;
extern BankAccount* _BankAccountHead;
extern FILE* fStream;
