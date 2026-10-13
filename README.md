# CS-SelfLearning

我的计算机科学课外自学沉淀仓库。每个"自学单元"是一次围绕小主题的完整学习记录：讲义 + 练习代码 + 进度状态。

## 🤖 致 AI 助手

> **如果你是 AI 助手，被要求往本仓库添加/整理内容：**
> **请先完整阅读 [AI_GUIDE.md](AI_GUIDE.md)，严格按其中的结构约定执行，不要自创结构。**
> 不确定时长这样：`data-structures-algorithms/01-pointers-and-structs/`（范例单元，模仿它）。

## 📚 课程总表

| 课程 | 目录 | 单元进度 | 状态 |
|------|------|---------|------|
| 数据结构与算法 | [data-structures-algorithms/](data-structures-algorithms/) | 1 个单元 | 🟡 |

## 🗂 仓库结构

```
├── README.md            ← 你在这里
├── AI_GUIDE.md          ← AI 协作规范（AI 必读）
├── _template/           ← 单元模板：开新单元时整个复制
└── <course-slug>/       ← 一级目录 = 一门课
    ├── README.md        ← 课程目录：单元表
    └── NN-<unit-slug>/  ← 二级目录 = 一个单元
        ├── README.md    ← 单元首页（目标/路径/状态/卡点）
        ├── notes/       ← 讲义
        ├── code/        ← 代码（按语言分子目录）
        ├── assets/      ← 图片等静态资源
        └── meta/        ← 问答精华、复盘（可选）
```

## 📖 使用方法（给人看的）

- **看内容**：点进课程 → 单元 → 单元 README 是导览页，按"学习路径"一节走
- **开新单元**：复制 `_template/` 到 `<课程>/<编号>-<slug>/`，填 README，同步上层表格
- **状态标记**：🟡 进行中 / 🟢 已完成 / 🔴 搁置
- 详细规则见 [AI_GUIDE.md](AI_GUIDE.md)（人和 AI 共用同一套约定）
