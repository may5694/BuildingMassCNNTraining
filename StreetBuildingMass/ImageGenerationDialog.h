#ifndef IMAGEGENERATIONDIALOG_H
#define IMAGEGENERATIONDIALOG_H

#include <QDialog>
#include "ui_ImageGenerationDialog.h"

class ImageGenerationDialog : public QDialog
{
	Q_OBJECT

public:
	ImageGenerationDialog(QWidget *parent = 0);
	~ImageGenerationDialog();

public slots:
	void updateTotalNumImages();
	void onCGADirectory();
	void onOutputDirectory();
	void onModifyImageClicked();
	void onEdgeNoiseClicked();
	void onEdgeBlurClicked();
	void onOK();
	void onCancel();

public:
	Ui::ImageGenerationDialog ui;
};

#endif // IMAGEGENERATIONDIALOG_H
