/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

#include <stdlib.h>
#include <stdio.h>

#include "OSGConfig.h"

#include "OSGVRMLSceneFileType.h"
#include "OSGVRMLLoader.h"
#include "OSGVRMLNode.h"
#include "OSGVRMLToOSGAction.h"

OSG_USING_NAMESPACE

/*!\ class osg::VRMLSceneFileType
 */

const Char8 *VRMLSceneFileType::_suffixA[] =  { "wrl" };

VRMLSceneFileType VRMLSceneFileType::_the(_suffixA,
                                          sizeof(_suffixA),
                                          false,
                                          10);

VRMLLoader      *VRMLSceneFileType::_pVRMLLoader      = NULL;
VRMLToOSGAction *VRMLSceneFileType::_pVRMLToOSGAction = NULL;

/*-------------------------------------------------------------------------*/
/*                                The                                      */

VRMLSceneFileType &VRMLSceneFileType::the(void)
{
    return _the;
}


/*-------------------------------------------------------------------------*/
/*                             Destructor                                  */

VRMLSceneFileType::~VRMLSceneFileType(void)
{
}

/*-------------------------------------------------------------------------*/
/*                                Get                                      */

const Char8 *VRMLSceneFileType::getName(void) const
{
    return "VRML GEOMETRY";
}

/*-------------------------------------------------------------------------*/
/*                               Read                                      */

NodePtr VRMLSceneFileType::read(std::istream &is, const Char8 *) const
{
    if(_pVRMLLoader == NULL)
    {
        _pVRMLLoader      = new VRMLLoader     ();
        _pVRMLToOSGAction = new VRMLToOSGAction();
    }

    _pVRMLLoader->scanStream(is);

    _pVRMLToOSGAction->setNameNodeMap     (_pVRMLLoader->getNameNodeMap());

    _pVRMLToOSGAction->setDataTransferMode(VRMLToOSGAction::SwapData     );
    _pVRMLToOSGAction->apply              (_pVRMLLoader->getFileTree()   );

    return  _pVRMLToOSGAction->getRoot();
}

/*-------------------------------------------------------------------------*/
/*                            Constructors                                 */

VRMLSceneFileType::VRMLSceneFileType(const Char8  *suffixArray[],
                                           UInt16  suffixByteCount,
                                           bool    override,
                                           UInt32  overridePriority) :
    Inherited(suffixArray,
              suffixByteCount,
              override,
              overridePriority)
{
}


/*-------------------------------------------------------------------------*/
/*                              cvs id's                                   */

#ifdef __sgi
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp[] = "@(#)$Id: $";
    static Char8 cvsid_hpp[] = OSGVRMLSCENEFILETYPE_HEADER_CVSID;
}

