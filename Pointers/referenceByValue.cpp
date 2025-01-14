int refereneValue(int *n){

    cout << "Address of the variable is "<<n<<endl;

    *n *= *n;
    return *n;
}



int main(){

    int n1  = 8;
    cout << "address of n1 in main(): " << &n1 << "\n";
    cout << "Square of n1: " << refereneValue( &n1) << "\n";
    cout << "No change in n1: " << n1 << "\n";
}