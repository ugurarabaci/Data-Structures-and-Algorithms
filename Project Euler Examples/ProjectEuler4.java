package euler;
import java.util.*;
import java.math.BigInteger;

public class ProjectEuler4 {


	static boolean a(int j){
		int length = String.valueOf(j).length();
		int ilkdeger = j;
        int kalan,deger=0;
        for (int i = 0; i<length; i++){
             
            kalan = j % 10;
            deger = deger * 10 + kalan;
            j = j /10;
        }if(deger == ilkdeger){
		return true;
		
	}
        else return false;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		for(int a=100;a<1000;a++) {
			for(int b=100;b<1000;b++) {
				if(a(a*b)==true) {
					System.out.println(a*b+" "+a+" "+b);
				}
			}
}
}
}