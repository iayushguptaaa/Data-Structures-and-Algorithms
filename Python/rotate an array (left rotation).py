#simply reverse an array or left rotate:
def leftrotate(arr,start,end):
    while start<end:
        temp=arr[start]
        arr[start] = arr[end]
        arr[end] = temp
        start +=1
        end = end-1
#calling the reversre function within a function "rotate" to reverse the array thrice according to the algorithm
def reverse(arr,d):
    n=len(arr)
    leftrotate(arr,0,d-1)
    leftrotate(arr,d,n-1)
    leftrotate(arr,0,n-1)
#writing the main code
if __name__=="__main__":
    arr=[1,2,3,4,5,6,7]
    d=2
    reverse(arr,d)
    print(arr)
    
    
