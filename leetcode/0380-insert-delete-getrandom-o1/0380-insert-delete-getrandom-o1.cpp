class RandomizedSet {
    std::unordered_map<int, int> valToIndex;
    std::vector<int> values;

public:
    RandomizedSet() {}

    bool insert(int val) {
        if (valToIndex.count(val)) return false;
        valToIndex[val] = values.size();
        values.push_back(val);
        return true;
    }

    bool remove(int val) {
        if (!valToIndex.count(val)) return false;
        int idx = valToIndex[val];
        int last = values.back();
        values[idx] = last;
        valToIndex[last] = idx;
        values.pop_back();
        valToIndex.erase(val);
        return true;
    }

    int getRandom() {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> dis(0, static_cast<int>(values.size()) - 1);
        return values[rand() % values.size()];
    }
};