#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const double RETAIL_COST = 199.00;

  int quantity;
  double discountRate = 0.00;
  double cost;
  double totalCost;

  cout << "Enter the number of units purchased: ";
  cin >> quantity;

  if(quantity >= 10 && quantity < 20)
  {
    discountRate = 0.20;
  }
  else if(quantity >= 20 && quantity <= 40)
  {
    discountRate = 0.30;
  }
  else if(quantity >= 50 && quantity < 100)
  {
    discountRate = 0.40;
  }
  else if(quantity >= 100)
  {
    discountRate = 0.50;
  }

  cost = quantity * RETAIL_COST;
  totalCost = cost * (1.00 - discountRate);

  cout << "The total cost of the purchase is: $" << fixed << setprecision(2) << cost << endl;
}
