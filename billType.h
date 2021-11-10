#ifndef BILLTYPE_H
#define BILLTYPE_H

/*
Bill calculator program.
1. Prompts user for name of item, quantity of item, and price of item.
2. Lists out the items with price, total, total w/tax, total w/tax but without tip.
3. Asks what percentage to tip.
4. Lists out the items with price, total, total w/tax, total w/tax and w/tip.
5. Prints to bill.txt file.
*/

#include <iostream> // read data
#include <fstream>  // output file
#include <string>   // for names of items

using std::string; // Easier to type string over std::string
using std::fstream; // Easier to type fstream over std::fstream

class itemType // Every item has a name, price, and quantity
{
    string itemName; // name of item
    float itemPrice; // price of item
    int itemQuant;   // number of items

public:         // setters and getters
    itemType(); // default constructor
    void setItemName(string &);
    void setItemPrice(float &);
    void setQuant(int &);

    string getItemName();
    float getItemPrice();
    int getQuant();

    void print();
};

class billType : public itemType // billType extends to itemType
{
    fstream outputBill;
};
#endif