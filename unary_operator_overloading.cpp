#include <iostream>

using namespace std;

class unaryOperatorOverload
{
	private:
		int length;
		int height;

	public:
		friend ostream &operator<< ( ostream &os, unaryOperatorOverload &obj );

		unaryOperatorOverload()
		{
			this->length = 0;
			this->height = 0;
		}

		unaryOperatorOverload ( int l, int h )
		{
			this->length = l;
			this->height = h;
		}

		unaryOperatorOverload operator- ()
		{
			this->length = -this->length;
			this->height = -this->height;
			return unaryOperatorOverload ( this->length, this->height );
		}

		unaryOperatorOverload operator+ ()
		{
			this->length = -this->length;
			this->height = -this->height;
			return unaryOperatorOverload ( this->length, this->height );
		}
};

ostream &operator<< ( ostream &os, unaryOperatorOverload &obj )
{
	os << "Length: " << obj.length << endl << "Height: " << obj.height << endl;
	return os;
}

int main()
{
	unaryOperatorOverload object(-12,33);
	
	-object;
	cout << object;

	+object;
	cout << object;

	system("pause");
	return 0;
}