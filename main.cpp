/* Project: Sorting
 * File: main.cpp
 * Author: Yu Wang
 * Date: Oct, 2018 */

#include <iostream>
#include "sorting.h"

int main()
{	
	struct RunTime {
		double insert_sort;
		double shell_sort;
		double heap_sort;
		double merge_sort;
		double quick_sort;
	}run_time;
	float *data;
	int num_of_data = 10000;

	/* Create the 10K float point numbers randomly for sorting */
	data = generate_float_data(num_of_data);

	/* sorting with different methods and return their running times */
	run_time.insert_sort = insertion_sort(data, num_of_data);
	run_time.shell_sort = shell_sort(data, num_of_data);
	run_time.heap_sort = heap_sort(data, num_of_data);
	run_time.merge_sort = merge_sort(data, num_of_data);
	run_time.quick_sort = quick_sort(data, num_of_data);

	/* display the running times of the different sorting methods */
	cout << "Running time:" << endl;
	cout << "* Insertion sort:\t" << run_time.insert_sort << "s" << endl;
	cout << "* Shell sort:\t" << run_time.insert_sort << "s" << endl;
	cout << "* Heap sort:\t" << run_time.insert_sort << "s" << endl;
	cout << "* Merge sort:\t" << run_time.insert_sort << "s" << endl;
	cout << "* Quick sort:\t" << run_time.insert_sort << "s" << endl;

	return 1;
}
