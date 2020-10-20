#ifndef SINGLETON_PATTERN_HPP
#define SINGLETON_PATTERN_HPP

class Singleton {
    private:

        static Singleton *_instance;
        int _data;
        Singleton();
        // ~Singleton();

    public:

        static Singleton *getInstance() {
            if(!_instance) _instance = new Singleton;
            return _instance;
        }
        inline int getData() {return _data;};
        inline void setData(int data) {_data = data;};
};

#endif //SINGLETON_PATTERN_HPP