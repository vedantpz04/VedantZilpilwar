
input("Enter the number with space in between")
array = [int(x) for x in input().split(" ")]

sorted_array = sorted(array)

if array == sorted_array:
    print("yes")
else:    
    wrong = []
    for i, (a, b) in enumerate(zip(array, sorted_array)):
        if a != b:
            wrong.append(i)
        if len(wrong) > 2:
            break
            
    if len(wrong) == 2:
        print("yes")
        print("swap", wrong[0]+1, wrong[1]+1)
    else:           
        index = sorted_array.index(array[wrong[0]])+1
        if sorted_array[wrong[0]:index] == list(reversed(array[wrong[0]:index])):
            print("yes")
            print("reverse", wrong[0]+1, index)
        else:
            print("no")