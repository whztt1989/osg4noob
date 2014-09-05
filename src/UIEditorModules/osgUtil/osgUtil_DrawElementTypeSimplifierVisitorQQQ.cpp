#include "osgUtil_DrawElementTypeSimplifierVisitorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/DrawElementTypeSimplifier>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_DrawElementTypeSimplifierVisitorQQQ_QModel::osgUtil_DrawElementTypeSimplifierVisitorQQQ_QModel(const osgUtil_DrawElementTypeSimplifierVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_DrawElementTypeSimplifierVisitorQQQ_QModel::~osgUtil_DrawElementTypeSimplifierVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_DrawElementTypeSimplifierVisitorQQQ_QModel::osgUtil_DrawElementTypeSimplifierVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::DrawElementTypeSimplifierVisitor*>(i->ptr);
}
QQuickItem *osgUtil_DrawElementTypeSimplifierVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_DrawElementTypeSimplifierVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_DrawElementTypeSimplifierVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_DrawElementTypeSimplifierVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_DrawElementTypeSimplifierVisitorQQQ::createQQModel(Instance*i){ return new osgUtil_DrawElementTypeSimplifierVisitorQQQ_QModel(i);}