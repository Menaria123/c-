// A C++ program to implement Hash Table using linear probing
#include<iostream>
using namespace std;

// Class declaration for Hash Table
class hashtable{
public:
int size;//size of table
int *table;//pointer type table

// Constructor to initialize Hash Table with given size
hashtable(int defualtsize=7)
{
    size=defualtsize;
    table=new int[size];
    for(int i=0;i<size;i++)
    {
        table[i] = -1;
    }
}

// Function to insert a key into the Hash Table
void insert(int key)
{
   int h=key%size;//hash function
   int i=0;
   int l=-1;//new location
   while(table[h]!=-1)
   {
     l=(h+i)%size;//linear probing
     i++;
     if(i==size)
         return;
   }
   if(l==-1)//old location
   {
    table[h]=key;
   }
   else{
    table[l]=key;//added to new loaction
   }
}

// Function to print the contents of the Hash Table
void print()
{
    for(int i=0;i<size;i++)
    {
        bool e=true;
        if(table[i]!=-1)
            cout<<table[i]<<endl;
        e=false;
        if(e==true)
            cout<<"table is empty";     
    }
}

// Function to search for a key in the Hash Table
void search(int key)
{
    bool check=false;
    for(int i=0;i<size;i++)
    {
        if(table[i]!=-1&& table[i]==key)
        {
             cout<<"key found at "<<i<<endl;
             check=true;
        }
    }
    if(check==false)
    {
        cout<<"key not found"<<endl;
    }
}

// Function to remove a key from the Hash Table
void remove(int key)
{
    bool check=false;
    for(int i=0;i<size;i++)
    {
        if(table[i]!=-1&& table[i]==key)
        {
             table[i]= -1;
             check=true;
        }
    }
    if(check==false)
    {
        cout<<"key not found"<<endl;
    }
}
};

// Main function
int main()
{
int n,j,d,k;
cout<<"enter size of table:";
cin>>n;
hashtable h1(n);
cout<<"enter "<<n<<" elements to be inserted:"<<endl;

// Insert elements into Hash Table
for(int i=0;i<n;i++)
{
cin>>j;
h1.insert(j);
}

cout<<"TABLE:-"<<endl;

// Print the Hash Table
h1.print();

cout<<"enter key to be searched:";
cin>>k;

// Search for a key in the Hash Table
h1.search(k);

cout<<"enter key to be deleted:";
cin>>d;

// Remove a key from the Hash Table
h1.remove(d);

// Print the Hash Table after removing the key
h1.print();

return 0;
}
/*output:-
enter size of table:3
enter 3 elements to be inserted:
1
2
3
TABLE:-
3
1
2
enter key to be searched:2
key found at 2
enter key to be deleted:3
1
2*/