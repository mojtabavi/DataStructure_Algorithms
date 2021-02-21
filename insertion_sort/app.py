
def insertion_sort(arr):
    n = len(arr)
    for item in range(1,n):
        key = arr[item]
        j = item - 1
        
        while j >= 0 and arr[j] >= key:
            arr[j + 1] = arr[j] #Shift to right
            j -= 1
    
        arr[j + 1] = key #Swap 
    
    return arr






A = [4, 3, 2, 10, 12, 1, 5, 6]
print(insertion_sort(A))