template<typename T>
class Stack
{
	int size;
	int top;
	T *arr;
public:
	Stack();
	Stack(int);
	void push(T);
	T pop();
	T peep();
	bool isfull();
	bool isempty();
};
