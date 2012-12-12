/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class OffCenterPerspectiveCamera!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &OffCenterPerspectiveCameraBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 OffCenterPerspectiveCameraBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
OffCenterPerspectiveCameraPtr OffCenterPerspectiveCameraBase::create(void) 
{
    OffCenterPerspectiveCameraPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = OffCenterPerspectiveCameraPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
OffCenterPerspectiveCameraPtr OffCenterPerspectiveCameraBase::createEmpty(void) 
{ 
    OffCenterPerspectiveCameraPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the OffCenterPerspectiveCamera::_sfPrincipalPoint field.
inline
const SFVec2f *OffCenterPerspectiveCameraBase::getSFPrincipalPoint(void) const
{
    return &_sfPrincipalPoint;
}

//! Get the OffCenterPerspectiveCamera::_sfPrincipalPoint field.
inline
SFVec2f *OffCenterPerspectiveCameraBase::editSFPrincipalPoint(void)
{
    return &_sfPrincipalPoint;
}

#ifndef OSG_2_PREP
//! Get the OffCenterPerspectiveCamera::_sfPrincipalPoint field.
inline
SFVec2f *OffCenterPerspectiveCameraBase::getSFPrincipalPoint(void)
{
    return &_sfPrincipalPoint;
}
#endif


//! Get the value of the OffCenterPerspectiveCamera::_sfPrincipalPoint field.
inline
Vec2f &OffCenterPerspectiveCameraBase::editPrincipalPoint(void)
{
    return _sfPrincipalPoint.getValue();
}

//! Get the value of the OffCenterPerspectiveCamera::_sfPrincipalPoint field.
inline
const Vec2f &OffCenterPerspectiveCameraBase::getPrincipalPoint(void) const
{
    return _sfPrincipalPoint.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the OffCenterPerspectiveCamera::_sfPrincipalPoint field.
inline
Vec2f &OffCenterPerspectiveCameraBase::getPrincipalPoint(void)
{
    return _sfPrincipalPoint.getValue();
}
#endif

//! Set the value of the OffCenterPerspectiveCamera::_sfPrincipalPoint field.
inline
void OffCenterPerspectiveCameraBase::setPrincipalPoint(const Vec2f &value)
{
    _sfPrincipalPoint.setValue(value);
}


OSG_END_NAMESPACE

#define OSGOFFCENTERPERSPECTIVECAMERABASE_INLINE_CVSID "@(#)$Id: OSGOffCenterPerspectiveCameraBase.inl,v 1.5 2008/06/09 12:28:23 vossg Exp $"
