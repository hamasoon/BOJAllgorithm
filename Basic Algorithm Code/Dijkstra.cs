using System;
using System.Collections.Generic;

class Edge{
	public int weight;
	public Vertex dest;

	public Edge(int weight, Vertex dest){
		this.weight = weight;
		this.dest = dest;
	}
}

class Vertex{
	public List<Edge> ways = new List<Edge>();
	public int pos;

	public Vertex(int pos, params Edge[] eList) {
		this.pos = pos;
		foreach(Edge el in eList){
			ways.Add(el);
		}
	}
}

class Graph {
	private List<Vertex> graph = new List<Vertex>();
	private int length;
	private List<int> dist = new List<int>();
	private List<int> parents = new List<int>();

	public Graph(params Vertex[] vList){
		this.length = vList.Length();
		foreach(Vertex el in vList){
			graph.Add(el);
			dist.Add(100000);
			parents.Add(0);
		}
	} 

	public void addVertex(params Vertex[] vList){
		foreach(Vertex el in vList){
			graph.Add(el);
			dist.Add(100000);
			parents.Add(0);
			length++;
		}
	}

	public dijkstra(int start){
		PriorityQueue<Vertex, int> pq = PriorityQueue<Vertex, int>();
		dist[start] = 0;
		qp.Enqueue(graph[start]);

		while(pq.Count > 0){
			int cost; Vertex here;
			pq.TryDequeue(out here, out cost);

			if(dist[here.pos] > cost) continue;

			foreach(Edge el in here.ways){
				Vertex there = el.dest;
				int nextCost = el.weight + dist[here.pos];
				if(dist[there.pos] > nextCost){
					dist[there.pos] = nextCost;
					pq.Enqueue(there, nextCost);
					parents[there.pos] = here.pos;
				}
			}
		}
	}
}

public class Program {
	public static void Main(string[] args) {

	}
}

    class newGraph
    {
        int[,] adj = new int[6, 6]
        {
            { -1, 15, -1, 35, -1, -1 },
            { 15, -1, 5, 10, -1, -1 },
            { -1, 5, -1, -1, -1, -1 },
            { 35, 10, -1, -1, 5, -1 },
            { -1, -1, -1, 5, -1, 5 },
            { -1, -1, -1, -1, 5, -1 }
        };

        public void dijkstra(int start)
        {
            bool[] visited = new bool[6];
            int[] dist = new int[6];
            Array.Fill(dist, Int32.MaxValue);

            dist[start] = 0;

            while (true)
            {
                int closest = Int32.MaxValue;
                int now = -1;
                for (int i = 0; i < 6; i++)
                {
                    if (visited[i]) continue;
                    if (dist[i] == Int32.MaxValue) continue;
                    closest = dist[i];
                    now = i;
                }

                if (now == -1) break;

                visited[now] = true;

                for (int next = 0; next < 6; next++)
                {
                    if (adj[now, next] == -1) continue;
                    if (visited[next]) continue;

                    int nextDist = dist[now] + adj[now, next];
                    if(nextDist < dist[next])
                    {
                        dist[next] = nextDist;
                    }
                }
            }
        }
    }