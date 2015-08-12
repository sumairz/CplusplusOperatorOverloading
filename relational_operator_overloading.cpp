#include <iostream>

using namespace std;

class relationalOperatorOverload
{
	private:
		int length;
		int height;

	public:
		relationalOperatorOverload()
		{
			this->length = 0;
			this->height = 0;
		}

		relationalOperatorOverload ( int l, int h )
		{
			this->length = l;
			this->height = h;
		}

		bool operator< (relationalOperatorOverload &obj)
		{
			if(this->height < obj.height)
				return true;
			else
				return false;
		}
};


int main()
{
	relationalOperatorOverload D1(12,3), D2(1,23);
	
	if(D1 < D2)
		cout << "D1 is less than D2" << endl;
	else
		cout << "D1 is greater than D2" << endl;

	system("pause");
	return 0;
}