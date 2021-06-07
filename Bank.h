#include "saving.h"
#include "loan.h"

class Bank {
private:
	AccountDB ADB;
	Saving savingObj;
	loan loanObj;
	int num;
public:
	Bank();
	void setAuthority();	
	void joinAccount();		
	void cancelAccount();	
	void allAccountsPrint();
	void accountPrint();	
	void deposit();			
	void withdraw();		
	void savig();			
	void loan();			

	void client();			
	void BankManager();		
	void savingManager();
	void loanManager();
};
