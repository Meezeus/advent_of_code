//==============================================================================
//	Name:
//		Solution.h
//
//	Description:
//		Advent of Code 2024 Day 2 Part 1
//		https://adventofcode.com/2024/day/2
//------------------------------------------------------------------------------
#ifndef SOLUTION
#define SOLUTION



//==============================================================================
//		Includes
//------------------------------------------------------------------------------
#include <string>
#include <vector>





//==============================================================================
//		main
//------------------------------------------------------------------------------
int main();





namespace Solution
{



//==============================================================================
//		Solve - Returns the solution to the problem for the given input.
//------------------------------------------------------------------------------
int Solve(std::vector<std::string> input);





//==============================================================================
//		IsSafe - Returns whether the report is considered safe or not.
//------------------------------------------------------------------------------
bool IsSafe(std::vector<int> report);



}



#endif // SOLUTION
