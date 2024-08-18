#include <iostream>
#include <vector>

// namespaces

/*
namespace first{
   int x = 1;
}
namespace second{
    int x = 2;
}
int main(){

    int x = 0;

std::cout << second::x;

return 0;

}
*/
// typedef
/*typedef std::string text_t;
using text_d = std::string;
using age_d = int;

int main(){


    text_t firstName = "Giorgi";
    text_d lastName = "Geladzze";
    age_d age = 30;

    std::cout << firstName  <<  lastName << '\n';
    std::cout << age << '\n';


    return 0;
}
*/
// type conversion

/*int main(){


    double x = (int) 3.14;

    return 0;
}
*/

// swithces

/*
int main()
{

    int dayOfWeek;
    std::cout << "enter a number (1-7)" << '\n';
    std::cin >> dayOfWeek;

    switch (dayOfWeek)
    {
    case 1:
        std::cout << "Monday";
        break;
    case 2:
        std::cout << "Tuesday";
        break;
    case 3:
        std::cout << "Wensday";
        break;
    case 4:
        std::cout << "thursday";
        break;
    case 5:
        std::cout << "Friday";
        break;
    case 6:
        std::cout << "Saturday";
        break;
    case 7:
        std::cout << "Sunday";
        break;

        return 0;
    }
}
*/

// arrays

/*
int main()
{
    std::string students[] = {
        "spongebob",
        "patrick",
        "squidward",
        "sandy",
    };

    for (int i = 0; i < sizeof(students) / sizeof(std::string); i++)
    {
        std::cout << students[i] << "\n";
    }

    return 0;
}
*/
/*
int main()
{
    std::string students[] = {
        "spongebob",
        "patrick",
        "squidward",
        "sandy",
    };

    for(std::string student : students){
        std::cout << student << "\n";
    }


    return 0;
}
*/
/*
double getTotal(double prices[], int size);

int main()
{

    double prices[] = {
        50,
        55,
        79,
        40.20,
        34.76,
    };
    int size = sizeof(prices) / sizeof(double);
    double total = getTotal(prices, size);
    std::cout << "$" << total;

    return 0;
}
double getTotal(double prices[], int size)
{

    double total = 0;
    for (int i = 0; i < size; i++){
        total += prices[i];
    }
        return total;
}
*/
/*
int searchArray(int numbers[], int size, int element);
int main()
{

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(int);
    int index;
    int myNum;

    std::cout << "Enter a number" << "\n";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if (index != -1)
    {
        std::cout << myNum << " is at index " << index;
    }
    else
    {
        std::cout << myNum << " is not in the array";
    }

    return 0;
}
int searchArray(int numbers[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == element)
        {
            return i;
        }
    }
    return -1;
}
*/

// bubblesort
/*

void bubbleSort(int array[], int size) {


  for (int step = 0; step < size; ++step) {


    for (int i = 0; i < size - step; ++i) {


      if (array[i] > array[i + 1]) {


        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    std::cout << "  " << array[i];
  }
  std::cout << "\n";
}

int main() {
  int data[] = {-2, 45, 0, 11, -9};


  int size = sizeof(data) / sizeof(data[0]);

  bubbleSort(data, size);

  std::cout << "Sorted Array in Ascending Order:\n";
  printArray(data, size);
}
*/
/*
int main()
{

    std::string foods[5];
    int size = sizeof(foods) / sizeof(std::string);
std::string temp;
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter you favorite foods or q to quit #" << i + 1 << ":";
        std::getline(std::cin, temp);
        if(temp == "q"){
            break;
        } else{
            foods[i] = temp;
        }
    }
std::cout << "you like the followaing food:\n";
    for (int i = 0; !foods[i].empty(); i++)
    {
        std::cout << foods[i] << "\n";
    }
    return 0;
}
*/
/*
int main()
{

    std::string array[][3]{{"banana", "apple", "pineapple"},
                           {"tomato", "potato", "cutecomber"},
                           {"fish", "cow", "pig"}};

    int rows = sizeof(array) / sizeof(std::string);
    int columns = sizeof(array[0]) / sizeof(array[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << array[i][j] << " ";
        }
         std::cout << "\n";
    }


    return 0;
}
*/

// pointers
/*
main(){
    std::string name = "Giorgi";

std::string *pName = &name;


std::cout << *pName;


return 0;
}
*/
/*
int main(){

int *pointer = nullptr;
int x = 123;
pointer = &x;


if (pointer == nullptr){

    std::cout << "valvue was not assigned";

} else {

    std::cout << "valvue was assigned";
}





    return 0;
}
*/

/*
int main(){

int *pNum = NULL;

pNum = new int;


*pNum = 21;


delete  pNum;


    return 0;
}
*/

/*
int main(){


char *pGrades = NULL;
int size;

std::cout << "how many characters to enter in";
std::cin >> size;


pGrades = new char[size];


for(int i = 0; i < size; i++){


    std::cout << "enter a grade #" << i + 1 << ":";
    std::cin >> pGrades[i];


}

for( int i = 0; i < size; i++){


    std::cout << pGrades[i] << " ";
}


delete[] pGrades;


    return 0;
}
*/

// template

/*
template <typename T, typename U>

auto max(T x, U y){
return (x > y) ? x : y;

}

main(){



    std::cout << max(1, 2.1) << "\n";


    return 0;
}
*/

// structs
/*
struct student
{

    std::string name;
    double GPA;
    bool enrolled = true;
};
int main()
{

    student student1;
    student1.name = "spongebob";
    student1.GPA = 4.0;

    std::cout << student1.name << "\n";
    std::cout << student1.GPA << "\n";
    std::cout << student1.enrolled << "\n";
}
*/

// OOP

/*
class Shape{
    public:
    double area;
    double volume;
};
class Cube : public Shape{
public:
double side;
Cube(double side){

this->side=side;
this->area = side * side * 6;
this->volume = side * side * side;

}
};

class Sphere : public Shape{
public:
double radius;
Sphere(double radius){

this->radius = radius;
this->area = 4 * 3.14159 * (radius * radius);
this->volume = (4/3.0) * 3.14159 * (radius * radius * radius);



}
};
int main(){

Cube cube(10);
Sphere sphere(5);

std::cout << "Area:  " << cube.area << "cm\n";
std::cout << "Volume:  " << cube.volume << "cm\n";

std::cout << "Area:  " << sphere.area << "cm\n";
std::cout << "Volume:  " << sphere.volume << "cm\n";


    return 0;
}

*/