#include "osg_HintQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Hint>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_HintQQQ_QModel::osg_HintQQQ_QModel(const osg_HintQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_HintQQQ_QModel::~osg_HintQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_HintQQQ_QModel::osg_HintQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Hint*>(i->ptr);
}
QQuickItem *osg_HintQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_HintQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_HintQQQ::PREcompoQML()const{return string("");}
const std::string osg_HintQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_HintQQQ::createQQModel(Instance*i){ return new osg_HintQQQ_QModel(i);}
