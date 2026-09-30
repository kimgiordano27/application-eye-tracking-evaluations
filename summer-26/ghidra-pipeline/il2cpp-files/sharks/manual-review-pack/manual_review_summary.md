# Manual Review Pack Summary: sharks

Selected functions: 100

## Tier counts

- A_must_review: 100

## Top functions

### 1. System.Array$$InternalArray__get_Item<OVRPassthroughLayer.SerializedSurfaceGeometry>

- Manual priority score: 327
- Manual tier: A_must_review
- Original scanner score: 196
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo
- Evidence: strong_eye_source_hits_11; weak_xr_or_state_hits_11; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_eye_api_context_without_clear_sink_hits_11
- Priority reasons: base_scanner_score_196; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\001_p327_System.Array$$InternalArray__get_Item_OVRPassthroughLayer.SerializedSurfaceGeometry_.c

### 2. System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$Dispose

- Manual priority score: 295
- Manual tier: A_must_review
- Original scanner score: 178
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_8; strong_pose_or_ray_construction_hits_4; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_eye_api_context_without_clear_sink_hits_2
- Priority reasons: base_scanner_score_178; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\002_p295_System.Array.InternalEnumerator_OVRPassthroughLayer.SerializedSurfaceGeometry_$$Dispose.c

### 3. System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$MoveNext

- Manual priority score: 287
- Manual tier: A_must_review
- Original scanner score: 170
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_8; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_eye_api_context_without_clear_sink_hits_2
- Priority reasons: base_scanner_score_170; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\003_p287_System.Array.InternalEnumerator_OVRPassthroughLayer.SerializedSurfaceGeometry_$$MoveNext.c

### 4. System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$.ctor

- Manual priority score: 287
- Manual tier: A_must_review
- Original scanner score: 170
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_9; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_eye_api_context_without_clear_sink_hits_2
- Priority reasons: base_scanner_score_170; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\004_p287_System.Array.InternalEnumerator_OVRPassthroughLayer.SerializedSurfaceGeometry_$$.ctor.c

### 5. FUN_033651cc

- Manual priority score: 278
- Manual tier: A_must_review
- Original scanner score: 152
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_1; telemetry_or_network_hits_1; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_152; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\005_p278_FUN_033651cc.c

### 6. Microsoft.Win32.NativeMethods$$CloseProcess

- Manual priority score: 246
- Manual tier: A_must_review
- Original scanner score: 134
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; data_collection; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_1; strong_file_logging_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_134; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_1_bonus_3
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\006_p246_Microsoft.Win32.NativeMethods$$CloseProcess.c

### 7. OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported

- Manual priority score: 239
- Manual tier: A_must_review
- Original scanner score: 165
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_4; validity_or_gating_hits_7; paired_field_refs_with_eye_source; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_165; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\007_p239_OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported.c

### 8. Meta.XR.MetaXRFoveationFeature$$OnSessionCreate

- Manual priority score: 238
- Manual tier: A_must_review
- Original scanner score: 115
- Original scanner label: 90_plus_uncertain_foveated_rendering_near_certain
- Modules: eye_source; validity_gate; telemetry; foveation_rendering
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_1; telemetry_or_network_hits_2; strong_foveation_hits_2; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_115; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\008_p238_Meta.XR.MetaXRFoveationFeature$$OnSessionCreate.c

### 9. Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$UpdatePillPosition

- Manual priority score: 236
- Manual tier: A_must_review
- Original scanner score: 155
- Original scanner label: 90_plus_uncertain_eye_setup_near_certain
- Modules: eye_source; validity_gate; pose_vector; paired_state_refs; ui_interaction; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_7; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; ui_or_gameplay_sink_hits_2; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_eye_api_context_without_clear_sink_hits_1
- Priority reasons: base_scanner_score_155; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ui_interaction_12; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\009_p236_Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$UpdatePillPosition.c

### 10. OVRManager$$get_eyeTrackedFoveatedRenderingSupported

- Manual priority score: 230
- Manual tier: A_must_review
- Original scanner score: 158
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_9; weak_xr_or_state_hits_10; validity_or_gating_hits_11; strong_foveation_hits_5; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_158; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\010_p230_OVRManager$$get_eyeTrackedFoveatedRenderingSupported.c

### 11. OVRManager$$get_eyeTrackedFoveatedRenderingEnabled

- Manual priority score: 230
- Manual tier: A_must_review
- Original scanner score: 158
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_8; weak_xr_or_state_hits_10; validity_or_gating_hits_10; strong_foveation_hits_4; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_158; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\011_p230_OVRManager$$get_eyeTrackedFoveatedRenderingEnabled.c

### 12. OVRManager$$GetEyeTrackedFoveatedRenderingSupported

- Manual priority score: 230
- Manual tier: A_must_review
- Original scanner score: 158
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_9; weak_xr_or_state_hits_10; validity_or_gating_hits_11; strong_foveation_hits_5; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_158; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\012_p230_OVRManager$$GetEyeTrackedFoveatedRenderingSupported.c

### 13. Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorRay

- Manual priority score: 230
- Manual tier: A_must_review
- Original scanner score: 154
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; validity_gate; pose_vector; paired_state_refs; ui_interaction; structure_combo
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_eye_source; ui_or_gameplay_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_154; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ui_interaction_12; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\013_p230_Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorRay.c

### 14. Meta.XR.MetaXREyeTrackedFoveationFeature$$OnSessionCreate

- Manual priority score: 229
- Manual tier: A_must_review
- Original scanner score: 114
- Original scanner label: 90_plus_uncertain_foveated_rendering_near_certain
- Modules: eye_source; telemetry; foveation_rendering
- Evidence: strong_eye_source_hits_3; telemetry_or_network_hits_2; strong_foveation_hits_2; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_114; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\014_p229_Meta.XR.MetaXREyeTrackedFoveationFeature$$OnSessionCreate.c

### 15. System.Array$$InternalArray__get_Item<OVRPlugin.EyeGazeState>

- Manual priority score: 227
- Manual tier: A_must_review
- Original scanner score: 169
- Original scanner label: 90_plus_confirmed_gaze_retrieval_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; attempted_use; active_gaze_retrieval
- Evidence: strong_eye_source_hits_7; weak_xr_or_state_hits_5; validity_or_gating_hits_9; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; attempted_eye_tracking_permission_or_feature_enable; active_gaze_state_retrieval_with_validity_and_pose; functionality_gaze_retrieval_or_extraction
- Priority reasons: base_scanner_score_169; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\015_p227_System.Array$$InternalArray__get_Item_OVRPlugin.EyeGazeState_.c

### 16. Meta.XR.ImmersiveDebugger.Telemetry$$OnButtonClicked

- Manual priority score: 223
- Manual tier: A_must_review
- Original scanner score: 112
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; paired_state_refs; ui_interaction; telemetry
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_2; paired_field_refs_with_eye_source; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_112; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\016_p223_Meta.XR.ImmersiveDebugger.Telemetry$$OnButtonClicked.c

### 17. OVRManager$$set_eyeTrackedFoveatedRenderingEnabled

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_4; validity_or_gating_hits_10; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\017_p219_OVRManager$$set_eyeTrackedFoveatedRenderingEnabled.c

### 18. OVRManager$$GetEyeTrackedFoveatedRenderingEnabled

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_6; validity_or_gating_hits_10; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\018_p219_OVRManager$$GetEyeTrackedFoveatedRenderingEnabled.c

### 19. OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled

- Manual priority score: 216
- Manual tier: A_must_review
- Original scanner score: 150
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_4; validity_or_gating_hits_3; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_150; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\019_p216_OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled.c

### 20. OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled

- Manual priority score: 216
- Manual tier: A_must_review
- Original scanner score: 150
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_6; validity_or_gating_hits_3; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_150; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\020_p216_OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled.c

### 21. OVRPlugin.UnityOpenXR$$OnSessionEnd

- Manual priority score: 212
- Manual tier: A_must_review
- Original scanner score: 109
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_4; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_109; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\021_p212_OVRPlugin.UnityOpenXR$$OnSessionEnd.c

### 22. OVRPlugin.UnityOpenXR$$OnSessionBegin

- Manual priority score: 212
- Manual tier: A_must_review
- Original scanner score: 109
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_7; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_109; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\022_p212_OVRPlugin.UnityOpenXR$$OnSessionBegin.c

### 23. OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy

- Manual priority score: 212
- Manual tier: A_must_review
- Original scanner score: 109
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_5; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_109; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\023_p212_OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy.c

### 24. OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionBegin

- Manual priority score: 212
- Manual tier: A_must_review
- Original scanner score: 109
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_5; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_109; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\024_p212_OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionBegin.c

### 25. Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendStart

- Manual priority score: 210
- Manual tier: A_must_review
- Original scanner score: 106
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; paired_state_refs; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_1; paired_field_refs_with_eye_source; telemetry_or_network_hits_4; frame_or_lifecycle_behavior; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_106; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\025_p210_Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendStart.c

### 26. Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnStart

- Manual priority score: 210
- Manual tier: A_must_review
- Original scanner score: 106
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; paired_state_refs; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_1; paired_field_refs_with_eye_source; telemetry_or_network_hits_4; frame_or_lifecycle_behavior; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_106; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\026_p210_Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnStart.c

### 27. OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd

- Manual priority score: 206
- Manual tier: A_must_review
- Original scanner score: 103
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_2; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_103; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\027_p206_OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd.c

### 28. Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnFocusLost

- Manual priority score: 205
- Manual tier: A_must_review
- Original scanner score: 102
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; ui_interaction; telemetry
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_1; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_4; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_102; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\028_p205_Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnFocusLost.c

### 29. OVRPlugin$$RequestBodyTrackingFidelity

- Manual priority score: 204
- Manual tier: A_must_review
- Original scanner score: 107
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_11; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_107; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\029_p204_OVRPlugin$$RequestBodyTrackingFidelity.c

### 30. OVRManager$$InitPermissionRequest

- Manual priority score: 203
- Manual tier: A_must_review
- Original scanner score: 106
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_3; telemetry_or_network_hits_2; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_106; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\sharks\manual-review-pack\A_must_review\030_p203_OVRManager$$InitPermissionRequest.c
