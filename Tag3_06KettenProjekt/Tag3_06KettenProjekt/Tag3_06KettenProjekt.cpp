#include <iostream>
#include "Client.h"
#include "ListeImpl.h"
using  namespace vw::collections;
using  namespace vw::tiere;
using  namespace vw::clients;
int main()
{
	ListeImpl<std::shared_ptr<Schwein>> liste;
	Client c{ liste };
	c.run();

	return 0;
}


