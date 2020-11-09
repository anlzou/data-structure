/**
 * @Date        : 2020-11-09 10:33:30
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-11-09 10:49:06
 * @FilePath    : \data-structure\chapters\chapter08_graph\code\struct\StrGraph.java
 * @Describe    : 
 */
package chapters.chapter08_graph.code.struct;

import java.util.LinkedList;

public class StrGraph {
    /**
     * 图的顶点
     */
    public static class Vertex {
        public int data;

        Vertex(int data) {
            this.data = data;
        }
    }

    /**
     * 图（邻接表形式）
     */
    public static class Graph {
        public int size;
        public Vertex[] vertexes;
        public LinkedList<Integer> adj[];

        public Graph(int size) {
            this.size = size;

            // 初始化顶点和邻接矩阵
            vertexes = new Vertex[size];
            adj = new LinkedList[size];
            for (int i = 0; i < size; i++) {
                vertexes[i] = new Vertex(i);
                adj[i] = new LinkedList();
            }
        }
    }
}