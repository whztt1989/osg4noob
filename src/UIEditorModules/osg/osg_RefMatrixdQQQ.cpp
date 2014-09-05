#include "osg_RefMatrixdQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Matrixd>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_RefMatrixdQQQ_QModel::osg_RefMatrixdQQQ_QModel(const osg_RefMatrixdQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_RefMatrixdQQQ_QModel::~osg_RefMatrixdQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_RefMatrixdQQQ_QModel::osg_RefMatrixdQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::RefMatrixd*>(i->ptr);
}
QQuickItem *osg_RefMatrixdQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_RefMatrixdQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_RefMatrixdQQQ::PREcompoQML()const{return string("");}
const std::string osg_RefMatrixdQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_RefMatrixdQQQ::createQQModel(Instance*i){ return new osg_RefMatrixdQQQ_QModel(i);}