#include "osgUtil_RenderBinQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/RenderBin>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_RenderBinQQQ_QModel::osgUtil_RenderBinQQQ_QModel(const osgUtil_RenderBinQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_RenderBinQQQ_QModel::~osgUtil_RenderBinQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_RenderBinQQQ_QModel::osgUtil_RenderBinQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::RenderBin*>(i->ptr);
}
QQuickItem *osgUtil_RenderBinQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_RenderBinQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_RenderBinQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_RenderBinQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_RenderBinQQQ::createQQModel(Instance*i){ return new osgUtil_RenderBinQQQ_QModel(i);}
