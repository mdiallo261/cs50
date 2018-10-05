# Algorithm Summary

## Bubble Sort

### Summary
It goes index-by-index through the entire array. It compares the indices in pairs: **A** and **B**, **B** and **C**, **C** and **D**, and so forth as it goes through the array.  
If the value in **A** is greater than the value in **B**, **A** moves one position to the right. Now it gets compared to the value in **C**. If it's greater than **C**, it moves to the right again, or if it's less it stays in position.  
Now **C** gets compared to **D** and so forth.  
This happens until the largest value in the array gets pushed to the end. The process is repeated, with the last index(+1 after the first time) being ignored each time (*since it's sorted out*), until it's sorted.

### Steps

*A counter, starting at a value other than 0, runs during the sort. It sets itself to 0 at the beginning of each loop iteration. If an index moves forward one position, the counter increments by 1.*  
*This counter lets us know when the bubble sort algorithm should stop running. The algorithm ends when the counter value is 0 at the end of the loop. That means no index changed position, which means the array is sorted*

1. Move through array, index-pair by index-pair.
2. If the left index is of a greater value than the right index, move the left index one position forward. 
3. But if the left index is of a lesser value, it stays in place.
4. Now the current right index is compared with the index to its right.
5. Repeat steps **2** and **3** for this pair.
6. Repeat step **4**.
7. The process is repeated until the largest value moves to end of the array. This value now bubbles out of the array.
8. All steps are repeated until each value is bubbled out. Array should now be sorted from smallest to greatest.

### Pseudocode 
    counter = -1
    for loop through array
    	counter = 0
    	inner for loop through array
	    	if index[i] > index[i+1]
	    		tempVar = index[i]  
				index[i] = index[i+1]
				index[i+1] = tempVar
				counter++
			if counter == 0
				break
				
				
## Binary Search

### Summary

First the array must be sorted.  
This algorithm will constantly look for a midpoint, so it can't just divide it's length by 2 as the midpoint will change as the array decreases by half. The midpoint is found by subtracting the beginning of the array, start-point, from the end of the array, end-point, and dividing that value by 2.  
It checks if the **current midpoint** contains the value. If it doesn't, it checks if the value is greater than or less than the **current midpoint**.  
If greater, it discards all values to the left of the **current midpoint**.
If less, all values to the **current midpoint**'s right are discarded.
Whether the algorithm is currently in the greater than or less than side of the array, it subtracts the *new* starting index from the *new* ending index, and divides that value by 2, to find the midpoint.  
The same process of checking **this midpoint**, as well checking greater than or less than is repeated again, as well as more dividing by 2.  
Eventually the value is found or not.  
The algorithm knows the value isn't found when the starting index becomes greater than the ending index (which gives a negative value when subtracting).

### Steps

1. Subtract current **Start Index** from **End Index**
2. Divide that answer by 2, this is the **Midpoint**
3. Check if the **Value** is in the **Midpoint**
4. If the **Value** isn't there, check if it's greater or less than **Midpoint**
5. If **Greater**, discard contents to left of **Midpoint**
6. If **Lesser**, discard contents to **Midpoint**'s right
7. Repeat steps **1–7** until the value is found or not
8. If the **Start Index** is of a greater value than the **End Index** that means the value wasn't found


### Pseudocode
    while array_mid > 0
        (array_start + array_end) / 2 = mid
        if array[mid] = value
            return true
        else if value > array[mid]
            array_start = array_mid + 1
        else if value < array[mid]
            array_end = array_mid - 1
        if end <= start
            break
            return false
        return false