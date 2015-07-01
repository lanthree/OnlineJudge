# OnlineJudge

## 简介

使用`python`的`tornado`框架进行Web服务器的开发，主服务器提供Web访问功能，辅助服务器对主服务器提供一些耗时的功能（例如，代码编译运行）。使用`MongoDB`存储数据，judge部分仍然使用C语言实现。

## 目录结构

```
codeview 	// 用户提交的代码，供CodeView使用
judge		// 判题代码
judgefile	// 题目的输入 正确输出
	1001	// 每个题号一个文件夹
	1002
	...
outputFiles // 用户提交程序运行的输出
	(runID).out
static		// Bootstrap的东西
	css, fonts, js ...
templates	// html模板
	*.html
tools		// 一些开发时测试用的代码
usercode	// 分用户存储提交的代码
	(username1)
		(hiscodefiles)
```

## 使用的类库

+ pymongo
+ misaka
+ [tornado](http://demo.pythoner.com/itt2zh/index.html)

## 提供的功能

+ 管理员用户添加题目
+ 普通用户交题判题 查看结果
+ 题目、判题结果 存入数据库
+ 无权限限制的查看代码

![](http://7b1exv.com1.z0.glb.clouddn.com/QQ20150701-1@2x.png)

![](http://7b1exv.com1.z0.glb.clouddn.com/QQ20150701-2@2x.png)

![](http://7b1exv.com1.z0.glb.clouddn.com/QQ20150701-3@2x.png)

![](http://7b1exv.com1.z0.glb.clouddn.com/QQ20150701-4@2x.png)

![](http://7b1exv.com1.z0.glb.clouddn.com/QQ20150701-5@2x.png)

![](http://7b1exv.com1.z0.glb.clouddn.com/QQ20150701-6@2x.png)

![](http://7b1exv.com1.z0.glb.clouddn.com/QQ20150701-7@2x.png)