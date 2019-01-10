/********************************************************************************************
* @file			Home_Appliance.c  
*  
* @brief		Home_Appliance driver as a base class
* 
* @details		Home_Appliance is a base class that includes the common properties of
*				identification code, height, length, width and energy consumption class
*				as data members and get and set functions associated with these data members,
*				in addition to these, a print function that prints all the parameters together
*				and a control function that detects any number out of characters.
*
* @author		Aysenur Bolat
*
* @version		V1.0
*
* @date			28. December 2018
*********************************************************************************************/




#include "Home_Appliance.h"
using namespace std;

Home_Appliance::Home_Appliance(string ID, int varHeight, int varLength, int varWidth,string energyClass )
{
	setIdentificationCode( ID )	;
	setHeight( varHeight );
	setLength( varLength );
	setWidth( varWidth );
	setEnergyConsumptionClass( energyClass );
}

/**
* @brief	Set the identification code of home appliance
* @param	Identification code that consists of digits and a letter
* @retval	void
*/
void Home_Appliance::setIdentificationCode( string ID)
{
	identificationCode = ID;
}

/**
* @brief	Set the height of home appliance
* @param	Height in centimeters
* @retval	void
*/
void Home_Appliance::setHeight( int varHeight )
{
	height = varHeight;
}

/**
* @brief	Set the length of home appliance
* @param	Length in centimeters
* @retval	void
*/
void Home_Appliance::setLength( int varLength)
{
	length = varLength;
}

/**
* @brief	Set the width of home appliance
* @param	Width in centimeters
* @retval	void
*/
void Home_Appliance::setWidth( int varWidth )
{
	width = varWidth;	
}

/**
* @brief	Set the energy consumption class of home appliance
* @param	Energy consumption class that consists of letter(s)
* @retval	void
*/
void Home_Appliance::setEnergyConsumptionClass( string energyClass)
{
	energyConsumptionClass = energyClass;
}
		
/**
* @brief	Get the identification code of home appliance 
* @param	void
* @retval	Identification code as string
*/
string Home_Appliance::getIdentificationCode() const
{
	return identificationCode;
}

/**
* @brief	Get the height of home appliance 
* @param	void
* @retval	Height of a home appliance in centimeters
*/
int Home_Appliance::getHeight() const
{
	return height;
}

/**
* @brief	Get the length of home appliance 
* @param	void
* @retval	Length of a home appliance in centimeters
*/
int Home_Appliance::getLength() const
{
	return length;	
}

/**
* @brief	Get the width of home appliance 
* @param	void
* @retval	Width of a home appliance in centimeters
*/
int Home_Appliance::getWidth() const
{
	return width;
}

/**
* @brief	Get energy consumption class of home appliance 
* @param	void
* @retval	Energy consumption class consists of letter(s)
*/
string Home_Appliance::getEnergyConsumptionClass() const
{
	return energyConsumptionClass;
}

/**
* @brief	Print the all common properties of home appliance 
* @param	void
* @retval	void
*/
void Home_Appliance::printProperties() const
{
	cout << this->getIdentificationCode() << " " << this->getHeight() << " " << this->getLength()
		<< " " << this->getWidth() << " " << this->getEnergyConsumptionClass();
		
}

/**
* @brief	Detect if the given string consists of only letters or not.
* @param	void
* @retval	Value true if the string has only letters
*/
bool Home_Appliance::IsLetter(string input) const
{
	for( unsigned int i = 0; i < input.size(); i++)
	{
		int upperCaseChar = toupper( input[i] );
		if( upperCaseChar < 'A' || upperCaseChar > 'Z')
		{
			return false;
		}
	}
	return true;
}
