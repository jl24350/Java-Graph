public class Edge<W>{

	private Vertex[] pair = new Vertex[2];
	private W weight;

	public Edge(Vertex src, Vertex dest, W weight){
		pair[0] = src;
	        pair[1]	= dest;
		this.weight = weight;
	}

	public Vertex[] getVerticies(){
		return pair;

	}
	public W getWeight(){
		return weight;
	}


}
