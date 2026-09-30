# Manual Review Pack Summary: FruitBladeVR

Selected functions: 58

## Tier counts

- A_must_review: 25
- B_high_priority: 21
- C_likely_review: 12

## Top functions

### 1. FUN_036d5d64

- Manual priority score: 278
- Manual tier: A_must_review
- Original scanner score: 152
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_1; telemetry_or_network_hits_1; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_152; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\001_p278_FUN_036d5d64.c

### 2. UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.GazeTeleportationAnchorFilter$$set_enableDistanceWeighting

- Manual priority score: 252
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_uncertain_gaze_interaction_high
- Modules: weak_source_state; validity_gate; pose_vector; paired_state_refs; ui_interaction; telemetry; structure_combo; keyword_support
- Evidence: weak_xr_or_state_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_structure_only; ui_or_gameplay_sink_hits_3; telemetry_or_network_hits_1; source_validity_pose_sink_structure; eye_or_gaze_keyword_boost_only; negative_framework_namespace_without_eye_use_flow; cap_below_near_certain_without_eye_anchor_or_ordered_structure; functionality_gaze_interaction_hits_3; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_structure_combo_18; module_bonus_keyword_support_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\002_p252_UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.GazeTeleportationAnchorFilter$$set_enableDistanceWeighting.c

### 3. UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.GazeTeleportationAnchorFilter$$get_enableDistanceWeighting

- Manual priority score: 226
- Manual tier: A_must_review
- Original scanner score: 75
- Original scanner label: 70_high_uncertain_gaze_interaction_high
- Modules: weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo; keyword_support
- Evidence: weak_xr_or_state_hits_4; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_structure_only; telemetry_or_network_hits_1; source_validity_pose_sink_structure; eye_or_gaze_keyword_boost_only; negative_framework_namespace_without_eye_use_flow; functionality_gaze_interaction_hits_1; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_75; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\003_p226_UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.GazeTeleportationAnchorFilter$$get_enableDistanceWeighting.c

### 4. UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettings$$set_enableDestinationEvaluationDelay

- Manual priority score: 205
- Manual tier: A_must_review
- Original scanner score: 82
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; pose_vector; paired_state_refs; ui_interaction; telemetry; structure_combo
- Evidence: weak_xr_or_state_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_structure_only; ui_or_gameplay_sink_hits_3; telemetry_or_network_hits_1; source_validity_pose_sink_structure; negative_framework_namespace_without_eye_use_flow
- Priority reasons: base_scanner_score_82; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\004_p205_UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettings$$set_enableDestinationEvaluationDelay.c

### 5. UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_HasRequestedEyeTrackingPermissions

- Manual priority score: 192
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_framework_support_only_high
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_6; validity_or_gating_hits_5; telemetry_or_network_hits_2; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\005_p192_UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_HasRequestedEyeTrackingPermissions.c

### 6. FUN_036d6258

- Manual priority score: 190
- Manual tier: A_must_review
- Original scanner score: 127
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_3; validity_or_gating_hits_1; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering
- Priority reasons: base_scanner_score_127; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_1_bonus_3
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\006_p190_FUN_036d6258.c

### 7. FUN_036d5298

- Manual priority score: 188
- Manual tier: A_must_review
- Original scanner score: 125
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_1; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering
- Priority reasons: base_scanner_score_125; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_1_bonus_3
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\007_p188_FUN_036d5298.c

### 8. System.Array$$Resize<InputEventTrace.DeviceInfo>

- Manual priority score: 186
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; pose_vector; data_collection; structure_combo
- Evidence: weak_xr_or_state_hits_3; validity_or_gating_hits_7; strong_pose_or_ray_construction_hits_2; strong_file_logging_hits_6; source_validity_pose_sink_structure; cap_below_near_certain_without_eye_anchor_or_ordered_structure; functionality_data_collection_or_telemetry_hits_6
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_2_bonus_8; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\008_p186_System.Array$$Resize_InputEventTrace.DeviceInfo_.c

### 9. FUN_02c79a08

- Manual priority score: 181
- Manual tier: A_must_review
- Original scanner score: 88
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; paired_state_refs; telemetry
- Evidence: validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_structure_only; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_88; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\009_p181_FUN_02c79a08.c

### 10. TMPro.TMP_TextUtilities$$GetCursorIndexFromPosition

- Manual priority score: 179
- Manual tier: A_must_review
- Original scanner score: 86
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; ui_interaction; telemetry
- Evidence: validity_or_gating_hits_15; strong_pose_or_ray_construction_hits_2; ui_or_gameplay_sink_hits_3; telemetry_or_network_hits_1
- Priority reasons: base_scanner_score_86; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\010_p179_TMPro.TMP_TextUtilities$$GetCursorIndexFromPosition.c

### 11. FUN_03544d6c

- Manual priority score: 172
- Manual tier: A_must_review
- Original scanner score: 83
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; paired_state_refs; telemetry
- Evidence: validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_structure_only; telemetry_or_network_hits_1
- Priority reasons: base_scanner_score_83; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\011_p172_FUN_03544d6c.c

### 12. FUN_03543524

- Manual priority score: 172
- Manual tier: A_must_review
- Original scanner score: 83
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; paired_state_refs; telemetry
- Evidence: validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_structure_only; telemetry_or_network_hits_1
- Priority reasons: base_scanner_score_83; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\012_p172_FUN_03543524.c

### 13. FUN_0354009c

- Manual priority score: 172
- Manual tier: A_must_review
- Original scanner score: 83
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; paired_state_refs; telemetry
- Evidence: validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_structure_only; telemetry_or_network_hits_1
- Priority reasons: base_scanner_score_83; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\013_p172_FUN_0354009c.c

### 14. FUN_037961e0

- Manual priority score: 167
- Manual tier: A_must_review
- Original scanner score: 83
- Original scanner label: 70_high_attempted_dynamic_eye_tracked_foveation_high
- Modules: validity_gate; foveation_rendering; keyword_support; attempted_use; dynamic_foveation_possible
- Evidence: validity_or_gating_hits_2; strong_foveation_hits_1; eye_or_gaze_keyword_boost_only; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_83; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; module_bonus_keyword_support_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\014_p167_FUN_037961e0.c

### 15. FUN_02c788dc

- Manual priority score: 167
- Manual tier: A_must_review
- Original scanner score: 82
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; telemetry
- Evidence: validity_or_gating_hits_9; strong_pose_or_ray_construction_hits_4; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_82; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\015_p167_FUN_02c788dc.c

### 16. UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$set_pose

- Manual priority score: 165
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; attempted_use
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; attempted_eye_tracking_permission_or_feature_enable; functionality_gaze_retrieval_or_extraction
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\016_p165_UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$set_pose.c

### 17. System.Collections.Generic.List.Enumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$Dispose

- Manual priority score: 165
- Manual tier: A_must_review
- Original scanner score: 80
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; paired_state_refs; telemetry
- Evidence: validity_or_gating_hits_8; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_structure_only; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_80; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\017_p165_System.Collections.Generic.List.Enumerator_ProbeVolumeBakingSet.SerializedPerSceneCellList_$$Dispose.c

### 18. Unity.Burst.Intrinsics.X86.Ssse3$$maddubs_epi16

- Manual priority score: 163
- Manual tier: A_must_review
- Original scanner score: 76
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; telemetry
- Evidence: validity_or_gating_hits_21; ui_or_gameplay_sink_hits_3; telemetry_or_network_hits_3
- Priority reasons: base_scanner_score_76; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\018_p163_Unity.Burst.Intrinsics.X86.Ssse3$$maddubs_epi16.c

### 19. Unity.Burst.Intrinsics.X86.Ssse3$$hsubs_epi16

- Manual priority score: 163
- Manual tier: A_must_review
- Original scanner score: 76
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; telemetry
- Evidence: validity_or_gating_hits_21; ui_or_gameplay_sink_hits_3; telemetry_or_network_hits_3
- Priority reasons: base_scanner_score_76; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\019_p163_Unity.Burst.Intrinsics.X86.Ssse3$$hsubs_epi16.c

### 20. Unity.Burst.Intrinsics.X86.Ssse3$$hsub_epi16

- Manual priority score: 163
- Manual tier: A_must_review
- Original scanner score: 76
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; telemetry
- Evidence: validity_or_gating_hits_21; ui_or_gameplay_sink_hits_3; telemetry_or_network_hits_3
- Priority reasons: base_scanner_score_76; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\020_p163_Unity.Burst.Intrinsics.X86.Ssse3$$hsub_epi16.c

### 21. Unity.Burst.Intrinsics.X86.Ssse3$$hadd_epi32

- Manual priority score: 163
- Manual tier: A_must_review
- Original scanner score: 76
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; telemetry
- Evidence: validity_or_gating_hits_21; ui_or_gameplay_sink_hits_3; telemetry_or_network_hits_3
- Priority reasons: base_scanner_score_76; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\021_p163_Unity.Burst.Intrinsics.X86.Ssse3$$hadd_epi32.c

### 22. FUN_03552e20

- Manual priority score: 163
- Manual tier: A_must_review
- Original scanner score: 76
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; telemetry
- Evidence: validity_or_gating_hits_7; ui_or_gameplay_sink_hits_6; telemetry_or_network_hits_6
- Priority reasons: base_scanner_score_76; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\022_p163_FUN_03552e20.c

### 23. FUN_0307d77c

- Manual priority score: 163
- Manual tier: A_must_review
- Original scanner score: 76
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; telemetry
- Evidence: validity_or_gating_hits_21; ui_or_gameplay_sink_hits_3; telemetry_or_network_hits_3
- Priority reasons: base_scanner_score_76; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\023_p163_FUN_0307d77c.c

### 24. FUN_0307d58c

- Manual priority score: 163
- Manual tier: A_must_review
- Original scanner score: 76
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; telemetry
- Evidence: validity_or_gating_hits_21; ui_or_gameplay_sink_hits_3; telemetry_or_network_hits_3
- Priority reasons: base_scanner_score_76; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\024_p163_FUN_0307d58c.c

### 25. System.Array$$InternalArray__ICollection_CopyTo<ProbeVolumeBakingSet.SerializedPerSceneCellList>

- Manual priority score: 162
- Manual tier: A_must_review
- Original scanner score: 77
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; paired_state_refs; telemetry
- Evidence: validity_or_gating_hits_3; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_structure_only; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_77; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\A_must_review\025_p162_System.Array$$InternalArray__ICollection_CopyTo_ProbeVolumeBakingSet.SerializedPerSceneCellList_.c

### 26. FUN_036d608c

- Manual priority score: 159
- Manual tier: B_high_priority
- Original scanner score: 104
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_104; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_1_bonus_3
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\B_high_priority\026_p159_FUN_036d608c.c

### 27. FUN_036d5ce8

- Manual priority score: 159
- Manual tier: B_high_priority
- Original scanner score: 104
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_104; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_1_bonus_3
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\B_high_priority\027_p159_FUN_036d5ce8.c

### 28. System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$Dispose

- Manual priority score: 159
- Manual tier: B_high_priority
- Original scanner score: 82
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; telemetry
- Evidence: validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_4; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_82; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\B_high_priority\028_p159_System.Array.InternalEnumerator_ProbeVolumeBakingSet.SerializedPerSceneCellList_$$Dispose.c

### 29. UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering_Injected

- Manual priority score: 158
- Manual tier: B_high_priority
- Original scanner score: 74
- Original scanner label: 70_high_framework_foveated_rendering_support_or_attempt_high
- Modules: validity_gate; foveation_rendering; keyword_support; attempted_use; dynamic_foveation_possible
- Evidence: validity_or_gating_hits_4; strong_foveation_hits_2; eye_or_gaze_keyword_boost_only; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_74; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; module_bonus_keyword_support_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\B_high_priority\029_p158_UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering_Injected.c

### 30. UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering

- Manual priority score: 158
- Manual tier: B_high_priority
- Original scanner score: 74
- Original scanner label: 70_high_framework_foveated_rendering_support_or_attempt_high
- Modules: validity_gate; foveation_rendering; keyword_support; attempted_use; dynamic_foveation_possible
- Evidence: validity_or_gating_hits_6; strong_foveation_hits_2; eye_or_gaze_keyword_boost_only; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_74; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; module_bonus_keyword_support_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\FruitBladeVR\manual-review-pack\B_high_priority\030_p158_UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering.c
