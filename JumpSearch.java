package Practice;

public class JumpSearch {

	public static int jumpSearch(int[] arr, int x, int n)
    {
        int step = 2;
        int prev = 0;
        for (int minStep = Math.min(step, n)-1; arr[minStep] < x; minStep = Math.min(step, n)-1)
        {
            prev = step;
            step += 2;
            if (prev >= n)
                return -1;
        }
        while (arr[prev] < x)
        {
            prev++;
            if (prev == Math.min(step, n))
                return -1;
        }
        if (arr[prev] == x)
            return prev;
 
        return -1;
    }
 	
	
	public static void main(String[]args) {
		int arr[]= {1,3,4,5,11,13,27,233,4244};
		int i,ind,x,n=arr.length;
		System.out.println("The given array is :");
		for(i=0; i<n; i++) {
			System.out.print(arr[i]+"  ");
		}
		System.out.print("\n");
		System.out.println("We're going to search 27 in our array");
		
		x= 27;
		
		int index = jumpSearch(arr, x,n);
        System.out.println("\nNumber " + x +" is at index " + index);
	}
}
