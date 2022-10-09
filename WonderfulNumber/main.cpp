#include <iostream>
#include <iomanip>

using namespace std;



bool binaryRepresentationIsPalindrome(long long x){
    long long arrOfBinary[100];
    long long counter=0;
    string bin="";
    while(x!=0){
        arrOfBinary[counter]=x%2;
        //cout<<arrOfBinary[counter];
        x=x/2;
        counter++;

    }

    if(counter==1||counter==2){
        return true;
    }
    for(int i=0,j=counter-1;i<j,j>=0;i++,j--){
            //cout<<"\n"<<arrOfBinary[i]<<"   "<<arrOfBinary[j];
        if(arrOfBinary[i]!=arrOfBinary[j]){
            return false;
        }
    }
    return true;
}



bool isOdd(long long x){
    if(x%2!=0){
        return true;
    }else{
    return false;
    }
}


void testfun(){

    //test cases
    int n;
    for(int i=0;i<=100;i++){
      n=i;
      bool isPalindrome=binaryRepresentationIsPalindrome(n);
      bool is_ood=isOdd(n);
      if(isPalindrome==true&&is_ood==true){
           cout<<i<<" = "<<"YES"<<endl;
        }else{
           cout<<i<<" = "<<"NO"<<endl;
        }
    }








}




int main()
{
     //testfun();

     long long n;
    cin>>n;
    bool isPalindrome=binaryRepresentationIsPalindrome(n);
    bool is_ood=isOdd(n);
    if(isPalindrome==true&&is_ood==true){
        cout<<"YES";
    }else{
    cout<<"NO";
    }






    return 0;
}
