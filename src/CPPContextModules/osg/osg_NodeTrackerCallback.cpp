#include "osg_NodeTrackerCallback.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/NodeTrackerCallback>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_NodeTrackerCallback::createInstance(){
 std::cerr<<"osg::NodeTrackerCallback not instanciable"<<std::endl;
return(Instance(0, 0)); 
}