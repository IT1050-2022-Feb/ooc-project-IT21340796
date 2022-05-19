
class Apartment {
private:
    int apartID;
    char apartName[30];
    char apartAddress[20];
    double apartPrice;
    int publishedDate;
public:
    Apartment();
    Apartment(int AID, const char Aname[], const char address[], double Aprice, int Pdate);
    Apartment(int AID);
    int getApartID();
    char getApartName();
    char getApartAddress();
    double getApartPrice();
    int getPublishedDate();
    void Display();
    ~Apartment();
    void DisplayApartmentDetails();
    void displayApartment();
};