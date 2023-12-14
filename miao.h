//
// Created by MasterPC on 2023/12/14.
//

#ifndef QTARGET_MIAO_H
#define QTARGET_MIAO_H

#include <QWidget>
#include <QString>
#include <QClipboard>
#include <QApplication>
#include <QtAlgorithms>
#include <algorithm>
#include <iostream>
QT_BEGIN_NAMESPACE
namespace Ui { class miao; }
QT_END_NAMESPACE

class miao : public QWidget {
Q_OBJECT

public:
    QString *pre=new QString{"\u2067"};
    QString *after=new QString{"\u2068"};
    QClipboard *clipboard =QApplication::clipboard();
    QString *dis =new QString{"errror"};
    explicit miao(QWidget *parent = nullptr);

    ~miao() override;

private slots:
    void on_pushButton_clicked();

private:
    Ui::miao *ui;
};


#endif //QTARGET_MIAO_H
