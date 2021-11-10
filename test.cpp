#include "billType.h"
#include <iostream>
#include <fstream>


int main(){
    itemType myItem;
    itemType *itemPtr;
    itemPtr = &myItem;

    itemPtr->print();
    std::cout << "\n";
    itemType *theItems = new itemType[10];
    for(int i = 0; i < 10; i++){
        std::cout << "Item: " << i << std::endl;
        theItems[i].print();
        std::cout << std::endl;
    }
    std::fstream outputFile ("outputBill.txt", std::ios::app);
    
    for(int j = 0; j < 10; j++){
        outputFile << "Item: " << j << "\n";
        outputFile << "Name: " << theItems[j].getItemName() << "\n";
        outputFile << "Price: " << theItems[j].getItemPrice() << "\n";
        outputFile << "Quantity: " << theItems[j].getQuant() << "\n";
        outputFile << "\n";
    }


    outputFile.close();
    delete [] theItems;
    theItems = NULL;
    return 0;
}