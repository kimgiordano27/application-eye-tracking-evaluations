# Manual Review Pack Summary: spatialPiano

Selected functions: 100

## Tier counts

- A_must_review: 100

## Top functions

### 1. FUN_060127e0

- Manual priority score: 457
- Manual tier: A_must_review
- Original scanner score: 286
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_18; validity_or_gating_hits_13; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_12; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_4; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_permission_setup; functionality_gaze_interaction_hits_10; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_286; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\001_p457_FUN_060127e0.c

### 2. UnityEngine.XR.ARSubsystems.XRFace$$get_rightEyePose

- Manual priority score: 454
- Manual tier: A_must_review
- Original scanner score: 312
- Original scanner label: 90_plus_confirmed_eye_data_collection_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; telemetry; frame_behavior; structure_combo; active_gaze_retrieval; active_gaze_interaction; active_gaze_collection; possible_biometrics
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_5; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; ui_or_gameplay_sink_hits_5; telemetry_or_network_hits_9; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; active_gaze_state_retrieval_with_validity_and_pose; active_gaze_values_flow_to_interaction_sink; active_gaze_values_flow_to_collection_or_telemetry_sink; possible_biometric_feature_from_active_eye_context; functionality_gaze_interaction_hits_5; functionality_data_collection_or_telemetry_hits_9; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_312; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\002_p454_UnityEngine.XR.ARSubsystems.XRFace$$get_rightEyePose.c

### 3. UnityEngine.XR.ARSubsystems.XRFace$$get_leftEyePose

- Manual priority score: 454
- Manual tier: A_must_review
- Original scanner score: 312
- Original scanner label: 90_plus_confirmed_eye_data_collection_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; telemetry; frame_behavior; structure_combo; active_gaze_retrieval; active_gaze_interaction; active_gaze_collection; possible_biometrics
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_5; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; ui_or_gameplay_sink_hits_5; telemetry_or_network_hits_9; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; active_gaze_state_retrieval_with_validity_and_pose; active_gaze_values_flow_to_interaction_sink; active_gaze_values_flow_to_collection_or_telemetry_sink; possible_biometric_feature_from_active_eye_context; functionality_gaze_interaction_hits_5; functionality_data_collection_or_telemetry_hits_9; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_312; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\003_p454_UnityEngine.XR.ARSubsystems.XRFace$$get_leftEyePose.c

### 4. UnityEngine.Rendering.CommandBuffer$$Internal_BuildRayTracingAccelerationStructure

- Manual priority score: 437
- Manual tier: A_must_review
- Original scanner score: 266
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_17; validity_or_gating_hits_13; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_12; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_4; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_permission_setup; functionality_gaze_interaction_hits_10; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_266; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\004_p437_UnityEngine.Rendering.CommandBuffer$$Internal_BuildRayTracingAccelerationStructure.c

### 5. System.Xml.BinXmlDateTime$$XsdKatmaiDateTimeOffsetToString

- Manual priority score: 435
- Manual tier: A_must_review
- Original scanner score: 275
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_4; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; ray_or_cast_sink_hits_2; ui_or_gameplay_sink_hits_11; telemetry_or_network_hits_4; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_2; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_275; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\005_p435_System.Xml.BinXmlDateTime$$XsdKatmaiDateTimeOffsetToString.c

### 6. System.Xml.BinXmlDateTime$$XsdKatmaiDateOffsetToString

- Manual priority score: 435
- Manual tier: A_must_review
- Original scanner score: 275
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_4; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; ray_or_cast_sink_hits_2; ui_or_gameplay_sink_hits_11; telemetry_or_network_hits_4; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_2; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_275; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\006_p435_System.Xml.BinXmlDateTime$$XsdKatmaiDateOffsetToString.c

### 7. Unity.AppUI.UI.InputLabel$$.ctor

- Manual priority score: 424
- Manual tier: A_must_review
- Original scanner score: 253
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_21; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_6; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_14; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_interaction_hits_16; functionality_data_collection_or_telemetry_hits_10
- Priority reasons: base_scanner_score_253; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\007_p424_Unity.AppUI.UI.InputLabel$$.ctor.c

### 8. Unity.AppUI.UI.InputLabel$$.ctor

- Manual priority score: 424
- Manual tier: A_must_review
- Original scanner score: 253
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_21; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_6; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_14; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_interaction_hits_16; functionality_data_collection_or_telemetry_hits_10
- Priority reasons: base_scanner_score_253; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\008_p424_Unity.AppUI.UI.InputLabel$$.ctor.c

### 9. FUN_0589f350

- Manual priority score: 424
- Manual tier: A_must_review
- Original scanner score: 253
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_21; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_6; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_14; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_interaction_hits_16; functionality_data_collection_or_telemetry_hits_10
- Priority reasons: base_scanner_score_253; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\009_p424_FUN_0589f350.c

### 10. FUN_05d535e8

- Manual priority score: 423
- Manual tier: A_must_review
- Original scanner score: 285
- Original scanner label: 90_plus_confirmed_eye_data_collection_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; frame_behavior; structure_combo; active_gaze_retrieval; active_gaze_collection; possible_biometrics
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_eye_source; telemetry_or_network_hits_5; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; active_gaze_state_retrieval_with_validity_and_pose; active_gaze_values_flow_to_collection_or_telemetry_sink; possible_biometric_feature_from_active_eye_context; functionality_permission_setup; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_5; functionality_possible_biometrics_hits_4
- Priority reasons: base_scanner_score_285; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\010_p423_FUN_05d535e8.c

### 11. Unity.AppUI.UI.InputLabel.UxmlSerializedData$$Register

- Manual priority score: 422
- Manual tier: A_must_review
- Original scanner score: 263
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_21; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_9; telemetry_or_network_hits_18; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_10; functionality_data_collection_or_telemetry_hits_8
- Priority reasons: base_scanner_score_263; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\011_p422_Unity.AppUI.UI.InputLabel.UxmlSerializedData$$Register.c

### 12. Unity.AppUI.UI.InputLabel$$.cctor

- Manual priority score: 422
- Manual tier: A_must_review
- Original scanner score: 263
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_21; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_6; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_12; telemetry_or_network_hits_18; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_13; functionality_data_collection_or_telemetry_hits_8
- Priority reasons: base_scanner_score_263; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\012_p422_Unity.AppUI.UI.InputLabel$$.cctor.c

### 13. Unity.AppUI.UI.Progress$$.ctor

- Manual priority score: 418
- Manual tier: A_must_review
- Original scanner score: 259
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_11; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_6; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_259; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\013_p418_Unity.AppUI.UI.Progress$$.ctor.c

### 14. Unity.AppUI.UI.LinearProgress$$GenerateTextures

- Manual priority score: 418
- Manual tier: A_must_review
- Original scanner score: 259
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_7; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; telemetry_or_network_hits_5; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_6; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_259; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\014_p418_Unity.AppUI.UI.LinearProgress$$GenerateTextures.c

### 15. Unity.AppUI.UI.LinearProgress$$.ctor

- Manual priority score: 418
- Manual tier: A_must_review
- Original scanner score: 259
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_11; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_6; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_259; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\015_p418_Unity.AppUI.UI.LinearProgress$$.ctor.c

### 16. Unity.AppUI.UI.IntField.UxmlSerializedData$$Register

- Manual priority score: 418
- Manual tier: A_must_review
- Original scanner score: 259
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_11; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; telemetry_or_network_hits_8; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_6; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_259; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\016_p418_Unity.AppUI.UI.IntField.UxmlSerializedData$$Register.c

### 17. Unity.AppUI.UI.IntField.UxmlSerializedData$$CreateInstance

- Manual priority score: 418
- Manual tier: A_must_review
- Original scanner score: 259
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_11; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; telemetry_or_network_hits_8; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_6; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_259; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\017_p418_Unity.AppUI.UI.IntField.UxmlSerializedData$$CreateInstance.c

### 18. Unity.AppUI.UI.IntField.UxmlSerializedData$$.ctor

- Manual priority score: 418
- Manual tier: A_must_review
- Original scanner score: 259
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_11; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; telemetry_or_network_hits_8; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_6; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_259; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\018_p418_Unity.AppUI.UI.IntField.UxmlSerializedData$$.ctor.c

### 19. Unity.AppUI.UI.IntField$$ParseValueToString

- Manual priority score: 418
- Manual tier: A_must_review
- Original scanner score: 259
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_12; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_6; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_259; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\019_p418_Unity.AppUI.UI.IntField$$ParseValueToString.c

### 20. Unity.AppUI.UI.IntField$$ParseStringToValue

- Manual priority score: 418
- Manual tier: A_must_review
- Original scanner score: 259
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_13; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_6; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_259; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\020_p418_Unity.AppUI.UI.IntField$$ParseStringToValue.c

### 21. Unity.AppUI.UI.IntField$$ParseRawValueToString

- Manual priority score: 418
- Manual tier: A_must_review
- Original scanner score: 259
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_12; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_6; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_259; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\021_p418_Unity.AppUI.UI.IntField$$ParseRawValueToString.c

### 22. Unity.AppUI.UI.IntField$$Min

- Manual priority score: 418
- Manual tier: A_must_review
- Original scanner score: 259
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_12; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_6; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_259; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\022_p418_Unity.AppUI.UI.IntField$$Min.c

### 23. Unity.AppUI.UI.IntField$$Max

- Manual priority score: 418
- Manual tier: A_must_review
- Original scanner score: 259
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_12; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_6; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_259; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\023_p418_Unity.AppUI.UI.IntField$$Max.c

### 24. Unity.AppUI.UI.IntField$$Increment

- Manual priority score: 418
- Manual tier: A_must_review
- Original scanner score: 259
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_12; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_6; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_259; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\024_p418_Unity.AppUI.UI.IntField$$Increment.c

### 25. Unity.AppUI.UI.IntField$$GetIncrementFactor

- Manual priority score: 418
- Manual tier: A_must_review
- Original scanner score: 259
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_12; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_6; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_259; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\025_p418_Unity.AppUI.UI.IntField$$GetIncrementFactor.c

### 26. Unity.AppUI.UI.IntField$$AreEqual

- Manual priority score: 418
- Manual tier: A_must_review
- Original scanner score: 259
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_12; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_6; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_259; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\026_p418_Unity.AppUI.UI.IntField$$AreEqual.c

### 27. Unity.AppUI.UI.IntField$$.ctor

- Manual priority score: 418
- Manual tier: A_must_review
- Original scanner score: 259
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_12; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_6; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_259; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\027_p418_Unity.AppUI.UI.IntField$$.ctor.c

### 28. Unity.AppUI.UI.InputLabel.UxmlSerializedData$$Deserialize

- Manual priority score: 418
- Manual tier: A_must_review
- Original scanner score: 259
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_15; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_7; telemetry_or_network_hits_15; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_8; functionality_data_collection_or_telemetry_hits_5
- Priority reasons: base_scanner_score_259; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\028_p418_Unity.AppUI.UI.InputLabel.UxmlSerializedData$$Deserialize.c

### 29. Unity.AppUI.UI.InputLabel.UxmlSerializedData$$CreateInstance

- Manual priority score: 418
- Manual tier: A_must_review
- Original scanner score: 259
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_15; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_7; telemetry_or_network_hits_14; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_8; functionality_data_collection_or_telemetry_hits_6
- Priority reasons: base_scanner_score_259; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\029_p418_Unity.AppUI.UI.InputLabel.UxmlSerializedData$$CreateInstance.c

### 30. Unity.AppUI.UI.InputLabel.UxmlSerializedData$$.ctor

- Manual priority score: 418
- Manual tier: A_must_review
- Original scanner score: 259
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_12; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; telemetry_or_network_hits_8; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_6; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_259; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\spatialPiano\manual-review-pack\A_must_review\030_p418_Unity.AppUI.UI.InputLabel.UxmlSerializedData$$.ctor.c
