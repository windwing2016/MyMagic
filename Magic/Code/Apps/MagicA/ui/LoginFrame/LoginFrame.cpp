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
}
//------------------------------
LoginFrame::~LoginFrame()
{
    delete ui;
}
