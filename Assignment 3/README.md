<h1>  </h1>

<h2> Difference between normal variables and pointers </h2>
A normal variable stores data value eg: 10, 'A', 3.14 while a pointer variable stores memory addresses 
eg: 0x7ffc3eb2ecc4
Normal variables are accessed directly by its name, eg: x= 5 while pointer variables are accessed by
dereferencing the pointer eg: *p = 5


<h2> Declaration and definition in variables and pointers </h2>

<h3>Variables declaration / definition:</h3>
```c++
    int x = 20
```
The above snipped allocates 4 bytes of memory and stores the value 10 there

<h3>Pointer declaration / definition:</h3>
```c++
    int *p = &x
```
int *p declares p as a pointer to an integer
&x is the Address-of-Operator which retrieves the location of x.

In a declaration: int *ptr tells the compiler "this variable is a pointer"
</br>
In an expression, *ptr = 20; it is the dereference operator meaning "the value pointed to by"

<h2> Understanding dereferencing </h2>
Dereferencing is the act of following the address stored in a pointer to access the data located there. </br>
Example:

```c++
int score = 100;    //variable
int *pScore = &score;   //Poiner stores address of score

//Dereferencing to read:
printf("%d", *pScore);  //Outputs 100

//Dereferencing to modify:
*pScore = 150;
```

<h2> Use Cases (Why use pointers?) </h2>
Pointers are preferred over normal variables when you need to manage memory manually or efficiently </br>
Example use cases:
<ul>
    <li>
    Dynamic Memory Allocation: When you don't know how much memory you need until the program is running (e.g., creating an array of a size the user chooses). You use pointers with malloc() or new.
    </li>
    <li>
    Efficient Data Handling: Instead of passing a massive image file (megabytes of data) into a function (which creates a slow copy), you pass a 4-byte or 8-byte pointer to that image
    </li>
</ul>

<h2>Limitations and risks of pointers</h2>
<ul>
    <li>
    Uninitialized Pointers: If you create int *p; and try to use it before assigning an address, it points to a random memory location, causing a Segmentation Fault.
    </li>
    <li>
    Memory Leaks: If you allocate memory dynamically and lose the pointer to it, that memory is "lost" to the system until the program restarts.
    </li>
    <li>
    Dangling Pointers: When you delete the data a pointer was looking at, but the pointer still holds that old address.
    </li>
</ul>

<h2>Call by value and call by reference</h2>
This describes how we pass information into functions.

<h3> Call by Value: </h3>
A copy of the variable is passed. Changes made inside the function do not affect the original variable.

Example: 

```c++
void addOne(int x) 
{ 
    x++; 
}
```

(Original stays the same).

<h3> Call by Reference: </h3>

(Via Pointers): The address is passed. The function uses that address to modify the original variable directly.

Example: 

```c++
    void addOne(int *x) 
    { 
    (*x)++; 
    }
```
(Original is updated).

<h2> Choosing between call by value and call by reference </h2>

<h3> Call by value </h3>
Call by value is preferred when:
<ul>
    <li>
        The data is small (like an int or char).
    </li>
    <li>
        You want to protect the original data from being accidentally changed by the function.
    </li>
    <li>
        You are performing simple calculations that don't need to be saved back to the original source.
    </li>
</ul>


<h3> Call by reference </h3>
Call by reference is preferred when:
<ul>
    <li>
        You are passing large structures or classes (to save memory and time).
    </li>
    <li>
        The function needs to "return" more than one value (you pass in multiple pointers and the function updates them all).
    </li>
    <li>
        The primary purpose of the function is to modify the input (like a sort() function).
    </li>
</ul>