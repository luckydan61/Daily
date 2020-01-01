def FindMaxElem(array):
    max = 0

    for d in array:
        if d > max:
            max = d

    return max

def CalcAverage(array):
    sum = 0

    for d in array:
        sum += d

    return (sum / len(array))

def CopyArray(array):
    return array.copy()

def ReverseArray(array):
    array.reverse()
    return array

if __name__ == "__main__":
    array = [1.2, 3.45, 99.9, 10.44]
    max = FindMaxElem(array)
    print(max)

    average = CalcAverage(array)
    print(average)

    cArray = CopyArray(array)
    print(cArray)

    rArray = ReverseArray(array)
    print(rArray)

