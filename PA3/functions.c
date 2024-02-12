#include "header.h"

	//Function: double read_double(FILE* infile) 
	//Description: Reads ouble values from the input file (gpa and ages)
	//Input/Parameters: Information (integers) from the input.dat file
	//Output: Detects a double from the input file and applies it to a variable.

double read_double(FILE* infile) {
	double value = 0.0;
	fscanf(infile, "%lf", &value);
	return value;
}
	//Function: int_read_integer(FILE* infile) 
	//Description: Reads integer values from the input file (class)
	//Input: Information (integers) from the input.dat file
	//Output: Detects an integer from the input file and applies it to a variable. 

int read_integer(FILE* infile) {
	int value = 0;
	fscanf(infile, "%d", &value);
	return value; 
}
	//Function: double calculate_sum(double number1, double number2, double number3, double number4, double number5)
	//Description: Calculates the sum of given variable inputs (gpas, grade levels, ages)
	//Input: Double values (for gpa, grade level, or age)
	//Output: The sum of the given values. 

double calculate_sum(double number1, double number2, double
	number3, double number4, double number5) {
	return number1 + number2 + number3 + number4 + number5;
}
	//Function: double calculate_mean(double sum, int num)
	//Description: Calculates the mean of given variable inputs (gpas, grade levels, ages)
	//Input: Double values, and integer value for total values (5)
	//Output: The mean of the given values. 

double calculate_mean(double sum, int num) {
	return sum / num; 
}
	//Function: double calculate_deviation(double number, double mean)
	//Description: Calculates the deviation of the gpa inputs.
	//Input: Double values (gpas), and integer value for total quantity of gpa values (5)
	//Output: The deviation of the each of the values. 

double calculate_deviation(double number, double mean) {
	return number - mean;
}
	//Function: double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number)
	//Description: Calculates the variation of each gpa value.
	//Input: Double values (deviation of each gpa), and integer value for total quantity of gpa values (5)
	//Output: The variance of all the gpas. 

double calculate_variance(double deviation1, double deviation2, double
	deviation3, double deviation4, double deviation5, int number) {
	
	return (pow(deviation1, 2) + pow(deviation2, 2) + pow(deviation3, 2) + pow(deviation4, 2) + pow(deviation5,2)) / (double)number;
}

	//Function: double standard_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number)
	//Description: Calculates the standard deviation of all the gpas. 
	//Input: The variance of the gpas.
	//Output: The standard deviation of the gpas.  

double calculate_standard_deviation(double variance) {
	return sqrt(variance); 
}

	//Function: double calculate_gpa_min(double number1, double number2, double number3, double number4, double number5)
	//Description: Finds the minimum gpa value from all the gpas. 
	//Input: Each gpa value.
	//Output: Determines which gpa is the minimum.  

double calculate_gpa_min(double number1, double number2, double number3, double number4, double number5) {
	double min = number1;
	if (number2 < min) {
		min = number2;
	}
	if (number3 < min) {
		min = number3;
	}
	if (number4 < min) {
		min = number4;
	}
	if (number5 < min) {
		min = number5;
	}
	return min;
}

	//Function: double calculate_gpa_max(double number1, double number2, double number3, double number4, double number5)
	//Description: Finds the maximum gpa value from all the gpas. 
	//Input: Each gpa value.
	//Output: Determines which gpa is the maximum.  

double calculate_gpa_max(double number1, double number2, double number3, double number4, double number5) {
	double max = number1;
		if (number2 > max){
			max = number2;
	}
		if (number3 > max) {
			max = number3;
		}
		if (number4 > max) {
			max = number4;
		}
		if (number5 > max) {
			max = number5;
		}
		return max;
}

