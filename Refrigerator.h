/********************************************************************************************
* @file			Refrigerator.h  
*  
* @brief		Prototypes for the derived class of a base class called Home_Appliance and a Refrigerator as a Home Appliance
*
* @author		Aysenur Bolat
*
* @version		V1.0
*
* @date			28. December 2018
*********************************************************************************************/



#ifndef REFRIGERATOR_H
#define REFRIGERATOR_H
#include <stdexcept>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <vector>
#include "Home_Appliance.h"
#include "Engine.h"			

using namespace std;


/** class	Refrigerator
*	brief	A derived class of a base class called home appliance
*	details	This derived class includes special properties for Refrigerator 
*			in addition to common properties of a home appliance 	
*/


class Refrigerator : public Home_Appliance
{
	
	
	public:		
		
		/// create a Refrigerator class																										
		Refrigerator(string, int, int, int, string, int, int, int, char, Engine &,  int );
		
		/// destructs the Refrigerator class
		~Refrigerator();

		/**
		  \brief	Set minimum temperature	value in celsius
		  \return	void	
		*/
		void setMinTemperature( int );
		
		/**
		  \brief	Set volume value in liters
		  \return	void	
		*/
		void setVolume( int );
		
		/**
		  \brief	Set number of doors of a refrigerator
		  \return	void	
		*/
		void setNumberOfDoors( int );
		
		/**
		  \brief	Set defrost property of a refrigerator
		  \return	void	
		*/
		void setDefrostProperty(char);
		
		/**
		  \brief	Set number of refigerator in the inventory
		  \return	void	
		*/
		void setNumberOfProduct(int);
		
		/**
		  \brief	Get minimum temperature	value
		  \return	integer	
		*/
		int getMinTemperature() const;
		
		/**
		  \brief	Get volume of a refrigerator
		  \return	integer	
		*/
		int getVolume() const;
		
		/**
		  \brief	Get number of doors of a refrigerator
		  \return	integer	
		*/
		int getNumberOfDoors() const;
		
		/**
		  \brief	Get defrost property of a refrigerator
		  \return	char	
		*/
		char getDefrostProperty() const;
		
		/**
		  \brief	Get number of refrigerators in the inventory
		  \return	integer	
		*/
		int getNumberOfProduct()const;
		
		/**
		  \brief	Print all the properties special to refrigerator including the common home appliance properties
		  \return	void
		*/
		void printProperties() const;
		
		
	protected:
		
		int minTemperature;
		int volume;
		int numberOfDoors;
		char defrostProperty;
		int numberOfProducts;
		Engine refrigeratorEngine;
		
};

#endif
