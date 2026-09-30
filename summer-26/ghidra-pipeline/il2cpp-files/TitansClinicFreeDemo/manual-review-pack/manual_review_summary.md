# Manual Review Pack Summary: TitansClinicFreeDemo

Selected functions: 100

## Tier counts

- A_must_review: 100

## Top functions

### 1. OVRPlugin.Media$$SetMrcHeadsetControllerPose

- Manual priority score: 320
- Manual tier: A_must_review
- Original scanner score: 189
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; structure_combo
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_8; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_3; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_data_collection_or_telemetry_hits_3
- Priority reasons: base_scanner_score_189; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\001_p320_OVRPlugin.Media$$SetMrcHeadsetControllerPose.c

### 2. OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetHeadsetControllerPose

- Manual priority score: 315
- Manual tier: A_must_review
- Original scanner score: 184
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; structure_combo
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_184; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\002_p315_OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetHeadsetControllerPose.c

### 3. System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.get_Current

- Manual priority score: 273
- Manual tier: A_must_review
- Original scanner score: 159
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_3; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_eye_api_context_without_clear_sink_hits_1
- Priority reasons: base_scanner_score_159; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\003_p273_System.Array.InternalEnumerator_OVRPassthroughLayer.SerializedSurfaceGeometry_$$System.Collections.IEnumerator.get_Current.c

### 4. System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.Reset

- Manual priority score: 273
- Manual tier: A_must_review
- Original scanner score: 159
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_3; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_eye_api_context_without_clear_sink_hits_1
- Priority reasons: base_scanner_score_159; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\004_p273_System.Array.InternalEnumerator_OVRPassthroughLayer.SerializedSurfaceGeometry_$$System.Collections.IEnumerator.Reset.c

### 5. OVRPlugin.GetBoneSkeleton2Delegate$$Invoke

- Manual priority score: 250
- Manual tier: A_must_review
- Original scanner score: 135
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ui_interaction; telemetry
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_21; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_135; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\005_p250_OVRPlugin.GetBoneSkeleton2Delegate$$Invoke.c

### 6. OVRPlugin.GetBoneSkeleton2Delegate$$EndInvoke

- Manual priority score: 250
- Manual tier: A_must_review
- Original scanner score: 135
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ui_interaction; telemetry
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_21; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_135; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\006_p250_OVRPlugin.GetBoneSkeleton2Delegate$$EndInvoke.c

### 7. OVRPlugin.GetBoneSkeleton2Delegate$$BeginInvoke

- Manual priority score: 250
- Manual tier: A_must_review
- Original scanner score: 135
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ui_interaction; telemetry
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_21; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_135; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\007_p250_OVRPlugin.GetBoneSkeleton2Delegate$$BeginInvoke.c

### 8. OVRPlugin.OVRP_1_78_0$$ovrp_SetFoveationEyeTracked

- Manual priority score: 236
- Manual tier: A_must_review
- Original scanner score: 159
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; frame_behavior; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_9; weak_xr_or_state_hits_5; validity_or_gating_hits_5; strong_foveation_hits_2; frame_or_lifecycle_behavior; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_159; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; module_bonus_frame_behavior_5; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\008_p236_OVRPlugin.OVRP_1_78_0$$ovrp_SetFoveationEyeTracked.c

### 9. OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported

- Manual priority score: 230
- Manual tier: A_must_review
- Original scanner score: 158
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_15; weak_xr_or_state_hits_13; validity_or_gating_hits_7; strong_foveation_hits_5; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_158; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\009_p230_OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported.c

### 10. OVRPlugin.UnityOpenXR$$OnSessionCreate

- Manual priority score: 229
- Manual tier: A_must_review
- Original scanner score: 126
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_8; validity_or_gating_hits_19; telemetry_or_network_hits_4; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_126; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\010_p229_OVRPlugin.UnityOpenXR$$OnSessionCreate.c

### 11. OVRPlugin.OVRP_1_65_0$$ovrp_KtxGetTextureData

- Manual priority score: 229
- Manual tier: A_must_review
- Original scanner score: 126
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_12; validity_or_gating_hits_21; telemetry_or_network_hits_4; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_126; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\011_p229_OVRPlugin.OVRP_1_65_0$$ovrp_KtxGetTextureData.c

### 12. OVRPlugin.OVRP_1_45_0$$ovrp_Media_SetAvailableQueueIndexVulkan

- Manual priority score: 229
- Manual tier: A_must_review
- Original scanner score: 126
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_10; validity_or_gating_hits_21; telemetry_or_network_hits_3; functionality_data_collection_or_telemetry_hits_3
- Priority reasons: base_scanner_score_126; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\012_p229_OVRPlugin.OVRP_1_45_0$$ovrp_Media_SetAvailableQueueIndexVulkan.c

### 13. OVRPlugin.OVRP_1_38_0$$ovrp_Media_SyncMrcFrame

- Manual priority score: 229
- Manual tier: A_must_review
- Original scanner score: 126
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_8; validity_or_gating_hits_21; telemetry_or_network_hits_3; functionality_data_collection_or_telemetry_hits_3
- Priority reasons: base_scanner_score_126; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\013_p229_OVRPlugin.OVRP_1_38_0$$ovrp_Media_SyncMrcFrame.c

### 14. OVRPlugin.Media$$SetAvailableQueueIndexVulkan

- Manual priority score: 229
- Manual tier: A_must_review
- Original scanner score: 126
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_10; validity_or_gating_hits_21; telemetry_or_network_hits_3; functionality_data_collection_or_telemetry_hits_3
- Priority reasons: base_scanner_score_126; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\014_p229_OVRPlugin.Media$$SetAvailableQueueIndexVulkan.c

### 15. FUN_01f80b1c

- Manual priority score: 227
- Manual tier: A_must_review
- Original scanner score: 158
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_9; weak_xr_or_state_hits_9; validity_or_gating_hits_7; strong_foveation_hits_3; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_158; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_3_bonus_9
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\015_p227_FUN_01f80b1c.c

### 16. OVRPlugin.OVRP_1_66_0$$ovrp_Media_IsCastingToRemoteClient

- Manual priority score: 224
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_21; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\016_p224_OVRPlugin.OVRP_1_66_0$$ovrp_Media_IsCastingToRemoteClient.c

### 17. OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureWidth

- Manual priority score: 224
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_21; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\017_p224_OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureWidth.c

### 18. OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureSize

- Manual priority score: 224
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_21; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\018_p224_OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureSize.c

### 19. OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureHeight

- Manual priority score: 224
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_21; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\019_p224_OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureHeight.c

### 20. OVRPlugin.OVRP_1_65_0$$ovrp_KtxLoadFromMemory

- Manual priority score: 224
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_21; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\020_p224_OVRPlugin.OVRP_1_65_0$$ovrp_KtxLoadFromMemory.c

### 21. OVRPlugin.Media$$IsCastingToRemoteClient

- Manual priority score: 224
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_21; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\021_p224_OVRPlugin.Media$$IsCastingToRemoteClient.c

### 22. OVRPlugin.Media$$.ctor

- Manual priority score: 224
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_21; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\022_p224_OVRPlugin.Media$$.ctor.c

### 23. OVRPlugin.Ktx$$TranscodeKtxTexture

- Manual priority score: 224
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_21; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\023_p224_OVRPlugin.Ktx$$TranscodeKtxTexture.c

### 24. OVRPlugin.Ktx$$LoadKtxFromMemory

- Manual priority score: 224
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_21; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\024_p224_OVRPlugin.Ktx$$LoadKtxFromMemory.c

### 25. OVRPlugin.Ktx$$GetKtxTextureWidth

- Manual priority score: 224
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_21; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\025_p224_OVRPlugin.Ktx$$GetKtxTextureWidth.c

### 26. OVRPlugin.Ktx$$GetKtxTextureSize

- Manual priority score: 224
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_21; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\026_p224_OVRPlugin.Ktx$$GetKtxTextureSize.c

### 27. OVRPlugin.Ktx$$GetKtxTextureHeight

- Manual priority score: 224
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_21; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\027_p224_OVRPlugin.Ktx$$GetKtxTextureHeight.c

### 28. OVRPlugin.Ktx$$GetKtxTextureData

- Manual priority score: 224
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_8; validity_or_gating_hits_21; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\028_p224_OVRPlugin.Ktx$$GetKtxTextureData.c

### 29. OVRPlugin.GetBoneSkeleton2Delegate$$.ctor

- Manual priority score: 224
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_21; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\029_p224_OVRPlugin.GetBoneSkeleton2Delegate$$.ctor.c

### 30. FUN_01f922ec

- Manual priority score: 223
- Manual tier: A_must_review
- Original scanner score: 120
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_6; validity_or_gating_hits_21; telemetry_or_network_hits_3; functionality_data_collection_or_telemetry_hits_3
- Priority reasons: base_scanner_score_120; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TitansClinicFreeDemo\manual-review-pack\A_must_review\030_p223_FUN_01f922ec.c
