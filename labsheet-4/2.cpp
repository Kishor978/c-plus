// Write a program that has a class with a dynamically allocated character array as its data member.
// One object should contain "Engineers are" and another should contain " Creatures of logic".
// Member function join() should concatenate two strings by passing two objects as arguments.
// Display the concatenated string through a member function. Use constructors to allocate and
// initialize the data member. Also, write a destructor to free the allocated memory for the character array.
// Make your own function for the concatenation of two strings.
// #include <iostream>
// #include <string>
// using namespace std;
// class engineer
// {
// private:
//     string word;

// public:
//     void setup()
//     {
//         cout << "Enter the string :";
//         getline(cin, word);
//     }
//     void concatenate()
//     {
//     }
//     void display()
//     {
//         cout << "\n Name is " << word;
//     }
// };
// int main()
// {
//     engineer *ptr;
//     int n = 2, i = 0;
//     char choise;
//     ptr = new engineer[n];
//     do
//     {
//         ptr[i]->setup();
//         i++;
//     } while (i < 2);
//     for (int j = 0; j < n; j++)
//     {
//         cout << "Person number" << j + 1;
//         pe[j]->display();
//     }

//     return 0;
// }
#include<iostream>
#include<cstring>
using namespace std;
class dma{
    char *c;
    int len;
    public:
    dma()
    {
        len=0;
    }
    dma(const char *s)
    {
        len=strlen(s);
        c = new char[len+1];
        strcpy(c,s);
    }
    void join(dma &a,dma &b)
    {
        len=a.len+b.len;
        delete []c;
        c= new char[len+1];
        strcpy(c,a.c);
        strcat(c,b.c);
    }
    void show()
    {
        cout<<c<<endl;
    }
    
};
int main()
{
    dma d1=("Engineers are"),d2=(" creatures of logics."),d3;
    d3.join(d1,d2);
    d3.show();
    return 0;
}