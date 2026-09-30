# Manual Review Pack Summary: SmashRoomVR

Selected functions: 100

## Tier counts

- A_must_review: 100

## Top functions

### 1. OVRPlugin$$SetTrackingCalibratedOrigin

- Manual priority score: 406
- Manual tier: A_must_review
- Original scanner score: 243
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; foveation_rendering; structure_combo; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_8; weak_xr_or_state_hits_10; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_1; strong_foveation_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_243; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\001_p406_OVRPlugin$$SetTrackingCalibratedOrigin.c

### 2. OVRPlugin$$GetTrackingCalibratedOrigin

- Manual priority score: 406
- Manual tier: A_must_review
- Original scanner score: 243
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; foveation_rendering; structure_combo; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_8; weak_xr_or_state_hits_12; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_1; strong_foveation_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_243; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\002_p406_OVRPlugin$$GetTrackingCalibratedOrigin.c

### 3. OVRPlugin$$GetPassthroughCapabilities

- Manual priority score: 345
- Manual tier: A_must_review
- Original scanner score: 202
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_8; weak_xr_or_state_hits_16; validity_or_gating_hits_21; paired_field_refs_with_eye_source; telemetry_or_network_hits_3; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_3
- Priority reasons: base_scanner_score_202; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\003_p345_OVRPlugin$$GetPassthroughCapabilities.c

### 4. FUN_03155660

- Manual priority score: 345
- Manual tier: A_must_review
- Original scanner score: 202
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_14; validity_or_gating_hits_21; paired_field_refs_with_eye_source; telemetry_or_network_hits_3; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_3
- Priority reasons: base_scanner_score_202; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\004_p345_FUN_03155660.c

### 5. OVRPlugin$$GetBoundaryVisible

- Manual priority score: 340
- Manual tier: A_must_review
- Original scanner score: 197
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_8; weak_xr_or_state_hits_12; validity_or_gating_hits_21; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_197; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\005_p340_OVRPlugin$$GetBoundaryVisible.c

### 6. OVRPlugin$$GetBoundaryDimensions

- Manual priority score: 340
- Manual tier: A_must_review
- Original scanner score: 197
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_8; weak_xr_or_state_hits_12; validity_or_gating_hits_21; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_197; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\006_p340_OVRPlugin$$GetBoundaryDimensions.c

### 7. OVRPlugin$$SetBoundaryVisible

- Manual priority score: 320
- Manual tier: A_must_review
- Original scanner score: 185
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_8; weak_xr_or_state_hits_12; validity_or_gating_hits_21; telemetry_or_network_hits_2; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_185; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\007_p320_OVRPlugin$$SetBoundaryVisible.c

### 8. OVRPlugin$$RecenterTrackingOrigin

- Manual priority score: 316
- Manual tier: A_must_review
- Original scanner score: 216
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; foveation_rendering; structure_combo; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_8; weak_xr_or_state_hits_10; validity_or_gating_hits_10; strong_pose_or_ray_construction_hits_2; strong_foveation_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering; functionality_gaze_retrieval_or_extraction
- Priority reasons: base_scanner_score_216; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_foveation_rendering_20; module_bonus_structure_combo_18; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\008_p316_OVRPlugin$$RecenterTrackingOrigin.c

### 9. OVRPlugin$$SetTrackingOriginType

- Manual priority score: 315
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_8; weak_xr_or_state_hits_12; validity_or_gating_hits_21; telemetry_or_network_hits_1; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\009_p315_OVRPlugin$$SetTrackingOriginType.c

### 10. OVRPlugin$$GetTrackingOriginType

- Manual priority score: 315
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_8; weak_xr_or_state_hits_14; validity_or_gating_hits_21; telemetry_or_network_hits_1; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\010_p315_OVRPlugin$$GetTrackingOriginType.c

### 11. OVRPlugin$$GetSystemHeadsetType

- Manual priority score: 315
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_8; weak_xr_or_state_hits_10; validity_or_gating_hits_21; telemetry_or_network_hits_1; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\011_p315_OVRPlugin$$GetSystemHeadsetType.c

### 12. OVRPlugin$$GetConnectedControllers

- Manual priority score: 315
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_8; weak_xr_or_state_hits_10; validity_or_gating_hits_21; telemetry_or_network_hits_1; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\012_p315_OVRPlugin$$GetConnectedControllers.c

### 13. OVRPlugin$$GetActiveController

- Manual priority score: 315
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_8; weak_xr_or_state_hits_12; validity_or_gating_hits_21; telemetry_or_network_hits_1; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\013_p315_OVRPlugin$$GetActiveController.c

### 14. OVREyeGaze$$StartEyeTracking

- Manual priority score: 250
- Manual tier: A_must_review
- Original scanner score: 146
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry; frame_behavior; attempted_use
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_12; paired_field_refs_with_eye_source; telemetry_or_network_hits_1; frame_or_lifecycle_behavior; attempted_eye_tracking_permission_or_feature_enable; functionality_permission_setup; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_146; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\014_p250_OVREyeGaze$$StartEyeTracking.c

### 15. Meta.XR.MetaXRFoveationFeature$$OnSessionCreate

- Manual priority score: 246
- Manual tier: A_must_review
- Original scanner score: 123
- Original scanner label: 90_plus_uncertain_foveated_rendering_near_certain
- Modules: eye_source; validity_gate; telemetry; foveation_rendering
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_2; telemetry_or_network_hits_3; strong_foveation_hits_2; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_3
- Priority reasons: base_scanner_score_123; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\015_p246_Meta.XR.MetaXRFoveationFeature$$OnSessionCreate.c

### 16. OVREyeGaze$$OnEnable

- Manual priority score: 245
- Manual tier: A_must_review
- Original scanner score: 141
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry; frame_behavior; attempted_use
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_14; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; frame_or_lifecycle_behavior; attempted_eye_tracking_permission_or_feature_enable; functionality_permission_setup; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_141; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\016_p245_OVREyeGaze$$OnEnable.c

### 17. System.Array$$InternalArray__get_Item<OVRPlugin.BodyJointLocation>

- Manual priority score: 239
- Manual tier: A_must_review
- Original scanner score: 154
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_18; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_154; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\017_p239_System.Array$$InternalArray__get_Item_OVRPlugin.BodyJointLocation_.c

### 18. System.Array$$InternalArray__get_Item<OVRPlugin.AppPerfFrameStats>

- Manual priority score: 239
- Manual tier: A_must_review
- Original scanner score: 154
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_18; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_154; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\018_p239_System.Array$$InternalArray__get_Item_OVRPlugin.AppPerfFrameStats_.c

### 19. OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTrackedSupported

- Manual priority score: 236
- Manual tier: A_must_review
- Original scanner score: 162
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_4; validity_or_gating_hits_3; paired_field_refs_with_eye_source; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_162; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\019_p236_OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTrackedSupported.c

### 20. System.Array$$InternalArray__get_Item<OVRPlugin.BoneCapsule>

- Manual priority score: 235
- Manual tier: A_must_review
- Original scanner score: 150
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_16; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_150; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\020_p235_System.Array$$InternalArray__get_Item_OVRPlugin.BoneCapsule_.c

### 21. System.Array$$InternalArray__get_Item<OVRPlugin.Bone>

- Manual priority score: 235
- Manual tier: A_must_review
- Original scanner score: 150
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_17; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_150; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\021_p235_System.Array$$InternalArray__get_Item_OVRPlugin.Bone_.c

### 22. OVRPlugin$$get_hasVrFocus

- Manual priority score: 232
- Manual tier: A_must_review
- Original scanner score: 123
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ui_interaction; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_6; validity_or_gating_hits_4; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_2; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_123; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\022_p232_OVRPlugin$$get_hasVrFocus.c

### 23. OVRPlugin.UnityOpenXR$$OnSessionCreate

- Manual priority score: 232
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_5; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\023_p232_OVRPlugin.UnityOpenXR$$OnSessionCreate.c

### 24. UnityEngine.UIElements.FocusChangeDirection$$System.IDisposable.Dispose

- Manual priority score: 232
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; pose_vector; paired_state_refs; ui_interaction; telemetry; structure_combo
- Evidence: weak_xr_or_state_hits_21; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_structure_only; ui_or_gameplay_sink_hits_12; telemetry_or_network_hits_4; source_validity_pose_sink_structure; negative_framework_namespace_without_eye_use_flow; cap_below_near_certain_without_eye_anchor_or_ordered_structure; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\024_p232_UnityEngine.UIElements.FocusChangeDirection$$System.IDisposable.Dispose.c

### 25. UnityEngine.UIElements.FocusChangeDirection$$Dispose

- Manual priority score: 232
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; pose_vector; paired_state_refs; ui_interaction; telemetry; structure_combo
- Evidence: weak_xr_or_state_hits_21; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_structure_only; ui_or_gameplay_sink_hits_12; telemetry_or_network_hits_4; source_validity_pose_sink_structure; negative_framework_namespace_without_eye_use_flow; cap_below_near_certain_without_eye_anchor_or_ordered_structure; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\025_p232_UnityEngine.UIElements.FocusChangeDirection$$Dispose.c

### 26. OVRPlugin$$set_eyeFovPremultipliedAlphaModeEnabled

- Manual priority score: 231
- Manual tier: A_must_review
- Original scanner score: 126
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_10; validity_or_gating_hits_21; paired_field_refs_with_eye_source; telemetry_or_network_hits_3; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_3
- Priority reasons: base_scanner_score_126; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\026_p231_OVRPlugin$$set_eyeFovPremultipliedAlphaModeEnabled.c

### 27. OVRPlugin$$get_foveatedRenderingSupported

- Manual priority score: 230
- Manual tier: A_must_review
- Original scanner score: 158
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_8; weak_xr_or_state_hits_10; validity_or_gating_hits_8; strong_foveation_hits_4; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_158; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\027_p230_OVRPlugin$$get_foveatedRenderingSupported.c

### 28. OVRPlugin$$get_fixedFoveatedRenderingSupported

- Manual priority score: 230
- Manual tier: A_must_review
- Original scanner score: 158
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_8; weak_xr_or_state_hits_8; validity_or_gating_hits_6; strong_foveation_hits_4; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_158; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\028_p230_OVRPlugin$$get_fixedFoveatedRenderingSupported.c

### 29. UnityEngine.UIElements.RadioButtonGroup$$UpdateRadioButtons

- Manual priority score: 230
- Manual tier: A_must_review
- Original scanner score: 79
- Original scanner label: 70_high_likely_false_positive_high
- Modules: weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo
- Evidence: weak_xr_or_state_hits_4; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_structure_only; ray_or_cast_sink_hits_4; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_2; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; negative_framework_namespace_without_eye_use_flow; negative_generic_transform_raycast_without_eye_source_or_attempt
- Priority reasons: base_scanner_score_79; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\029_p230_UnityEngine.UIElements.RadioButtonGroup$$UpdateRadioButtons.c

### 30. System.Security.Cryptography.KeyedHashAlgorithm$$Dispose

- Manual priority score: 228
- Manual tier: A_must_review
- Original scanner score: 77
- Original scanner label: 70_high_uncertain_gaze_or_xr_structure_high
- Modules: weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo; keyword_support
- Evidence: weak_xr_or_state_hits_6; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_structure_only; telemetry_or_network_hits_3; source_validity_pose_sink_structure; eye_or_gaze_keyword_boost_only; negative_framework_namespace_without_eye_use_flow
- Priority reasons: base_scanner_score_77; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\SmashRoomVR\manual-review-pack\A_must_review\030_p228_System.Security.Cryptography.KeyedHashAlgorithm$$Dispose.c
