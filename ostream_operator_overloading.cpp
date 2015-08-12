#include <iostream>

using namespace std;

class ostreamOperatorOverload
{
	private:
		double length;
		double height;

	public:
		//Constructor
		ostreamOperatorOverload()
		{
			this->length = 0.0;
			this->height = 0.0;
		}

		ostreamOperatorOverload(double l, double h)
		{
			this->length = l;
			this->height = h;
		}

		friend ostream &operator<<(ostream &os, const ostreamOperatorOverload &obj)
		{
			os << "Length: " << obj.length << endl << "Height: " << obj.height << endl;
			return os;
		}

};

int main()
{
	ostreamOperatorOverload object(12.3,22.44);
	cout << object;

	system("pause");
	return 0;
}