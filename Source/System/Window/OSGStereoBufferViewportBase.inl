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
 **     class StereoBufferViewport!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &StereoBufferViewportBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 StereoBufferViewportBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
StereoBufferViewportPtr StereoBufferViewportBase::create(void) 
{
    StereoBufferViewportPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = StereoBufferViewportPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
StereoBufferViewportPtr StereoBufferViewportBase::createEmpty(void) 
{ 
    StereoBufferViewportPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the StereoBufferViewport::_sfLeftBuffer field.
inline
const SFBool *StereoBufferViewportBase::getSFLeftBuffer(void) const
{
    return &_sfLeftBuffer;
}

//! Get the StereoBufferViewport::_sfLeftBuffer field.
inline
SFBool *StereoBufferViewportBase::editSFLeftBuffer(void)
{
    return &_sfLeftBuffer;
}

#ifndef OSG_2_PREP
//! Get the StereoBufferViewport::_sfLeftBuffer field.
inline
SFBool *StereoBufferViewportBase::getSFLeftBuffer(void)
{
    return &_sfLeftBuffer;
}
#endif

//! Get the StereoBufferViewport::_sfRightBuffer field.
inline
const SFBool *StereoBufferViewportBase::getSFRightBuffer(void) const
{
    return &_sfRightBuffer;
}

//! Get the StereoBufferViewport::_sfRightBuffer field.
inline
SFBool *StereoBufferViewportBase::editSFRightBuffer(void)
{
    return &_sfRightBuffer;
}

#ifndef OSG_2_PREP
//! Get the StereoBufferViewport::_sfRightBuffer field.
inline
SFBool *StereoBufferViewportBase::getSFRightBuffer(void)
{
    return &_sfRightBuffer;
}
#endif


//! Get the value of the StereoBufferViewport::_sfLeftBuffer field.
inline
bool &StereoBufferViewportBase::editLeftBuffer(void)
{
    return _sfLeftBuffer.getValue();
}

//! Get the value of the StereoBufferViewport::_sfLeftBuffer field.
inline
const bool &StereoBufferViewportBase::getLeftBuffer(void) const
{
    return _sfLeftBuffer.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the StereoBufferViewport::_sfLeftBuffer field.
inline
bool &StereoBufferViewportBase::getLeftBuffer(void)
{
    return _sfLeftBuffer.getValue();
}
#endif

//! Set the value of the StereoBufferViewport::_sfLeftBuffer field.
inline
void StereoBufferViewportBase::setLeftBuffer(const bool &value)
{
    _sfLeftBuffer.setValue(value);
}

//! Get the value of the StereoBufferViewport::_sfRightBuffer field.
inline
bool &StereoBufferViewportBase::editRightBuffer(void)
{
    return _sfRightBuffer.getValue();
}

//! Get the value of the StereoBufferViewport::_sfRightBuffer field.
inline
const bool &StereoBufferViewportBase::getRightBuffer(void) const
{
    return _sfRightBuffer.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the StereoBufferViewport::_sfRightBuffer field.
inline
bool &StereoBufferViewportBase::getRightBuffer(void)
{
    return _sfRightBuffer.getValue();
}
#endif

//! Set the value of the StereoBufferViewport::_sfRightBuffer field.
inline
void StereoBufferViewportBase::setRightBuffer(const bool &value)
{
    _sfRightBuffer.setValue(value);
}


OSG_END_NAMESPACE

#define OSGSTEREOBUFFERVIEWPORTBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.21 2008/06/09 07:30:44 vossg Exp $"
