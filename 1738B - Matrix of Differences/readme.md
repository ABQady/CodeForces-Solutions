# B. Matrix of Differences
time limit per test2 seconds
memory limit per test256 megabytes
input: standard input
output: standard output


For a square matrix of integers of size ๐ร๐, let's define its beauty as follows: for each pair of side-adjacent elements ๐ฅ and ๐ฆ , write out the number |๐ฅโ๐ฆ| and then find the number of different numbers among them.

For example, for the matrix (1 3)
                             4 2

 the numbers we consider are |1โ3|=2, |1โ4|=3, |3โ2|=1 and |4โ2|=2 ; there are 3 different numbers among them (2, 3 and 1), which means that its beauty is equal to 3.

You are given an integer ๐. You have to find a matrix of size ๐ร๐, where each integer from 1 to ๐2 occurs exactly once, such that its beauty is the maximum possible among all such matrices.

Input
The first line contains a single integer ๐ก (1โค๐กโค49) โ the number of test cases.

The first (and only) line of each test case contains a single integer ๐ (2โค๐โค50).

Output
For each test case, print ๐ rows of ๐ integers โ a matrix of integers of size ๐ร๐, where each number from 1 to ๐2 occurs exactly once, such that its beauty is the maximum possible among all such matrices. If there are multiple answers, print any of them.

## Example
### input
2
2
3

### output
1 3
4 2
1 3 4
9 2 7
5 8 6