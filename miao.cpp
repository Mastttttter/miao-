//
// Created by MasterPC on 2023/12/14.
//

// You may need to build the project (run Qt uic code generator) to get "ui_miao.h" resolved

#include "miao.h"
#include "ui_miao.h"
#include <filesystem>

miao::miao(QWidget *parent) :
        QWidget(parent), ui(new Ui::miao) {
    ui->setupUi(this);
}

miao::~miao() {
    delete ui;
    delete pre;
    delete after;
}

void miao::on_pushButton_clicked()
{
    *dis=ui->lineEdit_2->text();
    QString diss;
    for (int i = dis->length()-1; i >=0 ; --i) {
        QChar character =dis->at(i);
        diss.append(character);
    }
    clipboard->setText( this->ui->lineEdit->text()+*pre+ *dis+*after);
    std::filesystem::path cp{std::filesystem::current_path()};
    QString p=QString::fromStdString(cp.string());
    //this->ui->lineEdit->setText(p);
//    clipboard->setText(this->ui->lineEdit->text());
}//⁧⁧‭‭‬
