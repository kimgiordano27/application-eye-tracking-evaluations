# Manual Review Pack Summary: IRONGUARDHomecoming

Selected functions: 100

## Tier counts

- A_must_review: 100

## Top functions

### 1. System.Array$$InternalArray__Insert<OVRPlugin.EyeGazeState>

- Manual priority score: 460
- Manual tier: A_must_review
- Original scanner score: 315
- Original scanner label: 90_plus_confirmed_eye_data_collection_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ui_interaction; telemetry; structure_combo; attempted_use; active_gaze_retrieval; active_gaze_interaction; active_gaze_collection
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_8; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_21; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; attempted_eye_tracking_permission_or_feature_enable; active_gaze_state_retrieval_with_validity_and_pose; active_gaze_values_flow_to_interaction_sink; active_gaze_values_flow_to_collection_or_telemetry_sink; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_2; functionality_data_collection_or_telemetry_hits_21
- Priority reasons: base_scanner_score_315; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\001_p460_System.Array$$InternalArray__Insert_OVRPlugin.EyeGazeState_.c

### 2. FUN_0391a0a8

- Manual priority score: 452
- Manual tier: A_must_review
- Original scanner score: 281
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_6; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_21; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_3; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_2; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_7; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_281; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\002_p452_FUN_0391a0a8.c

### 3. FUN_035b15c0

- Manual priority score: 425
- Manual tier: A_must_review
- Original scanner score: 258
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; data_collection; telemetry; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_15; strong_pose_or_ray_construction_hits_10; paired_field_refs_with_eye_source; strong_file_logging_hits_4; telemetry_or_network_hits_3; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; functionality_data_collection_or_telemetry_hits_7
- Priority reasons: base_scanner_score_258; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\003_p425_FUN_035b15c0.c

### 4. FUN_03689e38

- Manual priority score: 413
- Manual tier: A_must_review
- Original scanner score: 262
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_18; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_10; ray_or_cast_sink_hits_6; telemetry_or_network_hits_4; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; functionality_permission_setup; functionality_gaze_interaction_hits_4; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_262; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\004_p413_FUN_03689e38.c

### 5. FUN_03fefa50

- Manual priority score: 409
- Manual tier: A_must_review
- Original scanner score: 274
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; telemetry; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_4; validity_or_gating_hits_17; strong_pose_or_ray_construction_hits_8; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_274; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\005_p409_FUN_03fefa50.c

### 6. FUN_033f0654

- Manual priority score: 405
- Manual tier: A_must_review
- Original scanner score: 265
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; telemetry; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_3; validity_or_gating_hits_12; strong_pose_or_ray_construction_hits_9; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_265; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\006_p405_FUN_033f0654.c

### 7. UnityEngine.TextCore.Text.TextGenerator$$ValidateHtmlTag

- Manual priority score: 389
- Manual tier: A_must_review
- Original scanner score: 254
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; telemetry; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_4; validity_or_gating_hits_19; strong_pose_or_ray_construction_hits_8; ui_or_gameplay_sink_hits_3; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_3
- Priority reasons: base_scanner_score_254; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\007_p389_UnityEngine.TextCore.Text.TextGenerator$$ValidateHtmlTag.c

### 8. FUN_03a6136c

- Manual priority score: 385
- Manual tier: A_must_review
- Original scanner score: 237
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_7; validity_or_gating_hits_13; strong_pose_or_ray_construction_hits_21; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_1; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_2; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_237; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\008_p385_FUN_03a6136c.c

### 9. OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$EndInvoke

- Manual priority score: 384
- Manual tier: A_must_review
- Original scanner score: 241
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; telemetry; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_7; validity_or_gating_hits_9; strong_pose_or_ray_construction_hits_9; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; functionality_gaze_interaction_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_241; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\009_p384_OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$EndInvoke.c

### 10. FUN_04199220

- Manual priority score: 383
- Manual tier: A_must_review
- Original scanner score: 244
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_4; validity_or_gating_hits_14; strong_pose_or_ray_construction_hits_8; paired_field_refs_with_eye_source; telemetry_or_network_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_244; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\010_p383_FUN_04199220.c

### 11. System.Array$$InternalArray__ICollection_Remove<OVRPlugin.EyeGazeState>

- Manual priority score: 378
- Manual tier: A_must_review
- Original scanner score: 253
- Original scanner label: 90_plus_confirmed_eye_data_collection_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; structure_combo; attempted_use; active_gaze_retrieval; active_gaze_collection
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_1; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; attempted_eye_tracking_permission_or_feature_enable; active_gaze_state_retrieval_with_validity_and_pose; active_gaze_values_flow_to_collection_or_telemetry_sink; functionality_gaze_retrieval_or_extraction
- Priority reasons: base_scanner_score_253; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\011_p378_System.Array$$InternalArray__ICollection_Remove_OVRPlugin.EyeGazeState_.c

### 12. FUN_02f08588

- Manual priority score: 378
- Manual tier: A_must_review
- Original scanner score: 239
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_4; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_8; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_239; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\012_p378_FUN_02f08588.c

### 13. System.Resources.ResourceReader$$SkipString

- Manual priority score: 378
- Manual tier: A_must_review
- Original scanner score: 227
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_11; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_20; ray_or_cast_sink_hits_4; telemetry_or_network_hits_1; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_4; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_227; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\013_p378_System.Resources.ResourceReader$$SkipString.c

### 14. System.Resources.ResourceReader$$GetNamePosition

- Manual priority score: 378
- Manual tier: A_must_review
- Original scanner score: 227
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_11; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_14; ray_or_cast_sink_hits_4; telemetry_or_network_hits_1; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_4; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_227; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\014_p378_System.Resources.ResourceReader$$GetNamePosition.c

### 15. System.Resources.ResourceReader$$GetNameHash

- Manual priority score: 378
- Manual tier: A_must_review
- Original scanner score: 227
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_11; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_16; ray_or_cast_sink_hits_4; telemetry_or_network_hits_1; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_4; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_227; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\015_p378_System.Resources.ResourceReader$$GetNameHash.c

### 16. FUN_034d5bb8

- Manual priority score: 376
- Manual tier: A_must_review
- Original scanner score: 233
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; telemetry; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_3; strong_pose_or_ray_construction_hits_14; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_1; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; functionality_gaze_interaction_hits_2; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_233; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\016_p376_FUN_034d5bb8.c

### 17. FUN_03f86d3c

- Manual priority score: 373
- Manual tier: A_must_review
- Original scanner score: 234
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_16; paired_field_refs_with_eye_source; telemetry_or_network_hits_1; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_234; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\017_p373_FUN_03f86d3c.c

### 18. FUN_0329dc0c

- Manual priority score: 369
- Manual tier: A_must_review
- Original scanner score: 233
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_6; validity_or_gating_hits_9; strong_pose_or_ray_construction_hits_10; telemetry_or_network_hits_2; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_233; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\018_p369_FUN_0329dc0c.c

### 19. FUN_039bb9e0

- Manual priority score: 368
- Manual tier: A_must_review
- Original scanner score: 235
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; data_collection; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_20; strong_pose_or_ray_construction_hits_14; ui_or_gameplay_sink_hits_4; strong_file_logging_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_4; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_235; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\019_p368_FUN_039bb9e0.c

### 20. UnityEngine.InputSystem.InputControlExtensions.ControlBuilder$$IsButton

- Manual priority score: 368
- Manual tier: A_must_review
- Original scanner score: 220
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_7; validity_or_gating_hits_13; strong_pose_or_ray_construction_hits_21; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_1; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_4; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_220; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\020_p368_UnityEngine.InputSystem.InputControlExtensions.ControlBuilder$$IsButton.c

### 21. thunk_FUN_0401ec54

- Manual priority score: 366
- Manual tier: A_must_review
- Original scanner score: 238
- Original scanner label: 90_plus_uncertain_eye_setup_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_7; validity_or_gating_hits_12; strong_pose_or_ray_construction_hits_21; telemetry_or_network_hits_4; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; functionality_eye_api_context_without_clear_sink_hits_5
- Priority reasons: base_scanner_score_238; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\021_p366_thunk_FUN_0401ec54.c

### 22. FUN_0401ec54

- Manual priority score: 366
- Manual tier: A_must_review
- Original scanner score: 238
- Original scanner label: 90_plus_uncertain_eye_setup_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_7; validity_or_gating_hits_12; strong_pose_or_ray_construction_hits_21; telemetry_or_network_hits_4; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; functionality_eye_api_context_without_clear_sink_hits_5
- Priority reasons: base_scanner_score_238; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\022_p366_FUN_0401ec54.c

### 23. UnityEngine.InputSystem.InputControlExtensions.ControlBuilder$$Finish

- Manual priority score: 365
- Manual tier: A_must_review
- Original scanner score: 217
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_13; strong_pose_or_ray_construction_hits_21; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_1; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_217; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\023_p365_UnityEngine.InputSystem.InputControlExtensions.ControlBuilder$$Finish.c

### 24. FUN_039b60b8

- Manual priority score: 364
- Manual tier: A_must_review
- Original scanner score: 235
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; data_collection; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_15; strong_pose_or_ray_construction_hits_10; paired_field_refs_with_eye_source; strong_file_logging_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_235; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\024_p364_FUN_039b60b8.c

### 25. FUN_03ab08f8

- Manual priority score: 364
- Manual tier: A_must_review
- Original scanner score: 228
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_5; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_10; telemetry_or_network_hits_1; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_228; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\025_p364_FUN_03ab08f8.c

### 26. FUN_0329f164

- Manual priority score: 364
- Manual tier: A_must_review
- Original scanner score: 228
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_6; validity_or_gating_hits_10; strong_pose_or_ray_construction_hits_10; telemetry_or_network_hits_1; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_228; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\026_p364_FUN_0329f164.c

### 27. FUN_034ca038

- Manual priority score: 364
- Manual tier: A_must_review
- Original scanner score: 207
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_8; ray_or_cast_sink_hits_2; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_1; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_interaction_hits_4; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_207; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\027_p364_FUN_034ca038.c

### 28. FUN_033ffc88

- Manual priority score: 363
- Manual tier: A_must_review
- Original scanner score: 246
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; structure_combo; ordered_structure; attempted_use
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_4; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_4; telemetry_or_network_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; attempted_eye_tracking_permission_or_feature_enable; functionality_permission_setup; functionality_gaze_retrieval_or_extraction
- Priority reasons: base_scanner_score_246; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\028_p363_FUN_033ffc88.c

### 29. OVR.OpenVR.CVRSystem$$GetControllerStateWithPose

- Manual priority score: 363
- Manual tier: A_must_review
- Original scanner score: 232
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_7; validity_or_gating_hits_7; strong_pose_or_ray_construction_hits_12; telemetry_or_network_hits_7; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; functionality_data_collection_or_telemetry_hits_7
- Priority reasons: base_scanner_score_232; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\029_p363_OVR.OpenVR.CVRSystem$$GetControllerStateWithPose.c

### 30. FUN_04198670

- Manual priority score: 363
- Manual tier: A_must_review
- Original scanner score: 232
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_4; validity_or_gating_hits_19; strong_pose_or_ray_construction_hits_8; telemetry_or_network_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_232; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\IRONGUARDHomecoming\manual-review-pack\A_must_review\030_p363_FUN_04198670.c
