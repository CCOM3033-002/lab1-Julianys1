/*
Asignación 1: Binary Digit
Nombre: Julianys Tirado Alicea
Núm. Est: 801-22-5449
Colaboraciones: 
- tupora: Gladymar Colón
- página web: [link]
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    
//Declaracion de las variables y sus valores
    string movieName = "Wheels of Fury";
 

    int adultTickets, childTickets;
    const double ADULT_TICKET_PRICE = 10.00;
    const double CHILD_TICKET_PRICE = 6.00;
    const double THEATER_SHARE = 0.20; //dinero al teatro 

//Usuario contesta las preguntas y el programa recolecta la informacion  

    cout<< "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater." << endl;
    cout << "Movie Name:";
    getline(cin, movieName);

    cout<< "Adult Tickets Sold:";
    cin >> adultTickets;

    cout << "Child Tickets Sold:";
    cin >>childTickets;

//setw despues del movie name
cout << "Movie Name:" << setw(20) << "'"<<  movieName << "'" << endl; // codigo ""

float sumAdult, sumChild;
    sumAdult = adultTickets * 10;
    sumChild = childTickets * 6;

//nuevas variables, se le suma la cantidad de tickest vendidos 
float grossOffice = sumAdult + sumChild;
float boxOffice = (sumAdult + sumChild) * THEATER_SHARE;
string symbol = " $";

// setw, setprecission, fixed, showpoint, left, right
       cout << "Gross Box Office Profit: "  <<setw(5) <<right << symbol  << setprecision(2) << fixed << grossOffice << endl; // suma total mas se añadio el signo de $ 
    cout << "Net Box Office Profit: " << setw(7) <<right << symbol << left << setw(8) << boxOffice << endl ;
    cout << "Amount Paid to Distributor: " << setw(2) << right<< symbol << left << setw(8) << grossOffice - boxOffice << endl;
  

return 0;
}
