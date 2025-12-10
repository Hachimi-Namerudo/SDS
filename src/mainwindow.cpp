#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("SDS测评入口");
    ui->Enter->setEnabled(0);
    ui->checkBox->setEnabled(0);

    QMessageBox::warning(this,"提示","本程序得出的结果仅供参考，该结果不能替代任何专业的医学评估。\n请您根据最近一周以来自己的实际情况，选择最符合您的一项。");
    currentPage = 1;
    ui->pageHint->setText((QString("当前页码：1 / 2")));
    ui->submit->hide();
    ui->Main_table->setAlternatingRowColors(1);
    tmps = QTime::currentTime();
    QString path = ":/questions/Zung-Dep.txt";     //S'opposer coding style
    QFile f(path);
    if(!f.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, "提示",
                             QString("源文件读取失败，请检查目录中是否包含Questions.dat\n\n路径：%1\n错误：%2")
                                 .arg(path).arg(f.errorString()));
        return;
    }
    QTextStream txt(&f);
    for(int i = 0;i < 20;i++)
    {
        Question* q = new Question();
        QString c;
        txt >> q->description >> c;
        q->isReversed = (c == '1'?true:false);
        questions.push_back(q);
        qDebug() << "Write question" << i + 1 << "successfully,description = " << q->description << ",Rev = " << q->isReversed;
    }
    f.close();

    ui->Main_table->setColumnWidth(0,40);
    ui->Main_table->setColumnWidth(1,400);
    ui->Main_table->setColumnWidth(2,90);
    ui->Main_table->setColumnWidth(3,90);
    ui->Main_table->setColumnWidth(4,90);
    ui->Main_table->setColumnWidth(5,90);

    pull(1);
}

void MainWindow::pull(int index)//index为页码号;向表格推送题目
{
    int num = 10 * (index - 1);
    if(index <= 0)
    {
        qDebug() << "False index" ;
        return;
    }

    ui->Main_table->setRowCount(0);
    //debug();
    for(int i = 0; i < 10;i++)
    {
        ui->Main_table->insertRow(i);//要先插入行才能继续插入内容
        ui->Main_table->setItem(i,0,new QTableWidgetItem(QString::number(num + i + 1)));
        ui->Main_table->setItem(i,1,new QTableWidgetItem(QString(questions.at(i + num)->description)));
        qDebug() << questions.at(i + num)->description;
        QButtonGroup* buttonGroup = new QButtonGroup();//一个按钮组，放在这玩，过两天拿出来炒菜吃。一定要放一点青椒，炒出来更香。
        QRadioButton* sel = new QRadioButton("偶尔");
        QRadioButton* pfs = new QRadioButton("有时");
        QRadioButton* freq = new QRadioButton("经常");
        QRadioButton* ctn = new QRadioButton("持续");
        buttonGroup->addButton(sel,0);
        buttonGroup->addButton(pfs,1);
        buttonGroup->addButton(freq,2);
        buttonGroup->addButton(ctn,3);
        ui->Main_table->setCellWidget(i,2,sel);
        ui->Main_table->setCellWidget(i,3,pfs);
        ui->Main_table->setCellWidget(i,4,freq);
        ui->Main_table->setCellWidget(i,5,ctn);

        qDebug() << "Call question" << num + i + 1 << "successfully,description = " << questions.at(i + num)->description
                 << ",Rev = " << questions.at(i + num)->isReversed << questions.at(i + num)->score;

        if(questions[i + num]->score != 0)//作答就一定有得分罢（
        {
            if(questions.at(i + num)->isReversed){
                buttonGroup->button(5 - questions[i + num]->score)->setChecked(1);
            }
            else
            {
                buttonGroup->button(questions[i + num]->score - 1)->setChecked(1);
            }

        }//一个按钮，一个被创造的按钮，它的勾选状态是持续的。这将说明什么？没有人知道。
    }
}

void MainWindow::push(int index)//将题目作答情况推送至questions数组
{
    int num = 10 * (index - 1);
    for(int i = 0;i < 10;i++)
    {
        for(int j = 0;j < 4;j++)//又是嵌套。
        {
            QRadioButton* bt = static_cast<QRadioButton*>(ui->Main_table->cellWidget(i,j+2));
            if(bt->isChecked() == 1)
            {
                if(questions.at(i + num)->isReversed)
                {
                    questions.at(i + num)->score = 5 - j - 1;
                }
                else
                {
                    questions.at(i + num)->score = j + 1;
                }
            }
        }
    }
}

void MainWindow::calculate()//写完这个就去找纱世里去。这次要抱得紧一点，因为有早八。
{
    for(int i = 0; i < 20;i++)
    {
        if(questions.at(i)->isReversed)
        {
            raw += (5 - questions.at(i)->score);
        }
        else
        {
            raw += questions.at(i)->score;
        }
    }
    totalScore = qFloor(raw * 1.25);
    ui->raw->setText(QString::number(raw));
    ui->res->setText(QString::number(totalScore));
    int diff = tmps.secsTo(QTime::currentTime());
    ui->temps->setText(QString::number(diff / 60) + " 分 " + QString::number(diff % 60) + " 秒");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Agreement_clicked()
{
    Agreement* agr = new Agreement(this);
    agr->setWindowTitle("用户使用协议");
    if(agr->exec() == QDialog::Accepted)
    {
        ui->checkBox->setEnabled(1);
    }
    delete agr;
}


void MainWindow::on_ins_clicked()
{
    Instruction* i = new Instruction(this);
    i->setWindowTitle("量表简介");
    if(i->exec() == QDialog::Accepted)
    {

    }
    delete i;
}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    ui->Enter->setEnabled(arg1);
}


void MainWindow::on_Enter_clicked()
{
    ui->MainStack->setCurrentIndex(1);
    this->setWindowTitle("SDS测评");
}


void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::information(this,"提示","对20个项目评定时依据的等级标准为：\n①没有或很少时间\n②少部分时间\n③相当多时间\n④绝大部分时间或全部时间");
}

void MainWindow::on_nextPage_clicked()
{
    int num = 10 * (currentPage - 1);
    bool isFinished = 1;
    push(currentPage);
    QString notFin;
    if(currentPage == 2)
    {
        ui->submit->show();
        ui->nextPage->hide();
        ui->hint->setText("已经是最后一页。准备提交结果吗？没事的，放轻松。");
        return;
    }
    else
    {
        for(int i = 0;i < 10;i++)
        {
            bool flag = 0;
            for(int j = 0;j < 5;j++)//又是嵌套。
            {
                if(questions[i + num]->score != 0)
                {
                    flag = 1;
                }
            }
            if(flag == 0)
            {
                notFin.push_back(QString::number(num + i + 1) + ' ');
                if(isFinished == 1)
                {
                    isFinished = 0;
                }
            }
        }
        if(!isFinished)
        {
            QMessageBox::warning(this,"提示",("本页您还有题目未完成，题号为：\n" + notFin + "\n请先完成本页全部题目"));
            ui->hint->setText("有题目未完成");
            return;
        }
        ui->hint->setText("      ");//6个空格
        push(currentPage);
        currentPage++;
        pull(currentPage);
        ui->pageHint->setText((QString("当前页码：%1 / 2")).arg(currentPage));
    }
}


void MainWindow::on_prePage_clicked()
{
    ui->submit->hide();
    ui->nextPage->show();
    if(currentPage == 1)
    {
        ui->hint->setText("已经是第一页");
        return;
    }
    else
    {
        ui->hint->setText("      ");//6个空格
        push(currentPage);
        currentPage--;
        pull(currentPage);
        ui->pageHint->setText((QString("当前页码：%1 / 2")).arg(currentPage));
    }
}

void MainWindow::on_submit_clicked()
{
    QMessageBox::information(this,"提示","提交成功！点击“OK”查看结果。");
    calculate();
    ui->MainStack->setCurrentIndex(2);
}

void MainWindow::on_pushButton_clicked()
{
    this->setVisible(0);
}

