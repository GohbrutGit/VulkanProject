#include <vulkan\vulkan.h>
#include <iostream>

int main()
{
    VkApplicationInfo appInfo = {};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "Game v0.0.1";
    appInfo.pEngineName = "find name for engine";

    VkInstanceCreateInfo instanceInfo = {};
    instanceInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instanceInfo.pApplicationInfo = &appInfo;

    VkInstance instance;

    VkResult result = vkCreateInstance(&instanceInfo, 0, &instance);
    if(result == VK_SUCCESS)
    {
        std::cout << "success" << std::endl;
    }

    return 0;
}