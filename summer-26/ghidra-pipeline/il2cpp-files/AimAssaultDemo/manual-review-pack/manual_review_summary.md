# Manual Review Pack Summary: AimAssaultDemo

Selected functions: 100

## Tier counts

- A_must_review: 100

## Top functions

### 1. FUN_07266314

- Manual priority score: 481
- Manual tier: A_must_review
- Original scanner score: 315
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; ui_interaction; telemetry; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_10; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_7; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_8; ui_or_gameplay_sink_hits_14; telemetry_or_network_hits_14; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_20; functionality_data_collection_or_telemetry_hits_12
- Priority reasons: base_scanner_score_315; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\001_p481_FUN_07266314.c

### 2. UnityEngine.XR.ARFoundation.ARMeshManager$$OnDrawGizmosSelected

- Manual priority score: 472
- Manual tier: A_must_review
- Original scanner score: 301
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_21; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_5; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_18; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_10; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_21; functionality_data_collection_or_telemetry_hits_7
- Priority reasons: base_scanner_score_301; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\002_p472_UnityEngine.XR.ARFoundation.ARMeshManager$$OnDrawGizmosSelected.c

### 3. UnityEngine.XR.ARFoundation.ARFaceMeshVisualizer$$SetMeshTopology

- Manual priority score: 458
- Manual tier: A_must_review
- Original scanner score: 300
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_9; validity_or_gating_hits_3; strong_pose_or_ray_construction_hits_7; ray_or_cast_sink_hits_7; ui_or_gameplay_sink_hits_12; telemetry_or_network_hits_13; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_17; functionality_data_collection_or_telemetry_hits_11
- Priority reasons: base_scanner_score_300; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\003_p458_UnityEngine.XR.ARFoundation.ARFaceMeshVisualizer$$SetMeshTopology.c

### 4. UnityEngine.XR.ARFoundation.ARMeshManager$$UpdateMeshInfos

- Manual priority score: 443
- Manual tier: A_must_review
- Original scanner score: 280
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_21; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_4; ray_or_cast_sink_hits_13; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_8; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_21; functionality_data_collection_or_telemetry_hits_5
- Priority reasons: base_scanner_score_280; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\004_p443_UnityEngine.XR.ARFoundation.ARMeshManager$$UpdateMeshInfos.c

### 5. UnityEngine.XR.ARFoundation.ARMeshManager$$Update

- Manual priority score: 443
- Manual tier: A_must_review
- Original scanner score: 280
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_21; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_16; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_9; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_21; functionality_data_collection_or_telemetry_hits_6
- Priority reasons: base_scanner_score_280; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\005_p443_UnityEngine.XR.ARFoundation.ARMeshManager$$Update.c

### 6. UnityEngine.XR.ARSubsystems.XRFace$$get_leftEyePose

- Manual priority score: 442
- Manual tier: A_must_review
- Original scanner score: 296
- Original scanner label: 90_plus_confirmed_eye_data_collection_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; structure_combo; active_gaze_retrieval; active_gaze_interaction; active_gaze_collection; possible_biometrics
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_2; ray_or_cast_sink_hits_2; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_1; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; active_gaze_state_retrieval_with_validity_and_pose; active_gaze_values_flow_to_interaction_sink; active_gaze_values_flow_to_collection_or_telemetry_sink; possible_biometric_feature_from_active_eye_context; functionality_gaze_interaction_hits_3; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_296; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\006_p442_UnityEngine.XR.ARSubsystems.XRFace$$get_leftEyePose.c

### 7. FUN_07269794

- Manual priority score: 427
- Manual tier: A_must_review
- Original scanner score: 256
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_21; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_5; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_18; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_10; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_interaction_hits_21; functionality_data_collection_or_telemetry_hits_7
- Priority reasons: base_scanner_score_256; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\007_p427_FUN_07269794.c

### 8. UnityEngine.XR.ARFoundation.ARCameraBackground$$SetShaderKeywords

- Manual priority score: 425
- Manual tier: A_must_review
- Original scanner score: 262
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_14; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_21; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_13; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_21; functionality_data_collection_or_telemetry_hits_6
- Priority reasons: base_scanner_score_262; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\008_p425_UnityEngine.XR.ARFoundation.ARCameraBackground$$SetShaderKeywords.c

### 9. UnityEngine.XR.ARFoundation.ARCameraBackground$$SetCameraDepthTextureMode

- Manual priority score: 425
- Manual tier: A_must_review
- Original scanner score: 262
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_14; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_6; ray_or_cast_sink_hits_21; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_13; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_21; functionality_data_collection_or_telemetry_hits_6
- Priority reasons: base_scanner_score_262; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\009_p425_UnityEngine.XR.ARFoundation.ARCameraBackground$$SetCameraDepthTextureMode.c

### 10. UnityEngine.XR.ARFoundation.ARCameraBackground$$OnCameraFrameReceived

- Manual priority score: 425
- Manual tier: A_must_review
- Original scanner score: 262
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_15; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_7; ray_or_cast_sink_hits_21; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_14; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_21; functionality_data_collection_or_telemetry_hits_7
- Priority reasons: base_scanner_score_262; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\010_p425_UnityEngine.XR.ARFoundation.ARCameraBackground$$OnCameraFrameReceived.c

### 11. UnityEngine.XR.ARFoundation.ARMeshManager$$GetTrackableId

- Manual priority score: 422
- Manual tier: A_must_review
- Original scanner score: 264
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_13; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_3; ray_or_cast_sink_hits_7; ui_or_gameplay_sink_hits_11; telemetry_or_network_hits_3; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_15; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_264; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\011_p422_UnityEngine.XR.ARFoundation.ARMeshManager$$GetTrackableId.c

### 12. UnityEngine.XR.ARFoundation.ARMeshManager$$GetOrCreateMeshFilter

- Manual priority score: 422
- Manual tier: A_must_review
- Original scanner score: 264
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_13; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_3; ray_or_cast_sink_hits_7; ui_or_gameplay_sink_hits_11; telemetry_or_network_hits_3; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_15; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_264; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\012_p422_UnityEngine.XR.ARFoundation.ARMeshManager$$GetOrCreateMeshFilter.c

### 13. UnityEngine.XR.ARFoundation.ARMeshManager$$Generate

- Manual priority score: 422
- Manual tier: A_must_review
- Original scanner score: 264
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_13; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_3; ray_or_cast_sink_hits_7; ui_or_gameplay_sink_hits_12; telemetry_or_network_hits_3; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_16; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_264; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\013_p422_UnityEngine.XR.ARFoundation.ARMeshManager$$Generate.c

### 14. UnityEngine.XR.ARFoundation.ARCameraBackground$$OnOcclusionFrameReceived

- Manual priority score: 416
- Manual tier: A_must_review
- Original scanner score: 262
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_7; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_5; ray_or_cast_sink_hits_19; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_7; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_21; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_262; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\014_p416_UnityEngine.XR.ARFoundation.ARCameraBackground$$OnOcclusionFrameReceived.c

### 15. UnityEngine.XR.ARFoundation.ARCameraBackground$$.ctor

- Manual priority score: 416
- Manual tier: A_must_review
- Original scanner score: 262
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_4; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_4; ray_or_cast_sink_hits_14; ui_or_gameplay_sink_hits_19; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_21; functionality_data_collection_or_telemetry_hits_3
- Priority reasons: base_scanner_score_262; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\015_p416_UnityEngine.XR.ARFoundation.ARCameraBackground$$.ctor.c

### 16. UnityEngine.XR.ARFoundation.ARCameraBackground$$.cctor

- Manual priority score: 416
- Manual tier: A_must_review
- Original scanner score: 262
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_4; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_4; ray_or_cast_sink_hits_14; ui_or_gameplay_sink_hits_19; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_21; functionality_data_collection_or_telemetry_hits_3
- Priority reasons: base_scanner_score_262; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\016_p416_UnityEngine.XR.ARFoundation.ARCameraBackground$$.cctor.c

### 17. FUN_072586ec

- Manual priority score: 415
- Manual tier: A_must_review
- Original scanner score: 244
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_17; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_7; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_21; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_16; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_interaction_hits_21; functionality_data_collection_or_telemetry_hits_8
- Priority reasons: base_scanner_score_244; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\017_p415_FUN_072586ec.c

### 18. thunk_FUN_071fa2fc

- Manual priority score: 414
- Manual tier: A_must_review
- Original scanner score: 289
- Original scanner label: 90_plus_confirmed_eye_data_collection_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; structure_combo; ordered_structure; active_gaze_retrieval; active_gaze_collection; possible_biometrics
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_6; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; active_gaze_state_retrieval_with_validity_and_pose; active_gaze_values_flow_to_collection_or_telemetry_sink; possible_biometric_feature_from_active_eye_context; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_2; functionality_possible_biometrics_hits_4
- Priority reasons: base_scanner_score_289; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\018_p414_thunk_FUN_071fa2fc.c

### 19. thunk_FUN_071fa2fc

- Manual priority score: 414
- Manual tier: A_must_review
- Original scanner score: 289
- Original scanner label: 90_plus_confirmed_eye_data_collection_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; structure_combo; ordered_structure; active_gaze_retrieval; active_gaze_collection; possible_biometrics
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_6; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; active_gaze_state_retrieval_with_validity_and_pose; active_gaze_values_flow_to_collection_or_telemetry_sink; possible_biometric_feature_from_active_eye_context; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_2; functionality_possible_biometrics_hits_4
- Priority reasons: base_scanner_score_289; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\019_p414_thunk_FUN_071fa2fc.c

### 20. Unity.VisualScripting.FlowGraphData$$.ctor

- Manual priority score: 414
- Manual tier: A_must_review
- Original scanner score: 289
- Original scanner label: 90_plus_confirmed_eye_data_collection_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; structure_combo; ordered_structure; active_gaze_retrieval; active_gaze_collection; possible_biometrics
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_6; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; active_gaze_state_retrieval_with_validity_and_pose; active_gaze_values_flow_to_collection_or_telemetry_sink; possible_biometric_feature_from_active_eye_context; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_2; functionality_possible_biometrics_hits_4
- Priority reasons: base_scanner_score_289; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\020_p414_Unity.VisualScripting.FlowGraphData$$.ctor.c

### 21. FUN_071fa2fc

- Manual priority score: 414
- Manual tier: A_must_review
- Original scanner score: 289
- Original scanner label: 90_plus_confirmed_eye_data_collection_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; structure_combo; ordered_structure; active_gaze_retrieval; active_gaze_collection; possible_biometrics
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_6; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; active_gaze_state_retrieval_with_validity_and_pose; active_gaze_values_flow_to_collection_or_telemetry_sink; possible_biometric_feature_from_active_eye_context; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_2; functionality_possible_biometrics_hits_4
- Priority reasons: base_scanner_score_289; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\021_p414_FUN_071fa2fc.c

### 22. UnityEngine.XR.ARFoundation.ARFaceMeshVisualizer$$UpdateVisibility

- Manual priority score: 392
- Manual tier: A_must_review
- Original scanner score: 229
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_4; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_4; ray_or_cast_sink_hits_3; ui_or_gameplay_sink_hits_5; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_7; functionality_data_collection_or_telemetry_hits_5
- Priority reasons: base_scanner_score_229; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\022_p392_UnityEngine.XR.ARFoundation.ARFaceMeshVisualizer$$UpdateVisibility.c

### 23. UnityEngine.XR.ARFoundation.ARFaceMeshVisualizer$$OnUpdated

- Manual priority score: 392
- Manual tier: A_must_review
- Original scanner score: 229
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_4; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_4; ray_or_cast_sink_hits_3; ui_or_gameplay_sink_hits_5; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_7; functionality_data_collection_or_telemetry_hits_5
- Priority reasons: base_scanner_score_229; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\023_p392_UnityEngine.XR.ARFoundation.ARFaceMeshVisualizer$$OnUpdated.c

### 24. UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs$$set_face

- Manual priority score: 388
- Manual tier: A_must_review
- Original scanner score: 225
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_4; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_3; ray_or_cast_sink_hits_3; ui_or_gameplay_sink_hits_5; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_7; functionality_data_collection_or_telemetry_hits_5
- Priority reasons: base_scanner_score_225; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\024_p388_UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs$$set_face.c

### 25. UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs$$op_Inequality

- Manual priority score: 388
- Manual tier: A_must_review
- Original scanner score: 225
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_4; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_3; ray_or_cast_sink_hits_3; ui_or_gameplay_sink_hits_5; telemetry_or_network_hits_5; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_7; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_225; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\025_p388_UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs$$op_Inequality.c

### 26. UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs$$op_Equality

- Manual priority score: 388
- Manual tier: A_must_review
- Original scanner score: 225
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_4; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_3; ray_or_cast_sink_hits_3; ui_or_gameplay_sink_hits_5; telemetry_or_network_hits_5; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_7; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_225; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\026_p388_UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs$$op_Equality.c

### 27. UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs$$get_face

- Manual priority score: 388
- Manual tier: A_must_review
- Original scanner score: 225
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_4; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_3; ray_or_cast_sink_hits_3; ui_or_gameplay_sink_hits_5; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_7; functionality_data_collection_or_telemetry_hits_5
- Priority reasons: base_scanner_score_225; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\027_p388_UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs$$get_face.c

### 28. UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs$$GetHashCode

- Manual priority score: 388
- Manual tier: A_must_review
- Original scanner score: 225
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_4; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_3; ray_or_cast_sink_hits_3; ui_or_gameplay_sink_hits_5; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_7; functionality_data_collection_or_telemetry_hits_5
- Priority reasons: base_scanner_score_225; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\028_p388_UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs$$GetHashCode.c

### 29. UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs$$Equals

- Manual priority score: 388
- Manual tier: A_must_review
- Original scanner score: 225
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_4; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_3; ray_or_cast_sink_hits_3; ui_or_gameplay_sink_hits_5; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_7; functionality_data_collection_or_telemetry_hits_5
- Priority reasons: base_scanner_score_225; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\029_p388_UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs$$Equals.c

### 30. UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs$$Equals

- Manual priority score: 388
- Manual tier: A_must_review
- Original scanner score: 225
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_4; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_3; ray_or_cast_sink_hits_3; ui_or_gameplay_sink_hits_5; telemetry_or_network_hits_5; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_7; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_225; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\AimAssaultDemo\manual-review-pack\A_must_review\030_p388_UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs$$Equals.c
