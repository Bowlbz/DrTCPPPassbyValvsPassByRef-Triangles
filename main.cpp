//Functions Pass by Value vs. Pass by Reference
//Dr. Tyson McMillan 9-23-2019 
#include<iostream>
using namespace std; 

void doubleByValue(double); //prototype by value
void doubleByRef(double &); //& gets the memory address of the variable
void addByRef(int &);// function for adding 1 to refrence 
void subByRef(int &);// function for subtracting to refrence
void showPatternTridown (int &);
void showpatternTriup (int &);
void Square (int &);

int main()
{
	//Pass by VALUE numValue and aValue are different
	cout << "Pass by VALUE numValue and aValue are different." << endl; 
	double numValue = 5; //inital value of numValue
	cout << "\t numValue now (initial) = " << numValue << endl; //current value
	doubleByValue(numValue); //function call double the value by passing information by "value" --> a copy
	cout << "\t numValue now = " << numValue << endl; //current value after first pass to function
	doubleByValue(numValue); //function call a second time
	cout << "\t numValue now = " << numValue << endl; //show the current value of the int main() variable
	cout << "Note how numValue remains the same with each call of the function\n";
	cout << "Note the functions generates a result that is different from numValue.\n";
	cout << "Therefore, numValue and aValue are different variables (not linked) to each other.\n";  
	
	//Pass by REFERENCE (&) numRef and &aRef are the same
	cout << "\nPass by REFERENCE (&) numRef and &aRef are the same." << endl; 
	
  double numRef = 5; //initial value
	
  cout << "\t numRef now (initial) = " << numRef << endl; 
	doubleByRef(numRef); //double the number in int main via the map to it's memory location 
	cout << "\t numRef now = " << numRef << endl; //how do the values compare? 
	doubleByRef(numRef);// call it again
	cout << "\t numRef now = " << numRef << endl; //current value
	cout << "Note how numRef's value changes with each call of the function\n";
	cout << "Note the functions generates a result that is the same as numRef.\n";
	cout << "Therefore, numRef and &aRef variables (are linked) to each other via memory location (address).\n";
  
  // Pass by REFERENCE (&)***************************************************
 
  //Adding to a Pass by Ref**************************************************
  int bnumRef = 0;//Intialize and Assign Variable and Value
  cout << "\t bnumRef now: " << bnumRef << endl;
  addByRef(bnumRef);
  addByRef(bnumRef);
  cout << "\t bnumRef now: " << bnumRef << endl << endl;
 
 //Subtracting a Pass by Ref*************************************************
  int cnumRef = 0; //Intialize and Assign Variable and Value
  cout << "\t cnumRef now: " << cnumRef << endl;
  subByRef(cnumRef);
  subByRef(cnumRef);
  cout << "\t cnumRef now: " << cnumRef << endl << endl;
  cout << "Refer to this example to help you in the future for PassByReference." << endl;
  
  //Triangle going down with Ref*****************************************************
  int highNumber = 0;
  cout << "\nPlease Enter a High Number: ";
  cin >> highNumber;
  showPatternTridown(highNumber);

  //Triangle going Up with Ref*******************************************************
  cout << "\nPlease Enter a High Number: ";
  cin >> highNumber;
  showpatternTriup(highNumber);

  //Square Build Ref****************************************************************
  cout << "\nPlease Enter a High Number: ";
  cin >> highNumber;
  Square(highNumber);




	
	/***Expand this code**
	//Write a function to add 1 to anumber in int main() when it is passed by & reference
	//write a function to subtract 1 to/from a number in int main() when it is passed by & reference
	//datatype of number is int, you give the variables/function their names
	//Solve this, save this, close this, zip, upload Ref_Value_Funct_YourLastName.zip to EC item 15	
	*/
	return 0;
}

//definitions 
void doubleByValue(double aValue)
{
	aValue *= 2; //double the value
	cout << "\t aValue now " << aValue << endl; //current value 
}

void doubleByRef(double &aRef)
{
	aRef *= 2; //double the value by references "I know your address"
	cout << "\t aRef now = " << aRef << endl; 
}
//******************************** My Function Definitons*********************
void addByRef(int &bRef)//adding 1 to Pass By Refrence ***********************
{
  bRef += 1; //bRef is just a variable used in the Definition, can be anything.
  cout << "\t bnumRef now = " << bRef << endl; 
}

void subByRef(int &cRef)//subtracting 1 to Pass By Refrence **********************
{
  cRef--; //cRef is just a variable used in the Definition, can be anything.
  cout << "\t cnumRef now = " << cRef << endl;
}

void showPatternTridown (int &rows)//Triangle going down**********************
{
  for(int i = rows; i >= 0; i--)//Number of Rows
  {
    for(int a = 1; a <= i ; a++)//Stars in Rows
    {
      cout << "*";
    }  
    cout << endl;
  }
}

void showpatternTriup (int &rows)//Triangle going up*******************
{
  for(int i = 1; i < rows; i++) //number of rows
  {
    for(int a = 1; a <= i ; a++)//Stars in Rows
    {
      cout << "*";
    }  
    cout << endl;
  }
}

void Square (int &rows)
{
  for(int i =0; i < rows; i++)//Number of Rows
  {
    for(int j = 0; j <= rows; j++)//Stars in Rows
   { 
     cout << "*";
   }
   cout << endl;
  }
}





  
  
 




