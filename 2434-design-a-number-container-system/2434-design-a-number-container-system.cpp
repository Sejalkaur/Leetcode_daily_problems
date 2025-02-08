class NumberContainers {
public:
    map<int, int> indexToNumber;  // Stores {index -> number}
    map<int, set<int>> numberToIndices;  // Stores {number -> set of indices}

    NumberContainers() {}

    void change(int index, int number) {
        // If the index already has a different number, remove it from numberToIndices
        if(indexToNumber.find(index) != indexToNumber.end() && indexToNumber[index] != number) {
            numberToIndices[indexToNumber[index]].erase(index);  
            
            if(numberToIndices[indexToNumber[index]].empty()) {
                numberToIndices.erase(indexToNumber[index]); 
            }
        }
        
        // Update the mapping
        indexToNumber[index] = number;
        numberToIndices[number].insert(index);
    }

    int find(int number) {
        return numberToIndices[number].empty() ? -1 : *numberToIndices[number].begin();
    }
};
