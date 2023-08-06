/*Write a template class for a Smart Pointer implementation. */

template <typename T>
class SmartPointer
{
private:
    T *ptr;
    unsigned refCount;

public:
    SmartPointer(T *p = nullptr) : p(p)
    {
        refCount = new unsigned(1);
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

    &SmartPointer operator=(const SmartPointer &other)
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
