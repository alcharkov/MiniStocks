/*
 * MiniStocks created by Daniel Kostuj
 *
 * This file contains all definitions for the About window.
 *
 * Use of this source code is governed by the license that can be
 * found in the LICENSE file.
 */


#include "About.h"
#include "ui_about.h"
#include <QShortcut>

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
    new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_Q), this, SLOT(close())); // Ctrl+Q -> OK
}

About::~About()
{
    delete ui;
}
