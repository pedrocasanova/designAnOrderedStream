class OrderedStream {
private:
    vector<string> s;
    int size;
    int ptr = 0;
public:
    OrderedStream(int n) 
    {
        for(int i = 0; i < n; i++) s.emplace_back("");
        size = n;
    }
    vector<string> insert(int idKey, string value) 
    {
        vector<string> sub;
        s[idKey-1] = value;
        if(ptr == idKey-1)
        {
            for(int i = ptr; i < size; i++)
            {
                if (s[i] == "") break;
                else 
                {
                    sub.emplace_back(s[i]);
                    ptr++;    
                }    
            }
        }
        return sub;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */