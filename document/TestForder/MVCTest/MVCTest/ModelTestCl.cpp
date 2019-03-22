#include "ModelTestCl.h"

ModelTestCl::ModelTestCl(QObject *parent)
	: QAbstractTableModel(parent)
{
}
ModelTestCl::~ModelTestCl()
{
}
int ModelTestCl::rowCount(const QModelIndex &/*parent = QModelIndex()*/)const
{
	return 1;
}

int ModelTestCl::columnCount(const QModelIndex &/*parent = QModelIndex()*/)const
{
	return 1;
}

QVariant ModelTestCl::data(const QModelIndex &index, int role) const
{
	if (role == Qt::DisplayRole)
	{
		return 2;
	}
	return QVariant();
}
/*
 virtual int rowCount(const QModelIndex &parent = QModelIndex()) const = 0;
 virtual int columnCount(const QModelIndex &parent = QModelIndex()) const = 0;
 virtual bool hasChildren(const QModelIndex &parent = QModelIndex()) const;

 virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const = 0;
*/