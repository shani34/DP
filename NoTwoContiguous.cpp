
int memo[n+1]=-1;

int NoTwoContiguous(std::vector<int> v,int n){

	//base condtion
	if(n==0)
		return v[0];
	if(n==1)
		return memo[n]=max(v[n],v[n-1]);

  if(memo[n]!=-1)
  	return memo[n];

  return memo[n]=max(v[n]+NoTwoContiguous(v,n-2),NoTwoContiguous(v,n-1));
} 

//top down 

int NoTwoContiguous2(std::vector<int> v,int  n){
//base condition
	int m[n+1]=0;
     m[0]=v[0];
     m[1]=max(v[0],v[1]);
//always store the maximum sum till yet

     for(int i=2;i<n;i++)
     {
     	m[i]=(m[i-1]>m[i-2]+v[i]? m[i-1]:m[i-2]+v[i]);
     }

     //we can rewrite it also

     for(int i=0;i<n-2;i++){

     	m[i+2]=(m[i]+v[i+2]>m[i+1]?m[i]+v[i+2]:m[i+1])
     }

 return m[n-1];
}

space & time:O(n)


//tip: spend more and more time on problem
        
        
              


              