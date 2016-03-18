/********************************************************************************
** Form generated from reading UI file 'LoginFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFRAME_H
#define UI_LOGINFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginFrame
{
public:
    QWidget *loginPane;
    QVBoxLayout *verticalLayout;
    QWidget *headerPane;
    QHBoxLayout *horizontalLayout_2;
    QLabel *userImage;
    QLabel *title;
    QWidget *inputPane;
    QGridLayout *gridLayout_2;
    QLineEdit *txtPassword;
    QLabel *lblUserName;
    QLineEdit *txtUserName;
    QCheckBox *chkRememberMe;
    QLabel *lblPassword;
    QWidget *buttonPane;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonLogin;
    QPushButton *buttonCancel;

    void setupUi(QFrame *LoginFrame)
    {
        if (LoginFrame->objectName().isEmpty())
            LoginFrame->setObjectName(QStringLiteral("LoginFrame"));
        LoginFrame->resize(1280, 1024);
        QPalette palette;
        QBrush brush(QColor(165, 165, 165, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LoginFrame->setPalette(palette);
        LoginFrame->setFrameShape(QFrame::StyledPanel);
        LoginFrame->setFrameShadow(QFrame::Raised);
        loginPane = new QWidget(LoginFrame);
        loginPane->setObjectName(QStringLiteral("loginPane"));
        loginPane->setGeometry(QRect(350, 230, 450, 271));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginPane->sizePolicy().hasHeightForWidth());
        loginPane->setSizePolicy(sizePolicy);
        loginPane->setStyleSheet(QStringLiteral("border-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 0, 0, 255), stop:0.479904 rgba(255, 0, 0, 255), stop:0.522685 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        verticalLayout = new QVBoxLayout(loginPane);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        headerPane = new QWidget(loginPane);
        headerPane->setObjectName(QStringLiteral("headerPane"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(headerPane->sizePolicy().hasHeightForWidth());
        headerPane->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(headerPane);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        userImage = new QLabel(headerPane);
        userImage->setObjectName(QStringLiteral("userImage"));
        sizePolicy.setHeightForWidth(userImage->sizePolicy().hasHeightForWidth());
        userImage->setSizePolicy(sizePolicy);
        userImage->setPixmap(QPixmap(QString::fromUtf8(":/MagicA/Images/User.png")));

        horizontalLayout_2->addWidget(userImage);

        title = new QLabel(headerPane);
        title->setObjectName(QStringLiteral("title"));

        horizontalLayout_2->addWidget(title);


        verticalLayout->addWidget(headerPane);

        inputPane = new QWidget(loginPane);
        inputPane->setObjectName(QStringLiteral("inputPane"));
        inputPane->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(inputPane->sizePolicy().hasHeightForWidth());
        inputPane->setSizePolicy(sizePolicy2);
        QPalette palette1;
        QBrush brush2(QColor(170, 170, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush3(QColor(129, 119, 240, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        inputPane->setPalette(palette1);
        inputPane->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(inputPane);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(20);
        gridLayout_2->setVerticalSpacing(10);
        gridLayout_2->setContentsMargins(20, 20, 20, 10);
        txtPassword = new QLineEdit(inputPane);
        txtPassword->setObjectName(QStringLiteral("txtPassword"));
        txtPassword->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(txtPassword, 1, 1, 1, 1);

        lblUserName = new QLabel(inputPane);
        lblUserName->setObjectName(QStringLiteral("lblUserName"));
        lblUserName->setMinimumSize(QSize(80, 0));
        lblUserName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lblUserName, 0, 0, 1, 1);

        txtUserName = new QLineEdit(inputPane);
        txtUserName->setObjectName(QStringLiteral("txtUserName"));
        txtUserName->setMinimumSize(QSize(300, 0));
        txtUserName->setText(QStringLiteral(""));

        gridLayout_2->addWidget(txtUserName, 0, 1, 1, 1);

        chkRememberMe = new QCheckBox(inputPane);
        chkRememberMe->setObjectName(QStringLiteral("chkRememberMe"));

        gridLayout_2->addWidget(chkRememberMe, 2, 1, 1, 1);

        lblPassword = new QLabel(inputPane);
        lblPassword->setObjectName(QStringLiteral("lblPassword"));
        lblPassword->setMinimumSize(QSize(80, 0));
        lblPassword->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lblPassword, 1, 0, 1, 1);


        verticalLayout->addWidget(inputPane);

        buttonPane = new QWidget(loginPane);
        buttonPane->setObjectName(QStringLiteral("buttonPane"));
        horizontalLayout = new QHBoxLayout(buttonPane);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        buttonLogin = new QPushButton(buttonPane);
        buttonLogin->setObjectName(QStringLiteral("buttonLogin"));
        sizePolicy1.setHeightForWidth(buttonLogin->sizePolicy().hasHeightForWidth());
        buttonLogin->setSizePolicy(sizePolicy1);
        buttonLogin->setMinimumSize(QSize(100, 0));
        buttonLogin->setDefault(true);

        horizontalLayout->addWidget(buttonLogin);

        buttonCancel = new QPushButton(buttonPane);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));
        sizePolicy1.setHeightForWidth(buttonCancel->sizePolicy().hasHeightForWidth());
        buttonCancel->setSizePolicy(sizePolicy1);
        buttonCancel->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(buttonCancel);


        verticalLayout->addWidget(buttonPane, 0, Qt::AlignRight);

#ifndef QT_NO_SHORTCUT
        lblUserName->setBuddy(txtUserName);
        lblPassword->setBuddy(txtPassword);
#endif // QT_NO_SHORTCUT

        retranslateUi(LoginFrame);

        QMetaObject::connectSlotsByName(LoginFrame);
    } // setupUi

    void retranslateUi(QFrame *LoginFrame)
    {
        LoginFrame->setWindowTitle(QApplication::translate("LoginFrame", "Frame", 0));
        userImage->setText(QString());
        title->setText(QApplication::translate("LoginFrame", "Login", 0));
        title->setProperty("layoutname", QVariant(QApplication::translate("LoginFrame", "gridLayout_2", 0)));
        txtPassword->setPlaceholderText(QApplication::translate("LoginFrame", "Please enter password.", 0));
        lblUserName->setText(QApplication::translate("LoginFrame", "User Name:", 0));
        txtUserName->setPlaceholderText(QApplication::translate("LoginFrame", "Please enter user name.", 0));
        chkRememberMe->setText(QApplication::translate("LoginFrame", "&Remember me on this computer.", 0));
        lblPassword->setText(QApplication::translate("LoginFrame", "&Password:", 0));
        buttonLogin->setText(QApplication::translate("LoginFrame", "&Login", 0));
        buttonCancel->setText(QApplication::translate("LoginFrame", "&Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginFrame: public Ui_LoginFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFRAME_H
