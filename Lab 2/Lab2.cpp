/*
 * CISC220 Lab2.cpp
 * TA: Lauren Olson
 * Created on: Feb 21, 2019
 * Author: Emily Evans
 * This file contains all the functions for lab 2, including the test cases in main and function declarations in beginning.
 * Help from Paul Ernst on select problems!
 */

#include <iostream>
#include <time.h>
using namespace std;


void starLine();
void varValAdd(); // Function declaration for 1
void addFour (int x); // Function declaration for 2
int randomNum(); //Function declaration for 3
void cubed(int *x); //Function declaration for 4
void aliasInt (int &x); //Function declaration for 5
void pointerMagic (int *m, int *n); //Function declaration for 6
void wordSwap(char p1, char *p2, char &p3); //Function declaration for 7
bool swapNumbers (int &x, int &y); // Function declaration for 8a
void loopTwenty(); //Function declaration for 8b
void printRandArray (int length, int &num); // Function declaration for 8
void reverseArray (int length); //Function declaration for 9
void smallNumOutFirst(int length, int range); // Function declaration for 10
int *stackVar (); //Function declaration for 11
void printArr(int arr[], int length); // Function declaration for 12
int* highLowArr(int *length, int *high, int *low); //Function declaration for 13
int* highLowArrStack(int *length, int *high, int *low); // Function declaration for 14
void arrayAddress(int arr[], int length); //Function declaration for 15
void doubleArrayAddress(double arr[], int length); // Function declaration for 16
int* removeDoubleIntArr(int arr[], int *length); // Function declaration for 17
int hanningWindow(int arr[], int windowSize); // Function declaration for 18
int *fullHanningWindow (int arr[], int len); // Function declaration for 19
void starGraph(int arr[], int length, int highest, int lowest); // Function declaration for 20
int **twoDimensionalArr (int *x, int *y); //Function declaration for 21


int main (){

	cout << "Test Case for Problem 1:" << endl;
	varValAdd();
	starLine();
	cout<< endl;


	cout <<"Test Case for Problem 2:" << endl;
	addFour (5);
	int x = 7;
	cout << "The value for variable x=" << x << endl; //call by value
	cout << "The address for variable x is: " << &x << endl;
	starLine();
	cout << endl; // added to make code easier to read


	cout <<"Test Case for Problem 3: " << endl;
	randomNum();
	int num = randomNum();
	cout << "The value of the random number is = " << num << endl;
	cout << "The address for the random number is: " << &num << endl;
	starLine();
	cout << endl; // added in to make code more readable


	cout <<"Test Case for Problem 4: " << endl;
	int number = 2;
	cout << "The value of variable number is: " << number << endl;
	cout << "The address of variable number is: " << &number << endl;
	cubed(&number);
	starLine();
	cout << endl;

	cout <<"Test Case for Problem 5: " << endl;
	int a = 3;
	cout << "The value of the variable is: " << a << endl;
	cout << "The address of the variable is: " << &a << endl;
	aliasInt(a);
	starLine();
	cout << endl;

	cout <<"Test Case for Problem 6: " << endl;
	int var1 = 10;
	int var2 = 20;
	pointerMagic (&var1, &var2);
	cout << "The value at var1 is now: " << var1 << endl;
	cout << "The value at var2 is now: " << var2 << endl;
	starLine();
	cout << endl;

	cout << "Test Case for Problem 7: " << endl;
	char e = 'c';
	char f = 'o';
	char g = 'f';
	char h = 'e';
	cout << "Here's the original word: "<< e << f << g << g << h << h << endl;
	wordSwap(e, &g, h);
	cout << "After swapping letters, the new word is: "<< e << f << g << h << endl;
	starLine();
	cout << endl;

	cout << "Test Case for Problem 8a: " << endl;
	int small1 = 2;
	int large1 = 5;
	int number1 = 8;
	int number2 = 4;
	cout << "First test Problem 8a: "<< endl;
	swapNumbers (large1, small1); /* large1 should be 5 here and small1 should be 2
	so the numbers should swap and large1 should equal 2 here and small1 should
	equal 5 */
	cout << "Second test Problem 8a: "<< endl;
	swapNumbers (number2, number1);
	cout << "Third test Problem 8a: " << endl;
	swapNumbers (small1, large1); /* because in the first test the two variables
									swapped values so small1 has the value 5
									now and large1 has the value 2 so the variables
									will swap again! */
	starLine();
	cout << endl;

	cout << "Test Case for Problem 8b: " << endl;
	srand(time(NULL)); //so that a random number is actually generated each time
	cout << "Test Case 1 for Problem 8b" << endl;
	loopTwenty();
	cout << endl;

	cout << "Test Case 2 for Problem 8b" << endl;
	loopTwenty();
	cout << endl;

	cout << "Test Case 3 for Problem 8b" << endl;
	loopTwenty();
	cout << endl;
	loopTwenty();

	starLine();
	cout << endl;
	cout << "Problem 8" << endl;
	cout << "Test Case 1 for Problem 8" << endl;
	int secondNum = -1;
	printRandArray (10, secondNum);
	cout << "The smallest value is: " << secondNum << endl;

	cout << endl;
	cout << "Problem 8" << endl;
	cout << "Test Case 2 for Problem 8" << endl;
	int secondNum2 = -1;
	printRandArray (22, secondNum2);
	cout << "The smallest value is: " << secondNum2 << endl;

	cout << endl;
	cout << "Problem 8" << endl;
	cout << "Test Case 3 for Problem 8" << endl;
	int secondNum3 = -1;
	printRandArray (5, secondNum3);
	cout << "The smallest value is: " << secondNum3 << endl;

	starLine();
	cout << endl;

	cout << "Problem 9 Test Cases: " << endl;
	cout <<"Problem 9 Test 1: " << endl;
	reverseArray (8);
	cout<<endl;
	cout <<"Problem 9 Test 2: " << endl;
	reverseArray (10);
	cout << endl;
	cout <<"Problem 9 Test 3: " << endl;
	reverseArray(15);
	starLine();
	cout << endl;


	cout << "Problem 10: " << endl;
	cout << "Test Case 1 for problem 10: " << endl;
	smallNumOutFirst(5, 40);
	cout << endl;

	cout << "Test Case 2 for problem 10: " << endl;
	smallNumOutFirst(8, 19);
	cout << endl;

	cout << "Test Case 3 for problem 10: " << endl;
	smallNumOutFirst(15, 88);
	cout << endl;
	starLine();


	cout << endl;
	cout << "Problem 11: " << endl;
	int *variableStack = stackVar();
	cout << "The address is: " << variableStack << endl;
	cout << "The variable is: " << *variableStack << endl;
	/*
	 *  Number 11 response: The code compiles however you cannot access the address of the variable of x because
	 *  x was created on the stack and once the function is called and runs it immediately is taken off the stack
	 *  so if an address is returned it is gibberish
	 */


	cout << endl;
	starLine();
	cout << endl;

	cout << "Test 1 for Problem 12b, using problem 12 function created: " << endl;
	int lengtharr1 = 25;
	int array1[lengtharr1];
	for (int i = 0; i < lengtharr1; i++){
		array1[i] = rand()%10+1;
	}
	printArr(array1, lengtharr1);

	cout << endl;
	cout << "Test 2 for Problem 12b, using problem 12 function created: " << endl;
	int lengtharr2 = 10;
	int array2[lengtharr2];
	for (int i = 0; i < lengtharr2; i++){
		array2[i] = rand()%10+1;
	}
	printArr(array2, lengtharr2);

	cout << endl;
	cout << "Test 3 for Problem 12b, using problem 12 function created: " << endl;
	int lengtharr3 = 40;
	int array3[lengtharr3];
	for (int i = 0; i < lengtharr3; i++){
		array3[i] = rand()%10+1;
	}
	printArr(array3, lengtharr3);

	starLine();
	cout << endl;

	cout << "Problem 13" <<  endl;
	cout << "Test 1 for Problem 13" << endl;
	int thirteenLengthArr;
	int high;
	int low;
	int *randomArrayThirteen = highLowArr(&thirteenLengthArr, &high, &low);
	printArr (randomArrayThirteen,thirteenLengthArr);
	cout << endl;

	cout << "Test 2 for Problem 13" << endl;
	int LengthArr;
	int high2;
	int low2;
	int *randArrThirteen = highLowArr(&LengthArr, &high2, &low2);
	printArr (randArrThirteen,LengthArr);
	cout << endl;

	cout << "Test 3 for Problem 13" << endl;
	int LengthArr3;
	int high3;
	int low3;
	int *randArrThirteenThree = highLowArr(&LengthArr3, &high3, &low3);
	printArr (randArrThirteenThree,LengthArr3);
	cout << endl;

	starLine();
	cout << endl;
	cout << "Test Cases for Problem 14" << endl;
	cout << "Test 1 for Problem 14" << endl;
	int length14a = 0;
	int high14a = 0;
	int low14a = 0;
	int *arrayOnStack1 = highLowArrStack( &length14a,&high14a,&low14a);
	printArr(arrayOnStack1, length14a);

	cout << endl;
	cout << "Test 2 for Problem 14" << endl;
	int length14b = 0;
	int high14b = 0;
	int low14b = 0;
	int *arrayOnStack2 = highLowArrStack( &length14b,&high14b,&low14b);
	printArr(arrayOnStack2, length14b);

	cout << endl;
	cout << "Test 3 for Problem 14" << endl;
	int length14c = 0;
	int high14c = 0;
	int low14c = 0;
	int *arrayOnStack3 = highLowArrStack( &length14c,&high14c,&low14c);
	printArr(arrayOnStack3, length14c);

	/* problem 14 won't print out accurate numbers because you have your array on the stack and once the function has
	 * run then it will be taken off the stack and any arrays or variables made are gone so you get back rubbish
	 */

	starLine();
	cout << "Problem 15 Tests: " << endl;
	cout <<"Problem 15 Test Case 1:" << endl;
	int arrTest1[] = {2,3,3,5,4,2,2,3};
	arrayAddress(arrTest1, 8);
	cout << endl;

	cout <<"Problem 15 Test Case 2:" << endl;
	int arrTest2[] = {3,35,5,3,54,3,4534,5,23,4,234};
	arrayAddress(arrTest2, 11);
	cout << endl;

	cout <<"Problem 15 Test Case 3:" << endl;
	int lenArrTest3 = 50;
	int arrTest3[lenArrTest3];
	for (int i = 0; i < lenArrTest3; i++){
		arrTest3[i] = rand()%22;
	}
	arrayAddress(arrTest3, lenArrTest3);
	cout << endl;

	starLine();
	cout << endl;

	cout << "Problem 16 Test Cases: " << endl;
	cout << "Problem 16 Test Case 1: " << endl;
	double arraySixteen1 [] = {13.5, 18.4, 19.6, 21.4};
	doubleArrayAddress(arraySixteen1, 4);
	cout << endl;

	cout << "Problem 16 Test Cases: " << endl;
	cout << "Problem 16 Test Case 2: " << endl;
	double arraySixteen2 [] = {99.9,86.5,87.2,65.4,12.1,21.2,22.0};
	doubleArrayAddress(arraySixteen2, 7);
	cout << endl;

	cout << "Problem 16 Test Cases: " << endl;
	cout << "Problem 16 Test Case 3: " << endl;
	double arrSixteenThree [] = {3.3,4.4,6.5,7.8,9.9,10.1,12.3,14.5, 18.9, 20.5,43.2};
	doubleArrayAddress(arrSixteenThree, 11);

	cout << endl;
	starLine();

	cout << "Problem 17" << endl;
	cout << "Test Case 1 for problem 17: " << endl;
	int doublesArr[] = {5,4,4,3,6,6,6,8,9,5,1,3,8,8,1,8,9,9,3,2,2,2,6,1,2};
	int lengthSeventeen = 25;
	removeDoubleIntArr(doublesArr, &lengthSeventeen);

	cout << endl;
	cout << "Test Case 2 for problem 17: " << endl;
	int doublesArr2[] = {5,4,4,3,6,6,6,8,9,5,1,3,8,8,1};
	int lengthSeventeen2 = 15;
	removeDoubleIntArr(doublesArr2, &lengthSeventeen2);

	cout << endl;
	cout << "Test Case 2 for problem 17: " << endl;
	int doublesArr3[] = {5,4,4,3,6,6,6,8,7,6,4,2,2,3,3,3,3,3,3,9,5,1,3,8,8,1};
	int lengthSeventeen3 = 26;
	removeDoubleIntArr(doublesArr3, &lengthSeventeen3);

	starLine();
	cout << "Problem 18" << endl;
	cout << "Problem 18 Test Case 1: " << endl;
	int arrForHanning[] = {3,8,2,5,1,4,6,0,2};
	int length = 9;
	cout << "The array used for Hanning Window: ";
	printArr (arrForHanning, length);
	cout << "The weighted and average value is: " << hanningWindow (arrForHanning, length) << endl;

	cout << endl;
	cout << "Problem 18 Test Case 2: " << endl;
	int arrForHanning2[] = {3,8,2,5,1};
	int length2 = 5;
	cout << "The array used for Hanning Window: ";
	printArr (arrForHanning2, length2);
	cout << "The weighted and average value is: " << hanningWindow (arrForHanning2, length2) << endl;

	cout << endl;
	cout << "Problem 18 Test Case 3: " << endl;
	int arrForHanning3[] = {6,5,4,3,2,7,2,2,5};
	int length3 = 9;
	cout << "The array used for Hanning Window: ";
	printArr (arrForHanning3, length3);
	cout << "The weighted and average value is: " << hanningWindow (arrForHanning3, length3);

	cout << endl;
	starLine();

	cout <<"Problem 19" << endl;
	cout << "Test Case 1 for Problem 19: " << endl;
	int arr19a [] = {3,8,2,5,1,4,6,0,2};
	int len19a = 9;
	cout << "The original array is: " << endl;
	for (int i = 0; i < len19a; i++){
		cout << arr19a [i] << ", ";
	}
	cout << endl;

	int *fullHanningWind = fullHanningWindow (arr19a, len19a);
	cout << "The full Hanning Window is: " << endl;
	for (int i = 0; i < len19a; i++){
			cout << fullHanningWind[i] << ", ";
	}

	cout << endl;

	cout << endl;
	starLine();

	cout << "Problem 20" << endl;
	cout << "Test Case 1 for problem 20: " << endl;
	int arr20a[] = {2,4,5,7,3,7,8,-1,8,9,4,2};
	int length20a = 12;
	int highest20a = 9;
	int lowest20a = -1;
	starGraph(arr20a, length20a, highest20a, lowest20a);
	cout << endl;

	cout << "Test Case 2 for problem 20: " << endl;
	int arr20b[] = {3,4,5,5,7,4,2,2,4,4,7,6,4,2};
	int length20b = 14;
	int highest20b = 7;
	int lowest20b = 2;
	starGraph(arr20b, length20b, highest20b, lowest20b);
	cout << endl;

	cout << "Test Case 3 for problem 20: " << endl;
	int arr20c[] = {-13,-4,5,5,7,4,2,22,4,-8,7,-5,4,2};
	int length20c = 14;
	int highest20c = 22;
	int lowest20c = -13;
	starGraph(arr20c, length20c, highest20c, lowest20c);
	cout << endl;
	cout << endl;
	starLine();

	int num21a = 2;
	int num21b = 1;
	cout << "Problem 21 Test Cases: " << endl;
	cout << "Problem 21 Test Case 1" << endl;
	int **twoDimensionalArray = twoDimensionalArr(&num21a, &num21b);
	for (int i = 0; i < num21a; i++){
		printArr(twoDimensionalArray[i],num21b);
	}
	cout << endl;
	cout << "Problem 21 Test Case 2" << endl;
	int **twoDimensionalArray2 = twoDimensionalArr(&num21a, &num21b);
	for (int i = 0; i < num21a; i++){
		printArr(twoDimensionalArray2[i],num21b);
	}

	cout << endl;
	cout << "Problem 21 Test Case 3" << endl;
	int **twoDimensionalArray3 = twoDimensionalArr(&num21a, &num21b);
	for (int i = 0; i < num21a; i++){
		printArr(twoDimensionalArray3[i],num21b);
	}
}


/* included code from lab 1 to use as a divider between problems
 * Purpose: creates a line of stars
 */
void starLine(){
	cout << "*****************************************"\
			"*****************************************" << endl;
}

/* Problem 1
 * Input: none
 * Purpose: Showing what learned in class about how you can display
 * the value and the address of where a variable is stored in memory
 *  */
void varValAdd(){
	int num = 6;
	cout <<"The value of the variable is: " << num << endl;
	cout <<"The address of the variable is: "<< &num << endl;
} // end of problem 1


/* Problem 2
 * Input: Any integer
 * Output: nothing
 * Purpose: will print out the value and address of the number
 * that was input and add 4 to the value
 * */
void addFour(int x){
	int num = x+4; // call by value
	cout << "The value is now: " << num << endl;
	cout << "The address of the value is: " << &num << endl;
}

/* Problem 3
 * Input: none
 * Output: integer (the random number between 0 and 50 not including 50)
 * Purpose: using random number generator, it will output a number
 * between 0 and 50 not including 50 and print it out
 *  */
int randomNum(){
	srand(time(NULL));
	int randNum = rand()%50;
	cout << "The random number is: " << randNum << endl;
	cout << "The address of the random number is: " << &randNum << endl;
	return randNum;
}

/* Problem 4
 * Purpose: Using call by pointer so that the function can take
 * an address as input, will cube the value that is located at the
 * address put in the parameter
 * Input: pointer variable
 * Output: none, will print out what function chooses
 * */
void cubed(int *x){
	*x = (*x) * (*x) * (*x);
	cout << "The value is: " << *x << endl; //the original value in address that x points to
	cout << "The address in the parameter is: " << x << endl; //the address of the original value that x points to
	cout << "The address of the parameter is: " << &x << endl; //the address of x itself
}

/* Problem 5
 * Purpose: Call by reference to get the value of a variable where you can
 * change it outside the function
 * Input: the alias to the variable you're referencing
 * Output: no output
 * */
void aliasInt (int &x){
	srand(time(NULL));
	int num = rand()%10; // so that you get a random number between 0 and 10
	x += num;
	cout << "The random number is: " << num << endl; //this is the random number generated
	cout << "The new value is: " << x << endl; // add the random number to the parameter
	cout << "The address of the input parameter is: " << &x << endl;
}

/* Problem 6
 * Input: two integer addresses
 * Output: none
 * Purpose: Calling by pointer, within the function you create a variable
 * that points to the first integer address and then changes the value at
 * the first integer, then you reassign p to the second address and give the
 * second address a new value
 * */
void pointerMagic (int *m, int *n){
	int *p = m;
	*p = 32;
	p = n;
	*p = 42;
}

/* Problem 7
 * Input: In order!!(call by value, call by pointer, call by reference)
 * Output: nothing
 * Purpose: Created a function that uses call by pointer, call by value, and
 * call by reference to swap some letters and create a new word
 * */
void wordSwap(char p1, char *p2, char &p3){
	p1 = 'c'; // used call by value
	*p2 = 'p'; // used call by pointer to change the value
	p3 = 'y'; //used call by reference to change the variable
}

/* Problem 8a
 * Input: two variable addresses called by reference
 * Output: a boolean value of either true if values swapped and false otherwise
 * Purpose: Swap two integer values using Call by reference if the first integer is
 * larger than the second, otherwise, doesn't swap the two. Want the variables to stay
 * changed outside of the function
 * */
bool swapNumbers (int &x, int &y){
	if (x > y) {
		int temp = x;
		x = y;
		y = temp;
		cout << "The values have swapped!" << endl;
		return true;
	}
	else {
		cout << "Values are unchanged" << endl;
		return false;
	}
}

/* Problem 8b
 * Input: none
 * Output: The random numbers generated and the result if numbers switched
 * Purpose: This function loops 20 times. Each time generating 2 random numbers
 *  between 0 and 25. It should then print out those 2 numbers. It should then
 *   call function 8a, swapNumbers. If the values are swapped in 8a, it should
 *   print out the swapped values.
 * */

void loopTwenty (){
	srand(time(NULL));
	for (int i = 0; i < 20; i++){
		cout << "This is loop " << i << endl;
		int randNumOne = rand()%26; //makes sure random number is generated between 0 and 25
		int randNumTwo = rand()%26;
		cout << "The first random number is: " << randNumOne << " The second random "\
				"number is: " << randNumTwo << endl;
		if (swapNumbers (randNumOne, randNumTwo) == true){
			cout << "The numbers swapped! The first number is now: " << randNumOne;
			cout << " The second number is now: " << randNumTwo << endl;
		}
	}
}

/* Problem 8
 * Input: The first input is a length of type int and the second is a num that will be modified using call by reference
 * Output: none
 * Purpose: To print out the whole array and also the smallest value in the array
 * */
void printRandArray (int length, int &num){
	srand(time(NULL));
	int randArr[length];

	cout << "The array is: ";
	for (int i = 0; i < length;i++) {
		randArr[i] = rand()%50 +1;

		if (i == 0){
			num = randArr[i];
			cout << randArr[i] << ", ";
		}
		else{
			cout << randArr[i] << ", ";
			if(randArr[i]<num){
				num = randArr[i];
			}
		}
	}
	cout << endl;
}

/* Problem 9
 * Input: an integer that you want the length of the array to be
 * Output: nothing function prints out the array
 * Purpose: To create an array the length of the number in the parameter full of random integers
 * and then reversing the print out of the numbers in the array
 * */
void reverseArray (int length){
	int arr[length];
	int start = 0;
	int end = length-1;
	cout << "The original array is: ";
	for (int i=0; i <length; i++){
		arr[i] = rand() %51;
		cout <<arr[i] << ", ";
	}

	cout << endl;
	cout << "The reversed array is: ";
	while(start < end){
			int temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
			cout << arr[start]<< ", ";
			start++;
			end--;
		}
	for (start; start < length; start++) {
	    cout << arr[start] << ", ";
	}
	cout << endl;
}

/* Problem 10
 * Input: the first integer is the length of the array and the second integer is the range of
 * numbers the random number should generate
 * Output: none
 * Purpose: The function then sorts the list by traversing the list, locating the smallest number, and
 * printing out that smallest number, then replacing that number in the array with the second parameter +1
 * */
void smallNumOutFirst(int length, int range) {
	int arr [length];
	int smallest;
	int smallestIndex;

	cout << "The original array is: " << endl;
	for (int i = 0;i < length; i++){
		arr[i] = rand()%range;
		cout << arr[i] << ", ";
	}
	cout << endl;

	cout << "The sorted array is: " << endl;
	for (int i = 0; i < length;i++) {
		smallest = arr[0];
		for (int j = 0; j < length; j++){
			if (smallest >= arr[j]){
				smallest = arr[j];
				smallestIndex = j;
			}
		}
		cout << smallest << ", ";
		arr[smallestIndex] = range +1;
	}
	cout << endl;
}
/* Problem 11
* Input: none
* Output: returns the address of variable x
* Purpose: To show that the call from main won't work because the variable will be garbage after function is run because
 * created on the stack
 * */
int* stackVar (){
	int x = 3;
	cout << "The value of the variable in the function is: " << x << endl;
	cout << "The address of the variable in the function is: " << &x << endl;
	return &x;
}

/* Problem 12
 * Input: An array of integers and the second variable should be the length
 * Output: Nothing
 * Purpose: Function to be used in later parts of the project it will print out each item in an array
 * */
void printArr(int arr[], int length) {
	for (int i = 0; i < length; i++){
		cout <<arr[i] << ", ";
	}
	cout << endl;
}

/* Problem 13
 * Input: The length, low value, and high value using call by pointer
 * Output: the randomly generated array
 * Purpose: The array will use problem 12's function to print out the random array
 * generated by problem 13 which alternates amongst random high and low values and
 * prints them out in a list order because the array is set to the stack the values are available
 * outside of the function
 * */
int* highLowArr(int *length, int *high, int *low){
	*length = rand() %50 +25;
	*high = rand()%10 +5;
	*low = (rand()%5 )*(-1) -5;
	int *array = new int[*length];
	for(int i =0; i < *length; i++){
		array[i] = rand() % (*high-*low) - *high;
	}
	return array;
}

/* Problem 14
 * Input: The length, low value, and high value using call by pointer
 * Output: will output an array, but an array of garbage because you're trying to return values that no longer exist outside the function
 * because they were made on the stack
 * Purpose:
 * */
int* highLowArrStack(int *length, int *high, int *low){
	*length = rand() %50 +25;
	*high = rand()%10 +5;
	*low = (rand()%5 )*(-1) -5;
	int array[*length];
	for(int i =0; i < *length; i++){
		array[i] = rand() % (*high-*low) - *high;
	}
	return array;
}


/* Problem 15
 * Input: An array of ints and its length
 * Output: just printing out the addresses of each value in array, but is not returning anything
 * Purpose: showing what the addresses print out of a int in an array
 * */
void arrayAddress(int arr[], int length){
	for (int i = 0; i <length; i++){
		cout << &arr[i] << ", ";
	}
	cout <<endl;
}

/* Problem 16
 * Input: will take in a double array and the length of the double array
 * Output: nothing, but prints out the address of each item in array
 * Purpose: showing how to print out address of double int in array
 * */
void doubleArrayAddress(double arr[], int length){
	for (int i = 0; i <length; i++){
		cout << &arr[i] << ", ";
	}
	cout <<endl;
}

/* Problem 17
 * Input: an array of integers and it should have a length using the call by value
 * Output: the new array that is created without the duplicates of the numbers
 * Purpose: The function will cycle through the given array and check that the array value is
 * not the same as the next and if it's not the same as the next it will add it to the new
 * array located on the heap, if it is the same it won't add it to the new array
 * */
int* removeDoubleIntArr(int arr[], int *length){
	int newLength = *length;
	int *newArr = new int[newLength];
	int counter = 0;

	for (int i = 0; i < *length; i++){
		if (arr[i] != arr[i+1]){
			newArr[counter] = arr[i];
			counter++;
		}
	}
	printArr(newArr, counter);
	return newArr;
}

/* Problem 18
 * Input: a given array of ints and the window size that you're going to use to determine the multiplier
 * Output: the weighted and average value
 * Purpose: used to lead into problem 19
 * */
int hanningWindow(int arr[], int windowSize){ // you are getting in the array and provided a window size
	int total = 0;
	int nums = 0;
	for (int i = 0; i < windowSize; i++){
		if (i < windowSize/2){
			total += arr[i] * (windowSize - i +2);
			nums += (windowSize - i + 2);
		}
		else {
			total += arr[i] * (i +1);
			nums += (i +1);
		}
	}
	return total/nums; // returns the weighted and averaged value
}

/* Problem 19
 * Input: An array and the length of the array
 * Output: the newly created array on the heap that contains the Hanning window values
 * Purpose: This function will output the hanning window and uses the hanning window function from 18 to do each window
 * */
int *fullHanningWindow (int arr[], int len){
	int window = (len+1)/2;
	int zeroes = len/2;
	int *newArr = new int[len];

	for (int i = 0; i < len; i++){
		if (i < zeroes || zeroes > (len - i -1)){
			newArr[i] = 0;
		}
		else {
			newArr[i] = hanningWindow(&arr[i-zeroes], window);
		}
	}
	return newArr;
}

/* Problem 20
 * Input: Takes 4 inputs an array, the length of the array, highest value in the array, lowest value in the array (in order)
 * Output: nothing, but stars and a graph will be printed out
 * Purpose: The function will print out each number (the positive value to negative) will be the amount of rows
 * the function will print out an * wherever the number corresponds to the number in the array
 *
 * */
void starGraph(int arr[], int length, int highest, int lowest){
	for (int i = 0; i <= (highest-lowest); i++){
		cout << highest - i << ":";
		for (int j = 0; j < length; j++){
			if (arr[j]==highest-i){
				cout <<"*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}

/* Problem 21
 * Input: Two integer addresses that are both call by pointer which means need *
 * Output: The two dimensional array that is created and then replaced with 5 spots having a 1 on the two dimensional array
 * Purpose: Creating a two dimensional array where the random x pointer value will be a number between 5 and 10, the y pointer
 * will be a number between 4 and 8. Using call by pointer will allow the main function variables to be changed according to
 * the value of the pointer
 *
 * */
int **twoDimensionalArr (int *x, int *y){
	*x = rand() %5 +5;
	*y = rand() %4 +4;
	int **twoDimensional = new int *[*x]; //two dimensional array is an array of arrays
	for (int i = 0; i < *x; i++) {
		twoDimensional[i] = new int [*y]; //so that you go within the first created array and add in array in each
		for (int j = 0; j < *y; j++){
			twoDimensional[i][j] = 0; //this step fills the array with zeroes
		}
	}

	int xspot = 0; //initializing variables so that they can be randomly generated as spot on the array
	int yspot = 0;

	for (int k = 0; k < 5; k++){
		xspot = rand()% *x;
		yspot = rand()% *y;

		if (twoDimensional[xspot][yspot] == 0){
			twoDimensional[xspot][yspot] = 1;
		}
		else {
			k--; //decrease k if you happen to hit the same random spot
		}
	}
	return twoDimensional;
}
