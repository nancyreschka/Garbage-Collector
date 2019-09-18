// This class defines an element that is stored
// in the garbage collection information list.
template <class T>
class PtrDetails
{
  public:
    unsigned refcount; // current reference count
    T *memPtr;         // pointer to allocated memory
    /* isArray is true if memPtr points
       to an allocated array. It is false
       otherwise. */
    bool isArray; // true if pointing to array
    /* If memPtr is pointing to an allocated
       array, then arraySize contains its size */
    unsigned arraySize; // size of array
    // Here, memPtr points to the allocated memory.
    // If this is an array, then size specifies
    // the size of the array.

    /* @param ptr - pointer to memory
       @param size - size of eventual array in memory ptr
       if size > 0 isArray is set to true */
    PtrDetails(T* ptr, T size = 0):memPtr(ptr), arraySize(size){
        if (size > 0) isArray = true;
        else isArray = false;
        refcount = 1;
    };
};
// Overloading operator== allows two class objects to be compared.
// This is needed by the STL list class.
template <class T> 
bool operator==(const PtrDetails<T> &obj_1,
                const PtrDetails<T> &obj_2)
{
    bool comp = true;
    if (obj_1.memPtr != obj_2.memPtr) return false;
    return comp;
}
