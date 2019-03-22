#pragma once

#include <QAbstractTableModel>
#include <QVariant>

class ModelTestCl : public QAbstractTableModel
{
	Q_OBJECT

public:
	ModelTestCl(QObject *parent);
	~ModelTestCl();
	int rowCount(const QModelIndex &parent = QModelIndex())const;
	int columnCount(const QModelIndex &parent = QModelIndex())const;
	QVariant data(const QModelIndex &index, int role) const;
//	QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const = 0;

};
