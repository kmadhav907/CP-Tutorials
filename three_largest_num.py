def find_largest_number(array):
    large_arr = [None , None , None]
    for num in array:
        updateThreeLargest(large_arr , num)
    return large_arr

def updateThreeLargest(large_arr, num):
    if large_arr[2] is  None or large_arr[2] < num:
        shiftAndUpdate(large_arr , num , 2)
    elif large_arr[1] is None or large_arr[1] < num:
        shiftAndUpdate(large_arr , num , 1)
    elif large_arr[0] is None or large_arr[0] < num:
        shiftAndUpdate(large_arr , num , 0)

def shiftAndUpdate(large_arr , num, index):
    for i in range(index+1):
        if i == index:
            large_arr[i] = num
        else:
            large_arr[i] = large_arr[i+1]


input_list = list(map(int , input().split()))
output_list = find_largest_number(input_list)
print(output_list)