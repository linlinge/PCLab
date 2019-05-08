#ifndef PCVIEWER_H
#define PCVIEWER_H

#include <QMainWindow>
#include <QFileDialog>
#include "global.h"
#include "QProgressBar"

namespace Ui {
class PCViewer;
}

class PCViewer : public QMainWindow
{
    Q_OBJECT

public:
    explicit PCViewer(QWidget *parent = 0);
    void colorCloudDistances (int color_mode);
    void LoadFile();
    ~PCViewer();

private:
    Ui::PCViewer *ui;
    QString filename_;
    QProgressBar* progress_bar_;

protected:
  /** @brief The PCL visualizer object */
  pcl::visualization::PCLVisualizer::Ptr viewer_;

  /** @brief The point cloud displayed */
  pcl::PointCloud<pcl::PointXYZRGBA>::Ptr cloud_;
private slots:
  void on_actionColor_changed();
  void on_actionOpen_triggered();
  void on_actionPassThroughFilter_triggered();
  void on_actionReload_triggered();
};

#endif // PCVIEWER_H
