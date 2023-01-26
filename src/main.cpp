#include <iostream>
#include <vector>

#include "login.h"
#include "blockChain.h"
#include "commandLoop.h"

int main()
{
    BlockChain blockChain = BlockChain();
    User currentUser = login();

    //these are test blocks, remove them later
    std::vector<Transaction> tData;
    Transaction testTransaction1 = Transaction("Jimothy", "Amy", 17);
    tData.push_back(testTransaction1);
    Transaction testTransaction2 = Transaction("Amy", "Jimothy", 14);
    tData.push_back(testTransaction2);

    std::vector<Transaction> tData2;
    Transaction testTransaction3 = Transaction("Jack", "Joe", 28);
    tData2.push_back(testTransaction3);
    Transaction testTransaction4 = Transaction("Joe", "Jack", 19);
    tData2.push_back(testTransaction4);

    std::vector<Transaction> tData3;
    Transaction testTransaction5 = Transaction("Lyle", "Kyle", 13);
    tData3.push_back(testTransaction5);
    Transaction testTransaction6 = Transaction("Kyle", "Lyle", 53);
    tData3.push_back(testTransaction6);


    //blockChain.addBlock(tData);
    //blockChain.addBlock(tData2);
    //blockChain.addBlock(tData3);

    commandLoop(blockChain, currentUser);

    return 1;
}