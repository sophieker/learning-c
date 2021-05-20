#include <iostream>
using namespace std;

class Inventory
{
private:
	int itemNumber;
	int quantity;
	double cost;
public:
	Inventory()
	{
		itemNumber = 0;
		quantity = 0;
		cost = 0.0;
	}

	Inventory(int itemNum, int itemQuantity, double itemCost)
	{
		itemNumber = itemNum;
		quantity = itemQuantity;
		cost = itemCost;
	}

	void setItemNumber(int itemNum)
	{
		itemNumber = itemNum;
	}

	void setQuantity(int itemQuantity)
	{
		quantity = itemQuantity;
	}

	void setCost(double itemCost)
	{
		cost = itemCost;
	}

	int getItemNumber()
	{
		return itemNumber;
	}

	int getQuantity()
	{
		return quantity;
	}

	double getCost()
	{
		return cost;
	}

	double getTotalCost()
	{
		return quantity * cost;
	}
};

int main()
{
	Inventory whatToNameThis(4, 100, 10.0);
	whatToNameThis.setItemNumber(10);
	whatToNameThis.setQuantity(200);
	whatToNameThis.setCost(10.99);
	cout << "Item number: " << whatToNameThis.getItemNumber() << endl;
	cout << "Item quantity: " << whatToNameThis.getQuantity() << endl;
	cout << "Item cost: " << whatToNameThis.getCost() << endl;
	cout << "Total cost: " << whatToNameThis.getTotalCost() << endl;
}