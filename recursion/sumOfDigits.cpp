#include <iostream>
using namespace std;
int helper1(int n, int sum){
    if(n <= 0){
        return sum;
    }
    sum += n % 10;
    return helper1(n/10, sum);
}
void helper2(int n, int sum){
    if(n < 10){
        cout<<n;
        return;
    }
    int sumOfDigits = helper1(n, sum);
    helper2(sumOfDigits, sum);
}
int main(){
    int n;
    cin>>n;
    int sum = 0;
    int sumOfDigits = helper1(n, sum);
    cout<<sumOfDigits<<endl;
    helper2(sumOfDigits, 0);//sum of digits untill it is a single digit
    return 0;
}