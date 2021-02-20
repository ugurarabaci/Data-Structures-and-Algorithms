package euler;

public class ProjectEuler2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int x = 0;
		int y = 1;
		int z = x + y;
		int sume = 0;
		while(z < 4000000){
		    x = y;
		    y = z;
		    z = x + y;
		    if(z % 2 == 0){
		        sume += z; 		    }
		}
		System.out.print(sume);
}
}
