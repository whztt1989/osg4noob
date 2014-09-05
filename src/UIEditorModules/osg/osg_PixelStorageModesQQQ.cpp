#include "osg_PixelStorageModesQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/GLU>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_PixelStorageModesQQQ_QModel::osg_PixelStorageModesQQQ_QModel(const osg_PixelStorageModesQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_PixelStorageModesQQQ_QModel::~osg_PixelStorageModesQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_PixelStorageModesQQQ_QModel::osg_PixelStorageModesQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::PixelStorageModes*>(i->ptr);
}
QQuickItem *osg_PixelStorageModesQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_PixelStorageModesQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_PixelStorageModesQQQ::PREcompoQML()const{return string("");}
const std::string osg_PixelStorageModesQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_PixelStorageModesQQQ::createQQModel(Instance*i){ return new osg_PixelStorageModesQQQ_QModel(i);}
