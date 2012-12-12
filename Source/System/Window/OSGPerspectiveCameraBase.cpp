/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class PerspectiveCamera!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPERSPECTIVECAMERAINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGPerspectiveCameraBase.h"
#include "OSGPerspectiveCamera.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  PerspectiveCameraBase::FovFieldMask = 
    (TypeTraits<BitVector>::One << PerspectiveCameraBase::FovFieldId);

const OSG::BitVector  PerspectiveCameraBase::FovModeFieldMask = 
    (TypeTraits<BitVector>::One << PerspectiveCameraBase::FovModeFieldId);

const OSG::BitVector  PerspectiveCameraBase::AspectFieldMask = 
    (TypeTraits<BitVector>::One << PerspectiveCameraBase::AspectFieldId);

const OSG::BitVector PerspectiveCameraBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Real32          PerspectiveCameraBase::_sfFov
    The field of view, in radians.
*/
/*! \var UInt32          PerspectiveCameraBase::_sfFovMode
    Defines whether the field of view is measured vertically, horizontally or in the smaller direction. See OSG::PerspectiveCamera::FovMode enum for the actual values,
*/
/*! \var Real32          PerspectiveCameraBase::_sfAspect
    The aspect ratio (i.e. width / height) of a pixel.
*/

//! PerspectiveCamera description

FieldDescription *PerspectiveCameraBase::_desc[] = 
{
    new FieldDescription(SFReal32::getClassType(), 
                     "fov", 
                     FovFieldId, FovFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PerspectiveCameraBase::editSFFov)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "fovMode", 
                     FovModeFieldId, FovModeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PerspectiveCameraBase::editSFFovMode)),
    new FieldDescription(SFReal32::getClassType(), 
                     "aspect", 
                     AspectFieldId, AspectFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PerspectiveCameraBase::editSFAspect))
};


FieldContainerType PerspectiveCameraBase::_type(
    "PerspectiveCamera",
    "Camera",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&PerspectiveCameraBase::createEmpty),
    PerspectiveCamera::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(PerspectiveCameraBase, PerspectiveCameraPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &PerspectiveCameraBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &PerspectiveCameraBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr PerspectiveCameraBase::shallowCopy(void) const 
{ 
    PerspectiveCameraPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const PerspectiveCamera *>(this)); 

    return returnValue; 
}

UInt32 PerspectiveCameraBase::getContainerSize(void) const 
{ 
    return sizeof(PerspectiveCamera); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void PerspectiveCameraBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<PerspectiveCameraBase *>(&other),
                          whichField);
}
#else
void PerspectiveCameraBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((PerspectiveCameraBase *) &other, whichField, sInfo);
}
void PerspectiveCameraBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void PerspectiveCameraBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

PerspectiveCameraBase::PerspectiveCameraBase(void) :
    _sfFov                    (), 
    _sfFovMode                (UInt32(0)), 
    _sfAspect                 (Real32(1)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

PerspectiveCameraBase::PerspectiveCameraBase(const PerspectiveCameraBase &source) :
    _sfFov                    (source._sfFov                    ), 
    _sfFovMode                (source._sfFovMode                ), 
    _sfAspect                 (source._sfAspect                 ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

PerspectiveCameraBase::~PerspectiveCameraBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 PerspectiveCameraBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FovFieldMask & whichField))
    {
        returnValue += _sfFov.getBinSize();
    }

    if(FieldBits::NoField != (FovModeFieldMask & whichField))
    {
        returnValue += _sfFovMode.getBinSize();
    }

    if(FieldBits::NoField != (AspectFieldMask & whichField))
    {
        returnValue += _sfAspect.getBinSize();
    }


    return returnValue;
}

void PerspectiveCameraBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FovFieldMask & whichField))
    {
        _sfFov.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FovModeFieldMask & whichField))
    {
        _sfFovMode.copyToBin(pMem);
    }

    if(FieldBits::NoField != (AspectFieldMask & whichField))
    {
        _sfAspect.copyToBin(pMem);
    }


}

void PerspectiveCameraBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FovFieldMask & whichField))
    {
        _sfFov.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FovModeFieldMask & whichField))
    {
        _sfFovMode.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (AspectFieldMask & whichField))
    {
        _sfAspect.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PerspectiveCameraBase::executeSyncImpl(      PerspectiveCameraBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (FovFieldMask & whichField))
        _sfFov.syncWith(pOther->_sfFov);

    if(FieldBits::NoField != (FovModeFieldMask & whichField))
        _sfFovMode.syncWith(pOther->_sfFovMode);

    if(FieldBits::NoField != (AspectFieldMask & whichField))
        _sfAspect.syncWith(pOther->_sfAspect);


}
#else
void PerspectiveCameraBase::executeSyncImpl(      PerspectiveCameraBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (FovFieldMask & whichField))
        _sfFov.syncWith(pOther->_sfFov);

    if(FieldBits::NoField != (FovModeFieldMask & whichField))
        _sfFovMode.syncWith(pOther->_sfFovMode);

    if(FieldBits::NoField != (AspectFieldMask & whichField))
        _sfAspect.syncWith(pOther->_sfAspect);



}

void PerspectiveCameraBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<PerspectiveCameraPtr>::_type("PerspectiveCameraPtr", "CameraPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(PerspectiveCameraPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(PerspectiveCameraPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.49 2008/06/09 07:30:44 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGPERSPECTIVECAMERABASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPERSPECTIVECAMERABASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPERSPECTIVECAMERAFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
