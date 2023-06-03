#ifndef MAGICALCONTAINER
#define MAGICALCONTAINER
#include <iostream>
#include <vector>
using namespace std;

namespace ariel{}
class MagicalContainer{
    public:
    vector<int> myVector;
    void addElement(int element);
    int size()const;
    void removeElement(int element);
    MagicalContainer();
    class AscendingIterator{
        public:
        const MagicalContainer* container_;
        unsigned long Index_;
        vector<const int*> pointersVector;
        //AscendingIterator(); 
        AscendingIterator(const AscendingIterator& other);
        AscendingIterator(const MagicalContainer& other);
        AscendingIterator(AscendingIterator&& other) noexcept;
        ~AscendingIterator();
        AscendingIterator& operator=(const AscendingIterator& other);
        bool operator==(const AscendingIterator& other) const;
        bool operator!=(const AscendingIterator& other) const;
        bool operator<(const AscendingIterator& other);
        bool operator>(const AscendingIterator& other);
        int operator*();
        AscendingIterator& operator++();
        AscendingIterator& begin();
        AscendingIterator& end();
        AscendingIterator& operator=(AscendingIterator&& other) noexcept;

    };
    class PrimeIterator{
        public:
        const MagicalContainer* container_;
        vector<const int*> pointersVector;
        int Index_;
        PrimeIterator();
        PrimeIterator(const PrimeIterator& other);
        PrimeIterator(PrimeIterator&& other) noexcept;
        PrimeIterator(const MagicalContainer& other);
        PrimeIterator& operator=(PrimeIterator&& other) noexcept;
        ~PrimeIterator();
        PrimeIterator& operator=(const PrimeIterator& other);
        bool operator==(const PrimeIterator& other) const;
        bool operator!=(const PrimeIterator& other) const;
        bool operator<(const PrimeIterator& other);
        bool operator>(const PrimeIterator& other);
        int operator*();
        PrimeIterator& operator++();
        PrimeIterator& begin();
        PrimeIterator& end();
        bool isPrime(int number);
    };
    class SideCrossIterator{
        public:
        int fromTheBegin, fromTheEnd, cnt;
        const MagicalContainer* container_;
        int Index_;
        SideCrossIterator();
        SideCrossIterator(const SideCrossIterator& other);
        SideCrossIterator(SideCrossIterator&& other) noexcept;
        SideCrossIterator& operator=(SideCrossIterator&& other) noexcept;
        SideCrossIterator(const MagicalContainer& other);
        ~SideCrossIterator();
        SideCrossIterator& operator=(const SideCrossIterator& other);
        bool operator==(const SideCrossIterator& other) const;
        bool operator!=(const SideCrossIterator& other) const;
        bool operator<(const SideCrossIterator& other);
        bool operator>(const SideCrossIterator& other);
        int operator*();
        SideCrossIterator& operator++();
        SideCrossIterator& begin();
        SideCrossIterator& end();
    };
};
#endif