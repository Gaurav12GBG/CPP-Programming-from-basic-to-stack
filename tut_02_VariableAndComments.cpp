// Variables and Comments :
/*
Variables in C++ =>
                 => Variables are containers to store our data. 
                 => I will give a scenario: to store water, we use bottles, and to      store sugar, we use a box. In this scenario, the bottle and box are containers that are storing water and sugar; the same is the case with variables; they are the containers for data types.
                 => As there are many types of data types, for example, "int" is used for integers, the "float" is used for floating-point numbers, "char" is used for character, and many more data types are available.
                 => The main point here is that these variables store the values of these data types.

Comments in C++ =>
                => A comment is a human-readable text in the source code, which is ignored by the compiler. There are two ways to write comments.

                a] Single-Line Comments: 1st way is to use" //" before a single line of text to make it unparsable by the compiler.
                b] Multi-Line Comments: 2nd way is to use as the closing of the comment. We then write text in between them. If we write text without this, the compiler will try to read the text and will end up giving an error.  Figure 1 shows examples of these comments.

*/

#include <iostream>
using namespace std;

// This program was created by Code With Harry
/* this
is 
a 
multi
line 
comment */

int main()
{
    int sum = 6;  // This is a variable creation with the help of data types..
    cout << "Hello world \n" << sum;
    return 0;
}