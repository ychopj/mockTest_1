//
// Created by c on 2022/11/3.
//

#ifndef MOCKTEST_1_ACCOUNT_H
#define MOCKTEST_1_ACCOUNT_H
#include<string>
using namespace std;


class Account {
private:
    std::string accountId;
    long balance;
public:
    Account();
    Account(const std::string& accountId, long initialBalance);

    //consume
    void debit(long amount);
    //收入
    void credit(long amount);
    //获取存款
    long getBalance() const;

    //获取帐号
    std::string getAccountId() const;
};


#endif //MOCKTEST_1_ACCOUNT_H
