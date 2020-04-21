// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "PropertyLinkDefinitionRectf.pypp.hpp"

namespace bp = boost::python;

struct PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper : CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >, bp::wrapper< CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > > {

    PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper(CEGUI::PropertyLinkDefinition<CEGUI::Rect<float> > const & arg )
    : CEGUI::PropertyLinkDefinition<CEGUI::Rect<float> >( arg )
      , bp::wrapper< CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > >(){
        // copy constructor
        
    }

    PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper(::CEGUI::String const & propertyName, ::CEGUI::String const & widgetName, ::CEGUI::String const & targetProperty, ::CEGUI::String const & initialValue, ::CEGUI::String const & origin, bool redrawOnWrite, bool layoutOnWrite, ::CEGUI::String const & fireEvent, ::CEGUI::String const & eventNamespace )
    : CEGUI::PropertyLinkDefinition<CEGUI::Rect<float> >( boost::ref(propertyName), boost::ref(widgetName), boost::ref(targetProperty), boost::ref(initialValue), boost::ref(origin), redrawOnWrite, layoutOnWrite, boost::ref(fireEvent), boost::ref(eventNamespace) )
      , bp::wrapper< CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > >(){
        // constructor
    
    }

    virtual ::CEGUI::Property * clone(  ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone(  );
        else{
            return this->CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::clone(  );
        }
    }
    
    ::CEGUI::Property * default_clone(  ) const  {
        return CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::clone( );
    }

    virtual ::CEGUI::Rectf getNative_impl( ::CEGUI::PropertyReceiver const * receiver ) const {
        if( bp::override func_getNative_impl = this->get_override( "getNative_impl" ) )
            return func_getNative_impl( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::getNative_impl( boost::python::ptr(receiver) );
        }
    }
    
    virtual ::CEGUI::Rectf default_getNative_impl( ::CEGUI::PropertyReceiver const * receiver ) const {
        return CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::getNative_impl( boost::python::ptr(receiver) );
    }

    ::CEGUI::Window const * getTargetWindow( ::CEGUI::PropertyReceiver const * receiver, ::CEGUI::String const & name ) const {
        return CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::getTargetWindow( boost::python::ptr(receiver), boost::ref(name) );
    }

    ::CEGUI::Window * getTargetWindow( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::String const & name ) const {
        return CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::getTargetWindow( boost::python::ptr(receiver), boost::ref(name) );
    }

    virtual void initialisePropertyReceiver( ::CEGUI::PropertyReceiver * receiver ) const  {
        if( bp::override func_initialisePropertyReceiver = this->get_override( "initialisePropertyReceiver" ) )
            func_initialisePropertyReceiver( boost::python::ptr(receiver) );
        else{
            this->CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::initialisePropertyReceiver( boost::python::ptr(receiver) );
        }
    }
    
    void default_initialisePropertyReceiver( ::CEGUI::PropertyReceiver * receiver ) const  {
        CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::initialisePropertyReceiver( boost::python::ptr(receiver) );
    }

    virtual void setNative_impl( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::Rectf const & value ){
        if( bp::override func_setNative_impl = this->get_override( "setNative_impl" ) )
            func_setNative_impl( boost::python::ptr(receiver), boost::ref(value) );
        else{
            this->CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::setNative_impl( boost::python::ptr(receiver), boost::ref(value) );
        }
    }
    
    virtual void default_setNative_impl( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::Rectf const & value ){
        CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::setNative_impl( boost::python::ptr(receiver), boost::ref(value) );
    }

    void updateLinkTargets( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::Rectf const & value ) const {
        CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::updateLinkTargets( boost::python::ptr(receiver), boost::ref(value) );
    }

    void writeDefinitionXMLAdditionalAttributes( ::CEGUI::XMLSerializer & xml_stream ) const {
        CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::writeDefinitionXMLAdditionalAttributes( boost::ref(xml_stream) );
    }

    virtual void writeDefinitionXMLElementType( ::CEGUI::XMLSerializer & xml_stream ) const {
        if( bp::override func_writeDefinitionXMLElementType = this->get_override( "writeDefinitionXMLElementType" ) )
            func_writeDefinitionXMLElementType( boost::ref(xml_stream) );
        else{
            this->CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::writeDefinitionXMLElementType( boost::ref(xml_stream) );
        }
    }
    
    virtual void default_writeDefinitionXMLElementType( ::CEGUI::XMLSerializer & xml_stream ) const {
        CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::writeDefinitionXMLElementType( boost::ref(xml_stream) );
    }

    void writeFalagardXMLAttributes( ::CEGUI::XMLSerializer & xml_stream ) const {
        CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::writeFalagardXMLAttributes( boost::ref(xml_stream) );
    }

    virtual bool doesWriteXML(  ) const  {
        if( bp::override func_doesWriteXML = this->get_override( "doesWriteXML" ) )
            return func_doesWriteXML(  );
        else{
            return this->CEGUI::Property::doesWriteXML(  );
        }
    }
    
    bool default_doesWriteXML(  ) const  {
        return CEGUI::Property::doesWriteXML( );
    }

    virtual ::CEGUI::String get( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_get = this->get_override( "get" ) )
            return func_get( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::TypedProperty< CEGUI::Rect< float > >::get( boost::python::ptr(receiver) );
        }
    }
    
    ::CEGUI::String default_get( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::TypedProperty< CEGUI::Rect< float > >::get( boost::python::ptr(receiver) );
    }

    virtual ::CEGUI::String getDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_getDefault = this->get_override( "getDefault" ) )
            return func_getDefault( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::Property::getDefault( boost::python::ptr(receiver) );
        }
    }
    
    ::CEGUI::String default_getDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::Property::getDefault( boost::python::ptr(receiver) );
    }

    virtual ::CEGUI::Rectf getNative( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_getNative = this->get_override( "getNative" ) )
            return func_getNative( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::TypedProperty< CEGUI::Rect< float > >::getNative( boost::python::ptr(receiver) );
        }
    }
    
    ::CEGUI::Rectf default_getNative( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::TypedProperty< CEGUI::Rect< float > >::getNative( boost::python::ptr(receiver) );
    }

    virtual bool isDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_isDefault = this->get_override( "isDefault" ) )
            return func_isDefault( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::Property::isDefault( boost::python::ptr(receiver) );
        }
    }
    
    bool default_isDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::Property::isDefault( boost::python::ptr(receiver) );
    }

    virtual bool isReadable(  ) const  {
        if( bp::override func_isReadable = this->get_override( "isReadable" ) )
            return func_isReadable(  );
        else{
            return this->CEGUI::Property::isReadable(  );
        }
    }
    
    bool default_isReadable(  ) const  {
        return CEGUI::Property::isReadable( );
    }

    virtual bool isWritable(  ) const  {
        if( bp::override func_isWritable = this->get_override( "isWritable" ) )
            return func_isWritable(  );
        else{
            return this->CEGUI::Property::isWritable(  );
        }
    }
    
    bool default_isWritable(  ) const  {
        return CEGUI::Property::isWritable( );
    }

    virtual void set( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::String const & value ) {
        if( bp::override func_set = this->get_override( "set" ) )
            func_set( boost::python::ptr(receiver), boost::ref(value) );
        else{
            this->CEGUI::TypedProperty< CEGUI::Rect< float > >::set( boost::python::ptr(receiver), boost::ref(value) );
        }
    }
    
    void default_set( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::String const & value ) {
        CEGUI::TypedProperty< CEGUI::Rect< float > >::set( boost::python::ptr(receiver), boost::ref(value) );
    }

    virtual void setNative( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::Rectf const & value ) {
        if( bp::override func_setNative = this->get_override( "setNative" ) )
            func_setNative( boost::python::ptr(receiver), boost::ref(value) );
        else{
            this->CEGUI::TypedProperty< CEGUI::Rect< float > >::setNative( boost::python::ptr(receiver), boost::ref(value) );
        }
    }
    
    void default_setNative( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::Rectf const & value ) {
        CEGUI::TypedProperty< CEGUI::Rect< float > >::setNative( boost::python::ptr(receiver), boost::ref(value) );
    }

    virtual void writeDefinitionXMLAttributes( ::CEGUI::XMLSerializer & xml_stream ) const {
        if( bp::override func_writeDefinitionXMLAttributes = this->get_override( "writeDefinitionXMLAttributes" ) )
            func_writeDefinitionXMLAttributes( boost::ref(xml_stream) );
        else{
            this->CEGUI::PropertyDefinitionBase::writeDefinitionXMLAttributes( boost::ref(xml_stream) );
        }
    }
    
    virtual void default_writeDefinitionXMLAttributes( ::CEGUI::XMLSerializer & xml_stream ) const {
        CEGUI::PropertyDefinitionBase::writeDefinitionXMLAttributes( boost::ref(xml_stream) );
    }

    virtual void writeDefinitionXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        if( bp::override func_writeDefinitionXMLToStream = this->get_override( "writeDefinitionXMLToStream" ) )
            func_writeDefinitionXMLToStream( boost::ref(xml_stream) );
        else{
            this->CEGUI::PropertyDefinitionBase::writeDefinitionXMLToStream( boost::ref(xml_stream) );
        }
    }
    
    void default_writeDefinitionXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        CEGUI::PropertyDefinitionBase::writeDefinitionXMLToStream( boost::ref(xml_stream) );
    }

    virtual void writeXMLToStream( ::CEGUI::PropertyReceiver const * receiver, ::CEGUI::XMLSerializer & xml_stream ) const  {
        if( bp::override func_writeXMLToStream = this->get_override( "writeXMLToStream" ) )
            func_writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
        else{
            this->CEGUI::Property::writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
        }
    }
    
    void default_writeXMLToStream( ::CEGUI::PropertyReceiver const * receiver, ::CEGUI::XMLSerializer & xml_stream ) const  {
        CEGUI::Property::writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
    }

};

void register_PropertyLinkDefinitionRectf_class(){

    { //::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >
        typedef bp::class_< PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper, bp::bases< CEGUI::FalagardPropertyBase< CEGUI::Rect< float > > > > PropertyLinkDefinitionRectf_exposer_t;
        PropertyLinkDefinitionRectf_exposer_t PropertyLinkDefinitionRectf_exposer = PropertyLinkDefinitionRectf_exposer_t( "PropertyLinkDefinitionRectf", bp::init< CEGUI::String const &, CEGUI::String const &, CEGUI::String const &, CEGUI::String const &, CEGUI::String const &, bool, bool, CEGUI::String const &, CEGUI::String const & >(( bp::arg("propertyName"), bp::arg("widgetName"), bp::arg("targetProperty"), bp::arg("initialValue"), bp::arg("origin"), bp::arg("redrawOnWrite"), bp::arg("layoutOnWrite"), bp::arg("fireEvent"), bp::arg("eventNamespace") )) );
        bp::scope PropertyLinkDefinitionRectf_scope( PropertyLinkDefinitionRectf_exposer );
        { //::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::addLinkTarget
        
            typedef CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > exported_class_t;
            typedef void ( exported_class_t::*addLinkTarget_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "addLinkTarget"
                , addLinkTarget_function_type( &::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::addLinkTarget )
                , ( bp::arg("widget"), bp::arg("property") )
                , "------------------------------------------------------------------------\n\
            ! add a new link target to  property on  widget (name).\n" );
        
        }
        { //::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::clearLinkTargets
        
            typedef CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > exported_class_t;
            typedef void ( exported_class_t::*clearLinkTargets_function_type )(  ) ;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "clearLinkTargets"
                , clearLinkTargets_function_type( &::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::clearLinkTargets )
                , "------------------------------------------------------------------------\n\
            ! clear all link targets from this link definition.\n" );
        
        }
        { //::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::clone
        
            typedef CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > exported_class_t;
            typedef ::CEGUI::Property * ( exported_class_t::*clone_function_type )(  ) const;
            typedef ::CEGUI::Property * ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*default_clone_function_type )(  ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "clone"
                , clone_function_type(&::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::clone)
                , default_clone_function_type(&PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::default_clone)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::getLinkTargetIterator
        
            typedef CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > exported_class_t;
            typedef ::CEGUI::ConstVectorIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> > > ( exported_class_t::*getLinkTargetIterator_function_type )(  ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "getLinkTargetIterator"
                , getLinkTargetIterator_function_type( &::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::getLinkTargetIterator ) );
        
        }
        { //::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::getNative_impl
        
            typedef CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > exported_class_t;
            typedef ::CEGUI::Rectf ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*getNative_impl_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "getNative_impl"
                , getNative_impl_function_type( &PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::default_getNative_impl )
                , ( bp::arg("receiver") )
                , "override members from FalagardPropertyBase\n\
            ------------------------------------------------------------------------\n" );
        
        }
        { //::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::getTargetWindow
        
            typedef CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > exported_class_t;
            typedef ::CEGUI::Window const * ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*getTargetWindow_function_type )( ::CEGUI::PropertyReceiver const *,::CEGUI::String const & ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "getTargetWindow"
                , getTargetWindow_function_type( &PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::getTargetWindow )
                , ( bp::arg("receiver"), bp::arg("name") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "------------------------------------------------------------------------\n\
            ! Return a pointer to the target window with the given name.\n" );
        
        }
        { //::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::getTargetWindow
        
            typedef CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > exported_class_t;
            typedef ::CEGUI::Window * ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*getTargetWindow_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::String const & ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "getTargetWindow"
                , getTargetWindow_function_type( &PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::getTargetWindow )
                , ( bp::arg("receiver"), bp::arg("name") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "------------------------------------------------------------------------\n\
            ! Return a pointer to the target window with the given name.\n" );
        
        }
        { //::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::initialisePropertyReceiver
        
            typedef CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > exported_class_t;
            typedef void ( exported_class_t::*initialisePropertyReceiver_function_type )( ::CEGUI::PropertyReceiver * ) const;
            typedef void ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*default_initialisePropertyReceiver_function_type )( ::CEGUI::PropertyReceiver * ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "initialisePropertyReceiver"
                , initialisePropertyReceiver_function_type(&::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::initialisePropertyReceiver)
                , default_initialisePropertyReceiver_function_type(&PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::default_initialisePropertyReceiver)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::isTargetProperty
        
            typedef CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > exported_class_t;
            typedef bool ( exported_class_t::*isTargetProperty_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "isTargetProperty"
                , isTargetProperty_function_type( &::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::isTargetProperty )
                , ( bp::arg("widget"), bp::arg("property") )
                , "------------------------------------------------------------------------\n\
             return whether a the given widget  property pair is a target of this\n\
             property link.\n" );
        
        }
        { //::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::setNative_impl
        
            typedef CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > exported_class_t;
            typedef void ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*setNative_impl_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::Rectf const & ) ;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "setNative_impl"
                , setNative_impl_function_type( &PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::default_setNative_impl )
                , ( bp::arg("receiver"), bp::arg("value") )
                , "------------------------------------------------------------------------\n" );
        
        }
        { //::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::updateLinkTargets
        
            typedef CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > exported_class_t;
            typedef void ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*updateLinkTargets_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::Rectf const & ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "updateLinkTargets"
                , updateLinkTargets_function_type( &PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::updateLinkTargets )
                , ( bp::arg("receiver"), bp::arg("value") )
                , "------------------------------------------------------------------------\n" );
        
        }
        { //::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::writeDefinitionXMLAdditionalAttributes
        
            typedef CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > exported_class_t;
            typedef void ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*writeDefinitionXMLAdditionalAttributes_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "writeDefinitionXMLAdditionalAttributes"
                , writeDefinitionXMLAdditionalAttributes_function_type( &PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::writeDefinitionXMLAdditionalAttributes )
                , ( bp::arg("xml_stream") )
                , "------------------------------------------------------------------------\n" );
        
        }
        { //::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::writeDefinitionXMLElementType
        
            typedef CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > exported_class_t;
            typedef void ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*writeDefinitionXMLElementType_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "writeDefinitionXMLElementType"
                , writeDefinitionXMLElementType_function_type( &PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::default_writeDefinitionXMLElementType )
                , ( bp::arg("xml_stream") )
                , "------------------------------------------------------------------------\n" );
        
        }
        { //::CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > >::writeFalagardXMLAttributes
        
            typedef CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > exported_class_t;
            typedef void ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*writeFalagardXMLAttributes_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "writeFalagardXMLAttributes"
                , writeFalagardXMLAttributes_function_type( &PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::writeFalagardXMLAttributes )
                , ( bp::arg("xml_stream") )
                , "------------------------------------------------------------------------\n" );
        
        }
        { //::CEGUI::Property::doesWriteXML
        
            typedef bool ( ::CEGUI::Property::*doesWriteXML_function_type )(  ) const;
            typedef bool ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*default_doesWriteXML_function_type )(  ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "doesWriteXML"
                , doesWriteXML_function_type(&::CEGUI::Property::doesWriteXML)
                , default_doesWriteXML_function_type(&PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::default_doesWriteXML) );
        
        }
        { //::CEGUI::TypedProperty< CEGUI::Rect< float > >::get
        
            typedef CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > exported_class_t;
            typedef ::CEGUI::String ( exported_class_t::*get_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef ::CEGUI::String ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*default_get_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "get"
                , get_function_type(&::CEGUI::TypedProperty< CEGUI::Rect< float > >::get)
                , default_get_function_type(&PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::default_get)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::Property::getDefault
        
            typedef ::CEGUI::String ( ::CEGUI::Property::*getDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef ::CEGUI::String ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*default_getDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "getDefault"
                , getDefault_function_type(&::CEGUI::Property::getDefault)
                , default_getDefault_function_type(&PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::default_getDefault)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::TypedProperty< CEGUI::Rect< float > >::getNative
        
            typedef CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > exported_class_t;
            typedef ::CEGUI::Rectf ( exported_class_t::*getNative_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef ::CEGUI::Rectf ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*default_getNative_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "getNative"
                , getNative_function_type(&::CEGUI::TypedProperty< CEGUI::Rect< float > >::getNative)
                , default_getNative_function_type(&PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::default_getNative)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::Property::isDefault
        
            typedef bool ( ::CEGUI::Property::*isDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef bool ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*default_isDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "isDefault"
                , isDefault_function_type(&::CEGUI::Property::isDefault)
                , default_isDefault_function_type(&PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::default_isDefault)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::Property::isReadable
        
            typedef bool ( ::CEGUI::Property::*isReadable_function_type )(  ) const;
            typedef bool ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*default_isReadable_function_type )(  ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "isReadable"
                , isReadable_function_type(&::CEGUI::Property::isReadable)
                , default_isReadable_function_type(&PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::default_isReadable) );
        
        }
        { //::CEGUI::Property::isWritable
        
            typedef bool ( ::CEGUI::Property::*isWritable_function_type )(  ) const;
            typedef bool ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*default_isWritable_function_type )(  ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "isWritable"
                , isWritable_function_type(&::CEGUI::Property::isWritable)
                , default_isWritable_function_type(&PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::default_isWritable) );
        
        }
        { //::CEGUI::TypedProperty< CEGUI::Rect< float > >::set
        
            typedef CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > exported_class_t;
            typedef void ( exported_class_t::*set_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::String const & ) ;
            typedef void ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*default_set_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::String const & ) ;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "set"
                , set_function_type(&::CEGUI::TypedProperty< CEGUI::Rect< float > >::set)
                , default_set_function_type(&PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::default_set)
                , ( bp::arg("receiver"), bp::arg("value") ) );
        
        }
        { //::CEGUI::TypedProperty< CEGUI::Rect< float > >::setNative
        
            typedef CEGUI::PropertyLinkDefinition< CEGUI::Rect< float > > exported_class_t;
            typedef void ( exported_class_t::*setNative_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::Rectf const & ) ;
            typedef void ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*default_setNative_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::Rectf const & ) ;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "setNative"
                , setNative_function_type(&::CEGUI::TypedProperty< CEGUI::Rect< float > >::setNative)
                , default_setNative_function_type(&PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::default_setNative)
                , ( bp::arg("receiver"), bp::arg("value") ) );
        
        }
        { //::CEGUI::PropertyDefinitionBase::writeDefinitionXMLAttributes
        
            typedef void ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*writeDefinitionXMLAttributes_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "writeDefinitionXMLAttributes"
                , writeDefinitionXMLAttributes_function_type( &PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::default_writeDefinitionXMLAttributes )
                , ( bp::arg("xml_stream") )
                , "*!\n\
                \n\
                    Write out any xml attributes added in a sub-class.  Note that you\n\
                    should not write the closing '>' character sequence, nor any other\n\
                    information in this function.  You should always call the base class\n\
                    implementation of this function when overriding.\n\
            \n\
                @param xml_stream\n\
                    XMLSerializer where xml data should be output.\n\
                *\n" );
        
        }
        { //::CEGUI::PropertyDefinitionBase::writeDefinitionXMLToStream
        
            typedef void ( ::CEGUI::PropertyDefinitionBase::*writeDefinitionXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            typedef void ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*default_writeDefinitionXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "writeDefinitionXMLToStream"
                , writeDefinitionXMLToStream_function_type(&::CEGUI::PropertyDefinitionBase::writeDefinitionXMLToStream)
                , default_writeDefinitionXMLToStream_function_type(&PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::default_writeDefinitionXMLToStream)
                , ( bp::arg("xml_stream") ) );
        
        }
        { //::CEGUI::Property::writeXMLToStream
        
            typedef void ( ::CEGUI::Property::*writeXMLToStream_function_type )( ::CEGUI::PropertyReceiver const *,::CEGUI::XMLSerializer & ) const;
            typedef void ( PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::*default_writeXMLToStream_function_type )( ::CEGUI::PropertyReceiver const *,::CEGUI::XMLSerializer & ) const;
            
            PropertyLinkDefinitionRectf_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type(&::CEGUI::Property::writeXMLToStream)
                , default_writeXMLToStream_function_type(&PropertyLinkDefinition_less__CEGUI_scope_Rect_less__float__greater___greater__wrapper::default_writeXMLToStream)
                , ( bp::arg("receiver"), bp::arg("xml_stream") ) );
        
        }
    }

}
