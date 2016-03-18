#ifndef LOGINFRAME_H
#define LOGINFRAME_H

#include <QFrame>
#include <../McfCore/mcf/UI/HmiFrame.h>
#include <../MagicCommon/ViewModels/InitViewModels.h>
#include "../../MagicA.h"
#include "ui_LoginFrame.h"

namespace Ui{
class LoginFrame;
}

using namespace Mcf;
using namespace Magic;

class LoginFrame :public HmiFrame
{
    Q_OBJECT
public:
    explicit LoginFrame(QWidget *parent=0,MCF_BOOL init=MCF_TRUE);
    ~LoginFrame();


private:
    Ui::LoginFrame *ui;
    MCF_BOOL _isInit;
    LoginViewModel _viewModel;

};




#endif // LOGINFRAME_H
