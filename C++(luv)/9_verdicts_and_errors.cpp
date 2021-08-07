// Common errors and reason for that error in Competitive Coding
// 1.Compilation error:- syntax error in program
// tip:-compile code locally on your machine
// 2. Memory Limit Exceeded(MLE) error:- memory taken while executing code is more than specified->e.g. global array size limit 10^7. If declared of size more than this will give MLE error.
// 3. Run-time error(error due to memory issue):- a) illegal access of memory(array-index access out of range) b) due to accessing NULL pointer(pointer pointing to nothing) c) undefined behaviour(division by zero->not allowed in C/C++)
// 4. Time Limit Exceeded(TLE) error:- TLE is limit on execution time(giving the input,execution and output of program is called execution time) and not compilation time(increasing size of program will increase compile time not execution time) e.g. delaring large size array(10^9) and execution it.

// TLE is measured using time complexity.(we will see in time complexity, how to write efficient codes so that no TLE error)

// NOTE:- #include<bits/stdc++.h> will increase compilation time(not execution time)

// 2 types of errors due to recursion:-
// 1) Run-time error(stack overflow but time not exceeded).Sometimes this will also show memory limit exceeded(MLE) error.
// 2) TLE error(stack is not full but time exceeded)

