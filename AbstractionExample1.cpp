// Interface
class Array {
	size_t _size;
	double *_elem;
public:
	Array(size_t theSize);
	~Array();
	
	// inline is like #define in C, substituting the function name with the content of the function
	inline size_t size() const { return _size; };
	double& operator[](size_t i);
};
