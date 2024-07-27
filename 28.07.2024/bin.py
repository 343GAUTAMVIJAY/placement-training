    def bins(arr,key):
        low,high=0,len(arr)-1
        while low<=high:
            mid=(low+high)//2
            if arr[mid]==key:
                return mid
            elif arr[mid]<key:
                low=mid+1
            else:
                high=mid-1
        return -1

    arr=[1,2,3,4,5]
    key=3
    result=bins(arr,key)

    if result!=-1:
        print("Element found at index",result)
    else:
        print("Element not found")
 
