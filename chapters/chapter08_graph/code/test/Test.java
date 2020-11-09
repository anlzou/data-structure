/**
 * @Date        : 2020-11-09 10:40:59
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-11-09 10:51:22
 * @FilePath    : \data-structure\chapters\chapter08_graph\code\test\Test.java
 * @Describe    : 
 */
package chapters.chapter08_graph.code.test;

import java.util.LinkedList;

import chapters.chapter08_graph.code.*;
import chapters.chapter08_graph.code.struct.StrGraph.Graph;

public class Test {
    public static void main(String[] args) {
        Graph graph = new Graph(6);
        GraphFirstSearch graphFirstSearch = new GraphFirstSearch();

        graph.adj[0].add(1);
        graph.adj[0].add(2);
        graph.adj[0].add(3);

        graph.adj[1].add(0);
        graph.adj[1].add(3);
        graph.adj[1].add(4);

        graph.adj[2].add(0);

        graph.adj[3].add(0);
        graph.adj[3].add(1);
        graph.adj[3].add(4);
        graph.adj[3].add(5);

        graph.adj[4].add(1);
        graph.adj[4].add(3);
        graph.adj[4].add(5);

        graph.adj[5].add(3);
        graph.adj[5].add(4);

        System.out.println("图的深度优先遍历：");

        graphFirstSearch.dfs(graph, 0, new boolean[graph.size]);

        System.out.println("图的广度优先遍历：");

        graphFirstSearch.bfs(graph, 0, new boolean[graph.size], new LinkedList<Integer>());
    }

}