    class HeapTree
    {
        private List<int> heap = new List<int>();

        public void Add(int p)
        {
            heap.Add(p);
            int idx = heap.Count - 1;

            while (idx != 0)
            {
                if (heap[(idx - 1) / 2] < heap[idx])
                {
                    int temp = heap[(idx - 1) / 2];
                    heap[(idx - 1) / 2] = heap[idx];
                    heap[idx] = temp;
                    idx = (idx - 1)/2;
                }
                else break;
            }
        }

        public int RemoveByIdx(int idx)
        {
            int temp = heap[idx];
            heap[idx] = heap[heap.Count - 1];
            heap.Remove(heap.Count - 1);

            while (idx * 2 < heap.Count) {
                int left = idx * 2 + 1;
                int right = idx * 2 + 2;
                int nidx = 0;

                if (left <= heap.Count - 1)
                    if(heap[idx] < heap[left])
                        nidx = left;
                if (right <= heap.Count - 1)
                    if(heap[idx] < heap[right])
                        nidx = right;

                if (nidx == 0) break;
                else
                {
                    int temp = heap[idx];
                    heap[idx] = heap[nidx];
                    heap[nidx] = temp;

                    idx = nidx;
                }
            }

            return temp;
        }

        public int RemoveByValue(int v)
        {
            return RemoveByIdx(heap.IndexOf(v));
        }

        public void PrintHeap()
        {
            foreach (int i in heap) Console.WriteLine(i);
        }
    }