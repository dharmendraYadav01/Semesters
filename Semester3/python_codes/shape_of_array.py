# the shape of an array is the number of elements in each dimension.
# NumPy array array have an attribute called shape that return a tuple with each index having the number of corresponding elements.
import numpy as np
arr=np.array([1,2,3,4],[5,6,7,8])
print(arr.shape)

import numpy as np
arr = np.array([1,2,3,4],ndmin=5)
print(arr)
print('shape of array:',arr.shape)

# Reshaping an array 
# reshaping means changing the shape of an array,the shape of an array is the number of elements in each dimension of an array.
# by reshaping we can add or remove dimension or change number of element in each dimension
# convert the following 1-D array with 12 elements into a 2-D array
import numpy as np
arr = np.array([1,2,3,4,5,6,7,8,9,10,11,12])
newarr=arr.reshape(4,3)
print(newarr)

import numpy as np
arr=np.array([1,2,3,4,5,6,7,8,9,10,11,12])
newarr = arr.reshape(2,3,2)
print(newarr)