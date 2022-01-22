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
Merge sort uses Divide and conquer algorithm to sort the elements in a list, to brief it, the given list is splited into two halves, and then merges the sorted two halves in to one, making a single list. Let's take a look at the program, here unlike bubble sort instead of using member functions from a class, directly functions are used and a global function name merge is declared in prior. The creation of an array are declared inside the main function and it is also used to display the sorted array from the _*merge_sort()*_ function. This program consists of two functions namely the _*merge()*_ and the merge_sort function, the merge function is responsible for the sorting and the merge_sort function is used to divide the unsorted array into two halves and then merge them once sorted. The merge sort figure is displayed below :
<img src='https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif'  align='center' alt="Merge sort" height=300 width=1000>
The complexity analysis of merge sort algorithm is given as:
* Time complexity :
The best case, the worst case and the average case time complexity are same since merger sort performs the same number of operations for any input array of a given size (Θ(N log N))
* Space complexity :
The space complexity of merge sort algorithm is (Θ(N))
<br/>

**3. Quick sort :**
<br/>
Quick sort is similar to merge sort since it uses the same the divide and conquer algorithm to sort the elements in a list, but the only difference is that it selects an pivot element instead of using the mid element, there are many different ways to select a pivot element from the list, some of them are as follows:
* Pick first element as pivot
* Pick second element as pivot
* Pick a random element from the list as pivot
* Pick mid element as pivot

Thinking of it, in my program, I have used the first element as pivot and it consists of three functions, _*quicksort()*_ function, _*quick()*_ function and _*swap()*_ function. The list is created and declared inside the main function, once it is declared it is sent to the quicksort function, where the array is divided into several subarrays and each subarrays has its own pivot element. The pivot element is selected and the elements which is smaller than the pivot element are sent to the left side where the other elements are sent to the right side. Then subarrays are created and the process is repeated like a recursion and then the elements in the list are sorted, this is how the quick sort algorithm works.
<img src='https://upload.wikimedia.org/wikipedia/commons/9/9c/Quicksort-example.gif' align='center' alt="Quick sort" height=300 width=1000>

The complexity analysis of merge sort algorithm is given as:

* Time complexity :
The worst case scenario, when the array is sorted and we choose the leftmost element as pivot, or the array is reverse-sorted and we choose the rightmost element as pivot (Θ(N^2))
The best case for quick-sort happens when we successfully pick the median element for partitioning every time (Θ(N log N))
* Space complexity :
The worst case of the quick sort algorithm happens when the pivot element is the largest or smallest element of the array in every recursive call (Θ(N))
The best case happens when the pivot element’s correct position in the partitioned array is in the middle every time. (Θ(log N))
<br/>

**4. Selection sort :**
<br/>
The selection sort starts with the first element in the list and repeatedly searches for the element which is smaller than it and swaps if it founds an element smaller than it else fixes the position of the current element and moves to next element and repeats the same process, until the list is sorted, this is how selection sort works. Coming to the coding part, it is quiet similar to the bubble sort algorithm, it contains a class with three member functions _*getdata()*_, _*putdata()*_ and _*display()*_. The getdata function is where the list is created, the putdata function is responsible for the selection sort and the display function is simply used to print the sorted array to the output screen.
<img src='https://i2.wp.com/algorithms.tutorialhorizon.com/files/2019/01/Selection-Sort-Gif.gif?ssl=1' align='center' alt="Selection sort" height=300 width=1000>

The complexity analysis of merge sort algorithm is given as:

* Time complexity :
The best case, the average case and the worst case are all same since we perform the same number of comparisons for an array of any given size (Θ(N^2))
* Space complexity :
The space complexity of the selection sort algorithm is (Θ(1))
<br/>
