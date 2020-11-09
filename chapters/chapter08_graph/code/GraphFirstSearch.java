/**
 * @Date : 2020-11-09 10:22:00
 * @LastEditors : anlzou
 * @Github : https://github.com/anlzou
 * @LastEditTime: 2020-11-09 10:43:32
 * @Describe :
 */
package chapters.chapter08_graph.code;

import java.util.LinkedList;
import chapters.chapter08_graph.code.struct.StrGraph.Graph;

public class GraphFirstSearch {
    /**
     * 深度优先遍历 Deep First Search
     */
    public static void dfs(Graph graph, int start, boolean[] visited) {
        System.out.println(graph.vertexes[start].data);

        visited[start] = true;
        for (int index : graph.adj[start]) {
            if (!visited[index]) {
                dfs(graph, index, visited);
            }
        }
    }

    /**
     * 广度优先遍历 Breadth First Search
     */
    public static void bfs(Graph graph, int start, boolean[] visited, LinkedList<Integer> queue) {
        queue.offer(start);
        while (!queue.isEmpty()) {
            int front = queue.poll();
            if (visited[front]) {
                continue;
            }

            System.out.println(graph.vertexes[front].data);

            visited[front] = true;
            for (int index : graph.adj[front]) {
                queue.offer(index);
            }
        }
    }
}