/*******************************************************************************************************
* @file			Menu.c  
*  
* @brief		Menu driver for Menu.h file 
* 
* @details		Menu file is created to simplify the menu operations. It asks to the user that what he/she wants to do
*				and the type of the product. Then, it provides adding new products to the inventory, changing the number
*				of available products and listing the products in the inventory.
*		
* @author		Aysenur Bolat
*
* @version		V1.0
*
* @date			28. December 2018
********************************************************************************************************/



#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include "Refrigerator.h"
#include "Dishwasher.h"
#include "Washing_Machine.h"
#include "Menu.h"
using namespace std;


vector<Refrigerator>::iterator refIt;
vector<Dishwasher>::iterator dishIt;
vector<Washing_Machine>::iterator washIt;


/**
* @brief	Constructor for Menu class
*
* @details	 This constructor calls main menu that start the menu operations.
*
* @param	void
*
*/

Menu::Menu()
{
	this->mainMenu();
}

Menu::~Menu()
{
}


/**
* @brief	Print refrigerator properties that is stored in a vector
* @param	void
* @retval	void
*/
void Menu::printRefrigerator()
{
	cout <<"Refrigerator\n";
	for(refIt = vecOfRefrigerator.begin(); refIt != vecOfRefrigerator.end(); refIt++){
		refIt->printProperties(); 
		cout <<endl;
	}
}


/**
* @brief	Print dishwasher properties that is stored in a vector
* @param	void
* @retval	void
*/
void Menu::printDishwasher()
{
	cout<<"Dishwasher\n";
	for(dishIt = vecOfDishwasher.begin(); dishIt != vecOfDishwasher.end(); dishIt++){
		dishIt->printProperties();
		cout <<endl;
	}
}

/**
* @brief	Print washing machine properties that is stored in a vector
* @param	void
* @retval	void
*/
void Menu::printWashingMachine()
{
	cout <<"Washing Machine\n";
	for(washIt = vecOfWashingMachine.begin(); washIt != vecOfWashingMachine.end(); washIt++ ){
		washIt->printProperties();
		cout <<endl;
	}
}

/**
* @brief	Print all properties that is stored in vectors
* @param	void
* @retval	void
*/
void Menu::printVector()
{
	printRefrigerator();
	printDishwasher();
	printWashingMachine();
}

/**
* @brief	Print all refrigerator IDs when change mode is selected
* @param	void
* @retval	void
*/
void Menu::refrigeratorID()
{
	for(refIt = vecOfRefrigerator.begin(); refIt != vecOfRefrigerator.end(); refIt++){
		cout <<refIt->getIdentificationCode(); 
		cout <<endl;
	}
}
/**
* @brief	Print all dishwasher IDs when change mode is selected
* @param	void
* @retval	void
*/
void Menu::dishwasherID()
{
	for(dishIt = vecOfDishwasher.begin(); dishIt != vecOfDishwasher.end(); dishIt++){
		cout <<dishIt->getIdentificationCode();
		cout <<endl;
	}
}
/**
* @brief	Print all washing machine IDs when change mode is selected
* @param	void
* @retval	void
*/
void Menu::washingmachineID()
{
	for(washIt = vecOfWashingMachine.begin(); washIt != vecOfWashingMachine.end(); washIt++ ){
		cout <<washIt->getIdentificationCode();
		cout <<endl;
	}
}

/**
* @brief	When user wants to change the number of product of refrigerator, the ID entered is found in vector
* @param	string ID value
* @retval	void
*/
void Menu::findRefID(string ID)
{
	int newNumberOfProd;
	for(refIt = vecOfRefrigerator.begin(); refIt != vecOfRefrigerator.end(); refIt++){
		if(refIt->getIdentificationCode() == ID)
		{
			cin >>newNumberOfProd;
			refIt->setNumberOfProduct(newNumberOfProd);
		}
	}
}
/**
* @brief	When user wants to change the number of product of dishwasher, the ID entered is found in vector
* @param	string ID value
* @retval	void
*/
void Menu::findDishID(string ID)
{
	int newNumberOfProd;
	for(dishIt = vecOfDishwasher.begin(); dishIt != vecOfDishwasher.end(); dishIt++){
		if(dishIt->getIdentificationCode() == ID)
		{
			cin >>newNumberOfProd;
			dishIt->setNumberOfProduct(newNumberOfProd);
		}
	}
}
/**
* @brief	When user wants to change the number of product of washing machine, the ID entered is found in vector
* @param	string ID value
* @retval	void
*/
void Menu::findWashID(string ID)
{
	int newNumberOfProd;
	for(washIt = vecOfWashingMachine.begin(); washIt != vecOfWashingMachine.end(); washIt++ ){
		if(washIt->getIdentificationCode() == ID)
		{
			cin >>newNumberOfProd;
			washIt->setNumberOfProduct(newNumberOfProd);
		}
		
	}
}
/**
* @brief	If user wants to change number of products, this function is used
*           first type is entered and then all IDs of this type listed, then user
*			enters ID and new number of prodcut to change.
* @param	void
* @retval	void
*/
void Menu::changeNumberOfProduct()
{
	string userID;
	cout <<"To change number, choose the type below\n";
	cout << "\nPress 1, for Refrigerator";
	cout << "\nPress 2, for Dishwasher";
	cout << "\nPress 3, for Washing Machine" << endl;
	int select;
	cin >>select;
	switch(select){
		case 1:
			{
				refrigeratorID();
				cout <<"Enter ID and a new number of product to change\n";
				cin >>userID;
				findRefID(userID);
				break;
			}
		case 2:
			{
				dishwasherID();
				cout<<"Enter ID and a new number of product to change\n";
				cin >>userID;
				findDishID(userID);
				break;
			}
		case 3:
			{
				washingmachineID();
				cout <<"Enter ID and a new number of product to change\n";
				cin >>userID;
				findWashID(userID);
				break;
			}
	}
}
/**
* @brief	Here, the menu is shown to user and user should define which action 
*           he or she wants to do. For listing press'l' or 'L', for changing number 
*			of products press 'c' or 'C' and for adding new product press 'a' or 
*			or 'A'. For listing, all available items list shown. For changing the
*			the number of product user must choose which type of appliance
* 			then all IDs are listed and then user enters new nmber. For adding
*			user again selects type of appliance and then bunch of data is written.
* @param	void
* @retval	void
*/
void Menu::mainMenu()
{
	bool enterMenu = true;
	char exitOrContinue;
	
	
	while(enterMenu){
	
		int request;
		char type;
		cout << "Welcome to the inventory." << endl;
		cout << "\n\nType the process" << endl;
		cout << "Press 'l' or 'L', to list the inventory details" <<endl;
		cout << "Press 'c' or 'C', to change the number of products" << endl;
		cout << "Press 'a' or 'A', to add a new product" << endl;
		cin >> type;
	
		switch(type){
		
			case 'l' :
			case 'L' :
			{
				printVector();
				break;
			}
		
			case 'c':
			case 'C':
			{
				changeNumberOfProduct();
				break;
			}
		
			case 'a':
			case 'A':
			{
			
				cout << "\nPress 1, for Refrigerator";
				cout << "\nPress 2, for Dishwasher";
				cout << "\nPress 3, for Washing Machine" << endl;
	
				cin >>  request;
	
				Engine eng(0.0, 0, 0);
	
				switch(request){
		
					case 1:
					{
						Refrigerator r(" ", 0, 0, 0, " ", 0, 0, 0, ' ',eng,0);
						r.printProperties();
						vecOfRefrigerator.push_back(r);
						break;
					}
		
					case 2:
					{
						Dishwasher d(" ", 0, 0, 0, " ", 0, 0, 0, 0, eng,0);
						d.printProperties();
						vecOfDishwasher.push_back(d);
						break;
					}
	
					case 3:
					{
						Washing_Machine w(" ", 0, 0, 0, " ", 0, 0, 0, 0, eng,0);
						w.printProperties();
						vecOfWashingMachine.push_back(w);
						break;
					}
				}
			
			
		
			break;
			}
	
		}
		cout <<"\nIf you want to exit press 'e' or 'E', for continuing press any except exit..";
		cin >>exitOrContinue;
		if(exitOrContinue=='e' || exitOrContinue == 'E')
		{
			enterMenu = false;
			cout << "Closing Inventory..." << endl;
		}
		else{
			enterMenu = true;
		}
	}
}
