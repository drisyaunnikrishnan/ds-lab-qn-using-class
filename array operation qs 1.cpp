#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;

class operation 
{
public:
    int a[20];
    int n;
    int inspos;
    void create();
    void insert();
    void removeByIndex();
    void treaversing();
 };

void operation::create()
{
        cout << "\n enter the size of the array :";
        cin >> n;

        cout << "\n enter the elements in the array \n";

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
}

void operation::treaversing()
{
        cout << "\n successfully traversed \n";
        cout << "\n elements in the array are : \n";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << "\t";
        }
}

void operation::insert()
{
        cout << "\n enter the position of the item to be inserted : ";
        cin >> inspos;
        if (inspos < 0 || inspos > n) 
        {
            cout << "\n index is not found, we cannot insert an item \n";
            return;
        }
        cout << "\n enter the item to be inserted : ";
        int item;
        cin >> item;

        for (int i = n; i > inspos; i--) 
        {
            a[i] = a[i - 1];
        }
        a[inspos] = item;
        n++;

        cout << "\n insertion has successfully done \n";
}

void operation::removeByIndex()
{
        cout << "\n enter the position of the element to be deleted : ";
        int delpos;
        cin >> delpos;

        if (delpos<0 || delpos>=n) 
        {
            cout << "\n index is not found, we cannot delete an item \n";
            return;
        }

        for (int i = delpos; i < n - 1; i++) 
        {
            a[i] = a[i + 1];
        }

        n--;

        cout << "\n Element at position " <<delpos<<" deleted successfully \n";
    }
    
int main() 
{
    int choice;
    operation obj;
    obj.create();
    
    do {
        cout << "\n 1.insertion \n 2.deletion \n 3.traversing \n 4.exit\n\n";
        cin >> choice;

        switch (choice) {
            case 1:
                obj.insert();
                break;

            case 2:
                obj.removeByIndex(); 
                break;

            case 3:
                obj.treaversing();
                break;

            case 4:
                exit(0); 
                break;

            default:
                cout << "\n Invalid choice! Please enter a valid option.\n";
        }

    } while (choice != 4);

}
