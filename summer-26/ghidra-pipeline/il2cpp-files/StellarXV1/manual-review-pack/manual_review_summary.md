# Manual Review Pack Summary: StellarXV1

Selected functions: 100

## Tier counts

- A_must_review: 100

## Top functions

### 1. Meta.XR.EnvironmentDepthRaycaster$$ClosestPointOnFirstRay

- Manual priority score: 303
- Manual tier: A_must_review
- Original scanner score: 179
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; validity_gate; pose_vector; ray_interaction; data_collection; structure_combo
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_10; strong_pose_or_ray_construction_hits_4; ray_or_cast_sink_hits_2; strong_file_logging_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_interaction_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_179; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\001_p303_Meta.XR.EnvironmentDepthRaycaster$$ClosestPointOnFirstRay.c

### 2. Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSeatPose

- Manual priority score: 289
- Manual tier: A_must_review
- Original scanner score: 172
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; data_collection; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_2; validity_or_gating_hits_7; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; strong_file_logging_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_172; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\002_p289_Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSeatPose.c

### 3. Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<InstanceOcclusionEventDebugArray.Request>

- Manual priority score: 285
- Manual tier: A_must_review
- Original scanner score: 160
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_12; strong_pose_or_ray_construction_hits_14; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_160; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\003_p285_Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray_InstanceOcclusionEventDebugArray.Request_.c

### 4. Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition

- Manual priority score: 260
- Manual tier: A_must_review
- Original scanner score: 151
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; pose_vector; data_collection; structure_combo
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_2; strong_file_logging_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_151; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\004_p260_Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition.c

### 5. Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition

- Manual priority score: 260
- Manual tier: A_must_review
- Original scanner score: 151
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; pose_vector; data_collection; structure_combo
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; strong_file_logging_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_151; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\005_p260_Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition.c

### 6. System.Runtime.CompilerServices.Unsafe$$AsRef<OVRPlugin.SpaceQueryResult>

- Manual priority score: 257
- Manual tier: A_must_review
- Original scanner score: 183
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_3; ui_or_gameplay_sink_hits_3; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_3
- Priority reasons: base_scanner_score_183; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\006_p257_System.Runtime.CompilerServices.Unsafe$$AsRef_OVRPlugin.SpaceQueryResult_.c

### 7. System.Runtime.CompilerServices.Unsafe$$AsRef<OVRPlugin.SpaceDiscoveryResult>

- Manual priority score: 257
- Manual tier: A_must_review
- Original scanner score: 183
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_3; ui_or_gameplay_sink_hits_3; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_3
- Priority reasons: base_scanner_score_183; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\007_p257_System.Runtime.CompilerServices.Unsafe$$AsRef_OVRPlugin.SpaceDiscoveryResult_.c

### 8. Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition

- Manual priority score: 254
- Manual tier: A_must_review
- Original scanner score: 145
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; pose_vector; data_collection; structure_combo
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_2; strong_file_logging_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_145; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\008_p254_Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition.c

### 9. Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnBeforeSerialize

- Manual priority score: 248
- Manual tier: A_must_review
- Original scanner score: 120
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; data_collection; telemetry
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_21; strong_file_logging_hits_2; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_120; module_bonus_validity_gate_8; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\009_p248_Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnBeforeSerialize.c

### 10. Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnAfterDeserialize

- Manual priority score: 248
- Manual tier: A_must_review
- Original scanner score: 120
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; data_collection; telemetry
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_16; strong_file_logging_hits_2; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_120; module_bonus_validity_gate_8; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\010_p248_Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnAfterDeserialize.c

### 11. Meta.XR.MetaXRFoveationFeature$$OnSessionCreate

- Manual priority score: 247
- Manual tier: A_must_review
- Original scanner score: 124
- Original scanner label: 90_plus_uncertain_foveated_rendering_near_certain
- Modules: eye_source; validity_gate; telemetry; foveation_rendering
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_6; telemetry_or_network_hits_2; strong_foveation_hits_2; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_124; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\011_p247_Meta.XR.MetaXRFoveationFeature$$OnSessionCreate.c

### 12. Meta.XR.EnvironmentDepthRaycaster$$WorldPosToNonNormalizedTextureCoords

- Manual priority score: 238
- Manual tier: A_must_review
- Original scanner score: 124
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; paired_state_refs; ray_interaction; telemetry
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_21; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_2; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_124; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\012_p238_Meta.XR.EnvironmentDepthRaycaster$$WorldPosToNonNormalizedTextureCoords.c

### 13. Meta.XR.EnvironmentDepthRaycaster$$WorldPosToLinearDepth

- Manual priority score: 238
- Manual tier: A_must_review
- Original scanner score: 124
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; paired_state_refs; ray_interaction; telemetry
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_21; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_2; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_124; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\013_p238_Meta.XR.EnvironmentDepthRaycaster$$WorldPosToLinearDepth.c

### 14. System.Runtime.CompilerServices.Unsafe$$AsRef<OVRPlugin.Vector4s>

- Manual priority score: 237
- Manual tier: A_must_review
- Original scanner score: 163
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_3; ui_or_gameplay_sink_hits_3; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_3
- Priority reasons: base_scanner_score_163; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\014_p237_System.Runtime.CompilerServices.Unsafe$$AsRef_OVRPlugin.Vector4s_.c

### 15. System.Runtime.CompilerServices.Unsafe$$AsRef<OVRPlugin.Vector4f>

- Manual priority score: 237
- Manual tier: A_must_review
- Original scanner score: 163
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_3; ui_or_gameplay_sink_hits_3; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_3
- Priority reasons: base_scanner_score_163; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\015_p237_System.Runtime.CompilerServices.Unsafe$$AsRef_OVRPlugin.Vector4f_.c

### 16. System.Runtime.CompilerServices.Unsafe$$AsRef<OVRPlugin.Vector3f>

- Manual priority score: 237
- Manual tier: A_must_review
- Original scanner score: 163
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_3; ui_or_gameplay_sink_hits_3; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_3
- Priority reasons: base_scanner_score_163; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\016_p237_System.Runtime.CompilerServices.Unsafe$$AsRef_OVRPlugin.Vector3f_.c

### 17. System.Runtime.CompilerServices.Unsafe$$AsRef<OVRPlugin.Vector2f>

- Manual priority score: 237
- Manual tier: A_must_review
- Original scanner score: 163
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_3; ui_or_gameplay_sink_hits_3; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_3
- Priority reasons: base_scanner_score_163; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\017_p237_System.Runtime.CompilerServices.Unsafe$$AsRef_OVRPlugin.Vector2f_.c

### 18. Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$UpdatePillPosition

- Manual priority score: 236
- Manual tier: A_must_review
- Original scanner score: 155
- Original scanner label: 90_plus_uncertain_eye_setup_near_certain
- Modules: eye_source; validity_gate; pose_vector; paired_state_refs; ui_interaction; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_10; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; ui_or_gameplay_sink_hits_2; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_eye_api_context_without_clear_sink_hits_1
- Priority reasons: base_scanner_score_155; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ui_interaction_12; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\018_p236_Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$UpdatePillPosition.c

### 19. Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnFocusLost

- Manual priority score: 234
- Manual tier: A_must_review
- Original scanner score: 123
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; paired_state_refs; ui_interaction; telemetry
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_16; paired_field_refs_with_eye_source; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_4; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_123; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\019_p234_Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnFocusLost.c

### 20. OVRPlugin.UnityOpenXR$$OnSessionStateChange

- Manual priority score: 232
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_21; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\020_p232_OVRPlugin.UnityOpenXR$$OnSessionStateChange.c

### 21. OVRPlugin.UnityOpenXR$$OnSessionExiting

- Manual priority score: 232
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_21; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\021_p232_OVRPlugin.UnityOpenXR$$OnSessionExiting.c

### 22. OVRPlugin.UnityOpenXR$$OnSessionEnd

- Manual priority score: 232
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_21; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\022_p232_OVRPlugin.UnityOpenXR$$OnSessionEnd.c

### 23. OVRPlugin.UnityOpenXR$$OnSessionDestroy

- Manual priority score: 232
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_21; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\023_p232_OVRPlugin.UnityOpenXR$$OnSessionDestroy.c

### 24. OVRPlugin.UnityOpenXR$$OnSessionCreate

- Manual priority score: 232
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_21; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\024_p232_OVRPlugin.UnityOpenXR$$OnSessionCreate.c

### 25. OVRPlugin.UnityOpenXR$$OnSessionBegin

- Manual priority score: 232
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_21; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\025_p232_OVRPlugin.UnityOpenXR$$OnSessionBegin.c

### 26. OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionStateChange

- Manual priority score: 232
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_21; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\026_p232_OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionStateChange.c

### 27. OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionExiting

- Manual priority score: 232
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_21; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\027_p232_OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionExiting.c

### 28. OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd

- Manual priority score: 232
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_21; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\028_p232_OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd.c

### 29. OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy

- Manual priority score: 232
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_21; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\029_p232_OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy.c

### 30. OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionCreate

- Manual priority score: 232
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_21; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\StellarXV1\manual-review-pack\A_must_review\030_p232_OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionCreate.c
