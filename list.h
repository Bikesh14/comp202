class Node{
    public:
        int info;
        Node* next;
};

class List{
    private:
        Node* HEAD;
        Node* Tail;
    public:
        List();
        ~List();
        bool isEmpty();
        void addToHead(int data);
        void add(int data,Node* predecessor);
        void addToTail(int data);
        void removeFromHead();
        void remove(int data);
        bool search(int data);
        void traverse();
        bool retrieve(int data,Node* outputptr);
};
