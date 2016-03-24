#include "LoginFrame.h"
#include "ui_LoginFrame.h"
#include "../Magic2.h"
#include "../../MagicA.h"


using namespace Mcf;
using namespace MagicA;
//-----------------------------------------------
LoginFrame::LoginFrame(QWidget *parent, MCF_BOOL init):
        HmiFrame(parent), ui(new Ui::LoginFrame), _isInit(init),_viewModel(init,this)
{
    ui->setupUi(this);
    connect(ui->txtUserName ,SIGNAL(textEdited(QString)),&_viewModel.UserName ,SLOT(SetValue(QString)));
    connect(ui->txtPassword, SIGNAL(textEdited(QString)),&_viewModel.Password ,SLOT(SetValue(QString)));
    connect(ui->txtUserName,SIGNAL(returnPressed()),ui->buttonLogin,SLOT(animateClick()));
    connect(ui->txtPassword,SIGNAL(returnPressed()),ui->buttonLogin,SLOT(animateClick()));
    connect(ui->chkRememberMe,SIGNAL(toggled(bool)),&_viewModel.RemmberMe,SLOT(SetValue(bool)));
    connect(ui->buttonLogin,SIGNAL(clicked()),&_viewModel,SLOT(Login()));
    connect(ui->buttonCancel,SIGNAL(clicked()),&_viewModel,SLOT(Cancel()));


}
//------------------------------
LoginFrame::~LoginFrame()
{
    delete ui;
}
