#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtLinkedListGUIApp.h"

class QtLinkedListGUIApp : public QMainWindow
{
    Q_OBJECT

public:
    QtLinkedListGUIApp(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtLinkedListGUIAppClass ui;
};
