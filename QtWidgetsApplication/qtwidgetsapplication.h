#pragma once

#include <QtWidgets/QWidget>
#include "ui_qtwidgetsapplication.h"

class QtWidgetsApplication : public QWidget
{
    Q_OBJECT

public:
    QtWidgetsApplication(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtWidgetsApplicationClass ui;
};
