# Manual Review Pack Summary: Hyper

Selected functions: 100

## Tier counts

- A_must_review: 100

## Top functions

### 1. System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$.cctor

- Manual priority score: 322
- Manual tier: A_must_review
- Original scanner score: 190
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; telemetry; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; ray_or_cast_sink_hits_2; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_190; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\001_p322_System.Array.EmptyInternalEnumerator_OVRPassthroughLayer.SerializedSurfaceGeometry_$$.cctor.c

### 2. System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.Reset

- Manual priority score: 319
- Manual tier: A_must_review
- Original scanner score: 187
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; telemetry; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_3; strong_pose_or_ray_construction_hits_2; ray_or_cast_sink_hits_2; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_187; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\002_p319_System.Array.EmptyInternalEnumerator_OVRPassthroughLayer.SerializedSurfaceGeometry_$$System.Collections.IEnumerator.Reset.c

### 3. System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$.ctor

- Manual priority score: 319
- Manual tier: A_must_review
- Original scanner score: 187
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; telemetry; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_3; strong_pose_or_ray_construction_hits_2; ray_or_cast_sink_hits_2; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_187; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\003_p319_System.Array.EmptyInternalEnumerator_OVRPassthroughLayer.SerializedSurfaceGeometry_$$.ctor.c

### 4. Meta.XR.EnvironmentDepthRaycaster$$ClosestPointOnFirstRay

- Manual priority score: 300
- Manual tier: A_must_review
- Original scanner score: 176
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; validity_gate; pose_vector; ray_interaction; data_collection; structure_combo
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_3; strong_pose_or_ray_construction_hits_4; ray_or_cast_sink_hits_2; strong_file_logging_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_interaction_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_176; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\004_p300_Meta.XR.EnvironmentDepthRaycaster$$ClosestPointOnFirstRay.c

### 5. Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSeatPose

- Manual priority score: 295
- Manual tier: A_must_review
- Original scanner score: 174
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; data_collection; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; ui_or_gameplay_sink_hits_2; strong_file_logging_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_interaction_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_174; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\005_p295_Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSeatPose.c

### 6. Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetClosestSurfacePosition

- Manual priority score: 291
- Manual tier: A_must_review
- Original scanner score: 169
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; pose_vector; paired_state_refs; data_collection; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_16; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; strong_file_logging_hits_2; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_169; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_data_collection_22; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\006_p291_Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetClosestSurfacePosition.c

### 7. Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetClosestSeatPose

- Manual priority score: 280
- Manual tier: A_must_review
- Original scanner score: 166
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; data_collection; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_2; validity_or_gating_hits_17; strong_pose_or_ray_construction_hits_2; strong_file_logging_hits_2; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_166; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\007_p280_Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetClosestSeatPose.c

### 8. Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition

- Manual priority score: 254
- Manual tier: A_must_review
- Original scanner score: 145
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; pose_vector; data_collection; structure_combo
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_2; strong_file_logging_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_145; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\008_p254_Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition.c

### 9. OVRManager$$get_eyeTrackedFoveatedRenderingSupported

- Manual priority score: 239
- Manual tier: A_must_review
- Original scanner score: 165
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_4; validity_or_gating_hits_4; paired_field_refs_with_eye_source; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_165; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\009_p239_OVRManager$$get_eyeTrackedFoveatedRenderingSupported.c

### 10. Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$OnEnable

- Manual priority score: 238
- Manual tier: A_must_review
- Original scanner score: 119
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; paired_state_refs; ray_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_2; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_2; telemetry_or_network_hits_1; frame_or_lifecycle_behavior; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_119; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\010_p238_Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$OnEnable.c

### 11. OVRManager$$GetEyeTrackedFoveatedRenderingSupported

- Manual priority score: 236
- Manual tier: A_must_review
- Original scanner score: 162
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_4; validity_or_gating_hits_3; paired_field_refs_with_eye_source; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_162; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\011_p236_OVRManager$$GetEyeTrackedFoveatedRenderingSupported.c

### 12. Meta.XR.MetaXREyeTrackedFoveationFeature$$OnSessionCreate

- Manual priority score: 229
- Manual tier: A_must_review
- Original scanner score: 114
- Original scanner label: 90_plus_uncertain_foveated_rendering_near_certain
- Modules: eye_source; telemetry; foveation_rendering
- Evidence: strong_eye_source_hits_3; telemetry_or_network_hits_2; strong_foveation_hits_2; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_114; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\012_p229_Meta.XR.MetaXREyeTrackedFoveationFeature$$OnSessionCreate.c

### 13. Meta.XR.EnvironmentDepthRaycaster$$UpdateTextureCopyRequest

- Manual priority score: 226
- Manual tier: A_must_review
- Original scanner score: 115
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; ray_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_3; ray_or_cast_sink_hits_2; telemetry_or_network_hits_2; frame_or_lifecycle_behavior; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_115; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\013_p226_Meta.XR.EnvironmentDepthRaycaster$$UpdateTextureCopyRequest.c

### 14. OVRPlugin.OVRP_1_98_0$$ovrp_RequestBoundaryVisibility

- Manual priority score: 224
- Manual tier: A_must_review
- Original scanner score: 119
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_12; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_119; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\014_p224_OVRPlugin.OVRP_1_98_0$$ovrp_RequestBoundaryVisibility.c

### 15. OVRPlugin.OVRP_1_95_0$$ovrp_SetDeveloperTelemetryConsent

- Manual priority score: 224
- Manual tier: A_must_review
- Original scanner score: 119
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_19; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_119; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\015_p224_OVRPlugin.OVRP_1_95_0$$ovrp_SetDeveloperTelemetryConsent.c

### 16. System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$Dispose

- Manual priority score: 223
- Manual tier: A_must_review
- Original scanner score: 146
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_4; ray_or_cast_sink_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_146; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\016_p223_System.Array.EmptyInternalEnumerator_OVRPlugin.AppPerfFrameStats_$$Dispose.c

### 17. WebSocketSharp.Net.HttpConnection$$BeginReadRequest

- Manual priority score: 223
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; paired_state_refs; data_collection; telemetry
- Evidence: validity_or_gating_hits_8; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_structure_only; strong_file_logging_hits_2; telemetry_or_network_hits_2; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\017_p223_WebSocketSharp.Net.HttpConnection$$BeginReadRequest.c

### 18. OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_4; validity_or_gating_hits_9; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\018_p219_OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled.c

### 19. OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_6; validity_or_gating_hits_12; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\019_p219_OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled.c

### 20. OVRManager$$set_eyeTrackedFoveatedRenderingEnabled

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_4; validity_or_gating_hits_4; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\020_p219_OVRManager$$set_eyeTrackedFoveatedRenderingEnabled.c

### 21. Meta.XR.EnvironmentDepthRaycaster$$WorldPosToNonNormalizedTextureCoords

- Manual priority score: 218
- Manual tier: A_must_review
- Original scanner score: 112
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; ray_interaction; telemetry
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_7; ray_or_cast_sink_hits_2; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_112; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\021_p218_Meta.XR.EnvironmentDepthRaycaster$$WorldPosToNonNormalizedTextureCoords.c

### 22. Meta.XR.EnvironmentDepthRaycaster$$WorldPosToLinearDepth

- Manual priority score: 218
- Manual tier: A_must_review
- Original scanner score: 112
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; ray_interaction; telemetry
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_4; ray_or_cast_sink_hits_2; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_112; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\022_p218_Meta.XR.EnvironmentDepthRaycaster$$WorldPosToLinearDepth.c

### 23. Meta.XR.MetaXRFoveationFeature$$OnSessionCreate

- Manual priority score: 217
- Manual tier: A_must_review
- Original scanner score: 102
- Original scanner label: 90_plus_uncertain_foveated_rendering_near_certain
- Modules: eye_source; telemetry; foveation_rendering
- Evidence: strong_eye_source_hits_1; telemetry_or_network_hits_2; strong_foveation_hits_2; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_102; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\023_p217_Meta.XR.MetaXRFoveationFeature$$OnSessionCreate.c

### 24. OVRManager$$SetEyeTrackedFoveatedRenderingEnabled

- Manual priority score: 216
- Manual tier: A_must_review
- Original scanner score: 150
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_4; validity_or_gating_hits_3; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_150; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\024_p216_OVRManager$$SetEyeTrackedFoveatedRenderingEnabled.c

### 25. System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$get_Current

- Manual priority score: 215
- Manual tier: A_must_review
- Original scanner score: 138
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; ray_or_cast_sink_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_138; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\025_p215_System.Array.EmptyInternalEnumerator_OVRPlugin.AppPerfFrameStats_$$get_Current.c

### 26. System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$MoveNext

- Manual priority score: 215
- Manual tier: A_must_review
- Original scanner score: 138
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; ray_or_cast_sink_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_138; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\026_p215_System.Array.EmptyInternalEnumerator_OVRPlugin.AppPerfFrameStats_$$MoveNext.c

### 27. WebSocketSharp.Server.WebSocketServer$$set_AllowForwardedRequest

- Manual priority score: 215
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; data_collection; telemetry
- Evidence: validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; strong_file_logging_hits_2; telemetry_or_network_hits_2; cap_below_near_certain_without_eye_anchor_or_ordered_structure; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\027_p215_WebSocketSharp.Server.WebSocketServer$$set_AllowForwardedRequest.c

### 28. WebSocketSharp.Server.WebSocketServer$$get_AllowForwardedRequest

- Manual priority score: 215
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; data_collection; telemetry
- Evidence: validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; strong_file_logging_hits_2; telemetry_or_network_hits_2; cap_below_near_certain_without_eye_anchor_or_ordered_structure; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\028_p215_WebSocketSharp.Server.WebSocketServer$$get_AllowForwardedRequest.c

### 29. Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray

- Manual priority score: 215
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; data_collection; telemetry
- Evidence: validity_or_gating_hits_9; strong_pose_or_ray_construction_hits_4; strong_file_logging_hits_2; telemetry_or_network_hits_2; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\029_p215_Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray.c

### 30. OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported

- Manual priority score: 213
- Manual tier: A_must_review
- Original scanner score: 147
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_4; validity_or_gating_hits_2; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_147; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Hyper\manual-review-pack\A_must_review\030_p213_OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported.c
