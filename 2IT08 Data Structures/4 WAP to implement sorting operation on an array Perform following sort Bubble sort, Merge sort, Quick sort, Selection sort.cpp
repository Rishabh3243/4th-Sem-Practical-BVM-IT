#include <bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

//Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
//Bubble sort end

//Merge sort start
void merge(int array[], int const left, int const mid,
           int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;

    // Create temp arrays
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];

    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];

    auto indexOfSubArrayOne
        = 0, // Initial index of first sub-array
        indexOfSubArrayTwo
        = 0; // Initial index of second sub-array
    int indexOfMergedArray
        = left; // Initial index of merged array

    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne
           && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne]
            <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray]
                = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray]
                = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray]
            = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray]
            = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
    delete[] leftArray;
    delete[] rightArray;
}

void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return; // Returns recursively

    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
//Merge sort end

//Quick Sort start
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i=(low-1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
//Quick Sort end

//Selection sort start
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i,j,min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
        {
          if (arr[j] < arr[min_idx])
              min_idx = j;
        }
        if (min_idx!=i)
            swap(&arr[min_idx], &arr[i]);
    }
}
//Selection sort end

//shuffle start
void shuffle_array(int arr[], int n)
{
    unsigned seed = 0;
    shuffle(arr,arr+n,default_random_engine(seed));
}
//shuffle stop
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{

    clock_t time;
    time = clock();

    int n;
    cout<< "Enter the no elements to initialize the Array : ";
    cin >> n;
    int arr[n],i,m=0,j;
    cout<<"Enter the elements : -\n";
    for(i = 0; i < n; i++)
    {
        cout<<"Element "<<i+1<<" : ";
        cin >> arr[i];
    }
    system("CLS");
    while (m==0)
    {
        int t,l;
        cout<<"Select the operation : -\n";
        cout<<"1) Bubble Sort \n";
        cout<<"2) Merge sort \n";
        cout<<"3) Quick sort \n";
        cout<<"4) Selection sort \n";
        cout<<"5) Shuffle an array \n";
        cout<<"6) Exit \n";
        cout<<"Operation : ";
        cin>>t;
        if (t==1)
        {
            cout<<endl<<"<----------->\n Bubble Sort \n<----------->\n";

            bubbleSort(arr,n);

            cout << "\nSorted array: \n";
            printArray(arr,n);

            cout<<endl<<"\nPress 1 to continue :\nPress 0 to exit :\n: - ";
            cin>>l;
            if (l==1)
              {
                system("CLS");
              }
            else
                break;
        }
        else if (t==2)
        {
            cout<<endl<<"<---------->\n Merge Sort \n<---------->\n";

            mergeSort(arr,0, n-1);

            cout << "\nSorted array: \n";
            printArray(arr,n);

            cout<<endl<<"\nPress 1 to continue :\nPress 0 to exit : \n: - ";
            cin>>l;
            if (l==1)
                system("CLS");
            else
                break;
        }
        else if (t==3)
        {
            cout<<endl<<"<---------->\n Quick Sort \n<---------->\n";

            quickSort(arr,0,n-1);

            cout << "\nSorted array: \n";
            printArray(arr,n);

            cout<<endl<<"\nPress 1 to continue :\nPress 0 to exit : \n: - ";
            cin>>l;
            if (l==1)
                system("CLS");
            else
                break;
        }
        else if (t==4)
        {
            cout<<endl<<"<-------------->\n Selection Sort \n<-------------->\n";

            selectionSort(arr,n);

            cout << "\nSorted array: \n";
            printArray(arr,n);

            cout<<endl<<"\nPress 1 to continue :\nPress 0 to exit : \n: - ";
            cin>>l;
            if (l==1)
                system("CLS");
            else
                break;
        }
        else if (t==5)
        {
            shuffle_array(arr,n);
            cout << "\nUnsorted array: \n";
            printArray(arr,n);

            cout<<endl<<"\nPress 1 to continue :\nPress 0 to exit : \n: - ";
            cin>>l;
            if (l==1)
                system("CLS");
            else
                break;

        }
        else if (t==6)
            break;
        else
        {
            cout<<"You have entered the wrong value ";
            cout<<endl<<"Press 1 to continue :\nPress 0 to exit : \n: - ";
            cin>>l;
            if (l==1)
                system("CLS");
            else
                break;
        }

    }
    system("CLS");
    cout<<"Thank you, see you in next program ";

    cout<<endl<<"Time Complexity :"<<endl;
    cout<<(float)time<<"seconds"<<endl;
    return 0;
}
