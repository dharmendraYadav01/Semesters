import numpy as np

#1.concatenate a list
arr1=np.array([1,2,3])
arr2=np.array([4,5,6])
arr=np.concatenate((arr1,arr2))
print(arr)

# 2.stack: same as concatenation but only diff. is that stacking is done along a new axis
arr1=np.array([1,2,3])
arr2=np.array([4,5,6])
arr=np.stack((arr1,arr2),axis=1)
print(arr)

# 3.h.stack
arr1=np.array([1,2,3])
arr2=np.array([4,5,6])
arr=np.hstack((arr1,arr2))
print(arr)

# 4. vstack: vertical stacking
arr1=np.array([1,2,3])
arr2=np.array([4,5,6])
arr=np.vstack((arr1,arr2))
print(arr)

# 5. dstack: vertical stacking of 3D arrays
arr1=np.array([1,2,3])
arr2=np.array([4,5,6])
arr=np.concatenate((arr1,arr2))
print(arr)