#include <iostream>
#include <iomanip>
#include <cstring> 
using namespace std;

int main() {
  string movieName;
  int num_adultTickets, num_childTickets;
  float cost_adultTickets = 6.00, cost_childTickets = 3.00,
        gross_profit, net_profit;
  cout << "Enter the name of the movie: ";
  cin >> movieName; 

  cout << "Adult tickets sold: ";
  cin >> num_adultTickets;
  cout << "Child tickets sold: ";
  cin >> num_childTickets;

  gross_profit = (num_adultTickets * cost_adultTickets) + (num_childTickets * cost_childTickets);
  net_profit = gross_profit * 0.20;
  
  cout << left << setw(35) << "Movie name:" << setw(16) << movieName << endl;
  cout << setw(35) << "Adult Tickets Sold:" << setw(16) << num_adultTickets << endl;
  cout << setw(35) << "Child Tickets Sold:" << setw(16) << num_childTickets << endl;
  cout << fixed << setprecision(2) << showpoint << setw(35) << "Gross Box Office Profit:" << "$" << setw(16) << gross_profit << endl;
  cout << showpoint << setw(34) << "Amount Paid to Distributor:" << "-$" << setw(16) << 0.8 * gross_profit << endl;
  cout << setw(35) << "Net Box Office Profit:" << "$" << setw(16) <<  net_profit << endl; 

}