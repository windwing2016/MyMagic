#ifndef HMIFRAME_H
#define HMIFRAME_H

#include <QFrame>
#include <../McfCore/mcf.h>
#include <../McfCore/mcfcore.h>

NS_MCFC_BEGIN

class MCFC_API HmiFrame:public QFrame
{
    Q_OBJECT
public:
    explicit HmiFrame(QWidget *parent=NULL);
    virtual ~HmiFrame();
signals:
    void StartupRequested();
    void ShutdownRequested();
    void InitResquested();
    void LogoutResquested();
    void RestoreContentRequested();
};


NS_MCFC_END

#endif // HMIFRAME_H
