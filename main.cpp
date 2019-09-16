#include "gc_pointer.h"
#include "LeakTester.h"


int main()
{
    Pointer<int> p = new int(19);
    p = new int(21);
    p = new int(28);
    
    Pointer<int> ptr;
    ptr = new int;

    Pointer<int> ptr1[1];
    ptr1[0] = new int;

    // Test Pointer's Copy Constructor
    Pointer<float> pOrig = new float(5);
    Pointer<float> pCopyCon = pOrig;
    // Test Pointer's Array
    Pointer<float, 2> pArr = new float[2]{3,4};
    // Test Pointer's Overload assignment of pointer to Pointer
    p = new int(21);
    p = new int(28);
    // Test Pointer's Overload assignment of Pointer to Pointer.
    Pointer<float> pPoint = new float(3);
    Pointer<float> pCopy;
    pCopy = pPoint;
    *ptr = 88;
    int k = *ptr;

    Pointer<int>::showlist();
    Pointer<float>::showlist();

    p = &k;

    return 0;
}
