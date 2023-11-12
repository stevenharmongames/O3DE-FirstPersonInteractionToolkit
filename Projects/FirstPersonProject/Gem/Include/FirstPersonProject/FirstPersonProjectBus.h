
#pragma once

#include <FirstPersonProject/FirstPersonProjectTypeIds.h>

#include <AzCore/EBus/EBus.h>
#include <AzCore/Interface/Interface.h>

namespace FirstPersonProject
{
    class FirstPersonProjectRequests
    {
    public:
        AZ_RTTI(FirstPersonProjectRequests, FirstPersonProjectRequestsTypeId);
        virtual ~FirstPersonProjectRequests() = default;
        // Put your public methods here
    };

    class FirstPersonProjectBusTraits
        : public AZ::EBusTraits
    {
    public:
        //////////////////////////////////////////////////////////////////////////
        // EBusTraits overrides
        static constexpr AZ::EBusHandlerPolicy HandlerPolicy = AZ::EBusHandlerPolicy::Single;
        static constexpr AZ::EBusAddressPolicy AddressPolicy = AZ::EBusAddressPolicy::Single;
        //////////////////////////////////////////////////////////////////////////
    };

    using FirstPersonProjectRequestBus = AZ::EBus<FirstPersonProjectRequests, FirstPersonProjectBusTraits>;
    using FirstPersonProjectInterface = AZ::Interface<FirstPersonProjectRequests>;

} // namespace FirstPersonProject
