#include<stdio.h>

// Quicksort 
// this is a basic Quicksort program which deal with just one fixed input.
// for further descriptions content, refer http://zerojudge.tw/ShowProblem?problemid=d583



// swap two value of pointers
void swap(int* a, int* b){
}

/* Quicksort function recursively call self until input satisfy the termination condition
 the inputs of the quicksort are 
 1. data array
 2. left index
 3. right index

 Quicksort use divide and conquer 
 we first find a pivot as data[left]. 
 partition the interval [left, right] into two parts: bigger then pivot, smaller then pivot
 then swap the pivot with the most right element which is in the smaller part.

 the progress looks like:

	pivot,(elements)
	pivot,(element smaller),(element bigger)
	(element smaller),pivot,(element bigger)

	e.g. input array : {26, 13, 73, 31, 38} , left index: 0, right index: 4.
	1. we choose the left element as pivot(for simple)
	2. check the input, if left>right then terminate.
	3. from left+1 to right, find an element which is bigger than pivot hold it in i.
	4. from right to left, find an element which is smaller than pivot, hold it in j.
	5. if i<j, swap these two element 
	6. else swap the pivot element with the element(at j) which is smaller then pivot.
	7. call quicksort with the range of lefthandside (left partition, pivot not included)
	8. call quicksort with the range of righthandside (right partition, pivot not included)

*/ 

void quicksort(int *data, int left, int right){
	int pivot, i, j;
		
	if(left>right)
		return;
	
	//TODO 
	// hint while(1) with other while loop inside and break when condition achieve 
		
}


int main(){
	
	int i;
	
	// testcase 
	int array[10] = {26,5,37,1,61,11,59,15,48,19};
	
	// TODO print initisl array
	
	// TODO call quicksort

	// TODO print sorted array
	//	print init
	
	return 0;
}

