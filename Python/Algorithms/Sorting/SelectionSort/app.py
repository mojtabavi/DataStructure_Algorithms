
def selection_sort(arr):
    n = len(arr)
    for i in range(n):
        selection = i
        for j in range(i+1,n):
            if arr[j] < arr[selection]:
                selection = j
        arr[i],arr[selection] = arr[selection],arr[i]
    return arr 


A = [4, 3, 2, 10, 12, 1, 5, 6]
print(selection_sort(A))