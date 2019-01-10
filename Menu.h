/********************************************************************************************
* @file			Menu.h  
*  
* @brief		Menu header file
*
* @author		Aysenur Bolat
*
* @version		V1.0
*
* @date			28. December 2018
*********************************************************************************************/



#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include "Refrigerator.h"
#include "Dishwasher.h"
#include "Washing_Machine.h"
#include "Menu.h"

using namespace std;

/** class	Menu
*	brief	an abstract menu	
*	details	This abstract class incorporates properties of menu
*			in order to simplfy usage of the inventory program
*/


class Menu
{
	public:
		/// create a Menu constructor
		Menu();
		
		/// destruct a Menu
		~Menu();
		
		/**
		  \brief	Print refrigerator properties that is stored in vector	
		  \return	void	
		*/
		void printRefrigerator();
		
		/**
		  \brief	Print dishwasher properties that is stored in vector	
		  \return	void	
		*/
		void printDishwasher();
		
		/**
		  \brief	Print washing machine properties that is stored in vector	
		  \return	void	
		*/
		void printWashingMachine();
		
		/**
		  \brief	Print all vectors of refrigerator, dishwasher and washing machine	
		  \return	void	
		*/
		void printVector();
		
		/**
		  \brief	Set refrigerator ID for the process that changes the number of products
		  \			according to their IDs.	
		  \return	void	
		*/
		void refrigeratorID();
		
		/**
		  \brief	Set dishwasher ID for the process that changes the number of products
		  \			according to their IDs.	
		  \return	void	
		*/
		void dishwasherID();
		
		/**
		  \brief	Set washing machine ID for the process that changes the number of products
		  \			according to their IDs.	
		  \return	void	
		*/
		void washingmachineID();
		
		/**
		  \brief	Find the refrigerator location according to its ID and change the number of refrigerators 	
		  \return	void	
		*/
		void findRefID(string ID);
		
		/**
		  \brief	Find the dishwasher location according to its ID and change the number of dishwashers 	
		  \return	void	
		*/
		void findDishID(string ID);
		
		/**
		  \brief	Find the washing machine location according to its ID and change the number of washing machines 	
		  \return	void	
		*/
		void findWashID(string ID);
		
		/**
		  \brief	Change the number of products 	
		  \return	void	
		*/
		void changeNumberOfProduct();
		
		/**
		  \brief	Main menu prototype 	
		  \return	void	
		*/
		void mainMenu();
		
	protected:
		
		vector<Refrigerator> vecOfRefrigerator;
		vector<Dishwasher> vecOfDishwasher;
		vector<Washing_Machine> vecOfWashingMachine;
};

#endif
