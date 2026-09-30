# Manual Review Pack Summary: simulator

Selected functions: 42

## Tier counts

- A_must_review: 20
- B_high_priority: 15
- C_likely_review: 7

## Top functions

### 1. FUN_02ff9804

- Manual priority score: 278
- Manual tier: A_must_review
- Original scanner score: 152
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_1; telemetry_or_network_hits_1; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_152; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\A_must_review\001_p278_FUN_02ff9804.c

### 2. UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_HasRequestedEyeTrackingPermissions

- Manual priority score: 212
- Manual tier: A_must_review
- Original scanner score: 101
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_6; validity_or_gating_hits_14; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_101; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\A_must_review\002_p212_UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_HasRequestedEyeTrackingPermissions.c

### 3. Obi.ObiNativeList<TriangleMeshHeader>$$Upload<TriangleMeshHeader>

- Manual priority score: 194
- Manual tier: A_must_review
- Original scanner score: 82
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; data_collection; telemetry
- Evidence: validity_or_gating_hits_6; strong_file_logging_hits_2; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_82; module_bonus_validity_gate_8; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\A_must_review\003_p194_Obi.ObiNativeList_TriangleMeshHeader_$$Upload_TriangleMeshHeader_.c

### 4. FUN_02ff9bc0

- Manual priority score: 190
- Manual tier: A_must_review
- Original scanner score: 127
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_3; validity_or_gating_hits_1; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering
- Priority reasons: base_scanner_score_127; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_1_bonus_3
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\A_must_review\004_p190_FUN_02ff9bc0.c

### 5. FUN_02ff8dbc

- Manual priority score: 188
- Manual tier: A_must_review
- Original scanner score: 125
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_1; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering
- Priority reasons: base_scanner_score_125; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_1_bonus_3
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\A_must_review\005_p188_FUN_02ff8dbc.c

### 6. Oculus.Platform.CAPI$$ovr_Message_GetNetSyncSessionArray

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; paired_state_refs; telemetry
- Evidence: validity_or_gating_hits_15; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_structure_only; telemetry_or_network_hits_4; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\A_must_review\006_p178_Oculus.Platform.CAPI$$ovr_Message_GetNetSyncSessionArray.c

### 7. Oculus.Platform.CAPI$$ovr_Message_GetLinkedAccountArray

- Manual priority score: 173
- Manual tier: A_must_review
- Original scanner score: 88
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; paired_state_refs; telemetry
- Evidence: validity_or_gating_hits_12; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_structure_only; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_88; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\A_must_review\007_p173_Oculus.Platform.CAPI$$ovr_Message_GetLinkedAccountArray.c

### 8. Oculus.Platform.CAPI$$ovr_Message_GetLeaderboardEntryArray

- Manual priority score: 173
- Manual tier: A_must_review
- Original scanner score: 88
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; paired_state_refs; telemetry
- Evidence: validity_or_gating_hits_12; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_structure_only; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_88; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\A_must_review\008_p173_Oculus.Platform.CAPI$$ovr_Message_GetLeaderboardEntryArray.c

### 9. Oculus.Platform.CAPI$$ovr_Message_GetLeaderboardArray

- Manual priority score: 173
- Manual tier: A_must_review
- Original scanner score: 88
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; paired_state_refs; telemetry
- Evidence: validity_or_gating_hits_13; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_structure_only; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_88; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\A_must_review\009_p173_Oculus.Platform.CAPI$$ovr_Message_GetLeaderboardArray.c

### 10. Oculus.Platform.CAPI$$ovr_Message_GetInstalledApplicationArray

- Manual priority score: 173
- Manual tier: A_must_review
- Original scanner score: 88
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; paired_state_refs; telemetry
- Evidence: validity_or_gating_hits_13; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_structure_only; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_88; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\A_must_review\010_p173_Oculus.Platform.CAPI$$ovr_Message_GetInstalledApplicationArray.c

### 11. FUN_019dff60

- Manual priority score: 172
- Manual tier: A_must_review
- Original scanner score: 87
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; telemetry
- Evidence: validity_or_gating_hits_12; strong_pose_or_ray_construction_hits_8; telemetry_or_network_hits_4
- Priority reasons: base_scanner_score_87; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\A_must_review\011_p172_FUN_019dff60.c

### 12. FUN_01eaa3cc

- Manual priority score: 169
- Manual tier: A_must_review
- Original scanner score: 79
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ray_interaction; telemetry
- Evidence: validity_or_gating_hits_12; ray_or_cast_sink_hits_2; telemetry_or_network_hits_3
- Priority reasons: base_scanner_score_79; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\A_must_review\012_p169_FUN_01eaa3cc.c

### 13. Obi.ObiNativeList<Vector2>$$UploadFullCapacity

- Manual priority score: 167
- Manual tier: A_must_review
- Original scanner score: 82
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; telemetry
- Evidence: validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_4; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_82; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\A_must_review\013_p167_Obi.ObiNativeList_Vector2_$$UploadFullCapacity.c

### 14. Obi.ObiNativeList<Vector2>$$Upload<Vector2>

- Manual priority score: 167
- Manual tier: A_must_review
- Original scanner score: 82
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; telemetry
- Evidence: validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_4; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_82; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\A_must_review\014_p167_Obi.ObiNativeList_Vector2_$$Upload_Vector2_.c

### 15. Obi.ObiNativeList<Vector2>$$Upload

- Manual priority score: 167
- Manual tier: A_must_review
- Original scanner score: 82
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; telemetry
- Evidence: validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_4; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_82; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\A_must_review\015_p167_Obi.ObiNativeList_Vector2_$$Upload.c

### 16. Obi.ObiNativeList<BoneWeight1>$$AsNativeArray

- Manual priority score: 164
- Manual tier: A_must_review
- Original scanner score: 79
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; telemetry
- Evidence: validity_or_gating_hits_3; strong_pose_or_ray_construction_hits_4; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_79; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\A_must_review\016_p164_Obi.ObiNativeList_BoneWeight1_$$AsNativeArray.c

### 17. Obi.ObiNativeList<ColliderRigidbody>$$Upload

- Manual priority score: 164
- Manual tier: A_must_review
- Original scanner score: 74
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ray_interaction; telemetry
- Evidence: validity_or_gating_hits_5; ray_or_cast_sink_hits_2; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_74; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\A_must_review\017_p164_Obi.ObiNativeList_ColliderRigidbody_$$Upload.c

### 18. UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$get_pose

- Manual priority score: 161
- Manual tier: A_must_review
- Original scanner score: 117
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; attempted_use
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_4; validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_2; attempted_eye_tracking_permission_or_feature_enable; functionality_gaze_retrieval_or_extraction
- Priority reasons: base_scanner_score_117; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\A_must_review\018_p161_UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$get_pose.c

### 19. Obi.ObiNativeList<Vector4>$$Upload<Vector4>

- Manual priority score: 161
- Manual tier: A_must_review
- Original scanner score: 76
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; telemetry
- Evidence: validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_4; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_76; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\A_must_review\019_p161_Obi.ObiNativeList_Vector4_$$Upload_Vector4_.c

### 20. Obi.ObiNativeList<ColliderRigidbody>$$UploadFullCapacity

- Manual priority score: 161
- Manual tier: A_must_review
- Original scanner score: 71
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ray_interaction; telemetry
- Evidence: validity_or_gating_hits_3; ray_or_cast_sink_hits_2; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_71; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\A_must_review\020_p161_Obi.ObiNativeList_ColliderRigidbody_$$UploadFullCapacity.c

### 21. UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$set_pose

- Manual priority score: 159
- Manual tier: B_high_priority
- Original scanner score: 115
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; attempted_use
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_2; attempted_eye_tracking_permission_or_feature_enable; functionality_gaze_retrieval_or_extraction
- Priority reasons: base_scanner_score_115; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\B_high_priority\021_p159_UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$set_pose.c

### 22. FUN_02ff9b58

- Manual priority score: 159
- Manual tier: B_high_priority
- Original scanner score: 104
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_104; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_1_bonus_3
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\B_high_priority\022_p159_FUN_02ff9b58.c

### 23. FUN_02ff9adc

- Manual priority score: 159
- Manual tier: B_high_priority
- Original scanner score: 104
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_104; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_1_bonus_3
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\B_high_priority\023_p159_FUN_02ff9adc.c

### 24. Oculus.Platform.CAPI$$ovr_Message_GetNetSyncVoipAttenuationValueArray

- Manual priority score: 159
- Manual tier: B_high_priority
- Original scanner score: 82
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; telemetry
- Evidence: validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_4; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_82; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\B_high_priority\024_p159_Oculus.Platform.CAPI$$ovr_Message_GetNetSyncVoipAttenuationValueArray.c

### 25. Obi.ObiNativeList<Vector3>$$Upload<Vector3>

- Manual priority score: 158
- Manual tier: B_high_priority
- Original scanner score: 73
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; telemetry
- Evidence: validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_4; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_73; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\B_high_priority\025_p158_Obi.ObiNativeList_Vector3_$$Upload_Vector3_.c

### 26. System.Array$$InternalArray__ICollection_CopyTo<TransformSceneHandle>

- Manual priority score: 156
- Manual tier: B_high_priority
- Original scanner score: 79
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; telemetry
- Evidence: validity_or_gating_hits_9; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_3
- Priority reasons: base_scanner_score_79; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\B_high_priority\026_p156_System.Array$$InternalArray__ICollection_CopyTo_TransformSceneHandle_.c

### 27. Obi.ObiNativeList<BurstMeshData>$$OnBeforeSerialize

- Manual priority score: 156
- Manual tier: B_high_priority
- Original scanner score: 79
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; telemetry
- Evidence: validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_4
- Priority reasons: base_scanner_score_79; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\B_high_priority\027_p156_Obi.ObiNativeList_BurstMeshData_$$OnBeforeSerialize.c

### 28. Obi.ObiNativeList<BurstMeshData>$$Dispose

- Manual priority score: 156
- Manual tier: B_high_priority
- Original scanner score: 79
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; telemetry
- Evidence: validity_or_gating_hits_3; strong_pose_or_ray_construction_hits_4; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_79; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\B_high_priority\028_p156_Obi.ObiNativeList_BurstMeshData_$$Dispose.c

### 29. Obi.ObiNativeList<ColliderRigidbody>$$OnAfterDeserialize

- Manual priority score: 156
- Manual tier: B_high_priority
- Original scanner score: 74
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ray_interaction; telemetry
- Evidence: validity_or_gating_hits_5; ray_or_cast_sink_hits_2; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_74; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\B_high_priority\029_p156_Obi.ObiNativeList_ColliderRigidbody_$$OnAfterDeserialize.c

### 30. Obi.ObiNativeList<Vector2Int>$$AsNativeArray<int2>

- Manual priority score: 152
- Manual tier: B_high_priority
- Original scanner score: 71
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; telemetry
- Evidence: validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_4; telemetry_or_network_hits_1
- Priority reasons: base_scanner_score_71; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_3_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\simulator\manual-review-pack\B_high_priority\030_p152_Obi.ObiNativeList_Vector2Int_$$AsNativeArray_int2_.c
