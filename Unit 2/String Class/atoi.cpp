/*
    The atoi() function converts str into an integer, and returns that integer. 
    str should start with a whitespace or some sort of number, and atoi() will stop reading from str as soon as a non-numerical character has been read.

    Program to convert a c-style string into decimal, octal and hex integers. 
*/

// Standard IOSTREAM
#include "iostream"


// Convert a string of Numbers to integer 
long int atoifunc(const char* str);

// Function to convert a string of Numbers into an integer 
long int atoioct(const char* str);

// Function to convert a string of Numbers into a hexadecimal integer 
long long int atoiHex(const char* str);

// Find length of a string 
static int strlength(const char *str);

// Get digit from character in input string 
static int getDecDigit(const char str);

// Get a digit from corresponding character in input string
static int getOctDigit(const char str);

// Get a hexadecimal digit from corresponding character in input string
static int getHexDigit(const char str);

using namespace std;

// Application program 
int main(void)
{
    char decstr[8] = "";
    char octstr[8] = "";
    char Hexstr[8] = "";
    long int IntNumber=0;
    long int OctNumber=0;
    long long int HexNumber=0;

    cout << "Enter a string of 8 characters in decimal digit form: ";
    cin >> decstr;

    cout << "Enter a string of 8 characters is octal form: ";
    cin >> octstr;

    IntNumber = atoifunc(decstr);
    cout <<"\nYou entered decimal number: " << IntNumber;

    cout << oct;
    OctNumber= atoioct(octstr);

    // Displaying octal number should be done in digits 0-7
    cout <<"\nYou entered octal number: " << OctNumber;

    cout << dec;
    // Displaying octal number should be done in digits 0-7
    cout <<"\nYou entered an oct which is decimal number: " << OctNumber;

    cout << "\nEnter a string of 7 characters in Hex form: ";
    cin >> Hexstr;

    HexNumber=atoiHex(Hexstr);
    cout << hex;
    // Displaying octal number should be done in digits 0-9, A-F
    cout <<"\nYou entered a Hexadecimal number: " << HexNumber;

    cout << dec;

    // Displaying octal number should be done in digits 0-9, A-F
    cout <<"\nYou entered a Hexadecimal which is decimal number: " << HexNumber;

    return 0;
}

/* Function to convert a string of Numbers into an integer */

/* Get the Number of digits entered as a string.

For each digit, place it in appropriate place of an integer such as digit x 1000 or digit x10000 depending on integer size and input range. The multiple of the first and subsequent digits would be selected depending on the number of digits.

For example, 123 would be calculated as an integer in the following steps:

1* 100
2* 10
3* 1

The calculated value is then returned by the function.

For example, if the digits entered are 12345
Then,the multipliers are:
str[0] * 10000
str[1] * 1000
str[2] * 100
str[3] * 10
str[4] * 1
Check your machine endianness for correct order of bytes.
*/

long int atoifunc(const char* str)
{

  int declength =strlength(str);
  long int Number =0;
   switch(declength)
    {
          case 0:
          Number += getDecDigit(str[0])*0;
          break;

          // Convert characters to digits with another function.
          case 1:
          Number += getDecDigit(str[0])*1;
          break;

          case 2:

          Number+=getDecDigit(str[0])*10;
          Number+=getDecDigit(str[1])*1;
          break;

          case 3:
          Number+=getDecDigit(str[0])*100;
          Number+=getDecDigit(str[1])*10;
          Number+=getDecDigit(str[2])*1;
          break;

          case 4:
          Number+=getDecDigit(str[0])*1000;
          Number+=getDecDigit(str[1])*100;
          Number+=getDecDigit(str[2])*10;
          Number+=getDecDigit(str[3])*1;
          break;

          case 5:
          Number+=getDecDigit(str[0])*10000;
          Number+=getDecDigit(str[1])*1000;
          Number+=getDecDigit(str[2])*100;
          Number+=getDecDigit(str[3])*10;
          Number+=getDecDigit(str[4])*1;
          break;

          case 6:
          Number+=getDecDigit(str[0])*100000;
          Number+=getDecDigit(str[1])*10000;
          Number+=getDecDigit(str[2])*1000;
          Number+=getDecDigit(str[3])*100;
          Number+=getDecDigit(str[4])*10;
          Number+=getDecDigit(str[5])*1;
          break;

          case 7:
          Number+=getDecDigit(str[0])*1000000;
          Number+=getDecDigit(str[1])*100000;
          Number+=getDecDigit(str[2])*10000;
          Number+=getDecDigit(str[3])*1000;
          Number+=getDecDigit(str[4])*100;
          Number+=getDecDigit(str[5])*10;
          Number+=getDecDigit(str[6])*1;
          break;

          case 8:
          Number+=getDecDigit(str[0])*10000000;
          Number+=getDecDigit(str[1])*1000000;
          Number+=getDecDigit(str[2])*100000;
          Number+=getDecDigit(str[3])*10000;
          Number+=getDecDigit(str[4])*1000;
          Number+=getDecDigit(str[5])*100;
          Number+=getDecDigit(str[6])*10;
          Number+=getDecDigit(str[7])*1;
          break;

          default:
          Number =0;
          break;
  }

  return Number;
}

// Find length of a string
static int strlength(const char *str)
{
    int count=0;
    while(str[count]!='\0')
    {
        count++;
    }
    return count;
}

// get a digit from corresponding character in input string
static int getDecDigit(const char str)
{
    int digit =0;
    switch (str)
    {
        case '0':
        digit = 0;
        break;

        case '1':
        digit = 1;
        break;

        case '2':
        digit = 2;
        break;

        case '3':
        digit = 3;
        break;

        case '4':
        digit = 4;
        break;

        case '5':
        digit = 5;
        break;

        case '6':
        digit = 6;
        break;

        case '7':
        digit = 7;
        break;

        case '8':
        digit = 8;
        break;

        case '9':
        digit = 9;
        break;

        default:
        digit =0;
        break;
    }
    return digit;
}

/* Function to convert a string of Numbers into an integer */

long int atoioct(const char* str)
{
  long int Number =0;
  int stroctlength =strlength(str);
   switch(stroctlength)
    {
          case 0:
          Number += getOctDigit(str[0])*0;
          break;

          // Convert characters to digits with another function.
          case 1:
          Number += getOctDigit(str[0])*1;
          break;

          case 2:

          Number+=getOctDigit(str[0])*8;
          Number+=getOctDigit(str[1])*1;
          break;

          case 3:

          Number+=getOctDigit(str[0])*64;
          Number+=getOctDigit(str[1])*8;
          Number+=getOctDigit(str[2])*1;

          break;

          case 4:
          Number+=getOctDigit(str[0])*512;
          Number+=getOctDigit(str[1])*64;
          Number+=getOctDigit(str[2])*8;
          Number+=getOctDigit(str[3])*1;

          break;

          case 5:
          Number+=getOctDigit(str[0])*4096;
          Number+=getOctDigit(str[1])*512;
          Number+=getOctDigit(str[2])*64;
          Number+=getOctDigit(str[3])*8;
          Number+=getOctDigit(str[4])*1;
          break;

          case 6:
          Number+=getOctDigit(str[0])*32768;
          Number+=getOctDigit(str[1])*4096;
          Number+=getOctDigit(str[2])*512;
          Number+=getOctDigit(str[3])*64;
          Number+=getOctDigit(str[4])*8;
          Number+=getOctDigit(str[5])*1;
          break;

          case 7:
          Number+=getOctDigit(str[0])*262144;
          Number+=getOctDigit(str[1])*32768;
          Number+=getOctDigit(str[2])*4096;
          Number+=getOctDigit(str[3])*512;
          Number+=getOctDigit(str[4])*64;
          Number+=getOctDigit(str[5])*8;
          Number+=getOctDigit(str[6])*1;
          break;

          default:
          Number =0;
          break;
  }

  return Number;

}

// Get a digit from character input in input string
static int getOctDigit(const char str)
{
    int digit =0;
    switch (str)
    {
        case '0':
        digit = 0;
        break;

        case '1':
        digit = 1;
        break;

        case '2':
        digit = 2;
        break;

        case '3':
        digit = 3;
        break;

        case '4':
        digit = 4;
        break;

        case '5':
        digit = 5;
        break;

        case '6':
        digit = 6;
        break;

        case '7':
        digit = 7;
        break;

        default:
        digit =0;
        break;
    }
    return digit;
}

// Get a hexadecimal digit from corresponding character in input string
static int getHexDigit(const char str)
{
    int digit =0;
    switch (str)
    {
        case '0':
        digit = 0;
        break;

        case '1':
        digit = 1;
        break;

        case '2':
        digit = 2;
        break;

        case '3':
        digit = 3;
        break;

        case '4':
        digit = 4;
        break;

        case '5':
        digit = 5;
        break;

        case '6':
        digit = 6;
        break;

        case '7':
        digit = 7;
        break;

        case '8':
        digit = 8;
        break;

        case '9':
        digit = 9;
        break;

        case 'A' :
        case 'a':
        digit =10;
        break;

        case 'B' :
        case 'b':
        digit = 11;
        break;

        case 'C' :
        case 'c':
        digit =12;
        break;

        case 'D' :
        case 'd':
        digit =13;
        break;

        case 'E' :
        case 'e':
        digit = 14;
        break;

        case 'F' :
        case 'f':
        digit = 15;
        break;

        default:
        digit =0;
        break;
    }
    return digit;
}

// Function to convert a string of Numbers into a hexadecimal integer
long long int atoiHex(const char* str)
{
  long long int Number =0;
  int strHexlength =strlength(str);
  switch(strHexlength)
    {
          case 0:
          Number += getHexDigit(str[0])*0;
          break;

          // Convert characters to digits with another function.
          // Implicit type conversion from int to long int.
          case 1:
          Number += getHexDigit(str[0])*1;
          break;

          case 2:
          Number+=getHexDigit(str[0])*16;
          Number+=getHexDigit(str[1])*1;
          break;

          case 3:
          Number+=getHexDigit(str[0])*256;
          Number+=getHexDigit(str[1])*16;
          Number+=getHexDigit(str[2])*1;
          break;

          case 4:
          Number+=getHexDigit(str[0])*4096;
          Number+=getHexDigit(str[1])*256;
          Number+=getHexDigit(str[2])*16;
          Number+=getHexDigit(str[3])*1;
          break;

          case 5:
          Number+=getHexDigit(str[0])*65536;
          Number+=getHexDigit(str[1])*4096;
          Number+=getHexDigit(str[2])*256;
          Number+=getHexDigit(str[3])*16;
          Number+=getHexDigit(str[4])*1;
          break;

          case 6:
          Number+=getHexDigit(str[0])*1048576;
          Number+=getHexDigit(str[1])*65536;
          Number+=getHexDigit(str[2])*4096;
          Number+=getHexDigit(str[3])*256;
          Number+=getHexDigit(str[4])*16;
          Number+=getHexDigit(str[5])*1;
          break;

          case 7:
          Number+=getHexDigit(str[0])*16777216;
          Number+=getHexDigit(str[1])*1048576;
          Number+=getHexDigit(str[2])*65536;
          Number+=getHexDigit(str[3])*4096;
          Number+=getHexDigit(str[4])*256;
          Number+=getHexDigit(str[5])*16;
          Number+=getHexDigit(str[6])*1;
          break;

          default:
          Number =0;
          break;
  }

  return Number;

}/*
    Description:
    Program to convert a c-style string into decimal, octal and hex integers. 
    Copyright (C) <2015>  <AM>

    This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or 
    (at your option) any later version.

    This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// Standard IOSTREAM
#include "iostream"

// Convert a string of Numbers to integer 
long int atoifunc(const char* str);

// Function to convert a string of Numbers into an integer 
long int atoioct(const char* str);

// Function to convert a string of Numbers into a hexadecimal integer 
long long int atoiHex(const char* str);

// Find length of a string 
static int strlength(const char *str);

// Get digit from character in input string 
static int getDecDigit(const char str);

// Get a digit from corresponding character in input string
static int getOctDigit(const char str);

// Get a hexadecimal digit from corresponding character in input string
static int getHexDigit(const char str);

using namespace std;

// Application program 
int main(void)
{
    char decstr[8] = "";
    char octstr[8] = "";
    char Hexstr[8] = "";
    long int IntNumber=0;
    long int OctNumber=0;
    long long int HexNumber=0;

    cout << "Enter a string of 8 characters in decimal digit form: ";
    cin >> decstr;

    cout << "Enter a string of 8 characters is octal form: ";
    cin >> octstr;

    IntNumber = atoifunc(decstr);
    cout <<"\nYou entered decimal number: " << IntNumber;

    cout << oct;
    OctNumber= atoioct(octstr);

    // Displaying octal number should be done in digits 0-7
    cout <<"\nYou entered octal number: " << OctNumber;

    cout << dec;
    // Displaying octal number should be done in digits 0-7
    cout <<"\nYou entered an oct which is decimal number: " << OctNumber;

    cout << "\nEnter a string of 7 characters in Hex form: ";
    cin >> Hexstr;

    HexNumber=atoiHex(Hexstr);
    cout << hex;
    // Displaying octal number should be done in digits 0-9, A-F
    cout <<"\nYou entered a Hexadecimal number: " << HexNumber;

    cout << dec;

    // Displaying octal number should be done in digits 0-9, A-F
    cout <<"\nYou entered a Hexadecimal which is decimal number: " << HexNumber;

    return 0;
}

/* Function to convert a string of Numbers into an integer */

/* Get the Number of digits entered as a string.

For each digit, place it in appropriate place of an integer such as digit x 1000 or digit x10000 depending on integer size and input range. The multiple of the first and subsequent digits would be selected depending on the number of digits.

For example, 123 would be calculated as an integer in the following steps:

1* 100
2* 10
3* 1

The calculated value is then returned by the function.

For example, if the digits entered are 12345
Then,the multipliers are:
str[0] * 10000
str[1] * 1000
str[2] * 100
str[3] * 10
str[4] * 1
Check your machine endianness for correct order of bytes.
*/

long int atoifunc(const char* str)
{

  int declength =strlength(str);
  long int Number =0;
   switch(declength)
    {
          case 0:
          Number += getDecDigit(str[0])*0;
          break;

          // Convert characters to digits with another function.
          case 1:
          Number += getDecDigit(str[0])*1;
          break;

          case 2:

          Number+=getDecDigit(str[0])*10;
          Number+=getDecDigit(str[1])*1;
          break;

          case 3:
          Number+=getDecDigit(str[0])*100;
          Number+=getDecDigit(str[1])*10;
          Number+=getDecDigit(str[2])*1;
          break;

          case 4:
          Number+=getDecDigit(str[0])*1000;
          Number+=getDecDigit(str[1])*100;
          Number+=getDecDigit(str[2])*10;
          Number+=getDecDigit(str[3])*1;
          break;

          case 5:
          Number+=getDecDigit(str[0])*10000;
          Number+=getDecDigit(str[1])*1000;
          Number+=getDecDigit(str[2])*100;
          Number+=getDecDigit(str[3])*10;
          Number+=getDecDigit(str[4])*1;
          break;

          case 6:
          Number+=getDecDigit(str[0])*100000;
          Number+=getDecDigit(str[1])*10000;
          Number+=getDecDigit(str[2])*1000;
          Number+=getDecDigit(str[3])*100;
          Number+=getDecDigit(str[4])*10;
          Number+=getDecDigit(str[5])*1;
          break;

          case 7:
          Number+=getDecDigit(str[0])*1000000;
          Number+=getDecDigit(str[1])*100000;
          Number+=getDecDigit(str[2])*10000;
          Number+=getDecDigit(str[3])*1000;
          Number+=getDecDigit(str[4])*100;
          Number+=getDecDigit(str[5])*10;
          Number+=getDecDigit(str[6])*1;
          break;

          case 8:
          Number+=getDecDigit(str[0])*10000000;
          Number+=getDecDigit(str[1])*1000000;
          Number+=getDecDigit(str[2])*100000;
          Number+=getDecDigit(str[3])*10000;
          Number+=getDecDigit(str[4])*1000;
          Number+=getDecDigit(str[5])*100;
          Number+=getDecDigit(str[6])*10;
          Number+=getDecDigit(str[7])*1;
          break;

          default:
          Number =0;
          break;
  }

  return Number;
}

// Find length of a string
static int strlength(const char *str)
{
    int count=0;
    while(str[count]!='\0')
    {
        count++;
    }
    return count;
}

// get a digit from corresponding character in input string
static int getDecDigit(const char str)
{
    int digit =0;
    switch (str)
    {
        case '0':
        digit = 0;
        break;

        case '1':
        digit = 1;
        break;

        case '2':
        digit = 2;
        break;

        case '3':
        digit = 3;
        break;

        case '4':
        digit = 4;
        break;

        case '5':
        digit = 5;
        break;

        case '6':
        digit = 6;
        break;

        case '7':
        digit = 7;
        break;

        case '8':
        digit = 8;
        break;

        case '9':
        digit = 9;
        break;

        default:
        digit =0;
        break;
    }
    return digit;
}

/* Function to convert a string of Numbers into an integer */

long int atoioct(const char* str)
{
  long int Number =0;
  int stroctlength =strlength(str);
   switch(stroctlength)
    {
          case 0:
          Number += getOctDigit(str[0])*0;
          break;

          // Convert characters to digits with another function.
          case 1:
          Number += getOctDigit(str[0])*1;
          break;

          case 2:

          Number+=getOctDigit(str[0])*8;
          Number+=getOctDigit(str[1])*1;
          break;

          case 3:

          Number+=getOctDigit(str[0])*64;
          Number+=getOctDigit(str[1])*8;
          Number+=getOctDigit(str[2])*1;

          break;

          case 4:
          Number+=getOctDigit(str[0])*512;
          Number+=getOctDigit(str[1])*64;
          Number+=getOctDigit(str[2])*8;
          Number+=getOctDigit(str[3])*1;

          break;

          case 5:
          Number+=getOctDigit(str[0])*4096;
          Number+=getOctDigit(str[1])*512;
          Number+=getOctDigit(str[2])*64;
          Number+=getOctDigit(str[3])*8;
          Number+=getOctDigit(str[4])*1;
          break;

          case 6:
          Number+=getOctDigit(str[0])*32768;
          Number+=getOctDigit(str[1])*4096;
          Number+=getOctDigit(str[2])*512;
          Number+=getOctDigit(str[3])*64;
          Number+=getOctDigit(str[4])*8;
          Number+=getOctDigit(str[5])*1;
          break;

          case 7:
          Number+=getOctDigit(str[0])*262144;
          Number+=getOctDigit(str[1])*32768;
          Number+=getOctDigit(str[2])*4096;
          Number+=getOctDigit(str[3])*512;
          Number+=getOctDigit(str[4])*64;
          Number+=getOctDigit(str[5])*8;
          Number+=getOctDigit(str[6])*1;
          break;

          default:
          Number =0;
          break;
  }

  return Number;

}

// Get a digit from character input in input string
static int getOctDigit(const char str)
{
    int digit =0;
    switch (str)
    {
        case '0':
        digit = 0;
        break;

        case '1':
        digit = 1;
        break;

        case '2':
        digit = 2;
        break;

        case '3':
        digit = 3;
        break;

        case '4':
        digit = 4;
        break;

        case '5':
        digit = 5;
        break;

        case '6':
        digit = 6;
        break;

        case '7':
        digit = 7;
        break;

        default:
        digit =0;
        break;
    }
    return digit;
}

// Get a hexadecimal digit from corresponding character in input string
static int getHexDigit(const char str)
{
    int digit =0;
    switch (str)
    {
        case '0':
        digit = 0;
        break;

        case '1':
        digit = 1;
        break;

        case '2':
        digit = 2;
        break;

        case '3':
        digit = 3;
        break;

        case '4':
        digit = 4;
        break;

        case '5':
        digit = 5;
        break;

        case '6':
        digit = 6;
        break;

        case '7':
        digit = 7;
        break;

        case '8':
        digit = 8;
        break;

        case '9':
        digit = 9;
        break;

        case 'A' :
        case 'a':
        digit =10;
        break;

        case 'B' :
        case 'b':
        digit = 11;
        break;

        case 'C' :
        case 'c':
        digit =12;
        break;

        case 'D' :
        case 'd':
        digit =13;
        break;

        case 'E' :
        case 'e':
        digit = 14;
        break;

        case 'F' :
        case 'f':
        digit = 15;
        break;

        default:
        digit =0;
        break;
    }
    return digit;
}

// Function to convert a string of Numbers into a hexadecimal integer
long long int atoiHex(const char* str)
{
  long long int Number =0;
  int strHexlength =strlength(str);
  switch(strHexlength)
    {
          case 0:
          Number += getHexDigit(str[0])*0;
          break;

          // Convert characters to digits with another function.
          // Implicit type conversion from int to long int.
          case 1:
          Number += getHexDigit(str[0])*1;
          break;

          case 2:
          Number+=getHexDigit(str[0])*16;
          Number+=getHexDigit(str[1])*1;
          break;

          case 3:
          Number+=getHexDigit(str[0])*256;
          Number+=getHexDigit(str[1])*16;
          Number+=getHexDigit(str[2])*1;
          break;

          case 4:
          Number+=getHexDigit(str[0])*4096;
          Number+=getHexDigit(str[1])*256;
          Number+=getHexDigit(str[2])*16;
          Number+=getHexDigit(str[3])*1;
          break;

          case 5:
          Number+=getHexDigit(str[0])*65536;
          Number+=getHexDigit(str[1])*4096;
          Number+=getHexDigit(str[2])*256;
          Number+=getHexDigit(str[3])*16;
          Number+=getHexDigit(str[4])*1;
          break;

          case 6:
          Number+=getHexDigit(str[0])*1048576;
          Number+=getHexDigit(str[1])*65536;
          Number+=getHexDigit(str[2])*4096;
          Number+=getHexDigit(str[3])*256;
          Number+=getHexDigit(str[4])*16;
          Number+=getHexDigit(str[5])*1;
          break;

          case 7:
          Number+=getHexDigit(str[0])*16777216;
          Number+=getHexDigit(str[1])*1048576;
          Number+=getHexDigit(str[2])*65536;
          Number+=getHexDigit(str[3])*4096;
          Number+=getHexDigit(str[4])*256;
          Number+=getHexDigit(str[5])*16;
          Number+=getHexDigit(str[6])*1;
          break;

          default:
          Number =0;
          break;
  }

  return Number;

}