// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMASHAREDPOINTERDIMANGULARENTITY_H
        #define RECMASHAREDPOINTERDIMANGULARENTITY_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RDimAngularEntity.h"
            
            typedef QSharedPointer<RDimAngularEntity> RDimAngularEntityPointer;
        

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaSharedPointerDimAngularEntity {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRDimensionEntity(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getREntity(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRObject(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        init
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStaticPropertyTypeIds
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setExtensionLine1Start
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getExtensionLine1Start
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setExtensionLine1End
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getExtensionLine1End
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setExtensionLine2Start
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getExtensionLine2Start
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setExtensionLine2End
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getExtensionLine2End
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDimArcPosition
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDimArcPosition
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RDimAngularEntity* getSelf(const QString& fName, QScriptContext* context)
    ;static RDimAngularEntity* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue data
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue isNull
    (QScriptContext *context, QScriptEngine *engine)
    ;};
    #endif
    