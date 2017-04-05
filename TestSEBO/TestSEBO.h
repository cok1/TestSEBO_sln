#pragma once
#pragma encoding=utf8;

#include <QtWidgets/QMainWindow>
#include "ui_TestSEBO.h"
#include <qsqldatabase.h>
#include <qsqldriver.h>
#include <qsqlerror.h>
#include <qsqlquery.h>
#include <qsqltablemodel.h>

class TestSEBO : public QMainWindow
{
	Q_OBJECT

public:
	TestSEBO(QWidget *parent = Q_NULLPTR);

signals:
	public slots :
		void valider();

private:
	Ui::TestSEBOClass ui;

	void majAffichageTable();
};
