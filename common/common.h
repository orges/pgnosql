#ifndef __PGNOSQL_COMMON__   
#define __PGNOSQL_COMMON__

#include <string>
#include <list>
#include <vector>
#include <map>
#include <algorithm>
#include <pqxx/pqxx>
#include <log4cxx/logger.h>
#include <log4cxx/xml/domconfigurator.h>
#include <log4cxx/propertyconfigurator.h>
#include "exceptions/exceptions.h"

#ifndef EOK
	#define EOK 0
#endif

using namespace log4cxx;
using namespace log4cxx::xml;
using namespace log4cxx::helpers;

#endif 
