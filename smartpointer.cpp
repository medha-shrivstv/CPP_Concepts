/*smart pointers are used to avoid memory leaks. It is used so that we don't have to free memory by 
ourselves by using delete operator. There is no garbage collector in c++ as it is used to be in
Java and some other programming languages. With smart pointers we can avoid memory leaks. We use 
RAII(Resource Acquisition in initialisation) CONCEPT in smart pointers*/


#include <iostream>
using namespace std;

class Wrapper
{
    private:
        int *mem;

    public:
        Wrapper(int *a):mem(a)
        {
            cout<<"inside constructor"<<endl;
        }

        ~Wrapper()
        {
            cout<<"inside destructor"<<endl;
            delete mem;

        }
};

int main()
{
    Wrapper obj(new int(10));
    return 0;

}
