/*******************************************************************************
 *
 * Example of Singleton design pattern
 *
 *******************************************************************************/

/*********************************
 *
 * @INCLUDE
 *
 ********************************/
#include "singleton.h"

/*******************************
 *
 * @NAMESPACE
 *
 *****************************/
using namespace std;


/* Base class */
class Base
{
	/* private members */
	private:
		float num;
		static Base* instance;

	/* public functions */
	public:
        	static Base* getInst();
		void getdata();
		void printdata();
};

/* intiating instance to 0*/
Base* Base::instance = 0;

/* getInstamethod where instance is created only once */
Base* Base::getInst()
{
    	if (instance == 0)
    	{
		cout << "Instance is created" << endl;
       		instance = new Base;
    	}

    	return instance;
}

/* getdata */
void Base :: getdata()
{
	string str;
	int len;

	cout << "enter a number ";
	cin >> str;
	
	/* check validation */
	len = str.length();

	for(int loop = 0; loop < len; loop++)
        {
                if(isdigit(str[loop]) == 0 && str[loop] != '.')
                {
			   cout << "Enter a valid number" << endl;
		           exit(0);

                }
		/* copy the value in num */
                num = stof(str);
        }
}


/* printdata */
void Base :: printdata()
{
	cout << "Entered number is " << num << endl; 
}

int main()
{
    	Base* ptr_1 = Base::getInst();
	ptr_1 -> getdata();
	ptr_1 -> printdata();

	Base* ptr_2 = Base::getInst();
	ptr_2 -> printdata();

	return 0;
}
