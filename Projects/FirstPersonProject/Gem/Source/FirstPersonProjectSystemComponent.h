
#pragma once

#include <AzCore/Component/Component.h>

#include <FirstPersonProject/FirstPersonProjectBus.h>

namespace FirstPersonProject
{
    class FirstPersonProjectSystemComponent
        : public AZ::Component
        , protected FirstPersonProjectRequestBus::Handler
    {
    public:
        AZ_COMPONENT_DECL(FirstPersonProjectSystemComponent);

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

        FirstPersonProjectSystemComponent();
        ~FirstPersonProjectSystemComponent();

    protected:
        ////////////////////////////////////////////////////////////////////////
        // FirstPersonProjectRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
