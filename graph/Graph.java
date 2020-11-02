import java.util.Scanner;
public class Graph <T, W> {

	public Graph(String filename) {
		Scanner sc = new Scanner(filename);
		sc.useDelimiter("\n|,");
		
		while(sc.hasNext()){
			System.out.println(sc.next());
		}
	}
}
