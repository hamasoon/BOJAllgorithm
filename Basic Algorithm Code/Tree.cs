using System;
using System.Collections.Generic;

namespace TreeMaking
{
    class Node<T>
    {
        private T Data { get; set; }
        private List<Node<T>> Children = new List<Node<T>>();

        public Node(T data, params Node<T>[] children)
        {
            this.Data = data;
            foreach (Node<T> el in children) Children.Add(el);
        }

        public void addChild(params T[] newDatas)
        {
            foreach (T data in newDatas) Children.Add(new Node<T>(data));
        }

        public void addChild(params Node<T>[] children)
        {
            foreach (Node<T> el in children) Children.Add(el);
        }

        public void printData()
        {
            Console.WriteLine(Data);
            foreach (Node<T> child in Children) child.printData();
        }

        public int getHeight()
        {
            int H = 0;
            foreach (Node<T> child in Children)
            {
                if (H < child.getHeight()) H = child.getHeight();
            }
            return H + 1;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Node<string> root = new Node<string>("학장");
            Node<string> pro1 = new Node<string>("교수1");
            Node<string> pro2 = new Node<string>("교수2");
            Node<string> pro3 = new Node<string>("교수3");

            pro1.addChild("노예11", "노예12", "노예13");
            pro2.addChild("노예21", "노예22", "노예23");
            pro3.addChild("노예31", "노예32", "노예33");
            root.addChild(pro1, pro2, pro3);

            root.printData();
            Console.WriteLine(root.getHeight());
        }
    }
}
