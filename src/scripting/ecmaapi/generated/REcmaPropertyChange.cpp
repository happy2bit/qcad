// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #include "REcmaPropertyChange.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RStorage.h"
            
                #include "RExporter.h"
            
            
        // includes for base ecma wrapper classes
         void REcmaPropertyChange::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RPropertyChange*) 0)));
        protoCreated = true;
    }

    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    
    // copy:
    REcmaHelper::registerFunction(&engine, proto, copy, "copy");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, setOldValue, "setOldValue");
            
            REcmaHelper::registerFunction(&engine, proto, getOldValue, "getOldValue");
            
            REcmaHelper::registerFunction(&engine, proto, setNewValue, "setNewValue");
            
            REcmaHelper::registerFunction(&engine, proto, getNewValue, "getNewValue");
            
            REcmaHelper::registerFunction(&engine, proto, setPropertyTypeId, "setPropertyTypeId");
            
            REcmaHelper::registerFunction(&engine, proto, getPropertyTypeId, "getPropertyTypeId");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RPropertyChange*>(), *proto);

        
                engine.setDefaultPrototype(qMetaTypeId<
                RPropertyChange
                > (), *proto);
            
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RPropertyChange",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaPropertyChange::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RPropertyChange(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RPropertyChange
                    cppResult;
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    if( context->argumentCount() ==
        3
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RPropertyTypeId */
            
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RPropertyTypeId*
                    ap0 =
                    qscriptvalue_cast<
                    RPropertyTypeId*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RPropertyChange: Argument 0 is not of type RPropertyTypeId.",
                               context);                    
                    }
                    RPropertyTypeId 
                    a0 = 
                    *ap0;
                
                    // argument isCopyable or pointer
                    QVariant
                    a1 =
                    qscriptvalue_cast<
                    QVariant
                        >(
                        context->argument(
                        1
                        )
                    );
                
                    // argument isCopyable or pointer
                    QVariant
                    a2 =
                    qscriptvalue_cast<
                    QVariant
                        >(
                        context->argument(
                        2
                        )
                    );
                
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RPropertyChange
                    cppResult(
                    a0
        ,
    a1
        ,
    a2
                    );
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RPropertyChange(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaPropertyChange::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RPropertyChange"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaPropertyChange::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaPropertyChange::setOldValue
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyChange::setOldValue", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyChange::setOldValue";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyChange* self = 
                        getSelf("setOldValue", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNumber() || 
            context->argument(0).isString() || 
            context->argument(0).isBool() || 
            context->argument(0).isArray() || 
            context->argument(0).isNull() || 
            context->argument(0).isUndefined()
        ) /* type: QVariant */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable or pointer
                    QVariant
                    a0 =
                    qscriptvalue_cast<
                    QVariant
                        >(
                        context->argument(
                        0
                        )
                    );
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setOldValue(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyChange.setOldValue().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyChange::setOldValue", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyChange::getOldValue
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyChange::getOldValue", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyChange::getOldValue";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyChange* self = 
                        getSelf("getOldValue", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QVariant'
    QVariant cppResult =
        
               self->getOldValue();
        // return type: QVariant
                // QVariant:
                result = REcmaHelper::toScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyChange.getOldValue().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyChange::getOldValue", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyChange::setNewValue
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyChange::setNewValue", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyChange::setNewValue";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyChange* self = 
                        getSelf("setNewValue", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNumber() || 
            context->argument(0).isString() || 
            context->argument(0).isBool() || 
            context->argument(0).isArray() || 
            context->argument(0).isNull() || 
            context->argument(0).isUndefined()
        ) /* type: QVariant */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable or pointer
                    QVariant
                    a0 =
                    qscriptvalue_cast<
                    QVariant
                        >(
                        context->argument(
                        0
                        )
                    );
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setNewValue(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyChange.setNewValue().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyChange::setNewValue", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyChange::getNewValue
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyChange::getNewValue", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyChange::getNewValue";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyChange* self = 
                        getSelf("getNewValue", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QVariant'
    QVariant cppResult =
        
               self->getNewValue();
        // return type: QVariant
                // QVariant:
                result = REcmaHelper::toScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyChange.getNewValue().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyChange::getNewValue", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyChange::setPropertyTypeId
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyChange::setPropertyTypeId", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyChange::setPropertyTypeId";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyChange* self = 
                        getSelf("setPropertyTypeId", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RPropertyTypeId */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RPropertyTypeId*
                    ap0 =
                    qscriptvalue_cast<
                    RPropertyTypeId*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RPropertyChange: Argument 0 is not of type RPropertyTypeId.",
                               context);                    
                    }
                    RPropertyTypeId 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setPropertyTypeId(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyChange.setPropertyTypeId().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyChange::setPropertyTypeId", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyChange::getPropertyTypeId
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyChange::getPropertyTypeId", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyChange::getPropertyTypeId";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyChange* self = 
                        getSelf("getPropertyTypeId", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RPropertyTypeId'
    RPropertyTypeId cppResult =
        
               self->getPropertyTypeId();
        // return type: RPropertyTypeId
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyChange.getPropertyTypeId().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyChange::getPropertyTypeId", context, engine);
            return result;
        }
         QScriptValue REcmaPropertyChange::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RPropertyChange* self = getSelf("toString", context);
    
    QString result;
    
            QDebug d(&result);
            if (self!=NULL) {
                d << *self;
            }
            else {
                d << "NULL";
            }
        
    return QScriptValue(result);
    }
     QScriptValue REcmaPropertyChange::copy
    (QScriptContext *context, QScriptEngine *engine)
    
    {
        RPropertyChange cp = qscriptvalue_cast<RPropertyChange>(context->thisObject());
        return qScriptValueFromValue(engine, cp);
    }
     QScriptValue REcmaPropertyChange::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RPropertyChange* self = getSelf("RPropertyChange", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RPropertyChange* REcmaPropertyChange::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RPropertyChange* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RPropertyChange >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RPropertyChange.%1(): "
                        "This object is not a RPropertyChange").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RPropertyChange* REcmaPropertyChange::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RPropertyChange* selfBase = getSelf(fName, context);
                RPropertyChange* self = dynamic_cast<RPropertyChange*>(selfBase);
                //return REcmaHelper::scriptValueTo<RPropertyChange >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RPropertyChange.%1(): "
                    "This object is not a RPropertyChange").arg(fName),
                    context);
            }

            return self;
            


        }
        