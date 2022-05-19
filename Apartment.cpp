#include "Apartment.h"
#include<iostream>
#include<cstring>

using namespace std;

Apartment::Apartment() {

	cout << "This is the Apartment constructor." << endl;
}

Apartment::Apartment(int AID, const char Aname[], const char address[], double Aprice, int Pdate) {

	apartID = AID;
	strcpy(apartName, Aname);
	strcpy(apartAddress, address);
	apartPrice = Aprice;
	publishedDate = Pdate;

}

Apartment::Apartment(int AID) {
	apartID = AID;
}

int Apartment::getApartID()
{
	return apartID;
}
char Apartment::getApartName()
{
	return  *apartName;
}
char Apartment::getApartAddress()
{
	return *apartAddress;
}
double Apartment::getApartPrice()
{
	return apartPrice;
}
int Apartment::getPublishedDate()
{
	return publishedDate;
}
void Apartment::Display()
{

	cout << "Apartment ID = " << apartID << endl;
	cout << "Apartment Name = " << apartName << endl;
	cout << "Apartment Address = " << apartAddress << endl;
	cout << "Apartment Price = " << apartPrice << endl;
	cout << "Publish Date = " << publishedDate << endl;
}

void Apartment::DisplayApartmentDetails() {
	cout << "Apartment Id :" << apartID << endl;
}

Apartment :: ~Apartment() {

	cout << "The content are getting deleted." << endl;

}
