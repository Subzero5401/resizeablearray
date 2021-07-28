#pragma once



class dmanall {

private:

	int a;
	int* fir;// so if you point to another pointer then delete it will delete the memory including if multiple pointer point to the same spot. 
	int cur = 0; 
	int* temp ;//temporary a array
	int b = 0;
	int sizeofarray; //= *(&dam + 1) - dam; required to find number in array for resizing dynamic arrays


public: 
	
	dmanall();
	void size();
	void scaleup();
	void storedvalue();
	void add();
	void change();
	void delmem(); // delete the array to free up memeory
	void scaledown();
	

	





};