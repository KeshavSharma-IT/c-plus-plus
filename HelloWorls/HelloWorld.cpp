#include <iostream> //Preprocessor Directive
//The iostream is the header file that defines functions and operations related to the input / output stream
using namespace std;  //Namespace

int  main() //The main() function is the default starting point of any C++ program.
{
	//cout  --Printing Statement 
	cout << "this is first line"<<endl;
	cout << "this is first line" << endl;

	// variable- it is like a container which store value,
	// like a=10 , so a is container stroing 10 as a value

	//Data Type
		/*Type				Typical Bit Width			Typical Range
		char					1byte					- 127 to 127 or 0 to 255
		unsigned char			1byte					- 0 to 255
		signed char				1byte					- 127 to 127
		int						4bytes					- 2147483648 to 2147483647
		unsigned int			4bytes					0 to 4294967295
		signed int				4bytes					- 2147483648 to 2147483647
		short int				2bytes					- 32768 to 32767
		unsigned short int		2bytes					0 to 65, 535
		signed short int		2bytes					- 32768 to 32767
		long int				8bytes					- 9223372036854775808 to 9223372036854775807
		signed long int			8bytes					same as long int
		unsigned long int		8bytes					0 to 18446744073709551615
		long long int			8bytes					- (2 ^ 63) to(2 ^ 63) - 1
		unsigned long long int	8bytes				0 to 18, 446, 744, 073, 709, 551, 615
		float					4bytes
		double					8bytes
		long double				12bytes
		wchar_t					2 or 4 bytes	1 wide character*/




	char ch = 'A';
	int i = 10;
	float f = 10.5;
	double d = 99.99;
	bool flag = true;

	cout << "Character: " << ch << endl;
	cout << "Integer: " << i << endl;
	cout << "Float: " << f << endl;
	cout << "Double: " << d << endl;
	cout << "Boolean: " << flag << endl;

	//to find size of a varaible we can use sizeof() function
	int x = 10;
	char ch1 = 'A';

	cout << sizeof(x) << endl;
	cout << sizeof(ch1) << endl;

	//Oprators
	//1. Arithmetic Operators
		/*
			 +: Addition            
			 -: Subtraction        
			 *: Multiplication      
			 /: Division            
			 % : Modulus(remainder) 
		 */
	int a = 12, b = 8;

	cout << "Sum = " << a + b << endl;
	cout << "Difference = " << a - b << endl;
	cout << "Product = " << a * b << endl;
	cout << "Division = " << a / b << endl;
	cout << "Remainder = " << a % b << endl;

	//2. Relational Operators  
	     /*
			 ==       : Equal to              
			 !=       : Not equal             
			 > : Greater than          
			 < : Less than             
			 >=       : Greater than or equal 
			 <=       : Less than or equal 
		 */
	int y = 10, z = 20;

	cout << (y < z) << endl;

	//3.Logical Operators
	/*
		Operator | Meaning      
		 &&	     : Logical AND 
		 ||      : Logical OR 
		 !		 : Logical NOT 
	*/

		int p = 10, q = 20;

		cout << (p < q && q > 15) << endl;


	
	//4.Assignment Operators
	/*
	Oprator :	Example		
		  = : a = 10  
		 += : a += 5 
		 -= : a -= 5 
		 *= : a *= 2 
		 /= : a /= 2 
	*/
	//Increment / Decrement Operators
	/*
	| Operator | Meaning   |
		| -------- | -------- - |
		| ++ | Increment |
		| -- | Decrement |
	*/

	int m = 10;
	m++;
	cout << m << endl;


	//conditions
	int age = 20;

	if (age >= 18)
	{
		cout << "Eligible to vote";
	}
	else {
		cout << "can't vote";
	}



	//HomeWork
	/*Write a program to print your name, age, and city using cout.

		Write a program to add two numbers and display the result.

		Write a program to check whether a number is positive or negative.

		Write a program to check whether a number is even or odd.

		Write a program to print the size of all basic data types.

		Write a program that checks if a person is eligible to vote(age ≥ 18).

		Write a program to check whether a number is less than 10 OR greater than 50.

		Write a program using OR operator to check if a student passes when maths OR science marks ≥ 40.
*/



}