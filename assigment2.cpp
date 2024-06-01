#include<iostream>
using namespace std;
class Hashtable
{
    int ts;
    int  *table;
    int Hashfn(int data)
    {
        return data%ts;
    }
    void rehash()
    {
        int oldts = ts;
        ts = ts * 2 + 1; //increasing table size
        
        int *temp = new int[oldts];
        for (int i = 0; i < oldts; i++)
            temp[i] = table[i]; //copying elements from old to new table
            
        table = new int[ts]; //new table
        for (int i = 0; i < ts; i++)
            table[i] = -1; //initializing all values as -1 (empty)
        
        for (int i = 0; i < oldts; i++)
            insert(temp[i]); //inserting elements into new table
        
        delete[] temp;
    }
    public:
    Hashtable(int defualtsize=7)
    {
        ts = defualtsize;
        table = new int[ts];
        for (int i = 0; i < ts; i++)
            table[i] = -1;
    }
    void insert(int data)
    {
        int h = Hashfn(data);
        if (table[h] == -1)
            table[h] = data;
            return;
        {
            int i=1;
            int k=(h+i*i)%ts;
            i++;
            while (k!=h)
            {
                if (table[k] == -1)
                {
                    table[k] = data;
                    return;
                }
                k=(k+1)%ts;
            }
        }
        rehash();
        insert(data);
    }
    void print()
    {
        for (int i = 0; i < ts; i++)
        {
            if (table[i] != -1)
                cout << table[i] << endl;
            else
                cout << "NULL" << endl;
        }
    }
    void search(int data)
    {
        int h = Hashfn(data);
        if (table[h] == -1){
            cout << "element doesnt exist" << endl;
            return;
        }
        else
        {
            if(table[h]==NULL)
            {
                cout<<"Element doesnt in table"<<endl;
                return;
            }
            else
            {
                if(table[h]==data)
                {
                    cout<<"Element found"<<h<<endl;
                    return;
                }
                else{
                    int i=1;
                    int k=(h+i*i)%ts;
                    i++;
                    while (k!=h)
                    {
                        if (table[k] == data)
                        {
                            cout << "element on location"<<k<< endl;
                            return;
                        }
                        k=(k+i*i)%ts;
                    }
                    cout << "Element doesn't exist in the hash table." << endl;
                }
            }
        }
    }
    void remove(int data)
    {
        int h = Hashfn(data);
        if (table[h] == -1)
            cout << "element doesnt exist in table" << endl;
        else
        {
            if(table[h]==data)
            {
                table[h]=-1;
                cout<<"Element deleted"<<h<<endl;
                return;
            }
            else{
                int i=1;
            int k=(h+i*i)%ts;
            i++;
           while (k!=h)
           {
            if (table[k] == data)
            {
                table[k] = -1;
                cout<<"element delete from index:"<<k<<endl;
                return;
            }
            k=(k+i*i)%ts;
           }
           cout<<"element donest exist."<<endl;
            }
        }
    }
};
int main()
{
    Hashtable h;
    h.insert(1);
    h.insert(2);
    h.insert(8);
    h.insert(4);
    h.insert(15);
    h.search(4);
    h.remove(1);
    h.print();
}
