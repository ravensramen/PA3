#include "header.h"

int main() {
	// Open the student records file
	FILE* records = fopen("input.dat", "r");
	// Open the out file for saving results
	FILE* results = fopen("output.dat", "w"); 

	//Initializes array variables for gpas, grade levels and ages. 
	double gpas[5] = {0.0};
	int levels[5] = { 0 };
	double ages[5] = { 0.0 };

	//Reads input file for integer and double values (of gpas, grade levels, and ages)
	for (int i = 0; i < 5; i += 1) {
		read_integer(records); 
		gpas[i] = read_double(records);
		levels[i] = read_integer(records);
		ages[i] = read_double(records);
	}

	//Use the calculate sum function to find the sum of gpas, grade levels, and ages

	double gpa_sum = calculate_sum(gpas[0], gpas[1], gpas[2], gpas[3], gpas[4]);

	int level_sum = calculate_sum(levels[0], levels[1], levels[2], levels[3], levels[4]);

	double age_sum = calculate_sum(ages[0], ages[1], ages[2], ages[3], ages[4]);

	//Use the calculate mean function to find the mean of gpas, grade levels, and ages
	//Print the result to the output data file (output.dat)
	double gpa_mean = calculate_mean(gpa_sum, 5);
	fprintf(results, "%.2lf\n", gpa_mean); 

	//Calculates the mean grade level by inputing each grade level and the total number of values (5)
	double level_mean = calculate_mean(level_sum, 5);
	fprintf(results, "%.2lf\n", level_mean); 

	//Calculates the mean age from the mean sum and the total number of values (5)
	double age_mean = calculate_mean(age_sum, 5);
	fprintf(results, "%.2lf\n\n", age_mean); 

	//Calculates the standard deviation for each gpa value. 
	double deviation[5] = { 0.0 };
	for (int i = 0; i < 5; i += 1) {
		deviation[i] = calculate_deviation(gpas[i], gpa_mean);
	}
	//Calculates variance by plugging in each deviation value into the variance function.
	double variance = calculate_variance(deviation[0], deviation[1], deviation[2], deviation[3], deviation[4], 5);
	//Calculates stantard deviation by plugging in each variance value.
	double standard_deviation = calculate_standard_deviation(variance);

	//Prints the standard deviation to the output file. 
	fprintf(results, "%.2lf\n", standard_deviation);

	//Calculates the minimum gpa by sending gpa values to max calculator function, writes result to output file.
	double gpa_min = calculate_gpa_min(gpas[0], gpas[1], gpas[2], gpas[3], gpas[4]);
	fprintf(results, "%.2lf\n", gpa_min);

	//Calculates the maximum gpa by sending gpa values to max calculator function, writes result to output file. 
	double gpa_max = calculate_gpa_max(gpas[0], gpas[1], gpas[2], gpas[3], gpas[4]);
	fprintf(results, "%.2lf\n", gpa_max);


	//Closes both input and output files
	fclose(results);
	fclose(records);

	//Indicates that program ran successfully
	return 0; 
}