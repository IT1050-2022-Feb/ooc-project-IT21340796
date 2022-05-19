
class Documentation
{
private:
	int documentationID;
	char submitDate[20];
	Apartment* objAprt;
public:
	Documentation();
	Documentation(int docID, const char date[]);
	Documentation(int A_ID, const char A_name[], const char _address[], double A_price, int P_date);
	int getDocumentationID();
	char getSubmitDate();
	void DisplayApartmentDetails();
	~Documentation();
};