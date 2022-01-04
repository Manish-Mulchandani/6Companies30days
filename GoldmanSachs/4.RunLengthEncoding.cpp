string encode(string src)
{     
  string str="";
  int sum=1;
  int n=src.length();
  vector<int> A;
  for(int i=1; i<n; i++)
  {
      if(src[i]==src[i-1])
        sum++;
      else 
      {
        A.push_back(sum);
        sum=1;
      }
  }
  A.push_back(sum);
  int j=0;
  for(int i=1; i<n; i++)
  {
      if(src[i]!=src[i-1])
      {
          str+=src[i-1];
          str+=to_string(A[j]);
          j++;
      }
  }
  str+=src[n-1];
    str+=to_string(A[j]);
    return str;
  
}     
