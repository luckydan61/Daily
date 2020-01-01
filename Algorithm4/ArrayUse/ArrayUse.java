package Algorithm4.ArrayUse;

public class ArrayUse {
    public static void main(String[] args) {
        double[] dArray = {1.2, 3.45, 99.3, 10.44};
        double max = FindMaxElem(dArray);
        System.out.println(max);

        double average = CalcAverage(dArray);
        System.out.println(average);

        double[] copyArray = CopyArray(dArray);
        System.out.println(copyArray[0]);

        double[] reverseArray = ReverseArray(dArray);
        System.out.println(reverseArray[0]);
    }

    public static double FindMaxElem(double[] array){
        double max = array[0];

        for (int i = 1; i < array.length; i++){
            if (array[i] > max){
                max = array[i];
            }
        }
        return max;
    }

    public static double CalcAverage(double[] array){
        double sum = 0;

        for (int i = 0; i < array.length; i++){
            sum += array[i];
        }

        return sum / array.length;
    }

    public static double[] CopyArray(double[] array){
        double[] cArray = new double[array.length];

        for (int i = 0; i < array.length; i++){
            cArray[i] = array[i];
        }

        return cArray;
    }

    public static double[] ReverseArray(double[] array){
        double temp = 0;
        int len = array.length;

        for (int i = 0; i < len / 2; i++){
            temp = array[i];
            array[i] = array[len - 1 - i];
            array[len - 1 - i] = temp;
        }
        return array;
    }
}