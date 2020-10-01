#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
        int a=0,b=0,u,t,max=-9999999,i,j,k;
    for(i=1;i<=16;i++)
    {    
          t=a;
          u=b;
          int s=0;
        for(j=1;j<=3;j++)
        {
            for(k=1;k<=3;k++)
            {
                if(j==2&&k!=2)
                {
                    b++;
                    continue;
                }
                s=s+arr[a][b];
                b++;
            }
            a++;
            b=u;
        }
        if(i%4==0)
        {
            a=t+1;
            b=0;
        }
        else
        {
        
        a=t;
        b=u+1;
        }
        //cout<<s<<endl;
        if(s>max)
        max=s;
    }
    
    return max;
}




int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
