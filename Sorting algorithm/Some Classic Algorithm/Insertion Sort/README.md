#  插入排序动图演示

<div align=center><img src="fig/insertion_sort.gif" width="  "></div>

插入排序优点类似平时我们线下打扑克牌时，一般会一边发牌一边整理，新的得到的牌就会按照大小顺序插到原来整理好的牌序中去。插入排序可以写递归式的，虽然说一般都不会这么写，很占内存。





值得注意的是，在敲代码的时候，需要考虑一下"插入"是的两种触发条件：

- 内层循环到头了
- 遇到了比取出的数更小的，符合插入条件后break

后者是break出来的，内层循环结束时下标的值加1才是要插入的位置；而前者是内层循环遇到头指针或者下标0了，这时应该出下标所在的位置，不应该加1。
