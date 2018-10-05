# CS50 Week 3 - Algorithms

## Main Lecture and Computational Complexity
This lecture is more theoretical than anything, barely any programming show. Yes, there's plenty of pseudocode, but ultimately it's about understanding algorithms and how they're applied to programming.

An algorithm is a set of instructions, some are more complex than others and the more complex ones can take longer to complete. When it comes to small data-sets, a complex algorithm can greatly reduce runtime. But for something that contains millions or billions or even greater amounts of data, the differences aren't as noticeable.

The algorithms covered:

* Bubble Sort
* Selection Sort
* Insertion Sort
* Merge Sort
* Linear Search
* Binary Search

These algorithms have pros and cons. Some are faster, some more complex, etc. They each also have a worst-case and best-case scenario, this is respectively known as **Big O Notation** and **Big Omega Notation** in computer science. 

* O/Ω(1), which is constant output no matter the data-set size
* O/Ω(log n), moves at the logarithmic value of the variable
* O/Ω(n), moves at the rate of the variable
* O/Ω(n log n), moves at the variable times it's logarithmic value
* O/Ω(n^2 ), moves at the variable times itself

It's possible to go n^3 and so forth, if the algorithm truly is that complicated, but that's something rarely used. In a realistic setting, a notation less than O/Ω(n) rarely occurs since it's saying the algorithm is complete at a rate less than it's variable value. You'll see O/Ω(1) when the same value is printed out, no matter the variable; and O/Ω(log n) is used in binary search since the n value always decreases.

## Bubble Sort
This type of sorting "bubbles" the largest value out of the unsorted part of the data-set and puts it into the sorted part. 

It moves through the data-set, looking at two pairs, if the right value is greater than the left value, the right value moves one position to the right. This is repeated until the largest value is at the very end of the data-set, and now in the sorted section.

Now the data-set is one unit smaller in length, but the process repeats until every item is in the sorted section.

The worst-case scenario is O(n^2 ) since it first first has to go down the data-set n times, and move the pair n times.  
Best-case is Ω(n) since it will have to move down the data-set n times, and everything happens to already be sorted, no pair moving needed.

## Selection Sort
This algorithm goes down an unsorted data-set to look for the smallest sized element and adds it to the end of a sorted section. It's similar to bubble sort, except for looking at pairs, it looks at all the values in the data-set.

Worst-case scenario is O(n^2 ) since it has to look at data-set n times, then move the smallest sized element n times.  
Best-case is Ω(n^2 ) since it has to look at the data-set n-times, but even if everything is in the correct order it still needs to move the elements into the sorted section n times.

## Insertion Sort
Goes down the array and sorts each value one-by-one. The zero index will automatically be sorted since it's first, but if the next index is of a lower value, it will be sorted properly into place. This will go on until everything is sorted.

Worst-case is O(n^2 ) since it needs to move n times through the array, and sort the elements n times.  
Best-case is Ω(n) since it only needs to move once, but everything is already sorted.

## Merge Sort
This is has more steps than the other kinds of sorting, but it also has a more efficient Big O notation than the others. It works by splitting an array into left and right, splitting the left and right sides continuously until there's only one element left, then merging everything together.

An array of 8 elements will be broken down into a left array and a right array. The left array will have 4 elements, this can be split into another left and right array. Now these arrays can be further split into 4 arrays with one element each. These arrays are merged and sorted from smallest to greatest. The process is then repeated on the right array. It ends with the sorted left side merging with the sorted right side.

Even though there are more steps involved, worse case is O(n log n) because of the splitting of arrays.  
However, best case is also Ω(n log n) since the splitting and merging still occur even if the array is already in order.

## Linear Search
This is used when looking for a particular value. The algorithm says to move down the array from left-to-right until the value is found. 

Worst case is O(n) since the program needs to move n times until the value is found.
Best case is Ω(1) since the value might be instantly found in the first index.

## Binary Search
Using this search, the data-set is constantly divided in half until the value is found. But this needs to be sorted to work properly, so a sorting algorithm might need to run before a binary search.

It looks for the value in the middle of the data-set. If not found in the middle, the algorithm checks if the value is greater than or less than the middle value. If it's less than, the greater half is discarded. It checks in the middle again, and goes through the same process. This happens until a middle is found with the value.

Worst case is O(log n) since the size of n is decreasing thanks the discarding processing.  
Best case is Ω(1) if the value happens to be found right in the middle the very first time.