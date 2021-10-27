#include<bits/stdc++.h>
using namespace std;
#define R 3
#define C 3

void swap(int mat[R][C], int row1, int row2,
          int col)
{
    for (int i = 0; i < col; i++)
    {
        int temp = mat[row1][i];
        mat[row1][i] = mat[row2][i];
        mat[row2][i] = temp;
    }
}


int rankOfMatrix(int mat[R][C])
{
    int rank = C;
 
    for (int row = 0; row < rank; row++)
    {
        if (mat[row][row])
        {
           for (int col = 0; col < R; col++)
           {
               if (col != row)
               {
        
                 double mult = (double)mat[col][row] /
                                       mat[row][row];
                 for (int i = 0; i < rank; i++)
                   mat[col][i] -= mult * mat[row][i];
              }
           }
        }

        else
        {
            bool reduce = true;
            for (int i = row + 1; i < R;  i++)
            {
            
                if (mat[i][row])
                {
                    swap(mat, row, i, rank);
                    reduce = false;
                    break ;
                }
            }

            if (reduce){
                rank--;

                for (int i = 0; i < R; i ++)
                    mat[i][row] = mat[i][rank];
            }

            row--;
        }
        
    }
    return rank;
}
 


int main()
 {
	//code
	int t;
    cin>>t;
    while(t--)
    {
        int mat[3][3];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>mat[i][j];

            }
        }
        cout<<rankOfMatrix(mat);
        
    }
	return 0;
}