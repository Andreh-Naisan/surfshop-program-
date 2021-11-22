// week 5 - programing assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//some comments are for github

#include<iostream>
#include<iomanip>
using namespace std;


void ShowUsage()
{
	//when the user presses S show options
	
	cout << "please make a choice " << endl;

	cout << "The price of XXXS surfboard is $100" << endl;

	cout << "The price of small surfboard is $175" << endl;
	
	cout << "The price of medium surfboard is $190" << endl;

	cout << "The price of large surfboard is $200\n" << endl;
	
	
}
void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotallLarge ,const int iTotalXXXS)
{
	if (iTotalSmall == 0 && iTotalMedium == 0 && iTotallLarge == 0 && iTotalXXXS ==0)
	{
		//if no purchase is made
		cout << "No purchases made yet." << endl;

		return;
	}
	if (iTotalXXXS != 0)
	{
		//number of XXXS surfboard purchase made 
		cout << "The total number of XXXS surfboards is: " << iTotalXXXS << endl;

	if (iTotalSmall != 0)
	{
		//number of small surfboard purchase made 
		cout << "The total number of small surfboards is: " << iTotalSmall << endl;
	}
	if (iTotalMedium != 0)
	{
		//number of medium surfboard purchase made
		cout << "The total number of medium surfboards is: " << iTotalMedium << endl;
	}
	if (iTotallLarge != 0)
	{
		//number of large surfboard purchase made
		cout << "The total number of large surfboards is: " << iTotallLarge << endl;
	}
}
void DisplayTotal( const int iTotalSmall, const int iTotalMedium, const int iTotallLarge ,const int iTotalXXXS)
{
	if (iTotalSmall == 0 && iTotalMedium == 0 && iTotallLarge == 0 &&iTotalXXXS == 0)
	{
	//if no purchase is made 
		cout << "No purchases made yet." << endl;

		return;
	}
	//surf size variables
	int small = 0, medium = 0 , large = 0 , XXXS = 0;

	if (iTotalXXXS != 0)
	{
		//cost of a small surfboard 
		XXXS = iTotalXXXS * 100;

		cout << "The total number of XXXS surfboards is: " << iTotalXXXS << "at a total cost of $" << XXXS << endl;
	//}

	if (iTotalSmall != 0)
	{
	//cost of a small surfboard 
		small = iTotalSmall * 175; 

		cout << "The total number of small surfboards is: " << iTotalSmall << "at a total cost of $" << small << endl;
	}
	if (iTotalMedium != 0)
	{
	//cost of a medium surfboard 
		medium = iTotalMedium * 190; 

		cout << "The total number of medium surfboards is: " << iTotalMedium << "at a total cost of $" << medium << endl;
	}
	if (iTotallLarge != 0)
	{
	//cost of a large surfboard 
		large = iTotallLarge * 200; 

		cout << "The total number of large surfboards is: " << iTotallLarge << "at a total cost of $" << large << endl;
	}

	int totalprice = small + medium + large +XXXS;
	cout << "Amount due is: $" << totalprice << endl;
}
void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotallLarge)
{
	//user choice of quantity and size surfboard 
	cout << "Please enter the quantity and type(XXXS-Squirrel , S-Small, M-Medium, L-Large)of surfboard you would like to purchase: "; //XXXS - squirrel

	//user choice of quantity and size surfboard 
	char SurfSize;

	int quantity;

	cin >> quantity >> SurfSize;

	if (SurfSize == 'L' || SurfSize == 'l') iTotallLarge += quantity;

	else if (SurfSize == 'M' || SurfSize == 'm') iTotalMedium += quantity;

	else if (SurfSize == 'XXXS' || SurfSize == 'xxxs') iTotalXXXS += quantity;

	else iTotalSmall += quantity;
}


int main()
{
	//program introduction 
	cout << std::setw(70) << std::setfill('*') << "*" << endl;
	cout << std::setw(20) << std::setfill('*') << " Welcome to my Johnny Utah's PointBreak Surf Shop " << std::setw(20) << std::setfill('*') << "*" << endl;
	cout << std::setw(70) << std::setfill('*') << "*" << endl;
	cout << "\n" << endl;

	//main manu user options 
	cout << "To show program usage press 'S'" << endl;

	cout << "To purchase a surfboard press 'P'" << endl;

	cout << "To display current purchases press 'C'" << endl;

	cout << "To display total amount press 'T'" << endl;

	cout<< "To quit the program press 'Q'" << endl;

	int iTotalSmall = 0, iTotalMedium = 0, iTotallLarge = 0,  iTotalXXXS = 0;
	while (1) 
	{
		//user choice
		cout << "\nPlease enter selection: ";
		

		char SChoice;

		cin >> SChoice;

		switch (SChoice)

		{

		case 'S':case 's':
		{
		//to show user usage within the program	
			ShowUsage();
			break;
		}
		//to show user options for purchase 
		case 'P':case 'p':
		{
		 
			MakePurchase(iTotalSmall, iTotalMedium, iTotallLarge ,iTotalXXXS);
			break;
		}
		//to show the user purchase
		case 'C':case 'c':
		{
		
			DisplayPurchase(iTotalSmall, iTotalMedium, iTotallLarge ,iTotalXXXS);
			break;
		}
		// to display the total
		case 'T':case 't':
		{

			DisplayTotal(iTotalSmall, iTotalMedium, iTotallLarge ,iTotalXXXS);
			break;
		}
		// to end the program when Q is pressed 
		case 'Q':case 'q':
		{
			cout << "Thank you" << endl;
			system("pause"); 		
		}		 
		 return 0;
		}
		
	}
}
	/// the squirrel(aka scrat) surfboard is actually an overpriced acorn. 
