
/*
 *****************************************
 修改日期：2016-04-02
 进展：
 1、可以通过bottomWidget移动窗体

 *****************************************
 修改日期：2016-03-29
 进展：
 1、优化图标
 2、添加清空无效记录的功能

 *****************************************
  修改日期：2016-03-27
  进展：
  1、使videoWidget0彻底没有边框


 *****************************************
  修改日期：2016-03-26
  进展：
  1、增加拖放播放功能

 ******************************************
  修改日期：2016-03-25
  进展：
  1、增加关闭窗体时的缩小消失

 ******************************************
  修改日期：2016-03-24
  进展：
  1、增加隐藏列表的功能
  2、设置hideButton的延迟消失


 ******************************************
  修改日期：2016-03-23
  进展：
  1、恢复顺序播放
  2、向右键菜单添加清空列表功能
  3、解决清空时崩溃问题

 ******************************************
  修改日期：2016-03-21
  进展：
  1、去掉顺序播放的播放模式
  2、寻找了一下午图标，未果

 ******************************************
  修改日期：2016-03-20
  进展：
  1、废掉playList,将vector作为播放列表

 ******************************************
  修改日期：2016-03-19
  进展：
  1、可以将打开的视频存储到数据库，删除的视频也会同步到数据库
  2、把一些常用的设置量存储到数据库
  3、修正最大化时的小错误
  4、数据库增加index解决文件名自动排序的问题
  5、发现没有播放视频时删除崩溃问题
  6、优化初始化时的大小

 ******************************************
  修改日期：2016-03-18
  进展：
  1、增加了数据库的功能

 ******************************************
 修改日期：2016-03-16
 进展：
 1、更换了解码器，解决了删除视频后无法继续打开视频的问题

  ******************************************
  修改日期：2016-03-13
  进展：
  1、仍然不能解决删除视频后打不开的问题


  ******************************************
  修改日期：2016-03-07
  进展：
  1、可以通过拖动VideoWidget移动整个窗口
  2、修正声音滑动条的问题
  3、更正右键双击也会切换视频的问题

  ******************************************
  修改日期：2016-03-06
  进展：
  1、设置listWidget的滑动条
  2、设置listWidget样式
  3、更改媒体时，自动切换标题
  4、双击列表项时切换视频
  5、修改下边界和右边界各为2px

  ******************************************
  修改日期：2016-03-04
  进展：
  1、当鼠标不在底部时(除了在listWidget内)，bottomWidget自动隐藏
  2、bottomWidget延时隐藏
  3、调整底部按钮样式、进度条的样式以及声音滑动条的样式

  ******************************************
  修改日期：2016-03-03
  进展：
  1、将菜单设置为无边框
  2、将playModeListWidget设置为无边框
  3、实现playModeListWidget的延时消失，设置成无边框
  4、实现播放模式选择的功能
  5、当鼠标不在底部时(仍然在控件内部)，bottomWidget自动隐藏
  6、取消4分屏

  ******************************************
  修改日期：2016-03-02
  进展：
  1、实现鼠标悬停在声音按钮上时显示声音滑动条
  2、实现滑动条的延时消失
  3、实现声音滑动条的功能

  ******************************************
  修改日期：2016-03-01
  进展：
  1、可以使用eventFilter过滤器实现鼠标在按钮上的悬停响应

  ******************************************

  可以用QStackedWidget实现不同界面的切换
  ******************************************
  修改日期：2016-02-16
  进展：
  1、实现四分屏观看视频， 不过切换时出现视频不同步问题

  *******************************************
  修改日期：2016-02-14
  进展：
  1、将内部的multimap(采用红黑树，自动排序)改为vector(不自动排序)

  ********************************************
  修改日期：2016-02-12
  进展：
  1、将底部的按钮全部整合到bottomWidget上
  2、listWidget垂直到底
  3、添加标题
  4、显示播放时间和总时间


  ********************************************
  修改日期：2016-02-11
  进展：
  1、实现上一曲下一曲的功能
  2、修正打开文件无法直接播放的问题


  ********************************************
  修改日期：2016-02-09
  进展：
  1、放置好 上一曲 下一曲等等各种按钮
  2、改为打开文件后直接播放视频


  ********************************************
  修改日期：2016-02-04
  进展：
  1、放置左上角的菜单，尝试各种层叠样式失败,我应该特意抽出两天搞一下样式表
  2、尝试放置按钮，但是布局没有设计好


  ********************************************
  修改日期：2016-02-03
  进展：
  1、改用QMultiMap，解决不同的路径中包含同样的文件名不能加载的问题
  2、尝试将listWidget与groupBox做一个横向布局失败
  3、尝试使用QComboBox做个菜单，发现它只是下拉菜单，应该用QPushButton和QMenu


  *********************************************
  修改日期：2016-02-02
  进展：
  1、添加QListWidget作为播放列表
  2、使用QMap将视频名字与存在路径关联起来
  3、解决获取视频的名字时的中文乱码问题


  *********************************************
  修改日期：2016-01-31
  进展：
  1、实现VideoWidget与视频的背景统一
  2、大背景变为灰色
  3、打算用QListWidget做一个列表


  *********************************************
  修改日期：2016-01-30
  功能描述：
   1、无边框可移动窗体
   2、自定义关闭 最大化 最小化 按钮
   3、放置播放按钮，放置打开按钮， 放置滑动条
   4、实现基本视频的播放


   ********************************************

*/
