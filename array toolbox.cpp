#include <iostream>
using namespace std;

int main()
{
  int a[100];
  int i, j, n, temp;
  int choice;

  cout << "Enter the size of the array: ";
  cin >> n;

  for (i = 0; i < n; i++)
  {
    cout << "Enter element at " << i << ": ";
    cin >> a[i];
  }

  while (true)
  {
    cout << "\nMenu:\n";
    cout << "1. Sort the array\n";
    cout << "2. Insert an element\n";
    cout << "3. Delete an element\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1: // Sorting the array
      for (i = 0; i < n - 1; i++)
      {
        for (j = 0; j < n - i - 1; j++)
        {
          if (a[j] > a[j + 1])
          {
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
          }
        }
      }
      cout << "Sorted: ";
      for (i = 0; i < n; i++)
      {
        cout << a[i] << "|";
      }
      cout << endl;
      break;

    case 2: // Inserting an element
      if (n < 100)
      {
        int pos;
        cout << "Enter the position to insert (0 to " << n << "): ";
        cin >> pos;
        if (pos < 0 || pos > n)
        {
          cout << "Invalid position. Insertion failed." << endl;
        }
        else
        {
          int element;
          cout << "Enter the element to insert: ";
          cin >> element;
          for (i = n; i > pos; i--)
          {
            a[i] = a[i - 1];
          }
          a[pos] = element;
          n++;
          cout << "Element " << element << " inserted at position " << pos << "." << endl;
          cout << "Updated array: ";
          for (i = 0; i < n; i++)
          {
            cout << a[i] << "|";
          }
          cout << endl;
        }
      }
      else
      {
        cout << "Array is full. Cannot insert more elements." << endl;
      }
      break;

    case 3: // Deleting an element
      if (n > 0)
      {
        int pos;
        cout << "Enter the position to delete (0 to " << n - 1 << "): ";
        cin >> pos;
        if (pos < 0 || pos >= n)
        {
          cout << "Invalid position. Deletion failed." << endl;
        }
        else
        {
          int deletedElement = a[pos];
          for (i = pos; i < n - 1; i++)
          {
            a[i] = a[i + 1];
          }
          n--;
          cout << "Element " << deletedElement << " deleted from position " << pos << "." << endl;
          cout << "Updated array: ";
          for (i = 0; i < n; i++)
          {
            cout << a[i] << "|";
          }
          cout << endl;
        }
      }
      else
      {
        cout << "Array is empty. Cannot delete elements." << endl;
      }
      break;

    case 4: // Exit
      return 0;

    default:
      cout << "Invalid choice. Please select a valid option." << endl;
    }
  }

  return 0;
}
