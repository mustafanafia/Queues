#include "Sequence.hpp"

template <class T>
 class Queue {
    //! is modeled by string of T
    //!   exemplar self

    public: // Standard Operations

      Queue();
  
      ~Queue();

      
             void clear(void);
             //! clears self
             void transferFrom(Queue& source);
             //! replaces self
             //! clears source
             //! ensures: self = #source
             Queue& operator = (Queue& rhs);
             //! replaces self
             //! restores rhs
             //! ensures: self = rhs
          // Queue1 Specific Operations
             void enqueue(T& x);
             //! updates self
             //! clears x
             //! ensures: self = #self * <#x>
             void dequeue(T& x);
             //! updates self
             //! replaces x
             //! requires: self /= <>
             //! ensures: <x> is prefix of #self  and  self = #self[1, |#self|)
             void replaceFront(T& x);
             //! updates self, x
             //! requires: self /= <>
             //! ensures: <x> is prefix of #self  and  self = <#x> * #self[1, |#self|)
             T& front(void);
             //! restores self
             //! requires: self /= <>
             //! ensures: <front> is prefix of self
             int length(void);
             //! restores self
             //! ensures: length = |self|
     
  private:  Sequence<T> a;
};


