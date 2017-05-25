/*******************************************************************
 * Author: Stephen Sullivan
 * Date: 5-23-2017
 * Description: Function to repeat an array 
 * ****************************************************************/

#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

//Function prototype
void repeatArray(double *&myArray, int arrSize);
/*
int main()	 //Main Function
{
	double* myArray = new double[3];
	
	for (int i=0; i<3; i++)
		myArray[i] = (i+1);

	repeatArray(myArray, 3);

	for (int i=0; i<6; i++)
	         cout << myArray[i] << endl;

	delete []myArray;

	return 0;
}
*/
//Function to repeat an array
void repeatArray(double *&myArray, int arrSize)
{
	double* newArray = new double[arrSize];
		
	for (int i=0; i<arrSize; i++)
                myArray[i] = (i+1);

	for (int i=0; i<arrSize; i++)
               newArray[i] = myArray[i];
	
	delete []myArray;
	delete []newArray;
}
