#include <iostream> //input and output header file
#include <string.h> //header file to use string 
using namespace std; //to avoid  std::cout or std::cin in every line

int main() 
{
    char d; //declaration for storing 
    char name[20];   // Declaration of string
    int n;// decleartion for storing string length
    int count;//count the elements in the string wheather elements is repeating or not
    int flage=0; //for checking non-repeated variable is found or not
    int i,j;

cout<<"enter the name"<<endl; //calling to enter a input
cin>> name;   // storing input

n=strlen(name); // it is used to store the length of the name for looping purpose
for( i=0;i<n;i++) //(initialization;condition;increament)
{
    d=name[i]; // storing the character of string of every position
count=0; //for checking repeating element in string
    for( j=0;j<n;j++)
    {
        if(i!=j && d==name[j]) // checking the condition for repeating variable wheather it is repeated or not
        {
            count++;//if the element is repeated its change the value to count++
            break;//if the element is repeating it will break the loop controls 
        }
    }
    if(count==0) //IF THE count is not equal to zero then variable is repeted.
    {
         cout << "The first non-repeating variable is: " << name[i] << endl;
         flage=1;
         break;
    }
}
if(flage==0) //if flage is not equal to zero then non-repeating variable is found
{
    cout << "All elements are repeating in the name." << endl;
}
    return 0;
}