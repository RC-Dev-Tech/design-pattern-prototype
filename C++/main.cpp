/*
 *  Design Pattern - Prototype 原型模式
 * 
 * 在這個 C++ 的範例中，我們定義了一個 Prototype 抽象類別，該類別定義了兩個純虛函式：Clone() 和 DoSomething()。
 * Clone() 方法用於複製自己，DoSomething() 方法用於執行具體的操作。
 * 然後，我們實作了一個具體的原型類別 ConcretePrototype，它繼承自 Prototype 並實現了 Clone() 和 DoSomething() 方法。
 * 在 Clone() 方法中，我們創建一個新的 ConcretePrototype 對象並使用現有對象的值進行初始化。
 * 
 * 最後，在 main 函式中，我們使用原型模式來創建新對象。
 * 首先，我們創建一個原型對象 prototype，然後使用 Clone() 方法複製它，得到一個新的對象 clonedPrototype。
 * 接著，我們分別呼叫 DoSomething() 方法來執行操作。
 */

#include <iostream>

/*
 * Prototype - 定義了一個 clone 方法，用於複製自己.
*/
class Prototype {
public:
    virtual Prototype* Clone() const = 0;
    virtual void DoSomething(std::string msg) const = 0;
};

/*
 * ConcretePrototype - 實現了 clone 方法，用於複製自己.
*/
class ConcretePrototype : public Prototype {
public:
    Prototype* Clone() const override {
        return new ConcretePrototype(*this);
    }

    void DoSomething(std::string msg) const override {
        std::cout << "ConcretePrototype: Doing something... " << msg << std::endl;
    }
};

/*
 * Client - 使用 Prototype 模式的客戶端，通過複製現有對象來創建新對象.
*/
int main() {
    Prototype* prototype = new ConcretePrototype();
    Prototype* clonedPrototype = prototype->Clone();

    prototype->DoSomething("by origin.");
    clonedPrototype->DoSomething("by clone.");

    delete prototype;
    delete clonedPrototype;

    return 0;
}
