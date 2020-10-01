#include <bits/stdc++.h>
using namespace std;


int Hourglass(int a[6][6]){

 int result = INT_MIN;
 int r,c,sum;
 for(r=0;r<=3;r++)
 {
     for(c=0;c<=3;c++){

        sum=a[r][c]+a[r][c+1]+a[r][c+2]+a[r+1][c+1]
        +a[r+2][c]+a[r+2][c+1]+a[r+2][c+2];
        result = std::max(result,sum);
     }
 }
 return result;

}
int main()
{
  int arr[6][6];

    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>arr[i][j];
        }
    }
    int highest_value = Hourglass(arr);
    cout<<highest_value<<endl;
}
