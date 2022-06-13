#include <iostream>
#include "Number.h"
#include "Exception.h"
#include <exception>


using namespace std;

class E : public exception
{
	string message;
public:
	E(string message) : message(message){}
	string What() { return message; }
};

int main()
{
	bool init;
	Number a;

	do
	{
		try
		{
			init = true;
			cin >> a;
		}
		catch(E e)
		{
			init = false;
			cerr << e.what() << endl;
		}
		catch(MyException e)
		{
			init = false;
			cerr << e.what() << endl;
		}
		catch (bad_exception& e)
		{
			init = false;
			cerr << e.what() << endl;
		}
	} while (!init);

	cout <<  endl;

	a.multiply(2);
	cout << a << endl;

	return 0;
}