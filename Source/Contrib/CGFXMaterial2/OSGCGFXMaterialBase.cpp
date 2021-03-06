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
 **     class CGFXMaterial!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECGFXMATERIALINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGCGFXMaterialBase.h"
#include "OSGCGFXMaterial.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  CGFXMaterialBase::EffectFileFieldMask = 
    (TypeTraits<BitVector>::One << CGFXMaterialBase::EffectFileFieldId);

const OSG::BitVector  CGFXMaterialBase::EffectStringFieldMask = 
    (TypeTraits<BitVector>::One << CGFXMaterialBase::EffectStringFieldId);

const OSG::BitVector  CGFXMaterialBase::CompilerOptionsFieldMask = 
    (TypeTraits<BitVector>::One << CGFXMaterialBase::CompilerOptionsFieldId);

const OSG::BitVector  CGFXMaterialBase::TechniqueFieldMask = 
    (TypeTraits<BitVector>::One << CGFXMaterialBase::TechniqueFieldId);

const OSG::BitVector  CGFXMaterialBase::ParametersFieldMask = 
    (TypeTraits<BitVector>::One << CGFXMaterialBase::ParametersFieldId);

const OSG::BitVector  CGFXMaterialBase::ImagesFieldMask = 
    (TypeTraits<BitVector>::One << CGFXMaterialBase::ImagesFieldId);

const OSG::BitVector  CGFXMaterialBase::VirtualIncludeFilesFieldMask = 
    (TypeTraits<BitVector>::One << CGFXMaterialBase::VirtualIncludeFilesFieldId);

const OSG::BitVector CGFXMaterialBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var std::string     CGFXMaterialBase::_sfEffectFile
    cgfx file
*/
/*! \var std::string     CGFXMaterialBase::_sfEffectString
    cgfx source string
*/
/*! \var std::string     CGFXMaterialBase::_mfCompilerOptions
    effect compiler options
*/
/*! \var Int32           CGFXMaterialBase::_sfTechnique
    
*/
/*! \var ShaderParameterPtr CGFXMaterialBase::_mfParameters
    
*/
/*! \var ImagePtr        CGFXMaterialBase::_mfImages
    
*/
/*! \var ShaderParameterStringPtr CGFXMaterialBase::_mfVirtualIncludeFiles
    used to provide a virtual filesystem of include-files to the cgfx compiler. 	Useful for clusters, where servers can't load the files themselves.
*/

//! CGFXMaterial description

FieldDescription *CGFXMaterialBase::_desc[] = 
{
    new FieldDescription(SFString::getClassType(), 
                     "effectFile", 
                     EffectFileFieldId, EffectFileFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&CGFXMaterialBase::editSFEffectFile)),
    new FieldDescription(SFString::getClassType(), 
                     "effectString", 
                     EffectStringFieldId, EffectStringFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&CGFXMaterialBase::editSFEffectString)),
    new FieldDescription(MFString::getClassType(), 
                     "compilerOptions", 
                     CompilerOptionsFieldId, CompilerOptionsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&CGFXMaterialBase::editMFCompilerOptions)),
    new FieldDescription(SFInt32::getClassType(), 
                     "technique", 
                     TechniqueFieldId, TechniqueFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&CGFXMaterialBase::editSFTechnique)),
    new FieldDescription(MFShaderParameterPtr::getClassType(), 
                     "parameters", 
                     ParametersFieldId, ParametersFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&CGFXMaterialBase::editMFParameters)),
    new FieldDescription(MFImagePtr::getClassType(), 
                     "images", 
                     ImagesFieldId, ImagesFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&CGFXMaterialBase::editMFImages)),
    new FieldDescription(MFShaderParameterStringPtr::getClassType(), 
                     "virtualIncludeFiles", 
                     VirtualIncludeFilesFieldId, VirtualIncludeFilesFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&CGFXMaterialBase::editMFVirtualIncludeFiles))
};


FieldContainerType CGFXMaterialBase::_type(
    "CGFXMaterial",
    "ChunkMaterial",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&CGFXMaterialBase::createEmpty),
    CGFXMaterial::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(CGFXMaterialBase, CGFXMaterialPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &CGFXMaterialBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &CGFXMaterialBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr CGFXMaterialBase::shallowCopy(void) const 
{ 
    CGFXMaterialPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const CGFXMaterial *>(this)); 

    return returnValue; 
}

UInt32 CGFXMaterialBase::getContainerSize(void) const 
{ 
    return sizeof(CGFXMaterial); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void CGFXMaterialBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<CGFXMaterialBase *>(&other),
                          whichField);
}
#else
void CGFXMaterialBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((CGFXMaterialBase *) &other, whichField, sInfo);
}
void CGFXMaterialBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void CGFXMaterialBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfCompilerOptions.terminateShare(uiAspect, this->getContainerSize());
    _mfParameters.terminateShare(uiAspect, this->getContainerSize());
    _mfImages.terminateShare(uiAspect, this->getContainerSize());
    _mfVirtualIncludeFiles.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

CGFXMaterialBase::CGFXMaterialBase(void) :
    _sfEffectFile             (), 
    _sfEffectString           (), 
    _mfCompilerOptions        (), 
    _sfTechnique              (Int32(0)), 
    _mfParameters             (), 
    _mfImages                 (), 
    _mfVirtualIncludeFiles    (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

CGFXMaterialBase::CGFXMaterialBase(const CGFXMaterialBase &source) :
    _sfEffectFile             (source._sfEffectFile             ), 
    _sfEffectString           (source._sfEffectString           ), 
    _mfCompilerOptions        (source._mfCompilerOptions        ), 
    _sfTechnique              (source._sfTechnique              ), 
    _mfParameters             (source._mfParameters             ), 
    _mfImages                 (source._mfImages                 ), 
    _mfVirtualIncludeFiles    (source._mfVirtualIncludeFiles    ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

CGFXMaterialBase::~CGFXMaterialBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 CGFXMaterialBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EffectFileFieldMask & whichField))
    {
        returnValue += _sfEffectFile.getBinSize();
    }

    if(FieldBits::NoField != (EffectStringFieldMask & whichField))
    {
        returnValue += _sfEffectString.getBinSize();
    }

    if(FieldBits::NoField != (CompilerOptionsFieldMask & whichField))
    {
        returnValue += _mfCompilerOptions.getBinSize();
    }

    if(FieldBits::NoField != (TechniqueFieldMask & whichField))
    {
        returnValue += _sfTechnique.getBinSize();
    }

    if(FieldBits::NoField != (ParametersFieldMask & whichField))
    {
        returnValue += _mfParameters.getBinSize();
    }

    if(FieldBits::NoField != (ImagesFieldMask & whichField))
    {
        returnValue += _mfImages.getBinSize();
    }

    if(FieldBits::NoField != (VirtualIncludeFilesFieldMask & whichField))
    {
        returnValue += _mfVirtualIncludeFiles.getBinSize();
    }


    return returnValue;
}

void CGFXMaterialBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EffectFileFieldMask & whichField))
    {
        _sfEffectFile.copyToBin(pMem);
    }

    if(FieldBits::NoField != (EffectStringFieldMask & whichField))
    {
        _sfEffectString.copyToBin(pMem);
    }

    if(FieldBits::NoField != (CompilerOptionsFieldMask & whichField))
    {
        _mfCompilerOptions.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TechniqueFieldMask & whichField))
    {
        _sfTechnique.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ParametersFieldMask & whichField))
    {
        _mfParameters.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ImagesFieldMask & whichField))
    {
        _mfImages.copyToBin(pMem);
    }

    if(FieldBits::NoField != (VirtualIncludeFilesFieldMask & whichField))
    {
        _mfVirtualIncludeFiles.copyToBin(pMem);
    }


}

void CGFXMaterialBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EffectFileFieldMask & whichField))
    {
        _sfEffectFile.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (EffectStringFieldMask & whichField))
    {
        _sfEffectString.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (CompilerOptionsFieldMask & whichField))
    {
        _mfCompilerOptions.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TechniqueFieldMask & whichField))
    {
        _sfTechnique.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ParametersFieldMask & whichField))
    {
        _mfParameters.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ImagesFieldMask & whichField))
    {
        _mfImages.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (VirtualIncludeFilesFieldMask & whichField))
    {
        _mfVirtualIncludeFiles.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void CGFXMaterialBase::executeSyncImpl(      CGFXMaterialBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (EffectFileFieldMask & whichField))
        _sfEffectFile.syncWith(pOther->_sfEffectFile);

    if(FieldBits::NoField != (EffectStringFieldMask & whichField))
        _sfEffectString.syncWith(pOther->_sfEffectString);

    if(FieldBits::NoField != (CompilerOptionsFieldMask & whichField))
        _mfCompilerOptions.syncWith(pOther->_mfCompilerOptions);

    if(FieldBits::NoField != (TechniqueFieldMask & whichField))
        _sfTechnique.syncWith(pOther->_sfTechnique);

    if(FieldBits::NoField != (ParametersFieldMask & whichField))
        _mfParameters.syncWith(pOther->_mfParameters);

    if(FieldBits::NoField != (ImagesFieldMask & whichField))
        _mfImages.syncWith(pOther->_mfImages);

    if(FieldBits::NoField != (VirtualIncludeFilesFieldMask & whichField))
        _mfVirtualIncludeFiles.syncWith(pOther->_mfVirtualIncludeFiles);


}
#else
void CGFXMaterialBase::executeSyncImpl(      CGFXMaterialBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (EffectFileFieldMask & whichField))
        _sfEffectFile.syncWith(pOther->_sfEffectFile);

    if(FieldBits::NoField != (EffectStringFieldMask & whichField))
        _sfEffectString.syncWith(pOther->_sfEffectString);

    if(FieldBits::NoField != (TechniqueFieldMask & whichField))
        _sfTechnique.syncWith(pOther->_sfTechnique);


    if(FieldBits::NoField != (CompilerOptionsFieldMask & whichField))
        _mfCompilerOptions.syncWith(pOther->_mfCompilerOptions, sInfo);

    if(FieldBits::NoField != (ParametersFieldMask & whichField))
        _mfParameters.syncWith(pOther->_mfParameters, sInfo);

    if(FieldBits::NoField != (ImagesFieldMask & whichField))
        _mfImages.syncWith(pOther->_mfImages, sInfo);

    if(FieldBits::NoField != (VirtualIncludeFilesFieldMask & whichField))
        _mfVirtualIncludeFiles.syncWith(pOther->_mfVirtualIncludeFiles, sInfo);


}

void CGFXMaterialBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (CompilerOptionsFieldMask & whichField))
        _mfCompilerOptions.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ParametersFieldMask & whichField))
        _mfParameters.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ImagesFieldMask & whichField))
        _mfImages.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (VirtualIncludeFilesFieldMask & whichField))
        _mfVirtualIncludeFiles.beginEdit(uiAspect, uiContainerSize);

}
#endif



#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<CGFXMaterialPtr>::_type("CGFXMaterialPtr", "ChunkMaterialPtr");
#endif



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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGCGFXMaterialBase.cpp,v 1.7 2008/11/24 16:05:59 macnihilist Exp $";
    static Char8 cvsid_hpp       [] = OSGCGFXMATERIALBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGCGFXMATERIALBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGCGFXMATERIALFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

