class PeekingIterator : public Iterator {
    int val;
    bool available;

public:
    PeekingIterator(const vector<int>& nums) : Iterator(nums) {
        available = Iterator::hasNext();
        if(available)
            val = Iterator::next();
    }

    int peek() {
        return val;
    }

    int next() {
        int temp = val;
        available = Iterator::hasNext();

        if(available)
            val = Iterator::next();

        return temp;
    }

    bool hasNext() const {
        return available;
    }
};