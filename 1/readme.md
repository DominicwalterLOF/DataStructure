# AIM:
Aim is to write a program in C to implement the stack ADT using array concept that performs all the operations of stack.

# DESCRIPTION:
A stack data structure can be implemented using one dimensional array. But stack implemented using array, can store only fixed number of data values. This implementation is very simple,just define a one dimensional array of specific size and insert or delete the values into that array by using LIFO principlewith the help of a variable'top'. Initially top isset to -1. When ever we want to inserta value into the stack,increment the top value by one and then insert. When ever we want to delete a value from the stack, then delete the top value and decrement the top value by one.

# ALGORITHM:
STEP 1: Define an array to store the element.
STEP2: Get the users’ choice.
STEP3: If the option is 1 perform creation operation and go to step 4.
If the option is 2 perform insert i on operation and go to step 5. If the option is 3 perform deletion operation and goto step6.Iftheoptionis4performdisplayoperation andgotostep7.
STEP 4: Create the stack. Initially get the limit of stack and the get the items. If the limit ofstackis exceeds print the message unable to create the stack.
STEP 5: Get the element to be pushed. If top pointer exceeds stack capacity. Print Errormessage that the stack overflow. If not, increment the top pointer by one and store the element in the position which is denoted by top pointer.
STEP 6: If the stack is empty, then print error message that stack is empty. If not fetch theelementfromthepositionwhichisdenotedby toppointer anddecrementthetoppointer byone
STEP 7: If the top value is not less than the 0 the stack is display otherwise print the message“stackis empty”.
STEP 8: Stop the execution.
