#ifndef MAGIC2_H
#define MAGIC2_H

#include <QMainWindow>
#include <QTranslator>
#include <QFrame>
#include <../McfCore/mcf.h>
#include <../McfCore/mcf/ViewModels/IMessageView.h>
#include "LoginFrame/LoginFrame.h"


namespace Ui {
class Magic2;
}

using namespace Mcf;

class Magic2:public QMainWindow,IMessageView
{
    Q_OBJECT
public:
   Magic2(QWidget *parent=0);

   static Magic2* MainWindow();

   static void SwitchContent(QWidget* contentFrame = NULL, MCF_BOOL backup = MCF_FALSE);
    ~Magic2();


   // IMessageView interface.
   virtual void Info(const MCF_STRING & text, const MCF_STRING & caption = _L(""));
   virtual void Info(const QString & text, const QString & caption = "");
   virtual void Warning(const MCF_STRING & text, const MCF_STRING & caption = _L(""));
   virtual void Warning(const QString & text, const QString & caption = "");
   virtual void Error(const MCF_STRING & text, const MCF_STRING & caption = _L(""));
   virtual void Error(const QString & text, const QString & caption = "");
   virtual MessageResult Question(const MCF_STRING & text, const MCF_STRING & caption = _L(""));
   virtual MessageResult Question(const QString & text, const QString & caption = "");

   enum MessageTypes
   {
       MSG_TYPE_INFO = 0,
       MSG_TYPE_WARNING = 1,
       MSG_TYPE_ERROR = 2,
       MSG_TYPE_QUESTION = 3
   };

private slots:
   void OnLogoutRequested();




private:
    MCF_SINT GetScreenRatioIndex(int screenNo);

signals:
    void MessageRequested(const QString & text, const QString & caption, MessageTypes type, MessageResult* result);
    void ThreadedMessageRequested(const QString & text, const QString & caption, MessageTypes type, MessageResult* result);

public slots:
    void UpdateWindowPosition(int screenNo = -1);

protected:
   virtual void showEvent(QShowEvent*);

private:
     Ui::Magic2 *ui;
     QWidget* _currentContent;
     QWidget* _contentBackup;
     QWidget* _sideView;
     QRect _sideViewBounds;
     MCF_SINT _screenNo;



};








#endif // MAGIC2_H
