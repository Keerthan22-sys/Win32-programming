//
//  main.cpp
//  helloworld
//
//  Created by Keerthan Gowda S on 02/02/23.
//

/*#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}*/

/*#include <iostream>
using namespace std;

int main()
{
    cout<<"Hello world Keerthan!!"<<endl;
    return 0;
}*/


/*#include <iostream>
using namespace std;
int main()
{
    int num,a=-1,b=1,c;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Fibonacci series: ";
    for(int i=0;i<num;i++)
    {
        c=a+b;
        cout<<c<<",";
        a=b;
        b=c;
    }
    //system("pause>0");
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{

    int num, sum = 0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num!=0)
    {
        sum =sum+ num % 10;
        num = num / 10;
    }
    cout<<sum<<'\n';
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main()
{
    cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
   
   return 0;
}
#include <iostream>
using namespace std;

// Variable declaration:
extern int a, b;
extern int c;
extern float f;

int main () {
// Variable definition:
int a, b;
int c;
float f;

// actual initialization
a = 10;
b = 20;
c = a + b;

cout << c << endl ;

f = 70.0/3.0;
cout << f << endl ;

return 0;
}

#include <iostream>
using namespace std;

#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'

int main() {
   int area;
   
   area = LENGTH * WIDTH;
   cout << area<<endl;
   //cout << NEWLINE;
   return 0;
}

#include <iostream>
 
using namespace std;
 
int main () {
   int  var;
   int  *ptr;
   int  val;

   var = 3000;

   // take the address of var
   ptr = &var;

   // take the value available at ptr
   val = *ptr;
   cout << "Value of var :" << var << endl;
   cout << "Value of ptr :" << ptr << endl;
   cout << "Value of val :" << val << endl;

   return 0;
}
 
#include <iostream>
using namespace std;
 
int main () {
   // Local variable declaration:
   int a = 10;

   // while loop execution
   while( a < 20 ) {
      cout << "value of a: " << a << endl;
      a++;
   }
 
   return 0;
}

#include <iostream>
using namespace std;
 
int main () {
   // for loop execution
   for( int a = 10; a <= 20; a = a + 1 ) {
      cout << "value of a: " << a << endl;
   }
 
   return 0;
}

#include <iostream>
using namespace std;
 
int main () {
   // Local variable declaration:
   int a = 10;

   // do loop execution
   do {
      cout << "value of a: " << a << endl;
      a = a + 1;
   } while( a < 20 );
 
   return 0;
}

#include <iostream>
using namespace std;
 
int main () {
   int i, j;
   
   for(i = 2; i<100; i++) {
      for(j = 2; j <= (i/j); j++)
         if(!(i%j)) break; // if factor found, not prime
         if(j > (i/j)) cout << i << " is prime\n";
   }
   
   return 0;
}

#include <iostream>
using namespace std;
 
int main () {
   // local variable declaration:
   char grade = 'A';

   switch(grade) {
      case 'A' :
         cout << "Excellent!" << endl;
         break;
      case 'B' :
      case 'C' :
         cout << "Well done" << endl;
         break;
      case 'D' :
         cout << "You passed" << endl;
         break;
      case 'F' :
         cout << "Better try again" << endl;
         break;
      default :
         cout << "Invalid grade" << endl;
   }
   cout << "Your grade is " << grade << endl;
 
   return 0;
}

#include <iostream>
using namespace std;
 
// function declaration
int max(int num1, int num2);
 
int main () {
   // local variable declaration:
   int a = 100;
   int b = 101;
   int ret;
 
   // calling a function to get max value.
   ret = max(a, b);
   cout << "Max value is : " << ret << endl;
 
   return 0;
}
 
// function returning the max between two numbers
int max(int num1, int num2) {
   // local variable declaration
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result;
}*/
//call by value
// function definition to swap the values.
//void swap(int x, int y) {
  // int temp;

   //temp = x; /* save the value of x */
   //x = y;    /* put y into x */
   //y = temp; /* put x into y */
    
   //return;
//}
/*#include <iostream>
using namespace std;
 
// function declaration
void swap(int x, int y);
 
int main () {
   // local variable declaration:
   int a = 100;
   int b = 200;
 
   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;
 
   // calling a function to swap the values.
   swap(a, b);
 
   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;
 
   return 0;
}*/
//call by pointer
// function definition to swap the values.
//void swap(int *x, int *y) {
  // int temp;
  // temp = *x; /* save the value at address x */
  // *x = *y; /* put y into x */
  // *y = temp; /* put x into y */
  
  // return;
//}
/*#include <iostream>
using namespace std;

// function declaration
void swap(int *x, int *y);

int main () {
   // local variable declaration:
   int a = 100;
   int b = 200;
 
   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;

   // calling a function to swap the values.
      * &a indicates pointer to a ie. address of variable a and
      * &b indicates pointer to b ie. address of variable b.
   swap(&a, &b);

   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;
 
   return 0;
}*/
//call by reference
// function definition to swap the values.
//void swap(int &x, int &y) {
  // int temp;
  // temp = x; /* save the value at address x */
  // x = y;    /* put y into x */
  // y = temp; /* put x into y */
  
  // return;
//}
/*#include <iostream>
using namespace std;

// function declaration
void swap(int &x, int &y);

int main () {
   // local variable declaration:
   int a = 100;
   int b = 200;
 
   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;

   // calling a function to swap the values using variable reference.
   swap(a, b);

   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;
 
   return 0;
}*/
//Default values for parameters
/*#include <iostream>
using namespace std;
 
int sum(int a, int b = 20) {
   int result;
   result = a + b;
  
   return (result);
}
int main () {
   // local variable declaration:
   int a = 100;
   int b = 200;
   int result;
 
   // calling a function to add the values.
   result = sum(a, b);
   cout << "Total value is :" << result << endl;

   // calling a function again as follows.
   result = sum(a);
   cout << "Total value is :" << result << endl;
 
   return 0;
}*/

/*#include <iostream>
using namespace std;
 
#include <iomanip>
using std::setw;
 
int main () {

   int n[ 10 ]; // n is an array of 10 integers
 
   // initialize elements of array n to 0
   for ( int i = 0; i < 10; i++ ) {
      n[ i ] = i + 100; // set element at location i to i + 100
   }
   cout << "Element" << setw( 13 ) << "Value" << endl;
 
   // output each array element's value
   for ( int j = 0; j < 10; j++ ) {
      cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
   }
 
   return 0;
}

#include <iostream>

using namespace std;

int main () {

   char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

   cout << "Greeting message: ";
   cout << greeting << endl;

   return 0;
}

#include <iostream>
#include <cstring>

using namespace std;

int main () {

   char str1[10] = "Hello";
   char str2[10] = "World";
   char str3[10];
   int  len ;

   // copy str1 into str3
   strcpy( str3, str1);
   cout << "strcpy( str3, str1) : " << str3 << endl;

   // concatenates str1 and str2
   strcat( str1, str2);
   cout << "strcat( str1, str2): " << str1 << endl;

   // total lenghth of str1 after concatenation
   len = strlen(str1);
   cout << "strlen(str1) : " << len << endl;

   return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main () {

   string str1 = "Hello";
   string str2 = "World";
   string str3;
   int  len ;

   // copy str1 into str3
   str3 = str1;
   cout << "str3 : " << str3 << endl;

   // concatenates str1 and str2
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;

   // total length of str3 after concatenation
   len = str3.size();
   cout << "str3.size() :  " << len << endl;

   return 0;
}

#include <iostream>

using namespace std;

int main () {
   int  var = 20;   // actual variable declaration.
   int  *ip;        // pointer variable

   ip = &var;       // store address of var in pointer variable

   cout << "Value of var variable: ";
   cout << var << endl;

   // print the address stored in ip pointer variable
   cout << "Address stored in ip variable: ";
   cout << ip << endl;

   // access the value at the address available in pointer
   cout << "Value of *ip variable: ";
   cout << *ip << endl;

   return 0;
}

#include <iostream>
#include <ctime>

using namespace std;

int main() {
   // current date/time based on current system
   time_t now = time(0);
   
   // convert now to string form
   char* dt = ctime(&now);

   cout << "The local date and time is: " << dt << endl;

   // convert now to tm struct for UTC
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   cout << "The UTC date and time is:"<< dt << endl;
}

#include <iostream>
#include <cstring>
 
using namespace std;
 
struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
 
int main() {
   struct Books Book1;        // Declare Book1 of type Book
   struct Books Book2;        // Declare Book2 of type Book
 
   // book 1 specification
   strcpy( Book1.title, "Learn C++ Programming");
   strcpy( Book1.author, "Chand Miyan");
   strcpy( Book1.subject, "C++ Programming");
   Book1.book_id = 6495407;

   // book 2 specification
   strcpy( Book2.title, "Telecom Billing");
   strcpy( Book2.author, "Yakit Singha");
   strcpy( Book2.subject, "Telecom");
   Book2.book_id = 6495700;
 
   // Print Book1 info
   cout << "Book 1 title : " << Book1.title <<endl;
   cout << "Book 1 author : " << Book1.author <<endl;
   cout << "Book 1 subject : " << Book1.subject <<endl;
   cout << "Book 1 id : " << Book1.book_id <<endl;

   // Print Book2 info
   cout << "Book 2 title : " << Book2.title <<endl;
   cout << "Book 2 author : " << Book2.author <<endl;
   cout << "Book 2 subject : " << Book2.subject <<endl;
   cout << "Book 2 id : " << Book2.book_id <<endl;

   return 0;
}

#include <iostream>

using namespace std;

class Box {
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box
};

int main() {
   Box Box1;        // Declare Box1 of type Box
   Box Box2;        // Declare Box2 of type Box
   double volume = 0.0;     // Store the volume of a box here
 
   // box 1 specification
   Box1.height = 5.0;
   Box1.length = 6.0;
   Box1.breadth = 7.0;

   // box 2 specification
   Box2.height = 10.0;
   Box2.length = 12.0;
   Box2.breadth = 13.0;
   
   // volume of box 1
   volume = Box1.height * Box1.length * Box1.breadth;
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.height * Box2.length * Box2.breadth;
   cout << "Volume of Box2 : " << volume <<endl;
   return 0;
}

#include <iostream>

using namespace std;

class Box {
   public:
      double length;         // Length of a box
      double breadth;        // Breadth of a box
      double height;         // Height of a box

      // Member functions declaration
      double getVolume(void);
      void setLength( double len );
      void setBreadth( double bre );
      void setHeight( double hei );
};

// Member functions definitions
double Box::getVolume(void) {
   return length * breadth * height;
}

void Box::setLength( double len ) {
   length = len;
}
void Box::setBreadth( double bre ) {
   breadth = bre;
}
void Box::setHeight( double hei ) {
   height = hei;
}

// Main function for the program
int main() {
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   double volume = 0.0;     // Store the volume of a box here
 
   // box 1 specification
   Box1.setLength(6.0);
   Box1.setBreadth(7.0);
   Box1.setHeight(5.0);

   // box 2 specification
   Box2.setLength(12.0);
   Box2.setBreadth(13.0);
   Box2.setHeight(10.0);

   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;
   return 0;
}

#include <iostream>
 
using namespace std;
 
class Line {
   public:
      double length;
      void setLength( double len );
      double getLength( void );
};
 
// Member functions definitions
double Line::getLength(void) {
   return length ;
}
 
void Line::setLength( double len) {
   length = len;
}
 
// Main function for the program
int main() {
   Line line;
 
   // set line length
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;
 
   // set line length without member function
   line.length = 10.0; // OK: because length is public
   cout << "Length of line : " << line.length <<endl;
   
   return 0;
}

#include <iostream>
 
using namespace std;
 
class Box {
   public:
      double length;
      void setWidth( double wid );
      double getWidth( void );
 
   private:
      double width;
};
 
// Member functions definitions
double Box::getWidth(void) {
   return width ;
}
 
void Box::setWidth( double wid ) {
   width = wid;
}
 
// Main function for the program
int main() {
   Box box;
 
   // set box length without member function
   box.length = 10.0; // OK: because length is public
   cout << "Length of box : " << box.length <<endl;
 
   // set box width without member function
   // box.width = 10.0; // Error: because width is private
   box.setWidth(10.0);  // Use member function to set it.
   cout << "Width of box : " << box.getWidth() <<endl;
 
   return 0;
}

#include <iostream>
using namespace std;
 
class Box {
   protected:
      double width;
};
 
class SmallBox:Box { // SmallBox is the derived class.
   public:
      void setSmallWidth( double wid );
      double getSmallWidth( void );
};
 
// Member functions of child class
double SmallBox::getSmallWidth(void) {
   return width ;
}
 
void SmallBox::setSmallWidth( double wid ) {
   width = wid;
}
 
// Main function for the program
int main() {
   SmallBox box;
 
   // set box width using member function
   box.setSmallWidth(5.0);
   cout << "Width of box : "<< box.getSmallWidth() << endl;
 
   return 0;
}

#include <iostream>
 
using namespace std;
 
class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line();  // This is the constructor
   private:
      double length;
};
 
// Member functions definitions including constructor
Line::Line(void) {
   cout << "Object is being created" << endl;
}
void Line::setLength( double len ) {
   length = len;
}
double Line::getLength( void ) {
   return length;
}

// Main function for the program
int main() {
   Line line;
 
   // set line length
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;
 
   return 0;
}

#include <iostream>
 
using namespace std;
class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line(double len);  // This is the constructor
 
   private:
      double length;
};
 
// Member functions definitions including constructor
Line::Line( double len) {
   cout << "Object is being created, length = " << len << endl;
   length = len;
}
void Line::setLength( double len ) {
   length = len;
}
double Line::getLength( void ) {
   return length;
}

// Main function for the program
int main() {
   Line line(10.0);
 
   // get initially set length.
   cout << "Length of line : " << line.getLength() <<endl;
   
   // set line length again
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;
 
   return 0;
}*/

/*#include <iostream>
 
using namespace std;
class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line();   // This is the constructor declaration
      ~Line();  // This is the destructor: declaration
 
   private:
      double length;
};
 
// Member functions definitions including constructor
Line::Line(void) {
   cout << "Object is being created" << endl;
}
Line::~Line(void) {
   cout << "Object is being deleted" << endl;
}
void Line::setLength( double len ) {
   length = len;
}
double Line::getLength( void ) {
   return length;
}

// Main function for the program
int main() {
   Line line;
 
   // set line length
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;
 
   return 0;
}


// Pointers

#include<iostream>
using namespace std;

struct employee
{
    char name[4];
    int age;
    float weight;
};

void fun(struct employee*);

int main()
{
    struct employee e = {"abc",20,55.5};
    fun(&e);
    //cout<<"Executed\n";
    return 0;
}


void fun(struct employee *obj)
{
    cout<<obj->name;
}

#include<iostream>
using namespace std;

struct employee
{
    char name[4];
    int age;
    float weight;
};

void fun(struct employee);

int main()
{
    struct employee e = {"abc",20,55.5};
    fun(e);
    //cout<<"Executed\n";
    return 0;
}


void fun(struct employee obj)
{
    cout<<obj.name;
}
*/
//call by reference pointers

/*#include<iostream>
using namespace std;

void fun(int* ,int*);

int main()
{
   //Edit below this line
   int a=10,b=20;
   cout<<"Before the swap: "<<a<<"\t"<<b;
   fun(&a,&b);
   cout<<"\nAfter the swap: "<<a<<"\t"<<b<<endl;

    return 0;
}

void fun(int* a,int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
*/

// Program to count the sum of numbers in a string

/*#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char str[100];
int i,sum = 0;
cout<<"Enter a string: ";
cin>>str;
for (i= 0; str[i] != '\0'; i++)
{
if ((str[i] >= '0') && (str[i] <= '9'))
{
sum += (str[i] - '0');
}
}
cout<<"Sum is: "<<sum<<endl;
return 0;
}

// Program to Remove brackets from an algebraic expression

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char str1[50], str2[50];
cout<<"Enter a string: ";
cin>>str1;
int i=0, j=0 ;
while(str1[i] != '\0')
{
if(str1[i] != '(' && str1[i] != ')')
{
str2[j++] = str1[i];
}
i++;
}
str2[j] = '\0';
cout<<str2<<endl;
return 0;
}

// Program to check if String is a palindrome or not

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[10];
    int i, len = 0, flag = 0;
    cout<<"Enter a string: ";
    cin>>str;
    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] == str[len - i - 1])
            flag++;
    }
    if (flag == i)
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not a palindrome"<<endl;
    return 0;
}

// Program to Remove vowels from a String

#include <iostream>
#include <string.h>
using namespace std;
int check_vowel(char);
int main()
{
char s[100], t[100];
int i, j = 0;
cout<<"Enter a string: ";
cin>>s;
for(i = 0; s[i] != '\0'; i++)
{
if(check_vowel(s[i]) == 0)
{
t[j] = s[i];
j++;
}
}
t[j] = '\0';
cout<<t<<endl;
return 0;
}
int check_vowel(char c)
{
switch(c)
{
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
case ' ':
return 1;
default:
return 0;
}
}

// Program to toggle each character in a string

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char str[50];
int count;
cout<<"Enter a string: ";
cin>>str;
for (count = 0; str[count]!='\0'; count++)
{
if(str[count] >= 'A' && str[count] <= 'Z')
{
str[count] = str[count] + 32;
}
else if(str[count] >= 'a' && str[count] <= 'z')
{
str[count] = str[count] - 32;
}
}
    cout<<"Toggoled string is: "<<str<<endl;
return 0;
}

// Program to print lenght of the string without using strlen() function

#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[50]={0};
    char c;
    int i=0;
    cout<<"Enter a string: ";
    fgets(str1,sizeof(str1),stdin);
    while(1)
    {
        c=str1[i];
        if(c=='\n')
        break;
        i++;
    }
    cout<<"length of string is: "<<i<<'\n';
    return 0;
}

// Program to concatenate a string

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[50];
    char str2[50];
    cout<<"Enter first string: ";
    cin>>str1;
    cout<<"Enter second string: ";
    cin>>str2;
    strcat(str1,str2);
    cout<<"Concatenated string: "<<str1<<'\n';
    return 0;
}

//Program to reverse a string

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[50]={0};
    char str2[50]={0};
    cout<<"Enter a string: ";
    fgets(str1,sizeof(str1),stdin);
    int n=strlen(str1)-1;
    for(int i=0;i<=n;i++)
    {
    str2[i]=str1[n-i];
    }
    cout<<"Reverse string: "<<str2<<'\n';
    return 0;
}

// Program to find the double of the given number without using arithmetic operator

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<(num<<1)<<endl;;
    return 0;
}

// Program to find the area of a circle

#include<iostream>
using namespace std;
int main()
{
    float r,area;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    area = 3.14*r*r;
    cout<<"The area of a circle is: "<<area<<'\n';
    return 0;
}

// Program to print pyramind pattern using stars

#include <iostream>
using namespace std;
int main()
{
    int i, j, k, rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for(i=1; i<=rows; i++)
    {
    for(j=i; j<rows; j++)
    cout<<" ";
    for(k=1; k<=(2*i-1); k++)
    cout<<"*";
    cout<<"\n";
    }
    return 0;
}

// Program to replace all 0's with 1 in a given integer

#include "iostream"
using namespace std;
int main()
{
    int num,newnum=0;
    cout<<"Enter number: ";
    cin>>num;
    if(num == 0)
    newnum=1;
    while(num>0)
    {
    int rem = num%10;
    if(rem == 0)
    rem = 1;
    num = num/10;
    newnum=newnum*10+rem;
    }
    num = 0 ;
    while(newnum>0)
    {
    int r = newnum%10;
    num= num*10 + r;
    newnum =newnum / 10;
    }
    cout<<"New number is: "<<num<<endl;
    return 0;
}

// Program to express a number as a sum of two prime numbers

#include <iostream>
using namespace std;
int sumprimes(int n)
{
    int i, isPrime = 1;
    for(i = 2; i <= n/2; ++i)
    {
    if(n % i == 0)
    {
        isPrime = 0;
        break;
    }
    }
    return isPrime;
}
int main()
{
    int num, i;
    cout<<"Insert the num: ";
    cin>>num;
    int flag = 0;
    for(i = 2; i <= num/2; ++i)
    {
    if(sumprimes(i) == 1)
    {
    if(sumprimes(num-i) == 1)
    {
    cout<<num<<" can be expressed as the sum of "<<i<<" and "<<num-i<<'\n';
    flag = 1;
    }
    }
    }
    if(flag == 0)
    cout<<num<<" cannot be expressed as the sum of two primes";
    return 0;
}

// Program to identify if the number is palindrome or not

#include <iostream>
using namespace std;
int main()
{
    int num,rem,rev=0,copy;
    cout<<"Enter a number: ";
    cin>>num;
    copy=num;
    while(num!=0)
    {
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
    }
    if(rev==copy)
    cout<<"Palindrome number"<<'\n';
    else
    cout<<"Not a Palindrome number\n";
    return 0;
}

// Program to identify if the number is prime or not

#include <iostream>
using namespace std;
int main()
{
    int i,count=0;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
    if(num%i==0)
    count++;
    }
    if(num<=1)
    cout<<num<<" is not a prime number";
    else if(count > 2)
    cout<<num<<" is not a prime number";
    else
    cout<<num<<" is a prime number";
    return 0;
}

// Program to identify if the number is Armstrong or not

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int num, copy, rem, result = 0, n = 0 ;
    cout<<"Enter a number: ";
    cin>>num;
    copy = num;
    while (num != 0)
    {
    num /= 10;
    n++;
    }
    num = copy;
    while (num != 0)
    {
    rem = num%10;
    result += pow(rem, n);
    num /= 10;
    }
    if(result == copy)
    cout<<"Armstrong number";
    else
    cout<<"Not an Armstrong number";
    return 0;
}

// Program to add two fractions

#include <iostream>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3,Div,i;
    cout<<"Enter value for x1 and y1: ";
    cin>>x1>>y1;
    cout<<"Enter value for x2 and y2: ";
    cin>>x2>>y2;
    x3=(x1*y2)+(x2*y1);
    y3=y1*y2;
    if(x3>y3)
    Div=y3;
    else
    Div=x3;
    for(i=Div;i>0;i--)
    {
    if(x3%i==0 && y3%i==0)
    {
    x3=x3/i;
    y3=y3/i;
    }
    }
    cout<<"Sum of two fractions is "<<x3<<"/"<<y3;
    return 0;
}

// Program to find the factors of a number

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
    if(num%i==0)
    cout<<i<<",";
    }
}

// Program to find Fibonacci series upto n

#include <iostream>
using namespace std;
int main()
{
    int num, a=-1,b=1,c;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Fibonacci series: ";
    for(int i=0;i<num;i++)
    {
    c=a+b;
    cout<<c<<",";
    a=b;
    b=c;
    }
    return 0;
}

// Program to find sum of digits of a number

#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num!=0)
    {
    sum =sum+ num % 10;
    num = num / 10;
    }
    cout<<sum;
    return 0;
}

// Program to find sum of N natural numbers

#include <iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=1;i<=num;i++)
    sum=sum+i;
    cout<<sum;
    return 0;
}

// Program to reverse a given number

#include <iostream>
using namespace std;
int main ()
{
    int num, rev=0,rem;
    cout<<"Enter a number: ";
    cin>>num;
    while(num!=0)
    {
    rem=num%10;
    rev=rev*10+rem;
    num =num/10;
    }
    cout<<rev;
    return 0;
}

// Program to identify whether the number is strong or not

#include "iostream"
using namespace std;
int factorial(int n)
{
if(n!=0)
return n * factorial(n-1);
else
return 1;
}
int main()
{

    int num,rem,fact,sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    int copy=num;
    if(num==0)
    sum=sum+fact;
    else
    {
    while(copy!=0)
    {
    rem=copy%10;
    fact=factorial(rem);
    sum=sum+fact;
    copy=copy/10;
    }}
    if(sum==num)
    cout<<"Strong number";
    else
    cout<<"Not a strong number";
    return 0;

}*/

// Program to identify if the number is perfect or not

#include "iostream"
using namespace std;
int main()
{
    int i,num,sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    for(i=1;i<num;i++)
    {
    if(num%i==0)
    sum=sum+i;
    }
    if(num==sum)
    cout<<"Perfect number";
    else
    cout<<"Not a perfect number";
    return 0;
}






