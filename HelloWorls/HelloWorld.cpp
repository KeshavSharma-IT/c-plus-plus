#include <iostream> //Preprocessor Directive
#include <string>
#include <fstream>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
//The iostream is the header file that defines functions and operations related to the input / output stream
using namespace std;  //Namespace


int add(int a, int b);


void changeValue(int x) {
	x = 100;  // modifies local copy
	cout << x << endl;
}


void changeValue_(int& x) {  // reference parameter
	x = 100;  // modifies original variable
	cout << x << endl;
}


int plusFuncInt(int x, int y) {
	return x + y;
}

double plusFuncDouble(double x, double y) {
	return x + y;
}

struct student {
	int rollNo;
	int age;
	string name;
};

class Person {
private: 
	int age;
	string name;

public:
	Person() {
		age = 12;
		name = "test";
	}

	void setPerson(int a,string n) {
		age = a;
		name = n;
	}

	void displayPerson() {
		cout << "name =" << name << " and age= " << age << endl;
	}
};

class Student :public Person {
private:
	int rollNo;
public:
	void setStudent(int r) {
		rollNo = r;
	}

	void displayStudent(){
		displayPerson();
		cout << "Roll No =" << rollNo<<endl;
		}
};

class Teacher :public Person {
private:
	string subject;

public:
	void setTeacher(string s) {
		subject = s;
	}

	void displayTeacher() {
		displayPerson();
		cout << "subject for teacher =" << subject << endl;
	}
};


class Worker {
public:
	virtual void work() = 0;  // Pure virtual function (Abstraction)


};


class StudentWorker :public Worker {
public:
	void work() override {
		cout << "student is studing";
	}
};

class TeacherWorker : public Worker {
public:
	void work() override {
		cout << "Teacher is teaching..." << endl;
	}
};




int  main() //The main() function is the default starting point of any C++ program.
{
	//cout  --Printing Statement 
	//cout << "this is first line"<<endl;

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

	//int p2 = 10.5;
	/*int p1{ 10.5 };
	int p3(10.5);*/
	//cout << "Integer:p " << p2 << endl;
	/*cout << "Integer:p1 " << p1 << endl;
	cout << "Integer:p3 " << p3 << endl;*/


	/*char ch = 'A';
	int i = 10;
	float f = 10.5;
	double d = 99.99;
	bool flag = true;
	const double MY_PI = 3.14159;*/

	//

	//cout << "Character: " << ch << endl;
	//cout << "Integer: " << i << endl;
	//cout << "Float: " << f << endl;
	//cout << "Double: " << d << endl;
	//cout << "Boolean: " << flag << endl;
	//cout << boolalpha; // note
	//cout << "Boolean: " << flag << endl;
	//cout << "MY_PI: " << MY_PI << endl;

	//////to find size of a varaible we can use sizeof() function
	//int x = 10;
	//char ch1 = 'A';

	//cout << sizeof(x) << endl;
	//cout << sizeof(ch1) << endl;

	////Oprators
	////1. Arithmetic Operators
	//	/*
	//		 +: Addition            
	//		 -: Subtraction        
	//		 *: Multiplication      
	//		 /: Division            
	//		 % : Modulus(remainder) 
	//	 */
	//int a = 12, b = 8;


	//cout << "Sum a and b, a  is  " << a << "and b is =" << b << "a+b=" << a + b << endl;

	/*cout << "Sum = " << a + b << endl;
	cout << "Difference = " << a - b << endl;
	cout << "Product = " << a * b << endl;
	cout << "Division = " << a / b << endl;
	cout << "Remainder = " << a % b << endl;*/

	//2. Relational Operators  
	     /*
			 ==       : Equal to              
			 !=       : Not equal             
			 > : Greater than          
			 < : Less than             
			 >=       : Greater than or equal 
			 <=       : Less than or equal 
		 */
	/*int y = 10, z = 20;

	cout << (y < z) << endl;*/

	//3.Logical Operators
	///*
	//	Operator | Meaning      
	//	 &&	     : Logical AND 
	//	 ||      : Logical OR 
	//	 !		 : Logical NOT 
	//*/

		/*int p = 10, q = 20;

		cout << (p < q && q > 15) << endl;*/


	//
	//4.Assignment Operators
	///*
	//Oprator :	Example		
	//	  = : a = 10  
	//	 += : a += 5 
	//	 -= : a -= 5 
	//	 *= : a *= 2 
	//	 /= : a /= 2 
	//*/
	
	////Increment / Decrement Operators
	///*
	//| Operator | Meaning   |
	//	| -------- | -------- - |
	//	| ++ | Increment |
	//	| -- | Decrement |
	//*/

	/*int m = 10;
	m++;
	cout << m << endl;*/


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


	//string
	//string str = "Hello, World!";
	//cout << str << endl;
	//cout << str[0] << endl; //indexing 
	//cout << str.at(3) << endl; //using at() method
	//cout << str.size() << endl; //size of string
	//cout << str.length() << endl; //length of string

	////Concatenation string
	//string name = "keshav";
	//string greeting = "Hello " + name;
	//cout << greeting << endl;

	////addding char in string
	//name.push_back('!');
	//cout << name << endl;

	////Removing last char from string
	//name.pop_back();
	//cout << name << endl;


	////inserting sub string
	//name.insert(6, " sharma");
	//cout << name << endl;

	////erasing sub string
	//name.erase(6, 4);
	//cout << name << endl;

	//// substring
	//string sub = name.substr(0, 6);
	//cout << sub << endl;

	////string find
	////name.find("keshav");
	//cout << name.find("keshav") << endl;

	//Input

	//int age;
	//string name_;
	//cout << "Enter your age" << endl;
	//cin >> age;

	//cout << "Enter your name" << endl;
	////cin >> name_;

	//cin.ignore();
	//getline(cin, name_);

	//cout << "your name is " << name_ << ",and your age is " << age << endl;

	// conditions-> if ,else.else if.

	/*int yourage = 16;
	if (yourage > 18)
		cout << "please go and vote" << endl;;

	if (yourage > 18) {
		cout << "please go and vote" << endl;;
	}
	else {
		cout << "wait till you are 18" << endl;;
	}

	int marks = 49;
	if (marks >= 90) {
		cout << "Grade A" << endl;
	}
	else if (marks >= 75) {
		cout << "Grade B" << endl;
	}
	else if (marks >= 50) {
		cout << "Grade C" << endl;
	}
	else {
		cout << "Fail" << endl;
	}*/


	//switch 
	//int day = 3;
	//	switch (day) {
	//	case 1:cout << "monday"; break;
	//	case 2: cout << "Tuesday"; break;
	//	case 3: cout << "Wednesday"; break;
	//	default: cout << "Invalid day";

	//	}

	////loops
	//	for (int i = 0;i <=5;i++) {
	//		cout << i << endl;
	//	}

	//	//do while
	//	int l = 0;
	//	do {
	//		cout << l << endl;
	//		l++;
	//	} while (l < 5);

	//	//while
	//	int l = 0;
	//	while (l <= 5) {
	//		cout << l << endl;
	//		l++;
	//	}


	//Array:
	//-An array is a collection of elements of the same type stored in contiguous memory locations.
	//- It allows storing multiple values under a single name, accessed using an index.

	//int arr[5];              // declaration
	//int arr[5] = { 10, 20, 30, 40, 50 };  // initialization
	//int arr[] = { 1, 2, 3 };   // compiler decides size (3 here)


	//cout << arr[0]<<endl;  // prints first element
	//arr[2] = 100;    // updates third element
	//cout << arr[2]<<endl;  // prints first element
	//
	////taking array as input
	//int n;
	//cout << "Enter size of array"<<endl;
	//cin >> n;
	//int arr1[100];
	//cout << "enter array element"<<endl;
	//for (int i = 0; i < n; i++) {
	//	cin >> arr1[i];   // input
	//}

	//for (int i = 0; i < n; i++) {
	//	cout << arr1[i] << " ";  // output
	//}
	//
	////matrix or 2d array
	//int mat[3][3] = {
	//	{1,2,3},
	//	{4,5,6},
	//	{7,8,9}
	//};

	//cout << mat[0][1];

	//Function : - A function is a block of code that performs a specific task.
	//-Helps in modularity, reusability, and readability of code.


	//cout << add(3, 4);  // Function Call
	//int a = 10;
	//changeValue(a); //call by value
	//cout << a << endl;
	//changeValue_(a);
	//cout << a << " orignal a" << endl;

	//Function overloading allows multiple functions to have the same name, as long as their parameters are different in type or number:
	
	//int myNum1 = plusFuncInt(8, 5);
	//double myNum2 = plusFuncDouble(4.3, 6.26);

	//cout << "Int: " << myNum1 << "\n";
	//cout << "Double: " << myNum2;

	//Pointers
	
	/*string name = "Keshav";
	string* ptr = &name;


	cout << name << endl;
	cout << &name << endl;
	cout << ptr << endl;
	cout << *ptr << endl;
	*ptr = "rohan";
	cout << *ptr << endl;
	cout << name << endl;
	cout << &name << endl;
	cout << ptr << endl;*/

	

	//struct
	/*Structures(also called structs) are a way to group several related variables into one place.

	Each variable in the structure is known as a member of the structure.

	Unlike an array, a structure can contain many different data types : int, string, bool, etc.*/
	/*student newStudent;
	newStudent.age = 12;
	newStudent.rollNo = 1;
	student newStudent1;
	newStudent1.age = 15;
	newStudent1.rollNo = 2;
	newStudent1.name = "sanisha";

	cout << newStudent.age;
	cout << newStudent1.age;*/


	//file handling
	/*ofstream myfile("sanisha.txt");
	myfile << "this is first line" << endl;
	myfile << "this is 2nd line";
	myfile.close();


	string myText;
	ifstream myreadfile("sanisha.txt");

	while (getline(myreadfile, myText)) {
		cout << myText << endl;
	}
	myreadfile.close();

	ofstream minefile("nishu.txt");
	minefile << "this is my code" << endl;
	minefile << "this is my 2nd code";
	minefile.close();

	string minefiletxt;
	ifstream minereadfile("nishu.txt");
	while (getline(minereadfile, minefiletxt)) {
		cout << minefiletxt << endl;
	}
	minereadfile.close();*/

	//OOPs
	// Introduction to OOP
// - Definition: Object-Oriented Programming (OOP) is a programming paradigm based on the concept of "objects," which contain data (attributes) and functions (methods).
// - Why OOP?
// - Models real-world entities.
// - Promotes reusability (via inheritance).
// - Improves maintainability and scalability.
// - Encourages modularity.


// - A constructor is a special function in a class that runs automatically when an object is created.
// - It has the same name as the class.
// - It does not have a return type (not even void).
// - You can define:
// - Default constructor → no parameters.
// - Parameterized constructor → takes arguments to initialize data

// - virtual is used in a base class to indicate that a function can be overridden in a derived class.


// 1.Encapsulation
// - Wrapping data and methods into a single unit (class).
// - Access specifiers: public, private, protected

	
	Person p1;
	p1.setPerson(18, "Keshav");
	p1.displayPerson();


	Student s1;
	s1.setPerson(15, "Sanisha");
	s1.setStudent(1);
	s1.displayStudent();


	Teacher t1;
	t1.setPerson(30, "mohit");
	t1.setTeacher("c++");
	t1.displayTeacher();

	StudentWorker sw;
	TeacherWorker tw;
	sw.work();
	tw.work();



	//- STL (Standard Template Library) is a collection of generic classes and functions in C++.
// - STL is divided into 4 major components:
// - Containers → store data (e.g., vector, list, map).
// - Iterators → pointers-like objects to traverse containers.
// - Algorithms → functions like sort(), find(), reverse().
// - Functors → function objects (objects that behave like functions)


//Vactor- The difference between an array and a vector, is that the size of an array cannot be modified (you cannot add or remove elements from an array). 
//A vector however, can grow or shrink in size as needed.
	// vector<string> students={"keshav","mohan"};
	// cout<<students.size()<<endl;
	// vector<int> vec(3,10);
	//  for(int val:vec){
	//     cout<<val<<" ";
	// }
	// vector<int> vec2(vec);

	// vector<int> v;
	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;
	// v.push_back(1);
	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;
	// v.push_back(2);
	// v.push_back(3);    
	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;

	// v.pop_back();
	// v.emplace_back(5);

	// for(int val:v){  //range loop
	//     cout<<val<<" ";
	// }
	// cout<<endl;
	// cout<<"val at index 1="<<v[0]<<endl;
	// cout<<"val at front "<<v.front()<<endl;
	// cout<<"val at back "<<v.back()<<endl;

	// v.insert(v.begin()+1,100);


	// v.erase(v.begin()+2);
	// for(int val:v){
	//     cout<<val<<" ";
	// }
	// v.clear(); //capacity same,size changed

	//     cout<<"empty? "<<v.empty();


	//     vector<int>::iterator it;
	//     for(it=v.begin();it!=v.end();++it){
	//         cout<<*it<<endl;
	//     }



	// List :same like vector but we can add and remove from front as well as back but we can not access data randomly
	// list<int>l;
	// l.push_back(1);
	// l.push_front(2);
	// l.push_back(20);
	// l.pop_back();   
	// l.pop_front();

	//  cout << "Size: " << l.size() << endl;
	// for(int v:l){
	//     cout<<v<<" ";
	// }

	// cout<<l.empty();

	// map
	// A map is an associative container that stores elements as unique keys with mapped values, sorted by key.

	//  map<int, string> m;
	//  m[1]="Apple";
	//  m[2]="Mango";
	//  m[3]="Banana";

	//  cout << "Size: " << m.size() << endl;
	//  cout << "Value for key 2: " << m[2] << endl;
	//  cout << "Value for key 3: " << m[3] << endl;

	//  m.erase(1);
	//  cout << "Value for key 1: " << m[1] << endl;


	// set
	// A set is an associative container that stores unique elements in sorted order.

	// set<int>s;
	//  s.insert(10);
	// s.insert(5);
	// s.insert(10); // duplicate ignored
	//  cout << "Size: " << s.size() << endl;

	//  s.erase(5);
	//  cout << "After erase: ";
	// for(int x : s)
	//     cout << x << " ";

	// s.find(10);


	// cout<<s.empty();
	//Queue->A queue is a container adapter that follows the FIFO (First In First Out) principle.
//     queue<int>q;
//     q.push(1);
//     q.push(2);
//     q.push(3);

//    cout<<"front: "<<q.front()<<endl;
//    cout<<"front: "<<q.back()<<endl;
//    cout << "Size: " << q.size() << endl;

//    q.pop();

//    cout<<"front: "<<q.front()<<endl;
//    cout<<"empty: "<<q.empty()<<endl;

   //deque
//    A deque (double-ended queue) is a sequence container that allows insertion and deletion at both the front and the back.

	// deque<int>d;
	// d.push_back(10);
	// d.push_front(5);
	// d.push_back(20);

	// cout << "Front: " << d.front() << endl;
	// cout << "Back: " << d.back() << endl;
	// cout << "Size: " << d.size() << endl;
	// cout << "Element at index 1: " << d[1] << endl;

	// d.pop_front();
	// d.pop_back();

	// cout<<"empty "<<d.empty();
	// cout<<"size "<<d.size();

	// d.clear();
	// cout<<"size "<<d.size();

	//stack 
	// A stack is a container adapter that follows the LIFO (Last In, First Out) principle, where insertion and deletion happen only at the top.

	// stack<int>s;
	// s.push(10);
	// s.push(20);
	// s.push(50);

	// cout << "Top: " << s.top() << endl;
	// cout << "Size: " << s.size() << endl;
	//  s.pop();

	// cout << "After pop, Top: " << s.top() << endl;

	// s.empty();
	// cout<<s.empty();
}

//int add(int a, int b) {
//	return a + b;
//}





