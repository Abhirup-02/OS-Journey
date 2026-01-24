#include <pthread.h>
#include <iostream>

int main() {
    size_t stacksize;
    pthread_attr_t attr;

    pthread_attr_init(&attr);

    int result = pthread_attr_getstacksize(&attr, &stacksize);

    if (result == 0) {
        std::cout << "Default stack size for new threads: " << stacksize << " bytes" << std::endl;
    } else {
        std::cerr << "Error getting stack size" << std::endl;
    }

    pthread_attr_destroy(&attr);
    
    return 0;
}
