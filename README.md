# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) Prototype 原型模式
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---

<!--ts-->
## 目錄
* [目的](#目的)
* [使用時機](#使用時機)
* [URL結構圖](#url結構圖)
* [實作成員](#實作成員)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---

## 目的
Prototype設計模式的目的是通過複製現有對象來創建新對象，<br>
從而避免創建複雜對象的開銷，同時維護對象的封裝性。<br>

---

## 使用時機
當創建新對象的過程很複雜或開銷很大，而且要創建的對象和現有對象很相似時，可以使用Prototype模式。<br>

---

## URL結構圖
![](https://drive.google.com/uc?id=1QadqEoNQBrdVnwugg0Jifz10B7gUprLd)
> 圖片來源：[Refactoring.Guru - Prototype](https://refactoring.guru/design-patterns/prototype)

---

## 實作成員
* Prototype
  * 定義了一個clone方法，用於複製自己。
* ConcretePrototype
  * 實現了clone方法，用於複製自己。
* Client
  * 使用Prototype模式的客戶端，通過複製現有對象來創建新對象。

---

## 實作範例:
- [Example](https://github.com/RC-Dev-Tech/design-pattern-prototype/blob/main/C%2B%2B/main.cpp) - Prototype Pattern (C++)

---

## 參考資料
* [Wiki - Prototype Pattern](https://en.wikipedia.org/wiki/Prototype_pattern) <br>
* [Refactoring.Guru - Prototype](https://refactoring.guru/design-patterns/prototype) <br>

---

<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
