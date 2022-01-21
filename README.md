# Sorting-Algorithms
Sorting algorithms repository consists of algorithms that is used to sort the numerical elements of an list using c++ language. This repository includes:

* Bubble sort
* Merge sort
* Quick sort
* Selection sort
<br/>

**1. Bubble sort :**
<br/>
Bubble sort is one of the most important and simple sorting algorithm, the working of bubble sort is nothing but it compares each of the element with its adjacent element and swaps if the right element is greater than the left element, based on your choice. As per my code file, a class named normal is created where all the variables and the member functions are created, these member functions are defined outside the class using the scope resolution operator. A function named getdata is used to create the list where all the elements are stored, once it is created the list is sent to the putdata function where the bubble sort works on the list and then the sorted list is displayed using the display function. The graphical representation of the bubble sort algorithm is as follows :
<img src='https://www.programmingsimplified.com/images/c/bubble-sort.gif' align='center' alt="Bubble sort" height=300 width=1000>
The complexity analysis of bubble sort algorithm is given as:
* Time complexity :
The best case time complexity occurs when the list is already sorted (Θ(N))
The worst case time complexity occurs when the list is reversely sorted (Θ(N^2))
* Space complexity :
The space complexity of the bubble sort algorithm is (Θ(1))
<br/>

**2. Merge sort :**
<br/>
Merge sort uses Divide and conquer algorithm to sort the elements in a list, to brief it, the given list is splited into two halves, and then merges the sorted two halves in to one, making a single list. Let's take a look at the program, here unlike bubble sort instead of using member functions from a class, directly functions are used and a global function name merge is declared in prior. The creation of an array are declared inside the main function and it is also used to display the sorted array from the _*merge_sort()*_ function. This program consists of two functions namely the _*merge()*_ and the _*merge_sort()*_ function, the _*merge()*_ function is responsible for the sorting and the _*merge_sort()*_ function is used to divide the unsorted array into two halves and then merge them once sorted. The merge sort figure is displayed below :
<img src='https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif'  align='center' alt="Merge sort" height=300 width=1000>
The complexity analysis of merge sort algorithm is given as:
* Time complexity :
The best case, the worst case and the average case time complexity are same since merger sort performs the same number of operations for any input array of a given size (Θ(N log N))
* Space complexity :
The space complexity of merge sort algorithm is (Θ(N))
<br/>

**3. Quick sort :**
<br/>
