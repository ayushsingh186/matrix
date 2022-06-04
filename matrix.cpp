/** enter 2 matrix then  take symbols  as input and perform the operations
 *            '+' for addition
 *            '-' for substaction
 *            '*' for multiplication
 *            '/' for division
 * */
 #include <iostream>
 using namespace std;

 void matrix_sum()
 {
     cout<<"\nENTER THE NUMBER OF ROWS AND THEN THE COLUMN OF MATRIX\n";
     int m,n;
     cin>>m>>n;
     int arr[m][n],arr2[m][n],sum[m][n];
     cout<<"ENTER THE ELEMENTS OF MARTIX 1 (ROWISE)\n";
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             cin>>arr[i][j];
         }
     }
     cout<<"ENTER THE ELEMENTS OF MARTIX 2 (ROWISE)\n";
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             cin>>arr2[i][j];
         }
     }
     for (int i=0; i<m; i++)
     {
        for (int j=0; j<n; j++)
        {
           sum[i][j]=arr[i][j]+arr2[i][j];
        }
     }
     cout<<"\n THE SUM OF ABOVE MATRIX IS:\n";
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             cout<<sum[i][j]<<" ";
         }
         cout<<endl;
     }
 }
 void matrix_sub()
{
    cout<<"\nENTER THE NUMBER OF ROWS AND THEN THE COLUMN OF MATRIX\n";
     int m,n;
     cin>>m>>n;
     int arr[m][n],arr2[m][n],sub[m][n];
     cout<<"ENTER THE ELEMENTS OF MARTIX 1 (ROWISE)\n";
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             cin>>arr[i][j];
         }
     }
     cout<<"ENTER THE ELEMENTS OF MARTIX 2 (ROWISE)\n";
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             cin>>arr2[i][j];
         }
     }
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             sub[i][j]=(arr[i][j]-arr2[i][j]);
         }
     }     
     cout<<"\n THE DIFFERENCE OF ABOVE MATRIX IS:\n";
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             cout<<sub[i][j]<< " ";
         }
         cout<<endl;
     }
 }
void matrix_multi()
 {
     cout<<"\nENTER THE NUMBER OF ROWS AND THEN THE COLUMN OF MATRIX\n";
     int m,n;
     cin>>m>>n;
     int arr[m][n],arr2[m][n],multi[m][n];
     cout<<"ENTER THE ELEMENTS OF MARTIX 1 (ROWISE)\n";
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             cin>>arr[i][j];
         }
     }
     cout<<"ENTER THE ELEMENTS OF MARTIX 2 (ROWISE)\n";
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             cin>>arr2[i][j];
         }
     }

    int sum=0;
     for(int i=0;i<m;i++)
     {
         for(int k=0;k<n;k++)
         {
             for(int j=0;j<n;j++)
            {
                 sum+=arr[i][j] * arr2[j][k];
            }
             multi[i][k]=sum;
             sum=0;
             
         }
     }
     cout<<"\nTHE MULTIPLICATION OF ABOVE MATRIX IS:\n";
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             cout<<multi[i][j]<<"  ";
         }
         cout<<endl;
     }
 }
void matrix_div()
 {
     cout<<"\nENTER THE NUMBER OF ROWS AND THEN THE COLUMN OF MATRIX\n";
     int m,n;
     cin>>m>>n;
     int arr[m][n],arr2[m][n],div[m][n];
     cout<<"ENTER THE ELEMENTS OF MARTIX 1 (ROWISE)\n";
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             cin>>arr[i][j];
         }
     }
     cout<<"ENTER THE ELEMENTS OF MARTIX 2 (ROWISE)\n";
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             cin>>arr2[i][j];
         }
     }

     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             div[i][j]=(int)(arr[i][j]/arr2[i][j]);
         }
     }
     cout<<"\n THE DIVISION OF ABOVE MATRIX IS:\n";
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             cout<<div[i][j]<< " ";
         }
         cout<<endl;
     }
 }
 int main()
 {
     char ch;
    do
    {
         cout<<"\n\n\nENTER THE ARITHMATIC OPERATOR TO PERFORM THE OPERATION : \n PRESS  '+'  \t FOR ADDITION\n PRESS  '-'\t FOR SUBSTRACTION \n PRESS  '*'\t FOR MULTIPLICATION \n PRESS  '/'\t FOR DIVISION\n PRESS  '0'\t FOR EXIT\n";
         
         cin>>ch;
         switch(ch)
         {
         case '+':matrix_sum();
                break;
         case '-':matrix_sub();
                break;
         case '*':matrix_multi();
                break;
         case '/':matrix_div();
                break;
         default : cout<<"U HAVE NOT ENTERED THE OPERATOR TO PERFORM THE OPERATION :)\n THANK U ";
         }
    } while (ch!='0');
    
    return 0;
 }