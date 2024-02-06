<div align=center><img src="fig/Merge_Sort.gif" width="  "></div>

Merge Sort是一种利用递归思想的排序方法，国内将其译作"归并排序"。这个翻译我感觉不是很贴切，它过分强调了递归的思想而缺少了实现递归思想的思路——Merge。

递归的思想主要体现在这张图里

<div align=center><img src="fig/Merge_sort_algorithm_diagram.svg" width="  "></div>

Merge排序考虑这样一件事，我可以很容易的将两个已经排好序的list整合成一个排好序的list，实现方法想必大家的第一门编程课或许都学过，就是新建一个list，然后双指针遍历，把对应值较小的指针上的值作为新list的新元。如果数据结构是链表，实际上将链表的指针重新定义也行，这样子空间复杂度可以降为 $O(1)$ 。如果数据结构是数组，是内存上的一块连续地址，那就没有办法了，必须新开辟内存，空间复杂度也会增加，而且通常具有递归算法的通病——空间复杂度特别高。

我编写Merge排序的思路如下：

- 写一个Merge函数，功能是将两个排好序的list整合为新的排好序的list
- Merge排序的主函数Merge_Sort中
  - 判断长度是否为1，若是则直接返回当前数组
  - 将待排序的list分为两组list1和list2
  - 递归调用Merge_Sort排序函数对list1和list2排序并储存结果
  - 使用Merge函数整合排好序的list1和list2，并返回结果
- 强行改为原地算法