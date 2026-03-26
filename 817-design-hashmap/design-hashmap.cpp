class MyHashMap {
public:
vector<pair<int,int>>m;

    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        if(m.size()==0){
            m.push_back({key,value});
            
            return;
        }
        for(auto &el:m){
            if(el.first==key){
                el.second=value;
                return;
            }
        }
        m.push_back({key,value});
        return;

    }
    
    int get(int key) {
        if(m.size()==0){
            return -1;
        }
        for(auto &e:m){
            if(e.first==key){
                return e.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        if(m.size()==0){
            return;
        }
         for(int i = 0; i < m.size(); i++){
        if(m[i].first == key){
            m.erase(m.begin() + i);
            return;
        }
       
    }
     return;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */