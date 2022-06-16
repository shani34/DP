int NoThreeConsecutive(std::vector<int> v,int n){

	if (n==0)
		return v[n];

	return max(v[n]+v[n-1]+NoThreeConsecutive(v,n-3),max(v[n]+NoThreeConsecutive(v,n-2),NoThreeConsecutive(v,n-1)))
}

//top down

int NoThreeConsecutive(int A[],int n){

	int m[n+1]=0;

	m[0]=A[0];
	m[1]=max(A[0]+A[1],max(A[0],A[1]));
	m2=max(m[1],A[2]);
    m[2]=max(m2,max(A[0]+A[2],A[1]+A[2]));

//

    for(int i=3;i<n;i++){
    	m[i]=max(v[i]+v[i-1]+m[i-3],max(v[i]+M[i-2],m[i-1]))
    } 

//we can do it conversaly using up topic also
    //just mathematics
    
    return m[n]
}


space and time:O(n)