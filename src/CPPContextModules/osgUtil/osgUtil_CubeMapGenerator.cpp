#include "osgUtil_CubeMapGenerator.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/CubeMapGenerator>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_CubeMapGenerator::createInstance(){
 std::cerr<<"osgUtil::CubeMapGenerator not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
