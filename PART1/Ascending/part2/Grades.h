//Author: Randy Le
//Author's Email:: Randy.l5933@csu.fullerton.edu

/*
I approached this problem using an extendable vector in case if they wanted to add more enrollments.
I used cwid, course name, and grade as an extendablevector.
CWID as an integer, Course Name as a string, and Grade as an integer.
For the constructor, I used a temporary variables to put in the files 
I'm reading to and then putting them into the appropriate extended vectors.
*/

#pragma once
#include <string>
#include "ExtendableVector.h"
using namespace std;
class Grades {
public:
	Grades(string filename); //constructor with string parameter
	double getGPA(int cwid); //double function with double parameter
private:
	int cwid_ft;				 //obtain temporary file text to transfer into extendablevector cwid
	string course_name_ft;		 //obtain temp. file text to transfer -> course_name
	int grade_ft;				 //obtain temp. file text to transfer -> grade
	ExtendableVector<int> cwid;
	ExtendableVector<string> course_name;
	ExtendableVector<int> grade;
};