#ifndef MCFCONTEXT_H
#define MCFCONTEXT_H

#include <string>
#include <memory>
#include <mcf.h>
#include <mcfcore.h>


NS_MCFC_BEGIN

class MCFC_API McfContext:public QObject
{
    Q_OBJECT
public:
    static void SetContext(McfContext *context);

    template<typename T>
    static T *Current()
    {
        return reinterpret_cast<T*>(_context);
    }


private:
    static McfContext *_context;

};







NS_MCFC_END








#endif // MCFCONTEXT_H
