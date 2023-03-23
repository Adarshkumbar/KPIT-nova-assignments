template<typename T>
class Queue
{
	int size;
	int front, rear;
	T *arr;
public:
	Queue();
	Queue(int);
	void insert(T);
	T remove();
	bool isfull();
	bool isempty();
};
