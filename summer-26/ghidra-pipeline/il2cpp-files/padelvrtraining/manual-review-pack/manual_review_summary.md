# Manual Review Pack Summary: padelvrtraining

Selected functions: 100

## Tier counts

- A_must_review: 100

## Top functions

### 1. UnityEngine.EventSystems.OVRInputModule$$GetGazeButtonState

- Manual priority score: 278
- Manual tier: A_must_review
- Original scanner score: 210
- Original scanner label: 90_plus_confirmed_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; structure_combo; active_gaze_retrieval; active_gaze_interaction
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_9; strong_pose_or_ray_construction_hits_2; ui_or_gameplay_sink_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; active_gaze_state_retrieval_with_validity_and_pose; active_gaze_values_flow_to_interaction_sink; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_210; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\001_p278_UnityEngine.EventSystems.OVRInputModule$$GetGazeButtonState.c

### 2. FUN_089a79f4

- Manual priority score: 278
- Manual tier: A_must_review
- Original scanner score: 152
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_1; telemetry_or_network_hits_1; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_152; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\002_p278_FUN_089a79f4.c

### 3. Meta.XR.MetaXREyeTrackedFoveationFeature$$OnSessionCreate

- Manual priority score: 253
- Manual tier: A_must_review
- Original scanner score: 130
- Original scanner label: 90_plus_uncertain_foveated_rendering_near_certain
- Modules: eye_source; validity_gate; telemetry; foveation_rendering
- Evidence: strong_eye_source_hits_3; validity_or_gating_hits_2; telemetry_or_network_hits_2; strong_foveation_hits_2; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_130; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\003_p253_Meta.XR.MetaXREyeTrackedFoveationFeature$$OnSessionCreate.c

### 4. Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition

- Manual priority score: 251
- Manual tier: A_must_review
- Original scanner score: 142
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; pose_vector; data_collection; structure_combo
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_2; strong_file_logging_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_142; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\004_p251_Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition.c

### 5. Meta.XR.MetaXRFoveationFeature$$OnSessionCreate

- Manual priority score: 247
- Manual tier: A_must_review
- Original scanner score: 124
- Original scanner label: 90_plus_uncertain_foveated_rendering_near_certain
- Modules: eye_source; validity_gate; telemetry; foveation_rendering
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_7; telemetry_or_network_hits_2; strong_foveation_hits_2; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_124; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\005_p247_Meta.XR.MetaXRFoveationFeature$$OnSessionCreate.c

### 6. OVRTelemetry.QPLTelemetryClient$$MarkerStart

- Manual priority score: 239
- Manual tier: A_must_review
- Original scanner score: 137
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; frame_behavior; attempted_use
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_1; telemetry_or_network_hits_4; frame_or_lifecycle_behavior; attempted_eye_tracking_permission_or_feature_enable; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_137; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\006_p239_OVRTelemetry.QPLTelemetryClient$$MarkerStart.c

### 7. OVRTelemetry.NullTelemetryClient$$MarkerStart

- Manual priority score: 239
- Manual tier: A_must_review
- Original scanner score: 137
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; frame_behavior; attempted_use
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_1; telemetry_or_network_hits_4; frame_or_lifecycle_behavior; attempted_eye_tracking_permission_or_feature_enable; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_137; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\007_p239_OVRTelemetry.NullTelemetryClient$$MarkerStart.c

### 8. OVRTelemetry.TelemetryClient$$.ctor

- Manual priority score: 228
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; attempted_use
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_1; telemetry_or_network_hits_4; attempted_eye_tracking_permission_or_feature_enable; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\008_p228_OVRTelemetry.TelemetryClient$$.ctor.c

### 9. OVRTelemetry.NullTelemetryClient$$MarkerPointCached

- Manual priority score: 228
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; attempted_use
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_1; telemetry_or_network_hits_4; attempted_eye_tracking_permission_or_feature_enable; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\009_p228_OVRTelemetry.NullTelemetryClient$$MarkerPointCached.c

### 10. OVRTelemetry.NullTelemetryClient$$MarkerPoint

- Manual priority score: 228
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; attempted_use
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_1; telemetry_or_network_hits_4; attempted_eye_tracking_permission_or_feature_enable; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\010_p228_OVRTelemetry.NullTelemetryClient$$MarkerPoint.c

### 11. OVRTelemetry.NullTelemetryClient$$MarkerPoint

- Manual priority score: 228
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; attempted_use
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_1; telemetry_or_network_hits_4; attempted_eye_tracking_permission_or_feature_enable; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\011_p228_OVRTelemetry.NullTelemetryClient$$MarkerPoint.c

### 12. OVRTelemetry.NullTelemetryClient$$MarkerEnd

- Manual priority score: 228
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; attempted_use
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_1; telemetry_or_network_hits_4; attempted_eye_tracking_permission_or_feature_enable; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\012_p228_OVRTelemetry.NullTelemetryClient$$MarkerEnd.c

### 13. OVRTelemetry.NullTelemetryClient$$MarkerAnnotation

- Manual priority score: 228
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; attempted_use
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_1; telemetry_or_network_hits_4; attempted_eye_tracking_permission_or_feature_enable; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\013_p228_OVRTelemetry.NullTelemetryClient$$MarkerAnnotation.c

### 14. OVRTelemetry.NullTelemetryClient$$MarkerAnnotation

- Manual priority score: 228
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; attempted_use
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_1; telemetry_or_network_hits_4; attempted_eye_tracking_permission_or_feature_enable; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\014_p228_OVRTelemetry.NullTelemetryClient$$MarkerAnnotation.c

### 15. OVRTelemetry.NullTelemetryClient$$DestroyMarkerHandle

- Manual priority score: 228
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; attempted_use
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_1; telemetry_or_network_hits_4; attempted_eye_tracking_permission_or_feature_enable; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\015_p228_OVRTelemetry.NullTelemetryClient$$DestroyMarkerHandle.c

### 16. OVRTelemetry.NullTelemetryClient$$CreateMarkerHandle

- Manual priority score: 228
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; attempted_use
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_1; telemetry_or_network_hits_4; attempted_eye_tracking_permission_or_feature_enable; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\016_p228_OVRTelemetry.NullTelemetryClient$$CreateMarkerHandle.c

### 17. System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$Dispose

- Manual priority score: 227
- Manual tier: A_must_review
- Original scanner score: 175
- Original scanner label: 90_plus_confirmed_gaze_retrieval_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; attempted_use; active_gaze_retrieval
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_eye_source; attempted_eye_tracking_permission_or_feature_enable; active_gaze_state_retrieval_with_validity_and_pose; functionality_gaze_retrieval_or_extraction
- Priority reasons: base_scanner_score_175; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\017_p227_System.Array.InternalEnumerator_OVRPlugin.EyeGazeState_$$Dispose.c

### 18. OVRPlugin$$StopColocationSessionAdvertisement

- Manual priority score: 224
- Manual tier: A_must_review
- Original scanner score: 119
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_21; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_119; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\018_p224_OVRPlugin$$StopColocationSessionAdvertisement.c

### 19. Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray

- Manual priority score: 223
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; paired_state_refs; data_collection; telemetry
- Evidence: validity_or_gating_hits_3; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_structure_only; strong_file_logging_hits_2; telemetry_or_network_hits_4; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\019_p223_Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray.c

### 20. OVRPlugin$$GetSpaceMarkerPayload

- Manual priority score: 221
- Manual tier: A_must_review
- Original scanner score: 116
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_3; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_116; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\020_p221_OVRPlugin$$GetSpaceMarkerPayload.c

### 21. Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray

- Manual priority score: 220
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; data_collection; telemetry; frame_behavior
- Evidence: validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_4; strong_file_logging_hits_2; telemetry_or_network_hits_2; frame_or_lifecycle_behavior; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\021_p220_Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray.c

### 22. System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.get_Current

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 167
- Original scanner label: 90_plus_confirmed_gaze_retrieval_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; attempted_use; active_gaze_retrieval
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; attempted_eye_tracking_permission_or_feature_enable; active_gaze_state_retrieval_with_validity_and_pose; functionality_gaze_retrieval_or_extraction
- Priority reasons: base_scanner_score_167; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\022_p219_System.Array.InternalEnumerator_OVRPlugin.EyeGazeState_$$System.Collections.IEnumerator.get_Current.c

### 23. System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.Reset

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 167
- Original scanner label: 90_plus_confirmed_gaze_retrieval_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; attempted_use; active_gaze_retrieval
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; attempted_eye_tracking_permission_or_feature_enable; active_gaze_state_retrieval_with_validity_and_pose; functionality_gaze_retrieval_or_extraction
- Priority reasons: base_scanner_score_167; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\023_p219_System.Array.InternalEnumerator_OVRPlugin.EyeGazeState_$$System.Collections.IEnumerator.Reset.c

### 24. System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$MoveNext

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 167
- Original scanner label: 90_plus_confirmed_gaze_retrieval_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; attempted_use; active_gaze_retrieval
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; attempted_eye_tracking_permission_or_feature_enable; active_gaze_state_retrieval_with_validity_and_pose; functionality_gaze_retrieval_or_extraction
- Priority reasons: base_scanner_score_167; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\024_p219_System.Array.InternalEnumerator_OVRPlugin.EyeGazeState_$$MoveNext.c

### 25. System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$.ctor

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 167
- Original scanner label: 90_plus_confirmed_gaze_retrieval_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; attempted_use; active_gaze_retrieval
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; attempted_eye_tracking_permission_or_feature_enable; active_gaze_state_retrieval_with_validity_and_pose; functionality_gaze_retrieval_or_extraction
- Priority reasons: base_scanner_score_167; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\025_p219_System.Array.InternalEnumerator_OVRPlugin.EyeGazeState_$$.ctor.c

### 26. OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_4; validity_or_gating_hits_4; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\026_p219_OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled.c

### 27. Meta.XR.MRUtilityKit.BuildingBlocks.VisualizeEnvRaycast$$VisualizeRay

- Manual priority score: 216
- Manual tier: A_must_review
- Original scanner score: 145
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; validity_gate; pose_vector; ray_interaction; structure_combo
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_4; ray_or_cast_sink_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_145; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\027_p216_Meta.XR.MRUtilityKit.BuildingBlocks.VisualizeEnvRaycast$$VisualizeRay.c

### 28. OVRPlugin$$StartColocationSessionDiscovery

- Manual priority score: 215
- Manual tier: A_must_review
- Original scanner score: 113
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_21; telemetry_or_network_hits_2; frame_or_lifecycle_behavior; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_113; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\028_p215_OVRPlugin$$StartColocationSessionDiscovery.c

### 29. OVRPlugin$$StartColocationSessionAdvertisement

- Manual priority score: 215
- Manual tier: A_must_review
- Original scanner score: 113
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_21; telemetry_or_network_hits_2; frame_or_lifecycle_behavior; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_113; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\029_p215_OVRPlugin$$StartColocationSessionAdvertisement.c

### 30. Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray

- Manual priority score: 215
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; data_collection; telemetry
- Evidence: validity_or_gating_hits_20; strong_pose_or_ray_construction_hits_4; strong_file_logging_hits_2; telemetry_or_network_hits_21; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\padelvrtraining\manual-review-pack\A_must_review\030_p215_Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray.c
