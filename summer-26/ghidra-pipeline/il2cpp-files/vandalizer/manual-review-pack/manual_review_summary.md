# Manual Review Pack Summary: vandalizer

Selected functions: 100

## Tier counts

- A_must_review: 100

## Top functions

### 1. Meta.XR.EnvironmentDepthRaycaster$$ClosestPointOnFirstRay

- Manual priority score: 297
- Manual tier: A_must_review
- Original scanner score: 173
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; validity_gate; pose_vector; ray_interaction; data_collection; structure_combo
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_4; ray_or_cast_sink_hits_2; strong_file_logging_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_interaction_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_173; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\001_p297_Meta.XR.EnvironmentDepthRaycaster$$ClosestPointOnFirstRay.c

### 2. FUN_06d6127c

- Manual priority score: 278
- Manual tier: A_must_review
- Original scanner score: 152
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_1; telemetry_or_network_hits_1; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_152; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\002_p278_FUN_06d6127c.c

### 3. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.SpaceQueryResult,-char>

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 200
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_200; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\003_p277_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.SpaceQueryResult_-char_.c

### 4. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.SpaceQueryResult,-byte>

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 200
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_200; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\004_p277_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.SpaceQueryResult_-byte_.c

### 5. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.SpaceQueryResult,-IntPtr>

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 200
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_200; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\005_p277_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.SpaceQueryResult_-IntPtr_.c

### 6. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.SpaceDiscoveryResult,-char>

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 200
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_200; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\006_p277_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.SpaceDiscoveryResult_-char_.c

### 7. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.SpaceDiscoveryResult,-byte>

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 200
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_200; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\007_p277_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.SpaceDiscoveryResult_-byte_.c

### 8. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.SpaceDiscoveryResult,-IntPtr>

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 200
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_200; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\008_p277_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.SpaceDiscoveryResult_-IntPtr_.c

### 9. FUN_06f4f360

- Manual priority score: 273
- Manual tier: A_must_review
- Original scanner score: 138
- Original scanner label: 90_plus_uncertain_foveated_rendering_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_12; validity_or_gating_hits_3; telemetry_or_network_hits_2; strong_foveation_hits_2; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_138; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\009_p273_FUN_06f4f360.c

### 10. UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering_Injected

- Manual priority score: 273
- Manual tier: A_must_review
- Original scanner score: 118
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: validity_gate; ui_interaction; telemetry; foveation_rendering; keyword_support; attempted_use; dynamic_foveation_possible
- Evidence: validity_or_gating_hits_21; ui_or_gameplay_sink_hits_5; telemetry_or_network_hits_1; strong_foveation_hits_2; eye_or_gaze_keyword_boost_only; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering; functionality_possible_biometrics_hits_7
- Priority reasons: base_scanner_score_118; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12; evidence_bonus_eye_or_gaze_keyword_boost_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\010_p273_UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering_Injected.c

### 11. UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering

- Manual priority score: 273
- Manual tier: A_must_review
- Original scanner score: 118
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: validity_gate; ui_interaction; telemetry; foveation_rendering; keyword_support; attempted_use; dynamic_foveation_possible
- Evidence: validity_or_gating_hits_21; ui_or_gameplay_sink_hits_5; telemetry_or_network_hits_1; strong_foveation_hits_2; eye_or_gaze_keyword_boost_only; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering; functionality_possible_biometrics_hits_7
- Priority reasons: base_scanner_score_118; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12; evidence_bonus_eye_or_gaze_keyword_boost_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\011_p273_UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering.c

### 12. UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.CurveInteractionCaster$$UpdatePhysicscastHits

- Manual priority score: 272
- Manual tier: A_must_review
- Original scanner score: 141
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_10; validity_or_gating_hits_21; ray_or_cast_sink_hits_2; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_2; frame_or_lifecycle_behavior; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_141; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\012_p272_UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.CurveInteractionCaster$$UpdatePhysicscastHits.c

### 13. FUN_06f4f7f8

- Manual priority score: 264
- Manual tier: A_must_review
- Original scanner score: 105
- Original scanner label: 90_plus_uncertain_foveated_rendering_near_certain
- Modules: weak_source_state; validity_gate; telemetry; foveation_rendering; keyword_support
- Evidence: weak_xr_or_state_hits_8; validity_or_gating_hits_4; telemetry_or_network_hits_2; strong_foveation_hits_2; eye_or_gaze_keyword_boost_only; functionality_foveated_rendering
- Priority reasons: base_scanner_score_105; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\013_p264_FUN_06f4f7f8.c

### 14. FUN_06f4f63c

- Manual priority score: 261
- Manual tier: A_must_review
- Original scanner score: 102
- Original scanner label: 90_plus_uncertain_foveated_rendering_near_certain
- Modules: weak_source_state; validity_gate; telemetry; foveation_rendering; keyword_support
- Evidence: weak_xr_or_state_hits_4; validity_or_gating_hits_3; telemetry_or_network_hits_2; strong_foveation_hits_2; eye_or_gaze_keyword_boost_only; functionality_foveated_rendering
- Priority reasons: base_scanner_score_102; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\014_p261_FUN_06f4f63c.c

### 15. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.Vector4s,-char>

- Manual priority score: 257
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\015_p257_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.Vector4s_-char_.c

### 16. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.Vector4s,-byte>

- Manual priority score: 257
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\016_p257_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.Vector4s_-byte_.c

### 17. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.Vector4s,-IntPtr>

- Manual priority score: 257
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\017_p257_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.Vector4s_-IntPtr_.c

### 18. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.Vector4f,-char>

- Manual priority score: 257
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\018_p257_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.Vector4f_-char_.c

### 19. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.Vector4f,-byte>

- Manual priority score: 257
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\019_p257_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.Vector4f_-byte_.c

### 20. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.Vector4f,-IntPtr>

- Manual priority score: 257
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\020_p257_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.Vector4f_-IntPtr_.c

### 21. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.Vector3f,-char>

- Manual priority score: 257
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\021_p257_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.Vector3f_-char_.c

### 22. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.Vector3f,-byte>

- Manual priority score: 257
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\022_p257_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.Vector3f_-byte_.c

### 23. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.Vector3f,-IntPtr>

- Manual priority score: 257
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\023_p257_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.Vector3f_-IntPtr_.c

### 24. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.Vector2f,-char>

- Manual priority score: 257
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\024_p257_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.Vector2f_-char_.c

### 25. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.Vector2f,-byte>

- Manual priority score: 257
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\025_p257_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.Vector2f_-byte_.c

### 26. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.Vector2f,-IntPtr>

- Manual priority score: 257
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\026_p257_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.Vector2f_-IntPtr_.c

### 27. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.Qpl.Annotation,-char>

- Manual priority score: 257
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_4; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\027_p257_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.Qpl.Annotation_-char_.c

### 28. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.Qpl.Annotation,-byte>

- Manual priority score: 257
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_4; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\028_p257_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.Qpl.Annotation_-byte_.c

### 29. System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.Qpl.Annotation,-IntPtr>

- Manual priority score: 257
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_4; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\029_p257_System.Runtime.CompilerServices.Unsafe$$As_OVRPlugin.Qpl.Annotation_-IntPtr_.c

### 30. Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition

- Manual priority score: 257
- Manual tier: A_must_review
- Original scanner score: 148
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; pose_vector; data_collection; structure_combo
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_3; strong_pose_or_ray_construction_hits_2; strong_file_logging_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_148; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vandalizer\manual-review-pack\A_must_review\030_p257_Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition.c
