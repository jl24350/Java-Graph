import java.util.ArrayList;
public class Vertex<T>{


	private T data;
	private ArrayList<Edge> edges = new ArrayList<>();

	public Vertex(T data){

		this.data = data;
		
	}

	public T getData(){ 
		return data;
	}

	public void setData(){
		this.data = data;
	}
	public boolean addEdge(Edge e) {
		if(edges.contains(e)) {
			return false;
		}
		Vertex[] endpoints = e.getVertices();
		if(endpoints[0] != this && endpoints[1] != this){
			return false;
		}
		edges.add(e);
		return true;
	}

	@Override
	public String toString(){
		return "[" + data.toString() + "]";
	}

}
