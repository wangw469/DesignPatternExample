#pragma once

#include "MessageImplementor.h"
#include "MessageSMS.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace bridge {
namespace example7 {

///
/// <summary> * 抽象的消息对象 </summary>
///
class AbstractMessage3 {
    ///
    ///  <summary> * 持有一个实现部分的对象 </summary>
    ///
protected:
    MessageImplementor *impl;
    ///
    ///  <summary> * 构造方法 </summary>
    ///
public:
    AbstractMessage3();

    ///
    ///  <summary> * 发送消息，转调实现部分的方法 </summary>
    ///  * <param name="message"> 要发送的消息内容 </param>
    ///  * <param name="toUser"> 把消息发送的目的人员 </param>
    ///
    virtual void sendMessage(std::string message, std::string toUser);

};

}
}
}
}
}