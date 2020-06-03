/*******************************************************************************
 *
 * Example of Factory Design Pattern.
 *
 *******************************************************************************/
/********************************
 *
 * @INCLUDE
 *
 *******************************/
#include "Main.h"

/******************************
 *
 * @NAMESPACE
 *
 ****************************/
using namespace std;

int main()
{
	char str[20];
	int num;

	cout << "Enter the number of devices to find gestures :";
	cin >> num;

	Base* base_ptr;

	for(int devices = 1; devices <= num; devices++)
	{
		cout << "Enter the device name ";
		cin >> str;

		if(strcasecmp(str, "Device1") == 0)
                {
                        base_ptr = new Device1; // inititate for device1
                }
                else if(strcasecmp(str, "Device2") == 0)
                {
                        base_ptr =  new Device2; // inititate for device2
                }
                else
                {
                        cout << "Device not registered" << endl;
			exit(0);
                }

		base_ptr -> gestures();
	}
	return 0;
}
