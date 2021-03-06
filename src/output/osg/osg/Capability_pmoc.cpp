#include <osg/Capability>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Capability_pmoc.hpp>
#include <customCode/osg/Capability_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_Capability:: getCapability()const{
//params checking
return _model->getCapability();

}
 int  osg::QReflect_Capability:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Capability::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_Capability::setCapability( GLenum  p0){
//params checking
 _model->setCapability(p0);
emit CapabilityChanged();

}

///DefaultConstructor////////////////
osg::QReflect_Capability::QReflect_Capability(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Capability*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Capability::~QReflect_Capability( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Capability::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Capability::createInstance( ){
osg::ref_ptr<osg::Capability> osg_Capability_ptr	;
osg_Capability_ptr = new osg::Capability ()	;
Instance o(PMOCGETMETACLASS("osg::Capability"),(void*)osg_Capability_ptr.get()		,true);
_managedinstances.insert(osg_Capability_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Capability::MetaQReflect_Capability():MetaQQuickClass( "osg::Capability"){
_typeid=&typeid(osg::Capability );
           qRegisterMetaType<osg::QMLCapability>();
           qRegisterMetaType<osg::QMLCapability*>("pmoc.osg.QMLCapability");
qmlRegisterType<osg::QReflect_Capability>("pmoc.osg",1,0,"QReflect_Capability");
           qmlRegisterType<osg::QMLCapability>("pmoc.osg",1,0,"QMLCapability");
};
const std::string osg::MetaQReflect_Capability::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Capability::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Capability::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Capability::createQQModel(const Instance*i){ //return new MetaQReflect_Capability_QModel(i);}
QMLCapability *ret =new QMLCapability(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::Capabilityis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::Capabilityis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Capability_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Capability_pmoc.hpp>
#include <customCode/osg/Capability_pmoc.hpp>
#include <customCode/osg/Capability_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_Capabilityi:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Capabilityi::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 unsigned int  osg::QReflect_Capabilityi:: getIndex()const{
//params checking
return _model->getIndex();

}
 unsigned int  osg::QReflect_Capabilityi:: getMember()const{
//params checking
return _model->getMember();

}
 void osg::QReflect_Capabilityi::setIndex( unsigned int  p0){
//params checking
 _model->setIndex(p0);
emit IndexChanged();

}

///DefaultConstructor////////////////
osg::QReflect_Capabilityi::QReflect_Capabilityi(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Capabilityi*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Capabilityi::~QReflect_Capabilityi( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Capabilityi::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Capabilityi::createInstance( ){
osg::ref_ptr<osg::Capabilityi> osg_Capabilityi_ptr	;
osg_Capabilityi_ptr = new osg::Capabilityi ()	;
Instance o(PMOCGETMETACLASS("osg::Capabilityi"),(void*)osg_Capabilityi_ptr.get()		,true);
_managedinstances.insert(osg_Capabilityi_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Capabilityi::MetaQReflect_Capabilityi():MetaQQuickClass( "osg::Capabilityi"){
_typeid=&typeid(osg::Capabilityi );
           qRegisterMetaType<osg::QMLCapabilityi>();
           qRegisterMetaType<osg::QMLCapabilityi*>("pmoc.osg.QMLCapabilityi");
qmlRegisterType<osg::QReflect_Capabilityi>("pmoc.osg",1,0,"QReflect_Capabilityi");
           qmlRegisterType<osg::QMLCapabilityi>("pmoc.osg",1,0,"QMLCapabilityi");
};
const std::string osg::MetaQReflect_Capabilityi::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Capabilityi::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Capabilityi::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Capabilityi::createQQModel(const Instance*i){ //return new MetaQReflect_Capabilityi_QModel(i);}
QMLCapabilityi *ret =new QMLCapabilityi(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Capability *mother =dynamic_cast<osg::Capability*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Capability");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Capability model for osg::Capabilityiis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Capability");
if(!cl){std::cerr<<"osg::Capability QQModel for osg::Capabilityiis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Capability_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Capability_pmoc.hpp>
#include <customCode/osg/Capability_pmoc.hpp>
#include <customCode/osg/Capability_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_Disablei::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Disablei::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_Disablei::QReflect_Disablei(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Disablei*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Disablei::~QReflect_Disablei( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Disablei::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Disablei::createInstance( ){
osg::ref_ptr<osg::Disablei> osg_Disablei_ptr	;
osg_Disablei_ptr = new osg::Disablei ()	;
Instance o(PMOCGETMETACLASS("osg::Disablei"),(void*)osg_Disablei_ptr.get()		,true);
_managedinstances.insert(osg_Disablei_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Disablei::MetaQReflect_Disablei():MetaQQuickClass( "osg::Disablei"){
_typeid=&typeid(osg::Disablei );
           qRegisterMetaType<osg::QMLDisablei>();
           qRegisterMetaType<osg::QMLDisablei*>("pmoc.osg.QMLDisablei");
qmlRegisterType<osg::QReflect_Disablei>("pmoc.osg",1,0,"QReflect_Disablei");
           qmlRegisterType<osg::QMLDisablei>("pmoc.osg",1,0,"QMLDisablei");
};
const std::string osg::MetaQReflect_Disablei::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Disablei::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Disablei::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Disablei::createQQModel(const Instance*i){ //return new MetaQReflect_Disablei_QModel(i);}
QMLDisablei *ret =new QMLDisablei(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Capabilityi *mother =dynamic_cast<osg::Capabilityi*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Capabilityi");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Capabilityi model for osg::Disableiis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Capabilityi");
if(!cl){std::cerr<<"osg::Capabilityi QQModel for osg::Disableiis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Capability_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Capability_pmoc.hpp>
#include <customCode/osg/Capability_pmoc.hpp>
#include <customCode/osg/Capability_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_Enablei::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Enablei::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_Enablei::QReflect_Enablei(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Enablei*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Enablei::~QReflect_Enablei( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Enablei::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Enablei::createInstance( ){
osg::ref_ptr<osg::Enablei> osg_Enablei_ptr	;
osg_Enablei_ptr = new osg::Enablei ()	;
Instance o(PMOCGETMETACLASS("osg::Enablei"),(void*)osg_Enablei_ptr.get()		,true);
_managedinstances.insert(osg_Enablei_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Enablei::MetaQReflect_Enablei():MetaQQuickClass( "osg::Enablei"){
_typeid=&typeid(osg::Enablei );
           qRegisterMetaType<osg::QMLEnablei>();
           qRegisterMetaType<osg::QMLEnablei*>("pmoc.osg.QMLEnablei");
qmlRegisterType<osg::QReflect_Enablei>("pmoc.osg",1,0,"QReflect_Enablei");
           qmlRegisterType<osg::QMLEnablei>("pmoc.osg",1,0,"QMLEnablei");
};
const std::string osg::MetaQReflect_Enablei::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Enablei::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Enablei::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Enablei::createQQModel(const Instance*i){ //return new MetaQReflect_Enablei_QModel(i);}
QMLEnablei *ret =new QMLEnablei(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Capabilityi *mother =dynamic_cast<osg::Capabilityi*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Capabilityi");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Capabilityi model for osg::Enableiis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Capabilityi");
if(!cl){std::cerr<<"osg::Capabilityi QQModel for osg::Enableiis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Capability_pmoc.cpp"
#endif




