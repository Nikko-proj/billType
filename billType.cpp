#include "billType.h"

/*
***** ITEMTYPE CLASS *****
*/

itemType::itemType(){
    itemName = "Empty";
    itemPrice = 0.0;
    itemQuant = 0;
}

void itemType::setItemName(string &inputName){
    // Receive the address, put into itemName.
    itemName = inputName;
}

void itemType::setItemPrice(float &inputPrice){
    itemPrice = inputPrice;
}

void itemType::setQuant(int &inputQuant){
    itemQuant = inputQuant;
}

string itemType::getItemName(){
    return itemName;
}

float itemType::getItemPrice(){
    return itemPrice;
}

int itemType::getQuant(){
    return itemQuant;
}

void itemType::print(){
    std::cout << "Name: " << getItemName() << std::endl;
    std::cout << "Price: " << getItemPrice() << std::endl;
    std::cout << "Quantity: " << getQuant() << std::endl;
}

/*
***** BILLTYPE CLASS *****
*/
