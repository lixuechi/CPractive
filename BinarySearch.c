size_t binary_search(int *data, size_t N, int value) {
	size_t lo = 0, hi = N - 1;
	
	while(lo < hi) {
		size_t mid = lo + (hi - lo) / 2;
		
		if(data[mid] < value) {
			lo = mid + 1;
		} else {
			hi = mid;
		}
	}
	
	return (hi == lo && data[lo] == value) ? lo : N;
}
