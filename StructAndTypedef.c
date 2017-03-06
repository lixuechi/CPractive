struct IntPair_s {
	int first;
	int second;
};
// in code:
struct IntPair_s pair;
pair.first = 1;
pair.second = 2;
struct IntPair_s *pairPtr = &pair;
// use pairPtr->first and pairPtr->second to access elements

typedef struct IntPair_s2 {
	int first;
	int second;
} IntPair;
// in code:
IntPair pair2;
pair2.first = 1;
pair2.second = 2;
IntPair *pairPtr2 = &pair2;
