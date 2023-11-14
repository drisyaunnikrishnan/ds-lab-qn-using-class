#include <iostream.h>
#include<conio.h>

class selectionsort {
public:
    int a[20];
    int n;
    void insert();
    void selectionsorting();
    void display();
    };

    void selectionsort::insert() {
	cout << "\nEnter the size of the array: ";
	cin >> n;
	cout << "Enter the elements into the array: ";
	for (int i = 0; i < n; i++)
	 {
	    cin >> a[i];
	}
    }

    void selectionsort::selectionsorting() {
	int i, j, min_index;

	for (i = 0; i < n - 1; i++)
	 {
	    min_index = i;
	    for (j = i + 1; j < n; j++)
	     {
		if (a[j] < a[min_index])
		 {
		    min_index = j;
		}
	    }
	   if (min_index != i)
	    {
	int temp = a[i];
	a[i] = a[min_index];
	a[min_index] = temp;
    }
	}
    }

    void selectionsort::display() {

	for (int i = 0; i < n; i++)
	{
	    cout <<a[i]<<" \t ";
	}

    }

int main()
 {
    selectionsort obj;
    clrscr();
    obj.insert();
    cout<<"\n elements before selection sorting :\n";
    obj.display();
    obj.selectionsorting();
    cout<<"\n elements after selection sorting  :\n";
    obj.display();
    getch();
    return 0;
}