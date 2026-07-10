# Manual Review Pack Summary: FruitBladeVR

Selected functions: 86

## Tier counts

- A_must_review: 45
- B_high_priority: 26
- C_likely_review: 15

## Top functions

### 1. UnityEngine.XR.OpenXR.OpenXRSettings$$ApplySettings

- Manual priority score: 406
- Manual tier: A_must_review
- Original scanner score: 235
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; foveation_rendering; structure_combo; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_21; validity_or_gating_hits_16; strong_pose_or_ray_construction_hits_6; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; strong_foveation_hits_3; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_permission_setup; functionality_foveated_rendering; functionality_gaze_interaction_hits_1; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_235; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\001_p406_UnityEngine.XR.OpenXR.OpenXRSettings$$ApplySettings.c

### 2. UnityEngine.XR.OpenXR.OpenXRSettings$$ApplyRenderSettings

- Manual priority score: 406
- Manual tier: A_must_review
- Original scanner score: 235
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; foveation_rendering; structure_combo; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_21; validity_or_gating_hits_16; strong_pose_or_ray_construction_hits_6; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; strong_foveation_hits_3; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_permission_setup; functionality_foveated_rendering; functionality_gaze_interaction_hits_1; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_235; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\002_p406_UnityEngine.XR.OpenXR.OpenXRSettings$$ApplyRenderSettings.c

### 3. UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_HasRequestedEyeTrackingPermissions

- Manual priority score: 297
- Manual tier: A_must_review
- Original scanner score: 162
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_8; validity_or_gating_hits_3; telemetry_or_network_hits_3; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_permission_setup; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_3
- Priority reasons: base_scanner_score_162; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\003_p297_UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_HasRequestedEyeTrackingPermissions.c

### 4. UnityEngine.Rendering.RenderGraphModule.RenderGraph$$PostRenderPassExecute

- Manual priority score: 254
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_framework_support_only_high
- Modules: validity_gate; pose_vector; paired_state_refs; telemetry; foveation_rendering; keyword_support
- Evidence: validity_or_gating_hits_12; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_structure_only; telemetry_or_network_hits_2; strong_foveation_hits_1; eye_or_gaze_keyword_boost_only; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; cap_below_near_certain_without_eye_anchor_or_ordered_structure; functionality_foveated_rendering
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\004_p254_UnityEngine.Rendering.RenderGraphModule.RenderGraph$$PostRenderPassExecute.c

### 5. UnityEngine.Rendering.Universal.PostProcessPass$$RenderUberPost

- Manual priority score: 232
- Manual tier: A_must_review
- Original scanner score: 85
- Original scanner label: 70_high_framework_support_only_high
- Modules: weak_source_state; validity_gate; telemetry; foveation_rendering; keyword_support
- Evidence: weak_xr_or_state_hits_5; validity_or_gating_hits_21; telemetry_or_network_hits_21; strong_foveation_hits_1; eye_or_gaze_keyword_boost_only; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_85; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\005_p232_UnityEngine.Rendering.Universal.PostProcessPass$$RenderUberPost.c

### 6. UnityEngine.Rendering.Universal.PostProcessPass$$RenderFinalBlit

- Manual priority score: 230
- Manual tier: A_must_review
- Original scanner score: 83
- Original scanner label: 70_high_framework_support_only_high
- Modules: weak_source_state; validity_gate; telemetry; foveation_rendering; keyword_support
- Evidence: weak_xr_or_state_hits_2; validity_or_gating_hits_19; telemetry_or_network_hits_19; strong_foveation_hits_1; eye_or_gaze_keyword_boost_only; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_83; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\006_p230_UnityEngine.Rendering.Universal.PostProcessPass$$RenderFinalBlit.c

### 7. UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass$$Execute

- Manual priority score: 221
- Manual tier: A_must_review
- Original scanner score: 74
- Original scanner label: 70_high_framework_support_only_high
- Modules: validity_gate; telemetry; foveation_rendering; keyword_support
- Evidence: validity_or_gating_hits_8; telemetry_or_network_hits_2; strong_foveation_hits_2; eye_or_gaze_keyword_boost_only; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_74; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\007_p221_UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass$$Execute.c

### 8. UnityEngine.Rendering.Universal.ScriptableRenderer$$ExecuteRenderPass

- Manual priority score: 213
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_framework_support_only_high
- Modules: weak_source_state; validity_gate; pose_vector; ui_interaction; foveation_rendering; structure_combo; keyword_support
- Evidence: weak_xr_or_state_hits_3; validity_or_gating_hits_9; strong_pose_or_ray_construction_hits_2; ui_or_gameplay_sink_hits_7; strong_foveation_hits_4; source_validity_pose_sink_structure; eye_or_gaze_keyword_boost_only; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; cap_below_near_certain_without_eye_anchor_or_ordered_structure; functionality_foveated_rendering
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_foveation_rendering_20; module_bonus_structure_combo_18; module_bonus_keyword_support_12; evidence_bonus_eye_or_gaze_keyword_boost_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\008_p213_UnityEngine.Rendering.Universal.ScriptableRenderer$$ExecuteRenderPass.c

### 9. Unity.VRTemplate.PermissionsManager.<ProcessPermissions>d__6$$MoveNext

- Manual priority score: 208
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_attempted_eye_tracking_permission_or_feature_high
- Modules: weak_source_state; validity_gate; pose_vector; telemetry; structure_combo; attempted_use
- Evidence: weak_xr_or_state_hits_21; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_4; source_validity_pose_sink_structure; attempted_eye_tracking_permission_or_feature_enable; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\009_p208_Unity.VRTemplate.PermissionsManager._ProcessPermissions_d__6$$MoveNext.c

### 10. UnityEngine.XR.Interaction.Toolkit.UI.BodyUI.HandMenu$$LateUpdate

- Manual priority score: 207
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; pose_vector; paired_state_refs; ui_interaction; data_collection; frame_behavior; structure_combo
- Evidence: weak_xr_or_state_hits_3; validity_or_gating_hits_19; strong_pose_or_ray_construction_hits_15; paired_field_refs_with_structure_only; repeated_pose_getters; ui_or_gameplay_sink_hits_7; strong_file_logging_hits_2; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; negative_framework_namespace_without_eye_use_flow; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\010_p207_UnityEngine.XR.Interaction.Toolkit.UI.BodyUI.HandMenu$$LateUpdate.c

### 11. UnityEngine.InputSystem.InputManager$$PerformLayoutPostRegistration

- Manual priority score: 205
- Manual tier: A_must_review
- Original scanner score: 86
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; pose_vector; ui_interaction; telemetry; structure_combo
- Evidence: weak_xr_or_state_hits_2; validity_or_gating_hits_14; strong_pose_or_ray_construction_hits_21; ui_or_gameplay_sink_hits_3; telemetry_or_network_hits_3; source_validity_pose_sink_structure; negative_framework_namespace_without_eye_use_flow
- Priority reasons: base_scanner_score_86; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\011_p205_UnityEngine.InputSystem.InputManager$$PerformLayoutPostRegistration.c

### 12. UnityEngine.Rendering.Universal.ScriptableRenderer.<>c$$<BeginRenderGraphXRRendering>b__149_0

- Manual priority score: 204
- Manual tier: A_must_review
- Original scanner score: 103
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: weak_source_state; validity_gate; ui_interaction; foveation_rendering; frame_behavior; keyword_support; attempted_use; dynamic_foveation_possible
- Evidence: weak_xr_or_state_hits_2; validity_or_gating_hits_7; ui_or_gameplay_sink_hits_2; strong_foveation_hits_2; frame_or_lifecycle_behavior; eye_or_gaze_keyword_boost_only; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_103; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_foveation_rendering_20; module_bonus_frame_behavior_5; module_bonus_keyword_support_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_foveation_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\012_p204_UnityEngine.Rendering.Universal.ScriptableRenderer._c$$_BeginRenderGraphXRRendering_b__149_0.c

### 13. UnityEngine.Rendering.Universal.ScriptableRenderer$$BeginXRRendering

- Manual priority score: 204
- Manual tier: A_must_review
- Original scanner score: 103
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: weak_source_state; validity_gate; ui_interaction; foveation_rendering; frame_behavior; keyword_support; attempted_use; dynamic_foveation_possible
- Evidence: weak_xr_or_state_hits_2; validity_or_gating_hits_7; ui_or_gameplay_sink_hits_2; strong_foveation_hits_2; frame_or_lifecycle_behavior; eye_or_gaze_keyword_boost_only; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_103; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_foveation_rendering_20; module_bonus_frame_behavior_5; module_bonus_keyword_support_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_foveation_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\013_p204_UnityEngine.Rendering.Universal.ScriptableRenderer$$BeginXRRendering.c

### 14. UnityEngine.XR.OpenXR.OpenXRLoaderBase$$InitializeInternal

- Manual priority score: 201
- Manual tier: A_must_review
- Original scanner score: 77
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; pose_vector; telemetry; frame_behavior; structure_combo
- Evidence: weak_xr_or_state_hits_21; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_6; telemetry_or_network_hits_3; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; negative_framework_namespace_without_eye_use_flow
- Priority reasons: base_scanner_score_77; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\014_p201_UnityEngine.XR.OpenXR.OpenXRLoaderBase$$InitializeInternal.c

### 15. UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_SetHasEyeTrackingPermissions

- Manual priority score: 197
- Manual tier: A_must_review
- Original scanner score: 125
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_8; validity_or_gating_hits_3; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_permission_setup; functionality_foveated_rendering
- Priority reasons: base_scanner_score_125; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\015_p197_UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_SetHasEyeTrackingPermissions.c

### 16. UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_GetHasEyeTrackingPermissions

- Manual priority score: 197
- Manual tier: A_must_review
- Original scanner score: 125
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_11; validity_or_gating_hits_3; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_permission_setup; functionality_foveated_rendering
- Priority reasons: base_scanner_score_125; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\016_p197_UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_GetHasEyeTrackingPermissions.c

### 17. UnityEngine.XR.OpenXR.Input.OpenXRInput$$CreateActions

- Manual priority score: 196
- Manual tier: A_must_review
- Original scanner score: 77
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo
- Evidence: weak_xr_or_state_hits_21; validity_or_gating_hits_20; strong_pose_or_ray_construction_hits_12; paired_field_refs_with_structure_only; telemetry_or_network_hits_12; source_validity_pose_sink_structure; negative_framework_namespace_without_eye_use_flow
- Priority reasons: base_scanner_score_77; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\017_p196_UnityEngine.XR.OpenXR.Input.OpenXRInput$$CreateActions.c

### 18. UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionPass$$Execute

- Manual priority score: 195
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_framework_support_only_high
- Modules: validity_gate; pose_vector; ui_interaction; foveation_rendering; keyword_support
- Evidence: validity_or_gating_hits_16; strong_pose_or_ray_construction_hits_1; ui_or_gameplay_sink_hits_4; strong_foveation_hits_7; eye_or_gaze_keyword_boost_only; framework_foveation_support_not_confirmed_dynamic_eye_tracking; cap_below_near_certain_without_eye_anchor_or_ordered_structure; functionality_foveated_rendering
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_foveation_rendering_20; module_bonus_keyword_support_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_foveation_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\018_p195_UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionPass$$Execute.c

### 19. UnityEngine.XR.Interaction.Toolkit.Interactors.XRGazeInteractor$$UpdateSnapVolumeInteractable

- Manual priority score: 191
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_framework_eye_tracking_support_or_permission_path_high
- Modules: validity_gate; pose_vector; ray_interaction; frame_behavior; keyword_support; attempted_use
- Evidence: validity_or_gating_hits_12; strong_pose_or_ray_construction_hits_5; repeated_pose_getters; ray_or_cast_sink_hits_12; frame_or_lifecycle_behavior; eye_or_gaze_keyword_boost_only; attempted_eye_tracking_permission_or_feature_enable; negative_framework_support_context_without_confirmed_app_level_gaze_flow; cap_below_near_certain_without_eye_anchor_or_ordered_structure; functionality_gaze_interaction_hits_15; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_frame_behavior_5; module_bonus_keyword_support_12; evidence_bonus_repeated_pose_getters_8; evidence_bonus_eye_or_gaze_keyword_boost_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\019_p191_UnityEngine.XR.Interaction.Toolkit.Interactors.XRGazeInteractor$$UpdateSnapVolumeInteractable.c

### 20. UnityEngine.XR.Interaction.Toolkit.Gaze.XRGazeAssistance.InteractorData$$UpdateFallbackState

- Manual priority score: 191
- Manual tier: A_must_review
- Original scanner score: 78
- Original scanner label: 70_high_uncertain_gaze_interaction_high
- Modules: weak_source_state; validity_gate; pose_vector; paired_state_refs; ui_interaction; frame_behavior; structure_combo; keyword_support
- Evidence: weak_xr_or_state_hits_6; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_9; paired_field_refs_with_structure_only; repeated_pose_getters; ui_or_gameplay_sink_hits_2; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; eye_or_gaze_keyword_boost_only; negative_framework_namespace_without_eye_use_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_78; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ui_interaction_12; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; module_bonus_keyword_support_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\020_p191_UnityEngine.XR.Interaction.Toolkit.Gaze.XRGazeAssistance.InteractorData$$UpdateFallbackState.c

### 21. UnityEngine.InputSystem.LowLevel.InputEventTrace$$OnInputEvent

- Manual priority score: 190
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; paired_state_refs; ui_interaction; telemetry
- Evidence: validity_or_gating_hits_11; strong_pose_or_ray_construction_hits_6; paired_field_refs_with_structure_only; ui_or_gameplay_sink_hits_3; telemetry_or_network_hits_1; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\021_p190_UnityEngine.InputSystem.LowLevel.InputEventTrace$$OnInputEvent.c

### 22. UnityEngine.XR.OpenXR.OpenXRAnalytics$$CreateInitializeEvent

- Manual priority score: 190
- Manual tier: A_must_review
- Original scanner score: 71
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; pose_vector; telemetry; structure_combo
- Evidence: weak_xr_or_state_hits_21; validity_or_gating_hits_8; strong_pose_or_ray_construction_hits_12; telemetry_or_network_hits_16; source_validity_pose_sink_structure; negative_framework_namespace_without_eye_use_flow
- Priority reasons: base_scanner_score_71; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\022_p190_UnityEngine.XR.OpenXR.OpenXRAnalytics$$CreateInitializeEvent.c

### 23. UnityEngine.XR.Interaction.Toolkit.UI.CanvasOptimizer.CanvasState$$CheckForOutOfView

- Manual priority score: 189
- Manual tier: A_must_review
- Original scanner score: 76
- Original scanner label: 70_high_uncertain_gaze_or_xr_structure_high
- Modules: weak_source_state; validity_gate; pose_vector; paired_state_refs; ui_interaction; frame_behavior; structure_combo; keyword_support
- Evidence: weak_xr_or_state_hits_2; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_9; paired_field_refs_with_structure_only; repeated_pose_getters; ui_or_gameplay_sink_hits_2; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; eye_or_gaze_keyword_boost_only; negative_framework_namespace_without_eye_use_flow
- Priority reasons: base_scanner_score_76; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ui_interaction_12; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; module_bonus_keyword_support_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\023_p189_UnityEngine.XR.Interaction.Toolkit.UI.CanvasOptimizer.CanvasState$$CheckForOutOfView.c

### 24. UnityEngine.Rendering.Universal.ScriptableRenderer.<>c$$<EndRenderGraphXRRendering>b__151_0

- Manual priority score: 188
- Manual tier: A_must_review
- Original scanner score: 92
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: weak_source_state; validity_gate; ui_interaction; foveation_rendering; keyword_support; attempted_use; dynamic_foveation_possible
- Evidence: weak_xr_or_state_hits_2; validity_or_gating_hits_5; ui_or_gameplay_sink_hits_2; strong_foveation_hits_1; eye_or_gaze_keyword_boost_only; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_92; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_foveation_rendering_20; module_bonus_keyword_support_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\024_p188_UnityEngine.Rendering.Universal.ScriptableRenderer._c$$_EndRenderGraphXRRendering_b__151_0.c

### 25. UnityEngine.Rendering.Universal.ScriptableRenderer$$EndXRRendering

- Manual priority score: 188
- Manual tier: A_must_review
- Original scanner score: 92
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: weak_source_state; validity_gate; ui_interaction; foveation_rendering; keyword_support; attempted_use; dynamic_foveation_possible
- Evidence: weak_xr_or_state_hits_2; validity_or_gating_hits_5; ui_or_gameplay_sink_hits_2; strong_foveation_hits_1; eye_or_gaze_keyword_boost_only; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_92; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_foveation_rendering_20; module_bonus_keyword_support_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\025_p188_UnityEngine.Rendering.Universal.ScriptableRenderer$$EndXRRendering.c

### 26. UnityEngine.Rendering.Universal.Internal.DepthOnlyPass$$Render

- Manual priority score: 187
- Manual tier: A_must_review
- Original scanner score: 76
- Original scanner label: 70_high_framework_support_only_high
- Modules: weak_source_state; validity_gate; ray_interaction; ui_interaction; foveation_rendering; keyword_support
- Evidence: weak_xr_or_state_hits_2; validity_or_gating_hits_17; ray_or_cast_sink_hits_1; ui_or_gameplay_sink_hits_2; strong_foveation_hits_1; eye_or_gaze_keyword_boost_only; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_76; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_foveation_rendering_20; module_bonus_keyword_support_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_foveation_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\026_p187_UnityEngine.Rendering.Universal.Internal.DepthOnlyPass$$Render.c

### 27. UnityEngine.Rendering.Universal.Internal.DepthNormalOnlyPass$$Render

- Manual priority score: 187
- Manual tier: A_must_review
- Original scanner score: 76
- Original scanner label: 70_high_framework_support_only_high
- Modules: weak_source_state; validity_gate; ray_interaction; ui_interaction; foveation_rendering; keyword_support
- Evidence: weak_xr_or_state_hits_2; validity_or_gating_hits_21; ray_or_cast_sink_hits_1; ui_or_gameplay_sink_hits_2; strong_foveation_hits_1; eye_or_gaze_keyword_boost_only; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_76; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_foveation_rendering_20; module_bonus_keyword_support_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_foveation_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\027_p187_UnityEngine.Rendering.Universal.Internal.DepthNormalOnlyPass$$Render.c

### 28. UnityEngine.InputSystem.HID.HID$$ReadHIDDeviceDescriptor

- Manual priority score: 182
- Manual tier: A_must_review
- Original scanner score: 71
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; pose_vector; telemetry; structure_combo
- Evidence: weak_xr_or_state_hits_6; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_17; telemetry_or_network_hits_3; source_validity_pose_sink_structure; negative_framework_namespace_without_eye_use_flow
- Priority reasons: base_scanner_score_71; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\028_p182_UnityEngine.InputSystem.HID.HID$$ReadHIDDeviceDescriptor.c

### 29. AdvancedGrabWithAttach$$TryGrabObject

- Manual priority score: 180
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; ui_interaction; structure_combo
- Evidence: weak_xr_or_state_hits_2; validity_or_gating_hits_14; strong_pose_or_ray_construction_hits_6; paired_field_refs_with_structure_only; repeated_pose_getters; ray_or_cast_sink_hits_8; ui_or_gameplay_sink_hits_2; source_validity_pose_sink_structure; negative_generic_transform_raycast_without_eye_source_or_attempt; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_structure_combo_18; evidence_bonus_repeated_pose_getters_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\029_p180_AdvancedGrabWithAttach$$TryGrabObject.c

### 30. FUN_01c362bc

- Manual priority score: 179
- Manual tier: A_must_review
- Original scanner score: 81
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; pose_vector; telemetry; structure_combo
- Evidence: weak_xr_or_state_hits_1; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_1; telemetry_or_network_hits_1; source_validity_pose_sink_structure
- Priority reasons: base_scanner_score_81; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\030_p179_FUN_01c362bc.c
