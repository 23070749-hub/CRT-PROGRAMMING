Day 6 :
DSA is used to cheak your problem solving ability

Data structures are the different ways of organizing  data on your computer that can be used effectively.

 Time complexity measure the performance of your programe.

Big O: it is a complexity that is going to be less or equal to the worst case
Big ohm: ---------------- at least more than the best case.
Big thete : --------------- that is witjin bounds of the worst and the best cases.

bigO-O(n)
big ohm-  ohm(1)
big theta – theta(n/2)

O(n)   constant     acesing a specific element inb array
O(N)    linear          loop through array element
O(logN)    logarithmic find an element in sorted array
O(N^2)       quadratic    looking array every elemnt index in the array twice



O(n) 
Array=[1,2,3,4,5]
For element in array:
Print (element)
//linear time since it is visiting every element of array


O(logN)- ogarithmic time
Array=[1,2,3,4,5]
For index in range(0,(array),3:
Print(array[index])
// logarithmic time since it is visiting only some elements.




O(N^2)   - quadratic time
Array=[1,2,3,4,5]
For x in array:
For y in array:
Print (x,y)



  #include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target =7;
    linearSearch(arr,size,target);

}








#include<iostream>
using namespace std;
int main()
int linearsearch(int arr[],int size,int target)
{
    for (int i=0;i<size;i++)
    {
        if(arr[i])==target)
//1==7
{
    return i;
}
 }
return -1;
}
int main()

    int arr[]={1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target =7;
    int result=linearsearch(arr,size,target);
    if (result !=-1)
    {
        cout<<"element found at index no="<,result<<endl;

    }else
    {

        cout<<"element not found";
    }

}

