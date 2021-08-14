#include <iostream>
#include <array>
#include <cassert>

class Stack
{
private:
    //use a std::array to store the elements
    using container_type = std::array<int, 10>;
    // For convenience, add type alias for type of indexes
    using size_type = container_type::size_type;

    // std::array<int, 10> m_array {};
    container_type m_array {}; // store stack data;
    size_type m_next{ 0 }; // hold index next on the stack 
public:
    void reset()
    {
        m_next = 0;
    }

    bool push(int value)
    {
        //If stack is already full, return false and bail
        if (m_next == m_array.size())
            return false;
        
        m_array[m_next++] = value; //gan value then increase m_next
        return true;
    }

    void getValue(void)
    {
        std::cout << m_array.size();
    }

    int pop()
    {
        assert (m_next > 0 && "Can not pop empty stack");
        return m_array[--m_next];
    }

    void print()
    {
        std::cout << "( ";
        for (size_type i{ 0 }; i < m_next; ++i)
            std::cout << m_array[i] << " ";
        std::cout << " )\n";
    }
};

int main()
{
    Stack stack;
    stack.reset();

    stack.getValue();

    stack.print();

    stack.push(5);
    stack.push(3);
    stack.push(8);

    stack.print();
    
    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();

    stack.print();
    
    stack.pop();
    return 0;
}