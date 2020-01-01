#include <stdio.h>

double FindMaxElem(double * array, int len)
{
    double max = array[0];
    int i = 0;

    for (i = 0; i < len; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    return max;
}

double CalcAverage(double * array, int len)
{
    int i = 0;
    double sum = 0;

    for (i = 0; i < len; i++)
    {
        sum += array[i];
    }

    return sum / len;
}

void CopyArray(double * array, int len, double * cArray)
{
    int i = 0;

    for (i = 0; i < 4; i++)
    {
        cArray[i] = array[i];
    }
}

void ReverseArray(double * array, int len)
{
    int i = 0;
    double temp  = 0;

    for (i = 0; i < len / 2; i++)
    {
        temp = array[i];
        array[i] = array[len - 1 - i];
        array[len - 1 - i] = temp;
    }
}

int main()
{
    double dArray[4] = {1.2, 3.45, 99.3, 10.44};
    double cArray[4] = {0};

    double max = FindMaxElem(dArray, sizeof(dArray) / sizeof(double));
    printf("max = %f\n", max);

    double average = CalcAverage(dArray, sizeof(dArray) / sizeof(double));
    printf("average = %f\n", average);

    CopyArray(dArray, sizeof(dArray) / sizeof(double), cArray);
    printf("cArray = %f\n", cArray[0]);

    ReverseArray(dArray, sizeof(dArray) / sizeof(double));
    printf("reverseArray = %f\n", dArray[0]);

    return 0;
}

