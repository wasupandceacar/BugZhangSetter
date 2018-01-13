#ifndef BUGZHANGSETTER_H
#define BUGZHANGSETTER_H

#pragma execution_character_set("utf-8")

#include <QLabel>
#include <QtWidgets/QApplication>
#include <QTextCodec>
#include <QPushButton>
#include <QLineEdit>
#include <QWidget>  
#include <QCheckBox>
#include <QTimer>
#include <QIntValidator>

class BugZhangSetter : public QWidget
{
	Q_OBJECT

public:
	BugZhangSetter(QWidget *parent = 0);

	QPushButton *playerbutton;
	QPushButton *bombbutton;
	QPushButton *powerbutton;
	QPushButton *subpowerbutton;
	//QPushButton *maxbutton;

	QLineEdit *playeredit;
	QLineEdit *bombedit;
	QLineEdit *poweredit;
	QLineEdit *subpoweredit;
	//QLineEdit *maxedit;

	QLabel *playerlabel;
	QLabel *bomblabel;
	QLabel *powerlabel;
	QLabel *subpowerlabel;
	//QLabel *maxlabel;

	QCheckBox *playerbox;
	QCheckBox *bombbox;
	QCheckBox *powerbox;
	QCheckBox *subpowerbox;
	QCheckBox *NDbox;
	QCheckBox *ABbox;

	private slots:
	void SetPlayer();
	void SetBomb();
	void SetPower();
	void SetSubpower();
	//void SetMax();

	int checkprog();
	void checkbox();

private:
	void SetData(int choice, int num);

	//¼ÆÊ±Æ÷
	QTimer *timer;
};

#endif
