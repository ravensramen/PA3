//Programmer: Sydnee Boothby
//Class: CptS121
//Instructor: Andrew S. O'Fallon
//TA: Claire Monsoon
//Assignment: Programming Assignment 3
//Date: 02/09/2024
//Objective: To write a program that processes integers and floating point numbers corresponding to student records (gpa, grade level, and ages)
//from an input file, and write analytical data results (means, standard deviations, maxs/mins, etc.) to an output file. 


//guard code
#ifndef HEADER_H
#define HEADER_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//function declarations here:

	//Function: double read_double(FILE* infile) 
	//Description: Reads ouble values from the input file (gpa and ages)
	//Input/Parameters: Information (integers) from the input.dat file
	//Output: Detects a double from the input file and applies it to a variable.

double read_double(FILE *infile);

	//Function: int_read_integer(FILE* infile) 
	//Description: Reads integer values from the input file (class)
	//Input: Information (integers) from the input.dat file
	//Output: Detects an integer from the input file and applies it to a variable. 

int read_integer(FILE* infile);

	//Function: double calculate_sum(double number1, double number2, double number3, double number4, double number5)
	//Description: Calculates the sum of given variable inputs (gpas, grade levels, ages)
	//Input: Double values (for gpa, grade level, or age)
	//Output: The sum of the given values. 

double calculate_sum(double number1, double number2, double
	number3, double number4, double number5);

	//Function: double calculate_mean(double sum, int num)
	//Description: Calculates the mean of given variable inputs (gpas, grade levels, ages)
	//Input: Double values, and integer value for total values (5)
	//Output: The mean of the given values. 

double calculate_mean(double sum, int number);

	//Function: double calculate_deviation(double number, double mean)
	//Description: Calculates the deviation of the gpa inputs.
	//Input: Double values (gpas), and integer value for total quantity of gpa values (5)
	//Output: The deviation of each of the gpa values. 

double calculate_deviation(double number, double mean); 

	//Function: double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number)
	//Description: Calculates the variation of each gpa value.
	//Input: Double values (deviation of each gpa), and integer value for total quantity of gpa values (5)
	//Output: The variance of all the gpas. 

double calculate_variance(double deviation1, double deviation2, double
	deviation3, double deviation4, double deviation5, int number);

	//Function: double standard_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number)
	//Description: Calculates the standard deviation of all the gpas. 
	//Input: The variance of the gpas.
	//Output: The standard deviation of the gpas.  

double calculate_standard_deviation(double variance);

	//Function: double calculate_gpa_min(double number1, double number2, double number3, double number4, double number5)
	//Description: Finds the minimum gpa value from all the gpas. 
	//Input: Each gpa value.
	//Output: Determines which gpa is the minimum.  

double calculate_gpa_min(double number1, double number2, double number3, double number4, double number5);


	//Function: double calculate_gpa_max(double number1, double number2, double number3, double number4, double number5)
	//Description: Finds the maximum gpa value from all the gpas. 
	//Input: Each gpa value.
	//Output: Determines which gpa is the maximum.  

double calculate_gpa_max(double number1, double number2, double number3, double number4, double number5);


//end of guard code
#endif