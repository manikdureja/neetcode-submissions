class DynamicArray {
private:
    vector<int> arr;
    int size;
    int capacity;

public:

    DynamicArray(int capacity) {
        this->capacity = capacity;
        this->size = 0;
        arr.resize(capacity);
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if(size == capacity){
            resize();
        }
        arr[size] = n;
        size++;
    }

    int popback() {
        size--;
        return arr[size];
    }

    void resize() {
        capacity = capacity * 2; 
        arr.resize(capacity);
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
};
