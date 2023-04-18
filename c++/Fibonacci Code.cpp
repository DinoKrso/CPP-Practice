    #include <iostream>
    using namespace std;
    int main()
    {
        int a, b1 = 0, b2 = 1, sljedecibr = 0;
        cout << "Enter number: ";
        cin >> a;
        cout << "Fibonacci: ";
        for (int i = 1; i <= a; ++i)
        {
    
            if(i == 1)
            {
                cout << " " << b1;
                
            }
            if(i == 2)
            {
                cout << b2 << " ";
               
            }
            sljedecibr = b1 + b2;
            b1 = b2;
            b2 = sljedecibr;
            
            cout << sljedecibr << " ";
        }
        return 0;
    }
