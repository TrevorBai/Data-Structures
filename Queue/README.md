# This is a special priority queue implementation.

The implementation doesn't import any packages and is employed in python.

This queue is special because some items are flagged as permanent which stay in the queue permanently.
New item will replace non-permanent item with the least priority if the queue is full.

Three methods are implemented:
1. put(item, permanent = False)
2. sample(n)
3. full()
