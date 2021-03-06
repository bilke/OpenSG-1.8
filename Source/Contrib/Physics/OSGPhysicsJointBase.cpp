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
 **     class PhysicsJoint!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPHYSICSJOINTINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGPhysicsJointBase.h"
#include "OSGPhysicsJoint.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  PhysicsJointBase::ParamFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsJointBase::ParamFieldId);

const OSG::BitVector  PhysicsJointBase::WorldFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsJointBase::WorldFieldId);

const OSG::BitVector  PhysicsJointBase::FirstBodyFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsJointBase::FirstBodyFieldId);

const OSG::BitVector  PhysicsJointBase::SecondBodyFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsJointBase::SecondBodyFieldId);

const OSG::BitVector PhysicsJointBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Vec2f           PhysicsJointBase::_sfParam
    
*/
/*! \var PhysicsWorldPtr PhysicsJointBase::_sfWorld
    
*/
/*! \var PhysicsBodyPtr  PhysicsJointBase::_sfFirstBody
    
*/
/*! \var PhysicsBodyPtr  PhysicsJointBase::_sfSecondBody
    
*/

//! PhysicsJoint description

FieldDescription *PhysicsJointBase::_desc[] = 
{
    new FieldDescription(SFVec2f::getClassType(), 
                     "param", 
                     ParamFieldId, ParamFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhysicsJointBase::editSFParam)),
    new FieldDescription(SFPhysicsWorldPtr::getClassType(), 
                     "world", 
                     WorldFieldId, WorldFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhysicsJointBase::editSFWorld)),
    new FieldDescription(SFPhysicsBodyPtr::getClassType(), 
                     "firstBody", 
                     FirstBodyFieldId, FirstBodyFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhysicsJointBase::editSFFirstBody)),
    new FieldDescription(SFPhysicsBodyPtr::getClassType(), 
                     "secondBody", 
                     SecondBodyFieldId, SecondBodyFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhysicsJointBase::editSFSecondBody))
};


FieldContainerType PhysicsJointBase::_type(
    "PhysicsJoint",
    "Attachment",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&PhysicsJointBase::createEmpty),
    PhysicsJoint::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(PhysicsJointBase, PhysicsJointPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &PhysicsJointBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &PhysicsJointBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr PhysicsJointBase::shallowCopy(void) const 
{ 
    PhysicsJointPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const PhysicsJoint *>(this)); 

    return returnValue; 
}

UInt32 PhysicsJointBase::getContainerSize(void) const 
{ 
    return sizeof(PhysicsJoint); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void PhysicsJointBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<PhysicsJointBase *>(&other),
                          whichField);
}
#else
void PhysicsJointBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((PhysicsJointBase *) &other, whichField, sInfo);
}
void PhysicsJointBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void PhysicsJointBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

PhysicsJointBase::PhysicsJointBase(void) :
    _sfParam                  (), 
    _sfWorld                  (), 
    _sfFirstBody              (PhysicsBodyPtr(NullFC)), 
    _sfSecondBody             (PhysicsBodyPtr(NullFC)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

PhysicsJointBase::PhysicsJointBase(const PhysicsJointBase &source) :
    _sfParam                  (source._sfParam                  ), 
    _sfWorld                  (source._sfWorld                  ), 
    _sfFirstBody              (source._sfFirstBody              ), 
    _sfSecondBody             (source._sfSecondBody             ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

PhysicsJointBase::~PhysicsJointBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 PhysicsJointBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ParamFieldMask & whichField))
    {
        returnValue += _sfParam.getBinSize();
    }

    if(FieldBits::NoField != (WorldFieldMask & whichField))
    {
        returnValue += _sfWorld.getBinSize();
    }

    if(FieldBits::NoField != (FirstBodyFieldMask & whichField))
    {
        returnValue += _sfFirstBody.getBinSize();
    }

    if(FieldBits::NoField != (SecondBodyFieldMask & whichField))
    {
        returnValue += _sfSecondBody.getBinSize();
    }


    return returnValue;
}

void PhysicsJointBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ParamFieldMask & whichField))
    {
        _sfParam.copyToBin(pMem);
    }

    if(FieldBits::NoField != (WorldFieldMask & whichField))
    {
        _sfWorld.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FirstBodyFieldMask & whichField))
    {
        _sfFirstBody.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SecondBodyFieldMask & whichField))
    {
        _sfSecondBody.copyToBin(pMem);
    }


}

void PhysicsJointBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ParamFieldMask & whichField))
    {
        _sfParam.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (WorldFieldMask & whichField))
    {
        _sfWorld.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FirstBodyFieldMask & whichField))
    {
        _sfFirstBody.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SecondBodyFieldMask & whichField))
    {
        _sfSecondBody.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PhysicsJointBase::executeSyncImpl(      PhysicsJointBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ParamFieldMask & whichField))
        _sfParam.syncWith(pOther->_sfParam);

    if(FieldBits::NoField != (WorldFieldMask & whichField))
        _sfWorld.syncWith(pOther->_sfWorld);

    if(FieldBits::NoField != (FirstBodyFieldMask & whichField))
        _sfFirstBody.syncWith(pOther->_sfFirstBody);

    if(FieldBits::NoField != (SecondBodyFieldMask & whichField))
        _sfSecondBody.syncWith(pOther->_sfSecondBody);


}
#else
void PhysicsJointBase::executeSyncImpl(      PhysicsJointBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ParamFieldMask & whichField))
        _sfParam.syncWith(pOther->_sfParam);

    if(FieldBits::NoField != (WorldFieldMask & whichField))
        _sfWorld.syncWith(pOther->_sfWorld);

    if(FieldBits::NoField != (FirstBodyFieldMask & whichField))
        _sfFirstBody.syncWith(pOther->_sfFirstBody);

    if(FieldBits::NoField != (SecondBodyFieldMask & whichField))
        _sfSecondBody.syncWith(pOther->_sfSecondBody);



}

void PhysicsJointBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<PhysicsJointPtr>::_type("PhysicsJointPtr", "AttachmentPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(PhysicsJointPtr, OSG_CONTRIBLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(PhysicsJointPtr, OSG_CONTRIBLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGPhysicsJointBase.cpp,v 1.5 2008/06/09 12:28:02 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGPHYSICSJOINTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPHYSICSJOINTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPHYSICSJOINTFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

