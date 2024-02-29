template <class T>
class Sequence {

private: // Internal Representation
    class NodeRecord {
    public:
        T value;
        NodeRecord* next;
    };

    NodeRecord* head;
    int size;

   public:
    Sequence();
    ~Sequence();
    void clear(void);

    int length(void);
    void add(T& x, int pos);
    void remove(T& x, int pos);
    T& entry(int pos);
    void outputSequence(void);
    void transferFrom(const Sequence source);
    Sequence<T>& operator=(Sequence& rhs);

  private: // Internal operations
    void reclaimAllNodes(NodeRecord*& p);

};
//Sequence.h 



