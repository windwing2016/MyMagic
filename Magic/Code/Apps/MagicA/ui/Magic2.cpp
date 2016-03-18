#include <QDesktopWidget>
#include "Magic2.h"
#include "ui_Magic2.h"
#include <../McfCore/mcf/UI/HmiFrame.h>
//#include <../Magic/Code/Apps/MagicA/ui/LoginFrame/LoginFrame.h>

using namespace Mcf;
//using namespace MagicA;

Magic2::Magic2(QWidget *parent):
     QMainWindow(parent, Qt::BypassWindowManagerHint | Qt::MSWindowsFixedSizeDialogHint | Qt::WindowMinMaxButtonsHint/*Qt::FramelessWindowHint*/),
     ui(new Ui::Magic2),_currentContent(NULL),_contentBackup(NULL), _sideView(NULL), _screenNo(-1)
{
    ui->setupUi(this);
    ViewModelBase::SetGlobalMessageView(this);
}

Magic2::~Magic2()
{
    delete ui;
}
//-------------------------------
Magic2* Magic2::MainWindow()
{
    Magic2* window=NULL;
    QWidgetList windows=QApplication::topLevelWidgets();   //Returns a list of the top-level windows in the application.
    for(int i=0;i<windows.size();i++)
    {
        window=qobject_cast<Magic2*>(windows[i]);
        if(window!=NULL)
            return window;
    }
    return NULL;
}
//-------------------------------------
void Magic2::showEvent(QShowEvent *)
{
//    Magic2 w;
//    w.showNormal();
//    LoginFrame w;
//    w.showNormal();
    UpdateWindowPosition(QApplication::desktop()->primaryScreen());
    SwitchContent(new LoginFrame(this));
}

//------------------------------
void Magic2::SwitchContent(QWidget *contentFrame, MCF_BOOL backup)
{
    // Find main window instance.
    Magic2* window = MainWindow();
    if (window == NULL) return;

    // Use backup content if no target content was specified.
    if (contentFrame == NULL)
    {
        contentFrame = window->_contentBackup;
    }

    QWidget* currentContent = window->_currentContent;
    HmiFrame* hmiFrame = dynamic_cast<HmiFrame*>(currentContent);
    if (hmiFrame != NULL)
    {
        // Disconnect signales with HMI frame.
//        disconnect(hmiFrame, SIGNAL(StartupRequested()), window, 0);
//        disconnect(hmiFrame, SIGNAL(RestoreContentRequested()), window, 0);
 //         disconnect(hmiFrame, SIGNAL(LogoutRequested()), window, 0);
//        disconnect(hmiFrame, SIGNAL(ShutdownRequested()), window, 0);
//        disconnect(hmiFrame, SIGNAL(InitRequested(MCF_BYTE)), window, 0);
    }

    // Remove previous content from layout.
    if (window->_currentContent != NULL)
    {
        window->_currentContent->setParent(NULL);
        window->ui->contentLayout->removeWidget(window->_currentContent);
    }

    // Release the original content.
    if (backup)
    {
        window->_contentBackup = currentContent;
    }
    else
    {
        delete window->_currentContent;
        window->_currentContent = NULL;
        window->_contentBackup = NULL;
    }

    window->_currentContent = contentFrame;

    // Add the new content.
    if (contentFrame != NULL)
    {
        contentFrame->setParent(window);
        window->ui->contentLayout->addWidget(contentFrame);
        hmiFrame = dynamic_cast<HmiFrame*>(contentFrame);
        contentFrame->setFocus();
        if (hmiFrame != NULL)
        {
            // Connect signals.
//            connect(hmiFrame, SIGNAL(StartupRequested()), window, SLOT(OnStartupRequested()));
//            connect(hmiFrame, SIGNAL(RestoreContentRequested()), window, SLOT(OnRestoreContentRequested()));
   //           connect(hmiFrame, SIGNAL(LogoutRequested()), window, SLOT(OnLogoutRequested()));
//            connect(hmiFrame, SIGNAL(ShutdownRequested()), window, SLOT(OnShutdownRequested()));
//            connect(hmiFrame, SIGNAL(InitRequested(MCF_BYTE)), window, SLOT(OnSysInitRequested(MCF_BYTE)));
        }
    }
}
//--------------------------------------------------------------------------------------------------------------------
void Magic2::UpdateWindowPosition(int screenNo)
{
    Q_ASSERT(screenNo != -1 || _screenNo != -1);
    if (_screenNo == -1)
    {
        // Screen no has not been set.
        _screenNo = screenNo;
    }
    else if (screenNo != -1 && screenNo != _screenNo)
    {
        // Only handle the current screen number.
        return;
    }

    MCF_SINT ratioIndex = GetScreenRatioIndex(_screenNo);
    QRect availableArea = QApplication::desktop()->availableGeometry(_screenNo);
    QRect magicBounds = availableArea;
    _sideViewBounds = QRect(availableArea.x(), availableArea.y(), 400, availableArea.height());
    if (ratioIndex == 2)
    {
        // For wide screens, put window to left most area with fixed 4:3 ratio.
        magicBounds.setWidth(availableArea.height() * 5 / 4);
        _sideViewBounds = QRect(
                    magicBounds.right(),
                    magicBounds.top(),
                    availableArea.width() - magicBounds.width(),
                    magicBounds.height());
    }

    // Find frame dimension.
    QRect frameRect = frameGeometry();
    QRect clientRect = geometry();
    int dx = clientRect.x() - frameRect.x();
    int dy = clientRect.y() - frameRect.y();
    int dw = frameRect.width() - clientRect.width();
    int dh = frameRect.height() - clientRect.height();

    // Adjust Magic bounds and side view bounds to exclude window frame
    // sizes.
    magicBounds = QRect(
                magicBounds.x() + dx,
                magicBounds.y() + dy,
                magicBounds.width() - dw,
                magicBounds.height() - dh);

    _sideViewBounds = QRect(
                _sideViewBounds.x() + dx,
                _sideViewBounds.y() + dy,
                _sideViewBounds.width() - dw,
                _sideViewBounds.height() - dh);

    setGeometry(magicBounds);

    // Set side view geometry.
    if (_sideView != NULL)
    {
        _sideView->setGeometry(_sideViewBounds);
    }
}
//--------------------------------------------------------------------------------------------------------------------
MCF_SINT Magic2::GetScreenRatioIndex(int screenNo)
{
    QRect screen = QApplication::desktop()->screenGeometry(screenNo);
    MCF_FLOAT ratio = screen.width() / (float)screen.height();
    MCF_FLOAT supportedRatios[] = { 5 / 4.0f, 4 / 3.0f, 16 / 9.0f };
    MCF_FLOAT ratioTolerance = 0.1f;
    MCF_SINT ratioIndex = -1;
    for (MCF_SINT i = 0; i < sizeof(supportedRatios); i ++)
    {
        if (ratio >= supportedRatios[i] - ratioTolerance &&
                ratio <= supportedRatios[i] + ratioTolerance)
        {
            ratioIndex = i;
            break;
        }
    }

    return ratioIndex;
}
//------------------------------------------------------------------------------------------------------
void Magic2::Info(const MCF_STRING &text, const MCF_STRING &caption)
{
    emit MessageRequested(QString::fromStdWString(text), QString::fromStdWString(caption), MSG_TYPE_INFO, NULL);
}

//------------------------------------------------------------------------------------------------------
void Magic2::Info(const QString &text, const QString &caption)
{
    emit MessageRequested(text, caption, MSG_TYPE_INFO, NULL);
}

//------------------------------------------------------------------------------------------------------
void Magic2::Warning(const MCF_STRING &text, const MCF_STRING &caption)
{
    emit MessageRequested(QString::fromStdWString(text), QString::fromStdWString(caption), MSG_TYPE_WARNING, NULL);
}

//------------------------------------------------------------------------------------------------------
void Magic2::Warning(const QString &text, const QString &caption)
{
    emit MessageRequested(text, caption, MSG_TYPE_WARNING, NULL);
}

//------------------------------------------------------------------------------------------------------
void Magic2::Error(const MCF_STRING &text, const MCF_STRING &caption)
{
    emit MessageRequested(QString::fromStdWString(text), QString::fromStdWString(caption), MSG_TYPE_ERROR, NULL);
}

//------------------------------------------------------------------------------------------------------
void Magic2::Error(const QString &text, const QString &caption)
{
    emit MessageRequested(text, caption, MSG_TYPE_ERROR, NULL);
}

//------------------------------------------------------------------------------------------------------
MessageResult Magic2::Question(const MCF_STRING &text, const MCF_STRING &caption)
{
    MessageResult result;
    emit MessageRequested(QString::fromStdWString(text), QString::fromStdWString(caption), MSG_TYPE_QUESTION, &result);
    return result;
}

//------------------------------------------------------------------------------------------------------
MessageResult Magic2::Question(const QString &text, const QString &caption)
{
    MessageResult result;
    emit MessageRequested(text, caption, MSG_TYPE_QUESTION, &result);
    return result;
}

//--------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------
void Magic2::OnLogoutRequested()
{
    Magic2::SwitchContent(new LoginFrame(this, MCF_FALSE), MCF_TRUE);
}
