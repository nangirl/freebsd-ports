--- plugins/builtin/source/ui/pattern_drawer.cpp.orig	2023-02-12 18:24:04 UTC
+++ plugins/builtin/source/ui/pattern_drawer.cpp
@@ -134,7 +134,8 @@ namespace hex::plugin::builtin::ui {
                 ImGui::TextUnformatted("hex.builtin.pattern_drawer.visualizer.invalid_parameter_count"_lang);
             } else {
                 try {
-                    visualizer.callback(pattern, iteratable, reset, { arguments.begin() + 1, arguments.end() });
+                    const std::vector<pl::core::Token::Literal> args = { arguments.begin() + 1, arguments.end() };
+                    visualizer.callback(pattern, iteratable, reset, args);
                 } catch (std::exception &e) {
                     this->m_lastVisualizerError = e.what();
                 }
