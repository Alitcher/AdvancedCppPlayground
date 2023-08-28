/*Write a template class for a Smart Pointer implementation. */

template <typename T>
class SmartPointer
{
private:
    T *ptr;
    unsigned int refCount;

public:
    SmartPointer(T *p = nullptr) : ptr(p)
    {
        refCount = new unsigned int(1); // allocation
    }

    SmartPointer(const SmartPointer &other)
    {
        ptr = other.ptr;
        refCount = other.refCount;
        (*refCount)++;
    }

    ~SmartPointer()
    {
        if (--(*refCount) == 0)
        {
            delete ptr;
            delete refCount;
        }
    }

    T &operator*()
    {
        // overload dereference operator
        return *ptr;
    }

    T *operator->()
    {
        // overload pointer member across operator
        return ptr;
    }

    SmartPointer& operator=(const SmartPointer &other)
    {
        if (this != &other)
        {
            // self assignment check
            if (--(*refCount) == 0)
            {
                delete ptr;
                delete refCount;
            }

            ptr = other.ptr;
            refCount = other.refCount;
            (*refCount)++;
        }
        return *this;
    }
};
