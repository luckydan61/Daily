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

void MatrixMulti(double * array1, int len1, double * array2, int len2, double * mArray)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < len1; i++)
    {
        for (j = 0; j < len2; j++)
        {
            *(mArray + i * len1 + j) = array1[i] * array2[j];
        }
    }
}

int main()
{
    double dArray[4] = {1.2, 3.45, 99.3, 10.44};
    double dArray2[4] = {1.3, 4.5, 6.7, 8.9};
    double cArray[4] = {0};
    double mArray[4][4] = {0};

    double max = FindMaxElem(dArray, sizeof(dArray) / sizeof(double));
    printf("max = %f\n", max);

    double average = CalcAverage(dArray, sizeof(dArray) / sizeof(double));
    printf("average = %f\n", average);

    CopyArray(dArray, sizeof(dArray) / sizeof(double), cArray);
    printf("cArray = %f\n", cArray[0]);

    ReverseArray(dArray, sizeof(dArray) / sizeof(double));
    printf("reverseArray = %f\n", dArray[0]);

    MatrixMulti(dArray, 4, dArray2, 4, &mArray[0][0]);
    printf("mArray = %f\n", mArray[0][0]);

    return 0;
}

