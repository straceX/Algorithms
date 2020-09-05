
class LinkedList 
	{
    public:
        struct Node
            {
            int data;
            Node *next;
            };

        LinkedList();
        ~LinkedList();
        auto display()         -> void;
        auto insert(int value) -> void;
        auto getHead() const   -> Node*;
        auto getTail() const   -> Node*;

    private:
    	Node *m_head;
        Node *m_tail;
	}; 
