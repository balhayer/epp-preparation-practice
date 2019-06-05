//Author: Randy Le
//Author's Email:: Randy.l5933@csu.fullerton.edu

#include "Grades.h"
#include <fstream>
#include <string>
using namespace std;
Grades::Grades(string filename) { //Constructor
	ifstream inFile;
	inFile.open(filename); //Opening text file
	for (int i = 0; i < 10; i++) {
		inFile >> cwid_ft >> course_name_ft >> grade_ft;	//Obtain the text from files
		cwid.insert(i, cwid_ft);						//Transfering cwid text to extendable vector
		course_name.insert(i, course_name_ft);			//Transfering course name text to extendable vector
		grade.insert(i, grade_ft);						//Trasnfering grade number tex tto extendable vector
	}
	inFile.close();		//Closing text file
}
double Grades::getGPA(int cw) {
	int count_num_classes = 0;			//count how many classes the cwid is taking
	int count_grade_points = 0;			//count how many points he obtained with all the classes
	double average_gpa = 0;				//the average gpa (gradepoints/num.classes)
	for (int i = 0; i < cwid.size(); i++) {
		if (cwid.at(i) == cw) {				//checks if the cwid given matches with the cwid in the extendable vector
			count_num_classes++;			//if it does, it +1 to number of class taken
			count_grade_points += grade.at(i);	//then adds point
		}
	}
	//Calculating the average GPA for the given cwid in the parameter
	average_gpa = (double)count_grade_points / (double)count_num_classes;
	return average_gpa;
}