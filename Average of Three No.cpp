

// Aeveage of thee numbes : Complete question is Given below
#include <iostream>
using namespace std ;

int main ( )
{ 
    int n1 , n2 , n3 ;
 char ch ;
  cin >>ch ;
  cin >> n1 >> n2 >> n3 ;
 int avg = (n1 + n2 + n3 ) / 3 ;
cout << ch  << endl;
cout<< avg ;

return 0;

}


/*
Average Marks
Write a program to input a name(as a single character) and marks of three tests as m1, m2, and m3 of a student considering all the three marks have been given in integer format.
Now, you need to calculate the average of the given marks and print it along with the name as mentioned in the output format section.
All the test marks are in integers and hence calculate the average in integer as well. That is, you need to print the integer part of the average only and neglect the decimal part.
Input format :
Line 1 : Name(Single character)
Line 2 : Marks scored in the 3 tests separated by single space. 
Output format :
First line of output prints the name of the student.
Second line of the output prints the average mark.
Constraints
Marks for each student lie in the range 0 to 100 (both inclusive)
Sample Input 1 :
A
3 4 6
Sample Output 1 :
A
4
Sample Input 2 :
T
7 3 8
Sample Output 2 :
T
6
*/
