package main

import" fmt"

func fact(n int) int{
	if n<=1{
		return 1
	}
	return n*fact(n-1)
}

//memoization
var a [n] int

func factM(n int) int {
    
     
      if n<=1{
      	return 1
      } 
      //already calculated
      if a[n]!=0{
      	return a[n]
      }
      
    return a[n]=n* factM(n-1)
}


// main function 
func main(){
     fmt.Println(fact(6))
     fmt.Println(factM(10))
}
