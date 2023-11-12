
#include <AzCore/Memory/SystemAllocator.h>
#include <AzCore/Module/Module.h>

#include "FirstPersonProjectSystemComponent.h"

#include <FirstPersonProject/FirstPersonProjectTypeIds.h>

namespace FirstPersonProject
{
    class FirstPersonProjectModule
        : public AZ::Module
    {
    public:
        AZ_RTTI(FirstPersonProjectModule, FirstPersonProjectModuleTypeId, AZ::Module);
        AZ_CLASS_ALLOCATOR(FirstPersonProjectModule, AZ::SystemAllocator);

        FirstPersonProjectModule()
            : AZ::Module()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                FirstPersonProjectSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList{
                azrtti_typeid<FirstPersonProjectSystemComponent>(),
            };
        }
    };
}// namespace FirstPersonProject

AZ_DECLARE_MODULE_CLASS(Gem_FirstPersonProject, FirstPersonProject::FirstPersonProjectModule)
