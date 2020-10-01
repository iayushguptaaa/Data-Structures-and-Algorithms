#reverse an array "without list slicing"
def reverse(arr,n):
    x = arr[0]
    for i in range (1,n):
        arr[i-1] = arr[i]

    arr[n-1] = x

if __name__=="__main__":
    arr=[1,2,3,4,5]
    n = len(arr)
    reverse(arr,n)
    print(arr)
        
