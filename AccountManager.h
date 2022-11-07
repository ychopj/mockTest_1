//
// Created by c on 2022/11/3.
//

#ifndef MOCKTEST_1_ACCOUNTMANAGER_H
#define MOCKTEST_1_ACCOUNTMANAGER_H
#include<string>
#include"Account.h"
class AccountManager {
public:
    //通过账户号，找到对应的用户
    virtual Account findAccountForUser(const std::string& userId) = 0;
    virtual void updateAccount(const Account& account) = 0;
};


#endif //MOCKTEST_1_ACCOUNTMANAGER_H
