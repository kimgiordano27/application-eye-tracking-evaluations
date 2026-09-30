# Manual Review Pack Summary: Gorillavs100Men

Selected functions: 100

## Tier counts

- A_must_review: 68
- B_high_priority: 32

## Top functions

### 1. FUN_0401e53c

- Manual priority score: 278
- Manual tier: A_must_review
- Original scanner score: 152
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_1; telemetry_or_network_hits_1; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_152; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\001_p278_FUN_0401e53c.c

### 2. UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_HasRequestedEyeTrackingPermissions

- Manual priority score: 223
- Manual tier: A_must_review
- Original scanner score: 105
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_6; validity_or_gating_hits_9; ray_or_cast_sink_hits_1; telemetry_or_network_hits_2; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_105; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\002_p223_UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_HasRequestedEyeTrackingPermissions.c

### 3. Unity.XR.Oculus.NativeMethods$$SetEyeTrackedFoveatedRenderingEnabled

- Manual priority score: 202
- Manual tier: A_must_review
- Original scanner score: 137
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; frame_behavior; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_14; strong_foveation_hits_2; frame_or_lifecycle_behavior; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_137; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; module_bonus_frame_behavior_5; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\003_p202_Unity.XR.Oculus.NativeMethods$$SetEyeTrackedFoveatedRenderingEnabled.c

### 4. FUN_03e97b00

- Manual priority score: 195
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ray_interaction; ui_interaction; telemetry
- Evidence: validity_or_gating_hits_21; ray_or_cast_sink_hits_1; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_21; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\004_p195_FUN_03e97b00.c

### 5. FUN_0397d208

- Manual priority score: 195
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ray_interaction; ui_interaction; telemetry
- Evidence: validity_or_gating_hits_17; ray_or_cast_sink_hits_2; ui_or_gameplay_sink_hits_9; telemetry_or_network_hits_9; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\005_p195_FUN_0397d208.c

### 6. FUN_0401ea30

- Manual priority score: 190
- Manual tier: A_must_review
- Original scanner score: 127
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_3; validity_or_gating_hits_1; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering
- Priority reasons: base_scanner_score_127; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_1_bonus_3
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\006_p190_FUN_0401ea30.c

### 7. FUN_03f1e3f8

- Manual priority score: 189
- Manual tier: A_must_review
- Original scanner score: 92
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_3; validity_or_gating_hits_2; telemetry_or_network_hits_1; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_92; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\007_p189_FUN_03f1e3f8.c

### 8. FUN_0401da70

- Manual priority score: 188
- Manual tier: A_must_review
- Original scanner score: 125
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_1; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering
- Priority reasons: base_scanner_score_125; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_1_bonus_3
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\008_p188_FUN_0401da70.c

### 9. UnityEngine.InputSystem.XR.Eyes$$set_leftEyePosition

- Manual priority score: 187
- Manual tier: A_must_review
- Original scanner score: 149
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_149; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\009_p187_UnityEngine.InputSystem.XR.Eyes$$set_leftEyePosition.c

### 10. UnityEngine.InputSystem.XR.Eyes$$get_rightEyeRotation

- Manual priority score: 187
- Manual tier: A_must_review
- Original scanner score: 149
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_149; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\010_p187_UnityEngine.InputSystem.XR.Eyes$$get_rightEyeRotation.c

### 11. UnityEngine.InputSystem.XR.Eyes$$get_leftEyeRotation

- Manual priority score: 187
- Manual tier: A_must_review
- Original scanner score: 149
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_149; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\011_p187_UnityEngine.InputSystem.XR.Eyes$$get_leftEyeRotation.c

### 12. UnityEngine.InputSystem.XR.Eyes$$get_leftEyePosition

- Manual priority score: 187
- Manual tier: A_must_review
- Original scanner score: 149
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_149; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\012_p187_UnityEngine.InputSystem.XR.Eyes$$get_leftEyePosition.c

### 13. Unity.Cinemachine.CinemachineAutoFocus$$PostPipelineStageCallback

- Manual priority score: 186
- Manual tier: A_must_review
- Original scanner score: 84
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ray_interaction; ui_interaction; telemetry
- Evidence: validity_or_gating_hits_4; ray_or_cast_sink_hits_1; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_84; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\013_p186_Unity.Cinemachine.CinemachineAutoFocus$$PostPipelineStageCallback.c

### 14. UnityEngine.InputSystem.XR.Eyes$$set_rightEyeRotation

- Manual priority score: 184
- Manual tier: A_must_review
- Original scanner score: 146
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_3; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_146; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\014_p184_UnityEngine.InputSystem.XR.Eyes$$set_rightEyeRotation.c

### 15. UnityEngine.InputSystem.XR.Eyes$$set_rightEyePosition

- Manual priority score: 184
- Manual tier: A_must_review
- Original scanner score: 146
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_3; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_146; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\015_p184_UnityEngine.InputSystem.XR.Eyes$$set_rightEyePosition.c

### 16. UnityEngine.InputSystem.XR.Eyes$$set_leftEyeRotation

- Manual priority score: 184
- Manual tier: A_must_review
- Original scanner score: 146
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_3; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_146; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\016_p184_UnityEngine.InputSystem.XR.Eyes$$set_leftEyeRotation.c

### 17. UnityEngine.InputSystem.XR.Eyes$$get_rightEyePosition

- Manual priority score: 184
- Manual tier: A_must_review
- Original scanner score: 146
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_3; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_146; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\017_p184_UnityEngine.InputSystem.XR.Eyes$$get_rightEyePosition.c

### 18. Unity.XR.Oculus.Utils$$set_eyeTrackedFoveatedRenderingEnabled

- Manual priority score: 182
- Manual tier: A_must_review
- Original scanner score: 122
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_1; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_122; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\018_p182_Unity.XR.Oculus.Utils$$set_eyeTrackedFoveatedRenderingEnabled.c

### 19. UnityEngine.InputSystem.XR.XRHMD$$set_rightEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_18; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\019_p178_UnityEngine.InputSystem.XR.XRHMD$$set_rightEyeRotation.c

### 20. UnityEngine.InputSystem.XR.XRHMD$$set_rightEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_18; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\020_p178_UnityEngine.InputSystem.XR.XRHMD$$set_rightEyePosition.c

### 21. UnityEngine.InputSystem.XR.XRHMD$$set_leftEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_18; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\021_p178_UnityEngine.InputSystem.XR.XRHMD$$set_leftEyeRotation.c

### 22. UnityEngine.InputSystem.XR.XRHMD$$set_leftEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_19; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\022_p178_UnityEngine.InputSystem.XR.XRHMD$$set_leftEyePosition.c

### 23. UnityEngine.InputSystem.XR.XRHMD$$get_rightEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_18; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\023_p178_UnityEngine.InputSystem.XR.XRHMD$$get_rightEyeRotation.c

### 24. UnityEngine.InputSystem.XR.XRHMD$$get_rightEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_18; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\024_p178_UnityEngine.InputSystem.XR.XRHMD$$get_rightEyePosition.c

### 25. UnityEngine.InputSystem.XR.XRHMD$$get_leftEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_19; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\025_p178_UnityEngine.InputSystem.XR.XRHMD$$get_leftEyeRotation.c

### 26. UnityEngine.InputSystem.XR.XRHMD$$get_leftEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_19; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\026_p178_UnityEngine.InputSystem.XR.XRHMD$$get_leftEyePosition.c

### 27. UnityEngine.InputSystem.XR.EyesControl$$set_rightEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\027_p178_UnityEngine.InputSystem.XR.EyesControl$$set_rightEyeRotation.c

### 28. UnityEngine.InputSystem.XR.EyesControl$$set_rightEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\028_p178_UnityEngine.InputSystem.XR.EyesControl$$set_rightEyePosition.c

### 29. UnityEngine.InputSystem.XR.EyesControl$$set_leftEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\029_p178_UnityEngine.InputSystem.XR.EyesControl$$set_leftEyeRotation.c

### 30. UnityEngine.InputSystem.XR.EyesControl$$set_leftEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Gorillavs100Men\manual-review-pack\A_must_review\030_p178_UnityEngine.InputSystem.XR.EyesControl$$set_leftEyePosition.c
