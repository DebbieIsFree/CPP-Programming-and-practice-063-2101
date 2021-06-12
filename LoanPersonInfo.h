#ifndef __LOAN_PERSON_INFO__
#define __LOAN_PERSON_INFO_

#include "Account.h"
#include "AccountDB.h"
#include <string>

//LoanPersonInfo::checkPassWord(int pw)함수 코드 작성 : 조원 이지윤

class LoanPersonInfo{
private:
	int accID;
	int desired_amount;
	int loanNum;
	int payback;
	int PassWord;
public:
	LoanPersonInfo(int myaccID, int mydesired_amount, int myloanNum, int mypassword);
	void setPay(int pay);
	int getLoanNum();
	int getLoanDesiredAmount();
	int getAccID();
	int getLoanPayback();
	int checkPassWord(int pw);
}; 


#endif

