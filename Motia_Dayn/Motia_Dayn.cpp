#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define _countof(_Array) (sizeof(_Array) / sizeof(_Array[0])) 

// marco example from MSVC
#define I std::cout <<
#define like "Hello World" <<
#define feet std::endl

#define rek(_times) for(int i=0; i<_times; i++){int k = _times-i; std::cout << k << '\n';}

int main() {
	// macro usage example
	// every word is inerpreted as a separate command, defined above
	I like feet; // expands to: std::cout << "Hello World" << std::endl;
	rek(15); // value in () is passed to macro as _times. It is NOT modifiable inside macro.
	

	// printf()    - #include <stdio.h>
	printf("Hello, World!\n");
	// output: Hello, World!
	
	printf("\n");

	//             %d - integer (whole number)
	// Note: Use %i or %d for integers, both work the same in printf.
	// Integers can represent values from -2,147,483,648 to 2,147,483,647.
	printf("Value with %%d: %d\n", 42);
	// output: Value with %d: 42
	printf("Value with %%i: %i\n", 42);
	// output: Value with %i: 42
	// You can add + or - signs to force sign display
	printf("Positive: %+d\n", 42);
	printf("Negative: %+d\n", -42);
	// You can specify minimum width (pad with spaces)
	printf("Padded: %5d\n", 42);
	// output: Padded:    42
	// Pad with zeros instead of spaces
	printf("Zero padded: %05d\n", 42);
	// output: Zero padded: 00042
	// You can left-align within the width using '-'
	printf("Left aligned: %-5dend\n", 42);
	// output: Left aligned: 42   end


	printf("\n");

	//                 %c - character
	// Note: Characters are enclosed in single quotes ('A'), while strings use double quotes ("Sample").
	// Characters represent single letters, digits, or symbols.
	// Characters are stored as integers based on the ASCII table (e.g., 'A' = 65, 'a' = 97).
	printf("Character: %c\n", 'A');
	// output: Character: A
	
	printf("\n");

	//			    %s - string
	printf("String: %s\n", "Sample");
	// output: String: Sample
	
	printf("\n");
	
	//             %.Nf - float, .N - number of digits after decimal point
	printf("Float: %.5f\n", 3.14159265);
	// output: Float: 3.14159
	
	printf("\n");

	//           %x - hexadecimal
	printf("Hex1: %x\n", 255);
	// output: Hex: ff
	printf("Hex2: %x\n", 125);
	// output: Hex: 7d
	printf("Hex3: %x\n", 0);
	// output: Hex: 0
	
	printf("\n");

	// 		       %o - octal(8-bit system)
	printf("Octal: %o\n", 34);
	// output: Octal: 42
	
	printf("\n");

	//                %u - unsigned integer(non-negative)
	// Note: Use 'U' suffix for unsigned literals to avoid warnings.
	// Unsigned integers can represent larger positive values
	printf("Unsigned: %u\n", 3000000000U);
	// output: Unsigned: 3000000000
	
	printf("\n");

	//			  %ld - long integer
	// Note: Use 'L' suffix for long literals to avoid warnings.
	// Long integers can represent larger values than standard integers
	printf("Long: %ld\n", 1234567890L);
	// output: Long: 1234567890
	
	printf("\n");

	//			  %lld - long long integer
	// Note: Use 'LL' suffix for long long literals to avoid warnings.
	// Long long integers can represent even larger values
	printf("Long Long: %lld\n", 123456789012345LL);
	// output: Long Long: 123456789012345
	
	printf("\n");

	//			  %e - scientific notation
	// Note: Scientific notation is useful for very large or very small numbers.
	// Example: 1.34e+06 represents 1.34 * 10^6 = 1,340,000
	// Example: 5.67e-03 represents 5.67 * 10^-3 = 0.00567
	// The format is: [sign][digit].[digits]e[sign][exponent]
	printf("Scientific: %e\n", 13436e+10);
	// output: Scientific: 1.343600e+14
	printf("Scientific: %e\n", 13436e-10);
	// output: Scientific: 1.343600e-06

	printf("\n");

	//			  %g - use %f or %e based on value and precision
	// Note: %g automatically chooses between %f and %e for more compact representation.
	// It removes trailing zeros and the decimal point if not needed.
	// Example: 12345.6789 with %g becomes 12345.7 (uses %f)
	// Example: 123456789 with %g becomes 1.23457e+08 (uses %e)
	printf("General format: %g\n", 12345.6789);
	// output: General format: 12345.7
	printf("General format 2 : %g\n", 123456789);
	// output: General format: 1.23457e+08
	
	printf("\n");

	//			  %% - print a percent sign
	printf("Percent sign: %%\n");
	// output: Percent sign: %
	
	printf("\n");

	//			  %p - pointer address
	// Note: Always cast to (void*) when printing pointers to avoid warnings.
	int var = 10;
	printf("Pointer: %p\n", (void*)&var);
	// output: Pointer: 0x7ffeedcba098 (address will vary)
	// Video explanation of pointers: https://www.youtube.com/watch?v=DplxIq0mc_Y
	// В целом ОЧЕНЬ рекомендую BroCode. Охеренный гайд по С


	printf("\n\n");




	// OPERATORS
	printf("Operators:\n");
	int a = 10;
	int b = 3;
	
	// Arithmetic operators: +, -, *, /, %, ++, --
	printf("Arithmetic operators:\n");
	printf("a + b = %d\n", a + b); // Addition
	printf("a - b = %d\n", a - b); // Subtraction
	printf("a * b = %d\n", a * b); // Multiplication
	printf("a / b = %d\n", a / b); // Division
	printf("a %% b = %d\n", a % b); // Modulus
	printf("a++ = %d\n", a++); // Post-increment add 1 after using
	printf("++b = %d\n", ++b); // Pre-increment add 1 before using

	printf("a-- = %d\n", a--); // Post-decrement add 1 after using
	printf("--b = %d\n", --b); // Pre-decrement	add 1 before using

	
	// Comparison operators: ==, !=, >, <, >=, <=
	printf("Arithmetic operators:\n");
	printf("a == b: %d\n", a == b); // Equal
	printf("a != b: %d\n", a != b); // Not equal
	printf("a > b: %d\n", a > b);   // Greater than
	printf("a < b: %d\n", a < b);   // Less than
	printf("a >= b: %d\n", a >= b); // Greater than or equal
	printf("a <= b: %d\n", a <= b); // Less than or equal

	// Logical operators: &&, ||, !
	printf("Logical operators:\n");
	if (a == 10 && b == 3) // Logical AND
	{
		printf("a == 10 and b == 3\n");
	}
	if (a == 10 || b == 10) // Logical OR
	{
		printf("a == 10 or b == 10\n");
	}
	if (!(a == 5)) // Logical NOT
	{
		printf("a is not 5\n");
	}

	// Bitwise operators: &, |, ^, ~
	int z = 10; // Binary: 1010
	int i = 4;  // Binary: 0100
	printf("Bitwise operators:\n");
	printf("a & b = %d\n", z & i); // Bitwise AND. Result is 0 (Binary: 0000)
	// Explanation: 1010 & 0100 = 0000 (1&1=0; 0&1=0; 1&0=0; 0&0=1)
	// 0 & 0 = 0
	// 1 & 0 = 0 
	// 0 & 1 = 0
	// 1 & 1 = 1

	printf("a | b = %d\n", z | i); // Bitwise OR. Result is 14 (Binary: 1110)
	// Explanation: 1010 | 0100 = 1110 (1|1=1; 0|1=1; 1|0=1; 0|0=0)
	// 1 | 0 = 1
	// 0 | 1 = 1
	// 1 | 1 = 1
	// 0 | 0 = 0

	printf("a ^ b = %d\n", z ^ i); // Bitwise XOR. Result is 14 (Binary: 1110)
	// Explanation: 1010 ^ 0100 = 1110 (1^1=0; 0^1=1; 1^0=1; 0^0=0)
	// 1 ^ 0 = 1
	// 0 ^ 1 = 1
	// 1 ^ 1 = 0
	// 0 ^ 0 = 0

	printf("~a = %d\n", ~z); // Bitwise NOT. Result is -11 (Binary: ...11110101)
	// Explanation: ~1010 = ...11110101 (inverts all bits, including sign bit)

	printf("x << 1 = %d\n", z << 1); // Left shift. Result is 20 (Binary: 10100)
	// Explanation: 1010 << 1 = 10100 (shifts bits left, adds 0 on right)
	printf("x >> 1 = %d\n", z >> 1); // Right shift. Result is 5 (Binary: 0101)
	// Explanation: 1010 >> 1 = 0101 (shifts bits right, removes rightmost bit)

	// Assignment operators: =, +=, -=, *=, /=, %=
	printf("Assignment operators:\n");
	int c = 5; // Assignment

	c += 3; // c = c + 3
	printf("c = %d +\n", c);
	c -= 2; // c = c - 2
	printf("c = %d\n", c);
	c *= 4; // c = c * 4
	printf("c = %d\n", c);
	c /= 3; // c = c / 3
	printf("c = %d\n", c);
	c %= 3; // c = c % 3
	printf("c = %d\n", c);
	// Note: There are also bitwise assignment operators like &=, |=, ^=, <<=, >>=





	// scanf_s()   - #include <stdio.h>
	// Note: scanf_s is a safer version of scanf, but it is not part of the C standard.
	// TL;DR: Use scanf_s in MSVC, scanf in GCC.
	// Example:
	int x;
	printf("Enter an integer: ");
	scanf_s("%d", &x);
	printf("You entered: %d\n", x);


	printf("\n");
	
	// _countof() is defined in stdlib.h
	// Example:
	
	char buffer[50];
	printf("Enter a string: ");
	scanf_s("%s", buffer, (unsigned)_countof(buffer));
	printf("You entered: %s\n", buffer);
	// Note: _countof is a Microsoft-specific extension and may not be available in all compilers.
	// Example:
	char arr[10];
	int arrSize = _countof(arr); // arrSize will be 10
	printf("Array size is: %d\n", arrSize);
	// Note: _countof is not part of the C standard, so for portable code, use sizeof(arr)/sizeof(arr[0]) instead.
	// or define your own macro:
	//		#define _countof(arr) (sizeof(arr) / sizeof(arr[0]))

	
	printf("\n");
	
	
    // malloc()    - #include <stdlib.h>
	// Allocates memory on the heap.
	//
	// free()      - #include <stdlib.h>
	// Frees memory allocated with malloc.
	//
	// Example:
	int* ptr = (int*)malloc(10 * sizeof(int)); // allocate memory for 10 integers
	
	// use the allocated memory
	ptr[0] = 42;
	ptr[1] = 43;
	ptr[2] = 44;
	printf("First three values: %d, %d, %d\n", ptr[0], ptr[1], ptr[2]);
	
	free(ptr); // free the allocated memory
	// Always free memory allocated with malloc to avoid memory leaks.
	 

	// Example 2:
	int* numbers = (int*)malloc(5 * sizeof(int));
	for (int i = 0; i < 5; i++) {
	    numbers[i] = i * 10;
	}
	printf("Numbers: ");
	for (int i = 0; i < 5; i++) {
	    printf("%d ", numbers[i]);
	}
	printf("\n");
	free(numbers);



	printf("\n");

    // strlen()    - #include <string.h>
	// Gives length of string
	const char* str = "Hello";
	int len = strlen(str);
	printf("Length of '%s' is %d\n", str, len);

	
	printf("\n");


    // isdigit()   - #include <ctype.h>
	// Checks if a character is a digit (0-9).
	 
	char ch = '5';
	if (isdigit(ch)) {
	    printf("'%c' is a digit.\n", ch);
	}
	else {
	    printf("'%c' is not a digit.\n", ch);
	}


    // atoi()      - #include <stdlib.h>
	// Converts a string to an integer
	const char* numStr = "12345";
	int num = atoi(numStr);
	printf("The integer value is %d\n", num);

	return 0;
}
