/********************************************************************************
** Form generated from reading UI file 'Magic2.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGIC2_H
#define UI_MAGIC2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Magic2
{
public:
    QWidget *centralWidget;
    QGridLayout *contentLayout;

    void setupUi(QMainWindow *Magic2)
    {
        if (Magic2->objectName().isEmpty())
            Magic2->setObjectName(QStringLiteral("Magic2"));
        Magic2->resize(1074, 758);
        Magic2->setWindowTitle(QStringLiteral("Magic-A 2"));
        Magic2->setStyleSheet(QString::fromUtf8("QWidget#centralWidget\n"
"{\n"
"    border-image: url(:/MagicA/Images/StartupBG.png);\n"
"    border:none;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"    font-family: \345\276\256\350\275\257\351\233\205\351\273\221;\n"
"    font-size: 12pt;\n"
"}\n"
"\n"
"QWidget[headerPanel=\"true\"]\n"
"{\n"
"    background-color: rgb(70, 70, 70);\n"
"}\n"
"\n"
"QWidget[darkPanel=\"true\"]\n"
"{\n"
"    background-color: rgb(120, 120, 120);\n"
"}\n"
"\n"
"QWidget[workPanel=\"true\"]\n"
"{\n"
"    background-color: rgb(220, 220, 220);\n"
"}\n"
"\n"
"QWidget[toolPanel=\"true\"]\n"
"{\n"
"    color: rgb(72, 119, 155);\n"
"}\n"
"\n"
"QWidget:disabled[toolPanel=\"true\"]\n"
"{\n"
"    color :rgb(150, 150, 150);\n"
"}\n"
"\n"
"QWidget[speedSelector=\"true\"]\n"
"{\n"
"    color: rgb(72, 119, 155);\n"
"    border: none;\n"
"    font-size: 8pt;\n"
"    qproperty-HoverItemColor: rgba(255, 125, 0, 100);\n"
"    qproperty-SelectedItemColor: rgb(255, 125, 0);\n"
"}\n"
"\n"
"QWidget:disabled[speedSelector=\"true\"]\n"
"{\n"
"    color :rgb(150, 1"
                        "50, 150);\n"
"}\n"
"\n"
"QWidget[touchpad=\"true\"]\n"
"{\n"
"    background-color: white;\n"
"    color: rgb(72, 119, 155);\n"
"    border: 1px solid rgb(160, 160, 160);\n"
"}\n"
"\n"
"QWidget:disabled[touchpad=\"true\"]\n"
"{\n"
"    background-color: rgb(200, 200, 200);\n"
"    color :rgb(150, 150, 150);\n"
"    border: 1px solid rgb(160, 160, 160);\n"
"}\n"
"\n"
"QFrame[frameShape=\"4\"]\n"
"{\n"
"    border: 2px solid rgb(200, 200, 200);\n"
"}\n"
"\n"
"QFrame[frameShape=\"5\"]\n"
"{\n"
"    border: 2px solid rgb(200, 200, 200);\n"
"}\n"
"\n"
"QGroupBox\n"
"{\n"
"    background-color: rgb(220, 220, 220);\n"
"    border: 1px solid rgb(160, 160, 160);\n"
"    margin-top: 12px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    left: 10px;\n"
"    color: rgb(70, 70, 70);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"    color: rgb(70, 70, 70);\n"
"    background-color: rgba(0, 0, 0, 0);\n"
"}\n"
"\n"
"QLabel[titleLabel=\"true\"]\n"
"{\n"
"     color: rgb(160,"
                        " 160, 160);\n"
"     font-family: Aharoni;\n"
"     font-size: 22pt;\n"
"     font-weight: bold;\n"
"     margin-top: 5px;\n"
"}\n"
"\n"
"QLabel:disabled\n"
"{\n"
"    color: rgb(160, 160, 160);\n"
"}\n"
"\n"
"QLabel[groupLabel=\"true\"]\n"
"{\n"
"    background-color: rgb(150, 150, 150);\n"
"    color: white;\n"
"}\n"
"\n"
"QLabel[headerLabel=\"true\"]\n"
"{\n"
"    color: rgb(220, 220, 220);\n"
"}\n"
"\n"
"QLabel[staticLabel=\"true\"]\n"
"{\n"
"    height: 40px;\n"
"    background-color: rgb(150, 150, 150);\n"
"    color: white;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"    border: none;\n"
"    font-size: 10pt;\n"
"}\n"
"\n"
"QLabel[alterStaticLabel=\"true\"]\n"
"{\n"
"    height: 40px;\n"
"    background-color: rgb(120, 120, 120);\n"
"    color: white;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"    border: none;\n"
"    font-size: 10pt;\n"
"}\n"
"\n"
"QLabel[valueLabel=\"true\"]\n"
"{\n"
"    height: 40px;\n"
"    background-color: rgb(255, 255, 255);\n"
"    color: black;\n"
""
                        "    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"    border: none;\n"
"    font-size: 10pt;\n"
"}\n"
"\n"
"QLabel[alterValueLabel=\"true\"]\n"
"{\n"
"    height: 40px;\n"
"    background-color: rgb(220, 220, 255);\n"
"    color: black;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"    border: none;\n"
"    font-size: 10pt;\n"
"}\n"
"\n"
"QToolButton\n"
"{\n"
"    background-color: rgba(0, 0, 0, 0);\n"
"    color: rgb(255, 255, 255);\n"
"    border: none;\n"
"    margin-left: 10px;\n"
"    margin-right:10px;\n"
"    margin-bottom: 5px;\n"
"    margin-top: 5px;\n"
"}\n"
"\n"
"QToolButton:disabled\n"
"{\n"
"    background-color: rgb(125, 125, 125);\n"
"    color: rgb(160, 160, 160);\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color: rgba(72, 119, 155, 100);\n"
"}\n"
"\n"
"QToolButton:checked\n"
"{\n"
"    background-color: rgb(72, 119, 155);\n"
"}\n"
"\n"
"QToolButton:checked:disabled\n"
"{\n"
"    background-color: rgb(120, 120, 120);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
""
                        "    background-color: rgba(72, 119, 155, 100);\n"
"}\n"
"\n"
"QToolButton::menu-button\n"
"{\n"
"    background-color: rgb(70, 70, 70);\n"
"}\n"
"\n"
"QToolButton::menu-indicator\n"
"{\n"
"    image: none;\n"
"}\n"
"\n"
"QToolButton::menu-indicator:pressed\n"
"{\n"
"    image:  url(:/MagicA/Images/MenuArrow.png);\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: center bottom;\n"
"}\n"
"\n"
"QToolButton[pushStyle=\"true\"]\n"
"{\n"
"    background-color: rgb(72, 119, 155);\n"
"    color: rgb(255, 255, 255);\n"
"    border: none;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QToolButton[pushStyle=\"true\"]:disabled\n"
"{\n"
"    background-color: rgb(125, 125, 125);\n"
"}\n"
"\n"
"QToolButton[pushStyle=\"true\"]:hover\n"
"{\n"
"    background-color: rgb(255, 196, 136);\n"
"}\n"
"\n"
"QToolButton[pushStyle=\"true\"]:checked\n"
"{\n"
"    background-color: rgb(255, 125, 0);\n"
"}\n"
"\n"
"QToolButton[pushStyle=\"true\"]:checked:disabled\n"
"{\n"
"    background-color: rgb(120, 120, 120);\n"
"}\n"
"\n"
"QToolB"
                        "utton[pushStyle=\"true\"]:pressed\n"
"{\n"
"    background-color: rgb(255, 125, 0);\n"
"}\n"
"\n"
"QToolButton[pushStyle=\"true\"]::menu-button\n"
"{\n"
"    background-color: rgb(70, 70, 70);\n"
"}\n"
"\n"
"QToolButton[pushStyle=\"true\"]::menu-indicator\n"
"{\n"
"    image: none;\n"
"}\n"
"\n"
"QToolButton[pushStyle=\"true\"]::menu-indicator:pressed\n"
"{\n"
"    image:  url(:/MagicA/Images/MenuArrow.png);\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: center bottom;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    background-color: rgb(70, 70, 70);\n"
"    border: 2px solid rgb(160, 160, 160);\n"
"}\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 1px;\n"
"    background-color: rgb(160, 160, 160);\n"
"    margin-left: 5px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QMenu::item\n"
"{\n"
"    background-color: rgb(70, 70, 70);\n"
"    color: white;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    background-color: rgba(200, 200, 200, 50);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    heigh"
                        "t: 40px;\n"
"    border: 2px solide rgba(0, 0, 0, 0);\n"
"    background-color: rgb(72, 119, 155);\n"
"    color: white;\n"
"    padding-left: 15px;\n"
"    padding-right: 15px;\n"
"}\n"
"\n"
"QPushButton[critical=\"true\"]\n"
"{\n"
"    height: 40px;\n"
"    border: 2px solide rgba(0, 0, 0, 0);\n"
"    background-color: red;\n"
"    color: white;\n"
"    padding-left: 15px;\n"
"    padding-right: 15px;\n"
"}\n"
"\n"
"QPushButton:default, default[critical=\"true\"]\n"
"{\n"
"    border: 2px solid rgba(255, 255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: rgb(255, 196, 136);\n"
"}\n"
"\n"
"QPushButton:hover[critical=\"true\"]\n"
"{\n"
"    background-color: rgb(255, 100, 100);\n"
"}\n"
"\n"
"QPushButton:disabled, disabled[critical=\"true\"]\n"
"{\n"
"    background-color: rgb(125, 125, 125);\n"
"    color: rgb(160, 160, 160);\n"
"}\n"
"\n"
"QPushButton:focus, focus[critical=\"true\"]\n"
"{\n"
"    border: 2px solid rgb(250, 200, 20);\n"
"    padding: -1px;\n"
"}\n"
"\n"
"QPushBut"
                        "ton:pressed\n"
"{\n"
"    background-color: rgb(255, 125, 0);\n"
"}\n"
"\n"
"QPushButton:pressed[critical=\"true\"]\n"
"{\n"
"    background-color: rgb(255, 0, 0);\n"
"}\n"
"\n"
"QTabWidget::pane\n"
"{\n"
"    border: none;\n"
"    background-color: rgb(220, 220, 220);\n"
"}\n"
"\n"
"QTabBar::tab\n"
"{\n"
"    height: 40px;\n"
"    background-color: rgb(120, 120, 120);\n"
"    color: white;\n"
"    border-right: 1px solid rgb(160, 160, 160);\n"
"    padding-left: 20px;\n"
"    padding-right: 20px;\n"
"    font-weight: normal;\n"
"}\n"
"\n"
"QTabBar::tab:last\n"
"{\n"
"    border: none;\n"
"}\n"
"\n"
"QTabBar::tab:only-one\n"
"{\n"
"    border: none;\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    image: url(:/MagicA/Images/TabArrow.png);\n"
"    image-position: bottom center;\n"
"    color: rgb(96, 215, 255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"        color: rgb(70, 70, 70);\n"
"        background-color: rgba(0, 0, 0, 0);\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    height: 40px;\n"
"    background-color: white;\n"
""
                        "    border: none;\n"
"}\n"
"\n"
"QLineEdit[readOnly=\"true\"]\n"
"{\n"
"    background-color: rgb(200, 200, 200);\n"
"}\n"
"\n"
"QLineEdit:focus\n"
"{\n"
"    border: 1px solid rgb(250, 200, 20);\n"
"}\n"
"\n"
"QLineEdit:disabled\n"
"{\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: rgb(160, 160, 160);\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    height: 40px;\n"
"    border:none;\n"
"    background-color: white;\n"
"    color: rgb(70, 70, 70);\n"
"    text-align: center center;\n"
"}\n"
"\n"
"QComboBox:focused\n"
"{\n"
"    border: 1px solid rgb(250, 200, 20);\n"
"}\n"
"\n"
"QComboBox:disabled\n"
"{\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: rgb(160, 160, 160);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"    width: 40px;\n"
"    border: none;\n"
"    background-color: rgb(72, 119, 155);\n"
"}\n"
"\n"
"QComboBox::drop-down:disabled\n"
"{\n"
"    background-color: rgb(125, 125, 125);\n"
"}\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"    image: url(:/MagicA/Images/DownArrow.png);\n"
"}\n"
""
                        "\n"
"QComboBox::down-arrow:disabled\n"
"{\n"
"    image: url(:/MagicA/Images/DownArrowDisabled.png);\n"
"}\n"
"\n"
"QComboBox::down-arrow:on\n"
"{\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    background-color: white;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item\n"
"{\n"
"    height: 40px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item:selected\n"
"{\n"
"    background-color: rgb(72, 119, 155);\n"
"    color: white;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    border: none;\n"
"    height: 2px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"    background: rgb(250, 250, 250);\n"
"    margin: 20px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: rgb(72, 119, 155);\n"
"    border: none;\n"
"    width: 20px;\n"
"    margin: -20px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"}\n"
"\n"
"QSlider::h"
                        "andle:horizontal:disabled\n"
"{\n"
"    background: rgb(125, 125, 125);\n"
"}\n"
"\n"
"QSpinBox, QDoubleSpinBox\n"
"{\n"
"    border: none;\n"
"    background-color: white;\n"
"    color: rgb(70, 70, 70);\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QSpinBox:disabled, QDoubleSpinBox:disabled\n"
"{\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: rgb(160, 160, 160);\n"
"}\n"
"\n"
"QSpinBox::up-button, QSpinBox::down-button, QDoubleSpinBox::up-button, QDoubleSpinBox::down-button\n"
"{\n"
"    width: 40px;\n"
"    border: none;\n"
"    background-color: rgb(72, 119, 155);\n"
"}\n"
"\n"
"QSpinBox::up-button:disabled, QSpinBox::down-button:disabled, QDoubleSpinBox::up-button:disabled, QDoubleSpinBox::down-button:disabled\n"
"{\n"
"    border: none;\n"
"    background-color: rgb(125, 125, 125);\n"
"}\n"
"\n"
"QSpinBox::up-arrow, QDoubleSpinBox::up-arrow\n"
"{\n"
"    image: url(:/MagicA/Images/SpinUp.png);\n"
"}\n"
"\n"
"QSpinBox::down-arrow, QDoubleSpinBox::down-arrow\n"
"{\n"
"    image: url(:/MagicA/Image"
                        "s/SpinDown.png);\n"
"}\n"
"\n"
"QSpinBox::up-arrow:pressed, QSpinBox::down-arrow:pressed, QDoubleSpinBox::up-arrow:pressed, QDoubleSpinBox::down-arrow:pressed\n"
"{\n"
"    left: 1px;\n"
"    top: 1px;\n"
"}\n"
"\n"
"QSpinBox::up-arrow:disabled, QSpinBox::up-arrow:off, QDoubleSpinBox::up-arrow:disabled, QDoubleSpinBox::up-arrow:off\n"
"{\n"
"    image: url(:/MagicA/Images/SpinUpDisabled.png);\n"
"}\n"
"\n"
"QSpinBox::down-arrow:disabled, QSpinBox::down-arrow:off, QDoubleSpinBox::down-arrow:disabled, QDoubleSpinBox::down-arrow:off\n"
"{\n"
"    image: url(:/MagicA/Images/SpinDownDisabled.png);\n"
"}\n"
"\n"
"QRadioButton\n"
"{\n"
"    height: 30px;\n"
"    color: rgb(70, 70, 70);\n"
"}\n"
"\n"
"QRadioButton:disabled\n"
"{\n"
"    color: rgb(160, 160, 160);\n"
"}\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    width: 24px;\n"
"    height: 24px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked\n"
"{\n"
"    image: url(:/MagicA/Images/RadioNormalUnchecked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:disab"
                        "led\n"
"{\n"
"    image: url(:/MagicA/Images/RadioDisabledUnchecked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked\n"
"{\n"
"    image: url(:/MagicA/Images/RadioNormalChecked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:disabled\n"
"{\n"
"    image: url(:/MagicA/Images/RadioDisabledChecked.png);\n"
"}\n"
"\n"
"QCheckBox\n"
"{\n"
"    height: 40px;\n"
"    color: rgb(70, 70, 70);\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"    color: rgb(160, 160, 160);\n"
"}\n"
"\n"
"QCheckBox::indicator\n"
"{\n"
"    width: 30px;\n"
"    height: 30px;\n"
"    background-color: rgb(72, 119, 155);\n"
"    border: none;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image: url(:/MagicA/Images/Checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:disabled\n"
"{\n"
"    background-color: rgb(125, 125, 125);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled\n"
"{\n"
"    background-color: rgb(125, 125, 125);\n"
"    image: url(:/MagicA/Images/CheckedDisabled.png);\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"      "
                        "  border: 1px solid rgb(150, 150, 150);\n"
"        color: rgb(100, 100, 100);\n"
"        text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"        background-color: rgb(0, 180, 0);\n"
"        margin: 0.5px;\n"
"}\n"
"\n"
"QTableView\n"
"{\n"
"    background-color: white;\n"
"    border: none;\n"
"    alternate-background-color: rgb(220, 220, 255);\n"
"}\n"
"\n"
"QTableView QTableCornerButton::section\n"
"{\n"
"    background-color: rgb(120, 120, 120);\n"
"    border: none;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: rgb(120, 120, 120);\n"
"    color: rgb(255, 255, 255);\n"
"    height: 30px;\n"
"    border: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"    border: none;\n"
"    background: rgb(160, 160, 160);\n"
"    width: 30px;\n"
"    margin: 30px 0px 30px 0px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    background: rgb(72, 119, 155);\n"
"    border-radius: 10px;\n"
"    min-height: 30px;\n"
"    margin-left: 5px;\n"
"    margin-right: 5px;\n"
"   "
                        " margin-top: 2px;\n"
"    margin-bottom: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"    background: rgb(72, 119, 155);\n"
"    height: 30px;\n"
"    border: none;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"    background: rgb(72, 119, 155);\n"
"    height: 30px;\n"
"    border: none;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar:up-arrow:vertical\n"
"{\n"
"    image:  url(:/MagicA/Images/ScrollUpArrow.png);\n"
"}\n"
"\n"
"QScrollBar:down-arrow:vertical\n"
"{\n"
"    image:  url(:/MagicA/Images/ScrollDownArrow.png);\n"
"}\n"
"\n"
"QScrollBar::add-page, QScrollBar::sub-page\n"
"{\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar:horizontal\n"
"{\n"
"    border: none;\n"
"    background: rgb(160, 160, 160);\n"
"    height: 30px;\n"
"    margin: 0px 30px 0px 30px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"    background: rgb(72, 119, 155);\n"
"    bord"
                        "er-radius: 10px;\n"
"    min-width: 30px;\n"
"    margin-left: 2px;\n"
"    margin-right: 2px;\n"
"    margin-top: 5px;\n"
"    margin-bottom: 5px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal\n"
"{\n"
"    background: rgb(72, 119, 155);\n"
"    width: 30px;\n"
"    border: none;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal\n"
"{\n"
"    background: rgb(72, 119, 155);\n"
"    width: 30px;\n"
"    border: none;\n"
"    subcontrol-position: left;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar:left-arrow:horizontal\n"
"{\n"
"    image:  url(:/MagicA/Images/ScrollLeftArrow.png);\n"
"}\n"
"\n"
"QScrollBar:right-arrow:horizontal\n"
"{\n"
"    image:  url(:/MagicA/Images/ScrollRightArrow.png);\n"
"}\n"
"\n"
"QScrollArea\n"
"{\n"
"    border: none;\n"
"    background: rgba(0, 0, 0, 0);\n"
"}\n"
"\n"
"QTableView\n"
"{\n"
"    selection-background-color:rgb(51, 153, 255);\n"
"    selection-color:white;\n"
"}\n"
""));
        centralWidget = new QWidget(Magic2);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        contentLayout = new QGridLayout(centralWidget);
        contentLayout->setSpacing(0);
        contentLayout->setContentsMargins(11, 11, 11, 11);
        contentLayout->setObjectName(QStringLiteral("contentLayout"));
        contentLayout->setContentsMargins(0, 0, 0, 0);
        Magic2->setCentralWidget(centralWidget);

        retranslateUi(Magic2);

        QMetaObject::connectSlotsByName(Magic2);
    } // setupUi

    void retranslateUi(QMainWindow *Magic2)
    {
        Q_UNUSED(Magic2);
    } // retranslateUi

};

namespace Ui {
    class Magic2: public Ui_Magic2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGIC2_H
