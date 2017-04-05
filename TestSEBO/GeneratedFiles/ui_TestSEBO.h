/********************************************************************************
** Form generated from reading UI file 'TestSEBO.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTSEBO_H
#define UI_TESTSEBO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestSEBOClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lblLibelle;
    QLineEdit *leSaisieLibelle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblTauxTVA;
    QDoubleSpinBox *spTauxTva;
    QPushButton *btnAjouter;
    QLabel *lblResultat;
    QTableView *tvCategorie;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TestSEBOClass)
    {
        if (TestSEBOClass->objectName().isEmpty())
            TestSEBOClass->setObjectName(QStringLiteral("TestSEBOClass"));
        TestSEBOClass->resize(600, 400);
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(12);
        TestSEBOClass->setFont(font);
        centralWidget = new QWidget(TestSEBOClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lblLibelle = new QLabel(centralWidget);
        lblLibelle->setObjectName(QStringLiteral("lblLibelle"));
        lblLibelle->setFont(font);
        lblLibelle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lblLibelle);

        leSaisieLibelle = new QLineEdit(centralWidget);
        leSaisieLibelle->setObjectName(QStringLiteral("leSaisieLibelle"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leSaisieLibelle->sizePolicy().hasHeightForWidth());
        leSaisieLibelle->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(leSaisieLibelle);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lblTauxTVA = new QLabel(centralWidget);
        lblTauxTVA->setObjectName(QStringLiteral("lblTauxTVA"));
        lblTauxTVA->setFont(font);
        lblTauxTVA->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lblTauxTVA);

        spTauxTva = new QDoubleSpinBox(centralWidget);
        spTauxTva->setObjectName(QStringLiteral("spTauxTva"));
        spTauxTva->setMaximum(0.5);
        spTauxTva->setValue(0.2);

        horizontalLayout_2->addWidget(spTauxTva);


        verticalLayout->addLayout(horizontalLayout_2);

        btnAjouter = new QPushButton(centralWidget);
        btnAjouter->setObjectName(QStringLiteral("btnAjouter"));
        btnAjouter->setFont(font);

        verticalLayout->addWidget(btnAjouter);

        lblResultat = new QLabel(centralWidget);
        lblResultat->setObjectName(QStringLiteral("lblResultat"));
        lblResultat->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lblResultat);

        tvCategorie = new QTableView(centralWidget);
        tvCategorie->setObjectName(QStringLiteral("tvCategorie"));
        tvCategorie->setAlternatingRowColors(true);
        tvCategorie->setSortingEnabled(true);

        verticalLayout->addWidget(tvCategorie);

        TestSEBOClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TestSEBOClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        TestSEBOClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TestSEBOClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TestSEBOClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TestSEBOClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TestSEBOClass->setStatusBar(statusBar);

        retranslateUi(TestSEBOClass);

        QMetaObject::connectSlotsByName(TestSEBOClass);
    } // setupUi

    void retranslateUi(QMainWindow *TestSEBOClass)
    {
        TestSEBOClass->setWindowTitle(QApplication::translate("TestSEBOClass", "TestSEBO", Q_NULLPTR));
        lblLibelle->setText(QApplication::translate("TestSEBOClass", "Libell\303\251 : ", Q_NULLPTR));
        lblTauxTVA->setText(QApplication::translate("TestSEBOClass", "Taux de tva : ", Q_NULLPTR));
        spTauxTva->setSuffix(QString());
        btnAjouter->setText(QApplication::translate("TestSEBOClass", "Ajouter", Q_NULLPTR));
        lblResultat->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TestSEBOClass: public Ui_TestSEBOClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTSEBO_H
