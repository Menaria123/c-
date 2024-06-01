#include <iostream>
using namespace std;
template <typename T>
class Node
{
public:
    string key; // key value pair
    T value;
    Node *next; // pointer to the next node(pointer type node).

    Node(string key, T value)
    {
        this->key = key;
        this->value = value;
        next = NULL; // pointer having the address of the next node.
    }
};
template <typename T>
class Hashtable // creating table
{
    Node<T> **table;
    int cs; // countsize horizontal  
    int ts; // tablesize vertical
    // hash function
    int Hashfn(string key)
    {
        int idx = 0;
        int power = 1;
        for (auto ch : key)
        {
            idx = (idx + (ch * power)) % ts;
            power = (power * 29) % ts;
        }
        return idx;
    }
    void rehash()
    {
        // making a pointer to old table
        Node<T> **oldTable = table;
        int oldts = ts;
        // increasing thae table size
        cs = 0;
        ts = ts * 2 + 1;
        table = new Node<T> *[ts];
        for (int i = 0; i < ts; i++)
        {
            table[i] = NULL;
        }
        for (int i = 0; i < oldts; i++)
        {
            Node<T> *temp = oldTable[i];
            while (temp != NULL)
            {
                string key = temp->key;
                T value = temp->value;
                // happen in the new table
                insert(key, value);
                temp = temp->next;
            }
            if (oldTable[i] != NULL)
            {
                delete oldTable[i];
            }
        }
        delete[] oldTable;
    }

public:
    Hashtable(int default_size = 7)
    {
        cs = 0;
        ts = default_size;
        table = new Node<T> *[ts];
        for (int i = 0; i < ts; i++)
        {
            table[i] = NULL; // initializing thae values
        }
    }
    void insert(string key, T value)
    {
        int idx = Hashfn(key);
        Node<T> *n = new Node<T>(key, value);
        n->next = table[idx];
        table[idx] = n;
        n++;
        // rehashing 
        float load_factor = cs / (float)ts;
        if (load_factor > 0.7)
        {
            rehash();
        }
    }
    T *search(string key)
    {
        int idx = Hashfn(key);
        Node<T> *temp = table[idx];
        while (temp != NULL)
        {
            if (temp->key == key)
                return &temp->value;
            temp = temp->next;
        }
        return NULL;
    }
    void print()
    {
        for (int i = 0; i < ts; i++)
        {
            cout << "Bucket" << i << "->";
            Node<T> *temp = table[i];
            while (temp != NULL)
            {
                cout << temp->key << "->";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};
int main()
{
    Hashtable<int> h;
    h.insert("orange", 50);
    h.insert("apple", 150);
    h.insert("Banana", 100);
    h.insert("Cherry", 200);
    h.print();
    string fruit;
    cout << "Enter the fruit to the seacrching" << endl;
    cin >> fruit;
    int *price = h.search(fruit);
    if (price != NULL)
    {
        cout << "The price of:" << fruit << "ts" << price << endl;
    }
    else
    {
        cout << "Fruit is not present";
    }
    return 0;
}