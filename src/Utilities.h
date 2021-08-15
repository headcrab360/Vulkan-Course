#pragma once

const std::vector<const char*> deviceExtensions = {
	VK_KHR_SWAPCHAIN_EXTENSION_NAME
};

// Indicies (locations) of Queue Families (if they exist at all)
struct QueueFamilyIndicies {
	int graphicsFamily = -1; // Location of Graphics Queue Family
	int presentationFamily = -1; // Location of Presentation Queue Family

	// Check if queue families are valid
	bool isValid()
	{
		return graphicsFamily >= 0 && presentationFamily >= 0;
	}
};

struct SwapChainDetails {
	VkSurfaceCapabilitiesKHR surfaceCapabilities; // Surface Properties, e.g. image size/extent
	std::vector<VkSurfaceFormatKHR> formats; // Surface image formats, e.g. RGBA and size of each color
	std::vector<VkPresentModeKHR> presentationMode; // How images should be presented to screen
};