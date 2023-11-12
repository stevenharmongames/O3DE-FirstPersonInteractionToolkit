
#include <AzCore/Serialization/SerializeContext.h>

#include "FirstPersonProjectSystemComponent.h"

#include <FirstPersonProject/FirstPersonProjectTypeIds.h>

namespace FirstPersonProject
{
    AZ_COMPONENT_IMPL(FirstPersonProjectSystemComponent, "FirstPersonProjectSystemComponent",
        FirstPersonProjectSystemComponentTypeId);

    void FirstPersonProjectSystemComponent::Reflect(AZ::ReflectContext* context)
    {
        if (auto serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serializeContext->Class<FirstPersonProjectSystemComponent, AZ::Component>()
                ->Version(0)
                ;
        }
    }

    void FirstPersonProjectSystemComponent::GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC_CE("FirstPersonProjectService"));
    }

    void FirstPersonProjectSystemComponent::GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC_CE("FirstPersonProjectService"));
    }

    void FirstPersonProjectSystemComponent::GetRequiredServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& required)
    {
    }

    void FirstPersonProjectSystemComponent::GetDependentServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& dependent)
    {
    }

    FirstPersonProjectSystemComponent::FirstPersonProjectSystemComponent()
    {
        if (FirstPersonProjectInterface::Get() == nullptr)
        {
            FirstPersonProjectInterface::Register(this);
        }
    }

    FirstPersonProjectSystemComponent::~FirstPersonProjectSystemComponent()
    {
        if (FirstPersonProjectInterface::Get() == this)
        {
            FirstPersonProjectInterface::Unregister(this);
        }
    }

    void FirstPersonProjectSystemComponent::Init()
    {
    }

    void FirstPersonProjectSystemComponent::Activate()
    {
        FirstPersonProjectRequestBus::Handler::BusConnect();
    }

    void FirstPersonProjectSystemComponent::Deactivate()
    {
        FirstPersonProjectRequestBus::Handler::BusDisconnect();
    }
}
