#pragma once

#include <FluFrameLessWidget.h>

class Notepad : public FluFrameLessWidget {
    Q_OBJECT
public:
    Notepad(QWidget* parent = nullptr);
public slots:
    void onThemeChanged();
protected: 
};