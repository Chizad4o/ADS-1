// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    //  поместить сюда реализацию алгоритма
    int l = 0;
    int r = size - 1;
    int mid;
    int count = 0;
    bool flag = false;
    while ((1 <= r) && (flag != true)) {
        mid = (l + r) / 2;
        if (arr[mid] == value) {
            flag = true;
            count += 1;
            int i = 1;
            while (arr[mid + i] == value) {
                count += 1;
                i += 1;
            }
            i = 1;
            while (arr[mid - i] == value) {
                count += 1;
                i += 1;
            }
        }else if (arr[mid] > value){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    return count;
}
