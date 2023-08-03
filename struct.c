#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} harry, ravi, shubham;
// struct Student harry, ravi, shubham;

void print()
{
    printf("%s", shubham.name);
    printf("%s", ravi.name);
}

int main()
{
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 66;
    ravi.marks = 466;
    shubham.marks = 46;
    harry.fav_char = 'p';
    ravi.fav_char = 'y';
    shubham.fav_char = 'o';
    gets(shubham.name);
    gets(ravi.name);
//    strcpy(harry.name, "Harry Potter student of the year");
//    strcpy(shubham.name, "Shubham Kumar");
     printf("Harry got %d marks\n", harry.marks);
     printf("Harry's name is: %s\n", harry.name);
     printf("Shubham got %d marks\n", shubham.marks);
     printf("Shubham's name is: %s\n", shubham.name);
     printf("Shubham got %d marks\n", ravi.marks);
     printf("Shubham's name is: %c\n", ravi.fav_char);
//     strrev(harry.name);
//     printf("Reverse string is : %s\n",harry.name);
    print();
    // Quick Quiz
    // print all the information of a given student

    return 0;
}
