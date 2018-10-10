/* Project: Sorting
 * File: data_generation.cpp
 * Author: Yu Wang
 * Date: Oct, 2018 */

#include <iostream>
#include <stdlib.h>

using namespace std;

#define CHECK_RAND 
#define IA 1103515245u
#define IC 12345u
#define IM 2147483648u
static unsigned int currentRandom = 0;

int my_random_int(int intMax);

int* generate_data(int num_of_data)
{
	int i;
	int *data;
	
	data = (int *)malloc(sizeof(int) * num_of_data);
	if(!data){
		cout << "ERROR: Memory alloction failed!" << endl;
		exit(-1);
	}else{	// Initialization by 0
		for(i = 0; i < num_of_data; i++){
			data[i] = 0;
		}
	}
	
	for(i = 0; i < num_of_data; i++){
		data[i] = my_random_int(num_of_data / 10);
	}
	
	return(data);
}

int my_random_int(int intMax)
{
	int	intVal;

	currentRandom = (currentRandom * IA + IC) % IM;
	intVal = currentRandom & (IM - 1);
	intVal = (int)((float)intVal * (float)(intMax + 0.999) / (float)IM);

#ifdef CHECK_RAND
	if((intVal < 0) || (intVal > intMax)){
		cout << "ERROR: Wrong value from my_random_int():" << endl;
		cout << "imax = " << intMax;
		cout << " ival = " << intVal << endl;
		exit(-1);
	}
#endif

	return(intVal);
}
