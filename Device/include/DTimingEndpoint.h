
/*  © Copyright CERN, 2015. All rights not expressly granted are reserved.

    The stub of this file was generated by quasar (https://github.com/quasar-team/quasar/)

    Quasar is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public Licence as published by
    the Free Software Foundation, either version 3 of the Licence.
    Quasar is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public Licence for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with Quasar.  If not, see <http://www.gnu.org/licenses/>.


 */


#ifndef __DTimingEndpoint__H__
#define __DTimingEndpoint__H__

#include <Base_DTimingEndpoint.h>

namespace Device
{

class
    DTimingEndpoint
    : public Base_DTimingEndpoint
{

public:
    /* sample constructor */
    explicit DTimingEndpoint (
        const Configuration::TimingEndpoint& config,
        Parent_DTimingEndpoint* parent
    ) ;
    /* sample dtr */
    ~DTimingEndpoint ();

    /* delegators for
    cachevariables and sourcevariables */


    /* delegators for methods */
    UaStatus callPoll (
        OpcUa_Boolean& success
    ) ;

private:
    /* Delete copy constructor and assignment operator */
    DTimingEndpoint( const DTimingEndpoint& other );
    DTimingEndpoint& operator=(const DTimingEndpoint& other);

    // ----------------------------------------------------------------------- *
    // -     CUSTOM CODE STARTS BELOW THIS COMMENT.                            *
    // -     Don't change this comment, otherwise merge tool may be troubled.  *
    // ----------------------------------------------------------------------- *

public:

private:



};

}

#endif // __DTimingEndpoint__H__