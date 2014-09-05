#include "osg_ShaderBinaryQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Shader>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ShaderBinaryQQQ_QModel::osg_ShaderBinaryQQQ_QModel(const osg_ShaderBinaryQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ShaderBinaryQQQ_QModel::~osg_ShaderBinaryQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ShaderBinaryQQQ_QModel::osg_ShaderBinaryQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ShaderBinary*>(i->ptr);
}
QQuickItem *osg_ShaderBinaryQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ShaderBinaryQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ShaderBinaryQQQ::PREcompoQML()const{return string("");}
const std::string osg_ShaderBinaryQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ShaderBinaryQQQ::createQQModel(Instance*i){ return new osg_ShaderBinaryQQQ_QModel(i);}
