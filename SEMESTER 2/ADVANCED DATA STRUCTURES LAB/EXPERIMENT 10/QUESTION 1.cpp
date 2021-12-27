#include <iostream>
using namespace std;

unsigned long get_hash(unsigned long sapid)
{
    unsigned long sum{sapid % 1000};
    while (sum > 9)
        sum -= 9;
    return sum;
}

int main()
{

    printf("SAP ID: %lu\tFamily:%lu\n", 500075185, get_hash(500075185));
    printf("SAP ID: %lu\tFamily:%lu\n", 500075423, get_hash(500075423));
    printf("SAP ID: %lu\tFamily:%lu\n", 500075425, get_hash(500075425));

    return 0;
}