# Manual Review Pack Summary: TheRagmans

Selected functions: 7

## Tier counts

- A_must_review: 3
- B_high_priority: 4

## Top functions

### 1. FUN_005ff8d0

- Manual priority score: 197
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; pose_vector; telemetry; frame_behavior; structure_combo
- Evidence: weak_xr_or_state_hits_1; validity_or_gating_hits_16; strong_pose_or_ray_construction_hits_1; telemetry_or_network_hits_1; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TheRagmans\manual-review-pack\A_must_review\001_p197_FUN_005ff8d0.c

### 2. Autohand.GrabbablePoseAdvanced$$GetClosestRotation

- Manual priority score: 186
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; pose_vector; paired_state_refs; data_collection; structure_combo
- Evidence: weak_xr_or_state_hits_1; validity_or_gating_hits_15; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_structure_only; strong_file_logging_hits_2; source_validity_pose_sink_structure; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TheRagmans\manual-review-pack\A_must_review\002_p186_Autohand.GrabbablePoseAdvanced$$GetClosestRotation.c

### 3. Autohand.GrabbablePoseCombiner$$GetClosestPose

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; pose_vector; data_collection; structure_combo
- Evidence: weak_xr_or_state_hits_2; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_2; strong_file_logging_hits_2; source_validity_pose_sink_structure; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_2_bonus_8; keyword_support_collection_or_telemetry_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TheRagmans\manual-review-pack\A_must_review\003_p178_Autohand.GrabbablePoseCombiner$$GetClosestPose.c

### 4. Unity.XR.Oculus.Utils$$GetFoveationLevel

- Manual priority score: 155
- Manual tier: B_high_priority
- Original scanner score: 71
- Original scanner label: 70_high_framework_foveated_rendering_support_or_attempt_high
- Modules: validity_gate; foveation_rendering; keyword_support; attempted_use; dynamic_foveation_possible
- Evidence: validity_or_gating_hits_3; strong_foveation_hits_2; eye_or_gaze_keyword_boost_only; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_71; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; module_bonus_keyword_support_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TheRagmans\manual-review-pack\B_high_priority\004_p155_Unity.XR.Oculus.Utils$$GetFoveationLevel.c

### 5. FUN_00598f58

- Manual priority score: 145
- Manual tier: B_high_priority
- Original scanner score: 70
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; telemetry
- Evidence: weak_xr_or_state_hits_4; validity_or_gating_hits_18; telemetry_or_network_hits_3
- Priority reasons: base_scanner_score_70; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TheRagmans\manual-review-pack\B_high_priority\005_p145_FUN_00598f58.c

### 6. SimpleJSON.JSONArray.<get_Children>d__18$$System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator

- Manual priority score: 137
- Manual tier: B_high_priority
- Original scanner score: 70
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; data_collection
- Evidence: validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; strong_file_logging_hits_2
- Priority reasons: base_scanner_score_70; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TheRagmans\manual-review-pack\B_high_priority\006_p137_SimpleJSON.JSONArray._get_Children_d__18$$System.Collections.Generic.IEnumerable_SimpleJSON.JSONNode_.GetEnumerator.c

### 7. Autohand.GrabbablePoseAdvanced$$GetClosestPosition

- Manual priority score: 137
- Manual tier: B_high_priority
- Original scanner score: 70
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; data_collection
- Evidence: validity_or_gating_hits_11; strong_pose_or_ray_construction_hits_2; strong_file_logging_hits_2
- Priority reasons: base_scanner_score_70; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TheRagmans\manual-review-pack\B_high_priority\007_p137_Autohand.GrabbablePoseAdvanced$$GetClosestPosition.c
