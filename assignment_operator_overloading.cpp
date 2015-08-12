#include <iostream>

using namespace std;

class assignmentOperatorOverload
{
	private:
		int height;
		int length;

	public:
		assignmentOperatorOverload()
		{
			this->length = 0;
			this->height = 0;
		}

		assignmentOperatorOverload ( int l, int h )
		{
			this->length = l;
			this->height = h;
		}

		void displayData()
		{
			cout << "Length: " << this->length << endl << "Height: " << this->height << endl;
		}

		assignmentOperatorOverload &operator= (assignmentOperatorOverload &obj)
		{
			if(this != &obj)
			{				
				this->length = obj.length;
				this->height = obj.height;				
			}
			return *this;
		}
};


int main()
{
	assignmentOperatorOverload D1(1,2), D2(3,6);
	
	D1 = D2;
	D1.displayData();

	system("pause");
	return 0;
}