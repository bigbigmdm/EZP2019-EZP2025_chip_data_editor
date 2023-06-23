#ifndef DELEGATES_H
#define DELEGATES_H

#include <QStyledItemDelegate>
#include <QItemDelegate>
#include <QComboBox>

class chTypeDelegate : public QItemDelegate
{
Q_OBJECT
public:
  explicit chTypeDelegate(QObject *parent);
  QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
        const QModelIndex &index) const;
  void setEditorData(QWidget *editor, const QModelIndex &index) const;
  void setModelData(QWidget *editor, QAbstractItemModel *model,
        const QModelIndex &index) const;
  void updateEditorGeometry(QWidget *editor,
        const QStyleOptionViewItem &option, const QModelIndex &index) const;

signals:

public slots:
//virtual ~chTypeDelegate() {}
};

class chVCCDelegate : public QItemDelegate
{
Q_OBJECT
public:
  explicit chVCCDelegate(QObject *parent);
  QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
        const QModelIndex &index) const;
  void setEditorData(QWidget *editor, const QModelIndex &index) const;
  void setModelData(QWidget *editor, QAbstractItemModel *model,
        const QModelIndex &index) const;
  void updateEditorGeometry(QWidget *editor,
        const QStyleOptionViewItem &option, const QModelIndex &index) const;

signals:

public slots:
//virtual ~chVCCDelegate() {}
};
class chPagesDelegate : public QItemDelegate
{
Q_OBJECT
public:
  explicit chPagesDelegate(QObject *parent);
  QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
        const QModelIndex &index) const;
  void setEditorData(QWidget *editor, const QModelIndex &index) const;
  void setModelData(QWidget *editor, QAbstractItemModel *model,
        const QModelIndex &index) const;
  void updateEditorGeometry(QWidget *editor,
        const QStyleOptionViewItem &option, const QModelIndex &index) const;

signals:

public slots:
//virtual ~chPagesDelegate() {}
};
class chBlSizeDelegate : public QItemDelegate
{
Q_OBJECT
public:
  explicit chBlSizeDelegate(QObject *parent);
  QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
        const QModelIndex &index) const;
  void setEditorData(QWidget *editor, const QModelIndex &index) const;
  void setModelData(QWidget *editor, QAbstractItemModel *model,
        const QModelIndex &index) const;
  void updateEditorGeometry(QWidget *editor,
        const QStyleOptionViewItem &option, const QModelIndex &index) const;

signals:

public slots:
//virtual ~chBlSizeDelegate() {}
};
#endif // DELEGATES_H
