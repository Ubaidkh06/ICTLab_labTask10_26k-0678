#include <iostream>
#include <string>

using namespace std;

class WaterBottle
{
	public:
		string brand;
		int capacity;
		
		WaterBottle()
		{
			brand = "Local";
			capacity = 500;
			waterLevel = 500;
		}
		
		WaterBottle(string a, int b)
		{
			brand = a;
			capacity = b;
			waterLevel = capacity;
		}
		
		void setWaterLevel(int w)
		{
			if (w >= 0 && w <= capacity)
			{
				waterLevel = w;
			}
			else
			{
				cout << "Invalid water level!" << endl;
			}
		}
		
		int getWaterLevel()
		{
			return waterLevel;
		}
		
		void drink (int ml)
		{
			if (ml > waterLevel)
			{
				cout << "Not enough water!" << endl;
			}
			else
			{
				waterLevel -= ml;
				cout << "You drank " << ml << " ml" << endl;
			}
		}
		
		void refill()
		{
			waterLevel = capacity;
			cout << "Bottle refilled" << endl;
		}
		
		void showInfo()
		{
			cout << "Brand: " << brand << ", Capacity: " << capacity << " ml, " << "Water Level: " << waterLevel << " ml" << endl;
		}
	private:
		int waterLevel;
		
	
};

int main(void)
{
	WaterBottle bottle1;
	bottle1.showInfo();
	
	WaterBottle bottle2("Nestle", 1500);

	bottle2.drink(300);
	int waterLevel = bottle2.getWaterLevel();
	cout << "Water left: " << waterLevel << endl;
	bottle2.drink(2000);
	bottle2.refill();
	bottle2.showInfo();
	
	bottle1.setWaterLevel(700);
}
