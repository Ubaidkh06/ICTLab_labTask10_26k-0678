#include <iostream>
#include <string>

using namespace std;

class Fan
{
	public:
		int speed;
		string color;
	
		Fan()
		{
			speed = 1;
			color = "White";
		}
	
		void showFan()
		{
			cout << "Fan speed: " << speed << endl; 
			cout << "Fan color: " << color << endl;
		}
};

int main(void)
{
	Fan obj;
	
	obj.showFan();
}
