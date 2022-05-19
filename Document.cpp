#include "Document.h"
#include"Apartment.h"
#include<cstring>
#include<iostream>

using namespace std;

Documentation::Documentation()
{
	objAprt = new Apartment(0, "", "", 0.00, 0);
	cout << "This is the Documentation Constructer!" << endl;
}
Documentation::Documentation(int docID, const char date[])
{
	documentationID = docID;
	strcpy_s(submitDate, date);
}

int Documentation::getDocumentationID()
{
	return documentationID;
}
char Documentation::getSubmitDate()
{
	return *submitDate;
}
Documentation::~Documentation()
{
	cout << "Documentation getting deleted." << endl;
	delete objAprt;
	cout << "The end of the program." << endl;
}

Documentation::Documentation(int A_ID, const char A_name[], const char _address[], double A_price, int P_date)
{
	objAprt = new Apartment(A_ID, A_name, _address, A_price, P_date);
}

void Documentation::DisplayApartmentDetails() 
{
	objAprt->Display();
}
