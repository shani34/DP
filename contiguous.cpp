
//using the array
int Contiguous(std::vector<int> v;){

int n=v.size();

int M[n]=0,maxSum=0;

if(A[0]>0)
 M[0]=0;
else M[0]=0

for(int i=0;i<n;i++){

	if(M[i-1]+v[i]>0)
		M[i]=M[i-1]+v[i];
	else M[i]=0;
}

for(int i=0;i<n;i++)
{
	maxSum=max(maxSum,M[i]);
}
return maxSum;
}

//more optimizstion


int ContiguousOptimized(std::vector<int> &v)
{
	 int maxN=v[0];
     for(int i=0;i<v.size();i++){
     	maxN=max(maxN,v[i]);
     }

     int maxSum=0,sum_here=0;

     for(int i=0;i<v.size();i++){

     		sum_here=max(sum_here,sum_here+v[i]);

     		maxSum=max(maxSum,sum_here);
     }
     //checking for the all the negative number
     
     return max(maxN,maxSum);
}

