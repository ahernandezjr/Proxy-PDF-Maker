#pragma once

#include <ppp/util.hpp>

class Project;

fs::path GeneratePdf(const Project& project);

fs::path GenerateTestPdf(const Project& project);

// Export render configuration to JSON for documentation, debugging, and reproducibility
// This enables sharing exact render settings and troubleshooting configuration issues
void ExportRenderOptionsToJson(const Project& project, const fs::path& output_path);
