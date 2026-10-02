#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int n = 5;
    int *ptr = (int * ) malloc(n * sizeof(int));
    //or
    //int *ptr = new int[n];   // no cast needed, no <cstdlib> needed
    for (int i = 0; i < n; i++) {
        ptr[i] = i * 2;
    }
    
    for (int i = 0; i < n; i++) {
        /* ptr[i] and *(ptr+i) can be used interchangeably */
        cout << ptr[i] << endl;
    }
    
    free(ptr);
    return 0;
}