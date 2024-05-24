  int maxim = 0;
 for(int i=0;i<26;i++){
    if(vec[i]>maxim){
        maxim = vec[i];
    }
  }

  for(int i=0;i<26;i++){
   if(vec[i]==maxim){
    int ascii = i + 97;
    char ch = (char)ascii;
    cout<<ch<<" "<<maxim<<endl;
   }
  }