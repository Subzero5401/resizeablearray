#pragma once
#include "dmanalll.h"
#include <iostream>


dmanall::dmanall()
{
	std::cout << " enter the array size for a int type \n";
	std::cin >> a;// how to use pointer in member funcitions to create dynamic ;
	fir = new int[a];
	for (int d = 0; d < a; d++)
	{

		*(fir + d) = d;



	}
	for (int d = 0; d < a; d++)
	{

		std::cout << *(fir + d) << "\n";



	}

}


void dmanall::add() { 
	int d;
	std::cin >> d;
	*(fir + cur) = d;
	++cur;
	//i was intial going to have the user have the ability to add ahead of the cur but i realize 
	//i wouldnt be able to control data being overwritten in this regard maybe later when i get gui . 
	// maybe like excel or gui databases

}




void dmanall :: storedvalue()
{
	for (int d = 0; d < a; d++)
	{

		std::cout << *(fir+d) << std::endl;




	}
}


void dmanall :: delmem()

	{
	delete []fir;
	fir = nullptr;


	} 

void dmanall::size()
{
	//check for size of array
	


	std::cout << " the size of the array currently is  " << a <<std::endl;



}


void dmanall::scaleup()
{  
	int con = 1;
	
		while (con == 1)
		{
			std::cout << " Enter the value you like to resize too \n ";
			std::cin >> b;
			if (b <= a)
			{

				std::cout << "use the scaledown function to delete and resize down \n";





			}
			else if (b > a)
			{
				temp = new int[b];
				for (int c = 0; c < a; c++)
				{
					(*(temp + c)) = (*(fir + c));





				}
				//possibly use a pointer to alway point to the current array required. 
				// tried method with just using the fir point to point to new pointer when called . 
				for (int c = 0; c < a; c++)
				{
					std::cout << "this is temp array \n" << c<<" " << *(temp + c) << std::endl;






				}
				for (int c = a; c < b; c++)
				{
					*(temp + c) = c;




				}
				for (int c = 0; c < b; c++)
				{
					std::cout <<"temp array " << c << " " << *(temp + c) << std::endl;





				}
				delete[] fir;
				// i had a 
				fir = new int[b];
				for (int d = 0; d < b; d++)
				{
					*(fir + d) = *(temp + d);
					std::cout << " the new fir array " << *(fir + d) << std::endl;








				}
				delete[] temp;
				temp = nullptr;




				
				a = b;
				

				con = 0;
			}


		}
}

void dmanall::scaledown()
{


	int con = 1;
	while (con == 1)
	{
		int choice;

		std::cout << " which element of the array would you like to delete 0 is the first element " << "\n";
		size();
		std::cin >> choice;
		std::cout << std::endl;
		std::cout << "this is the element you have chosen and it value " << choice << " " << *(fir + choice) << "is this correct 1 for yes ,0 for no, or 2 to cancel \n";
		int yesorno;
		std::cin >> yesorno;
		if (yesorno == 1)
		{
			if (choice == a)
			{

				break;


			}
			else if (choice < a)
			{
				for (int d = choice; d < (a-1); d++)
				{

					*(fir + d) = *(fir + (d + 1));

				}






			}
			else
			{
				std::cout << "trying the crash the program ey. \n now deleting system 32 and replacing all your files with nsfw videos JK becareful what you type you could cause a leak  :)" << std::endl;

			


			}
			temp = new int[a - 1];
			for (int d = 0; d < (a - 1); d++)
			{


				*(temp + d) = *(fir + d);
				std::cout << *(temp + d) << std::endl;




			}







		}
		else if (yesorno == 0)
		{

			std::cout << "please try again " << std::endl;













		}
		else if (yesorno == 2)
		{

			con = 0;





		}





	}
}