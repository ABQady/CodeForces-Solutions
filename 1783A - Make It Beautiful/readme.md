# A. Make it Beautiful
time limit per test3 seconds
memory limit per test512 megabytes
inputstandard input
outputstandard output
An array ๐ a is called ugly if it contains at least one element which is equal to the sum of all elements before it. If the array is not ugly, it is beautiful.

For example:

the array [6,3,9,6] is ugly: the element 9 is equal to 6+3
the array [5,5,7] is ugly: the element 5 (the second one) is equal to 5
the array [8,4,10,14] is beautiful: 8โ 0 , 4โ 8 , 10โ 8+4, 14โ 8+4+10 , so there is no element which is equal to the sum of all elements before it.
You are given an array ๐
 such that 1โค๐1โค๐2โคโฏโค๐๐โค100 . You have to reorder the elements of ๐ in such a way that the resulting array is beautiful. Note that you are not allowed to insert new elements or erase existing ones, you can only change the order of elements of ๐. You are allowed to keep the array ๐
 unchanged, if it is beautiful.

Input
The first line contains one integer ๐ก (1โค๐กโค2000) โ the number of test cases.

Each test case consists of two lines. The first line contains one integer ๐ (2โค๐โค50). The second line contains ๐ integers ๐1,๐2,โฆ,๐๐ (1โค๐1โค๐2โคโฏโค๐๐โค100).

Output
For each test case, print the answer as follows:

if it is impossible to reorder the elements of ๐ in such a way that it becomes beautiful, print NO;
otherwise, in the first line, print YES. In the second line, print ๐ integers โ any beautiful array which can be obtained from ๐ by reordering its elements. If there are multiple such arrays, print any of them.

## Example
input
4
4
3 3 6 6
2
10 10
5
1 2 3 4 5
3
1 4 4

output
YES
3 6 3 6
NO
YES
2 4 1 5 3
YES
1 4 4