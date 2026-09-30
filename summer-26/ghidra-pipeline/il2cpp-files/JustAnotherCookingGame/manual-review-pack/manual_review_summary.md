# Manual Review Pack Summary: JustAnotherCookingGame

Selected functions: 14

## Tier counts

- A_must_review: 12
- B_high_priority: 2

## Top functions

### 1. FUN_00da448c

- Manual priority score: 181
- Manual tier: A_must_review
- Original scanner score: 88
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; paired_state_refs; telemetry
- Evidence: validity_or_gating_hits_8; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_structure_only; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_88; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\JustAnotherCookingGame\manual-review-pack\A_must_review\001_p181_FUN_00da448c.c

### 2. UnityEngine.InputSystem.XR.EyesControl$$get_leftEyePosition

- Manual priority score: 172
- Manual tier: A_must_review
- Original scanner score: 134
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_134; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\JustAnotherCookingGame\manual-review-pack\A_must_review\002_p172_UnityEngine.InputSystem.XR.EyesControl$$get_leftEyePosition.c

### 3. UnityEngine.InputSystem.XR.Eyes$$get_leftEyePosition

- Manual priority score: 169
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\JustAnotherCookingGame\manual-review-pack\A_must_review\003_p169_UnityEngine.InputSystem.XR.Eyes$$get_leftEyePosition.c

### 4. Unity.XR.Oculus.Input.OculusHMD$$set_rightEyeRotation

- Manual priority score: 169
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\JustAnotherCookingGame\manual-review-pack\A_must_review\004_p169_Unity.XR.Oculus.Input.OculusHMD$$set_rightEyeRotation.c

### 5. Unity.XR.Oculus.Input.OculusHMD$$set_rightEyePosition

- Manual priority score: 169
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\JustAnotherCookingGame\manual-review-pack\A_must_review\005_p169_Unity.XR.Oculus.Input.OculusHMD$$set_rightEyePosition.c

### 6. Unity.XR.Oculus.Input.OculusHMD$$set_leftEyeRotation

- Manual priority score: 169
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\JustAnotherCookingGame\manual-review-pack\A_must_review\006_p169_Unity.XR.Oculus.Input.OculusHMD$$set_leftEyeRotation.c

### 7. Unity.XR.Oculus.Input.OculusHMD$$set_leftEyePosition

- Manual priority score: 169
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\JustAnotherCookingGame\manual-review-pack\A_must_review\007_p169_Unity.XR.Oculus.Input.OculusHMD$$set_leftEyePosition.c

### 8. Unity.XR.Oculus.Input.OculusHMD$$get_rightEyeRotation

- Manual priority score: 169
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\JustAnotherCookingGame\manual-review-pack\A_must_review\008_p169_Unity.XR.Oculus.Input.OculusHMD$$get_rightEyeRotation.c

### 9. Unity.XR.Oculus.Input.OculusHMD$$get_rightEyePosition

- Manual priority score: 169
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\JustAnotherCookingGame\manual-review-pack\A_must_review\009_p169_Unity.XR.Oculus.Input.OculusHMD$$get_rightEyePosition.c

### 10. Unity.XR.Oculus.Input.OculusHMD$$get_leftEyeRotation

- Manual priority score: 169
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\JustAnotherCookingGame\manual-review-pack\A_must_review\010_p169_Unity.XR.Oculus.Input.OculusHMD$$get_leftEyeRotation.c

### 11. Unity.XR.Oculus.Input.OculusHMD$$get_leftEyePosition

- Manual priority score: 169
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\JustAnotherCookingGame\manual-review-pack\A_must_review\011_p169_Unity.XR.Oculus.Input.OculusHMD$$get_leftEyePosition.c

### 12. FUN_00caa4e8

- Manual priority score: 161
- Manual tier: A_must_review
- Original scanner score: 86
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; data_collection
- Evidence: validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_10; strong_file_logging_hits_5
- Priority reasons: base_scanner_score_86; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_1_bonus_4; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\JustAnotherCookingGame\manual-review-pack\A_must_review\012_p161_FUN_00caa4e8.c

### 13. Unity.XR.Oculus.Utils$$SetFoveationLevel

- Manual priority score: 158
- Manual tier: B_high_priority
- Original scanner score: 74
- Original scanner label: 70_high_framework_foveated_rendering_support_or_attempt_high
- Modules: validity_gate; foveation_rendering; keyword_support; attempted_use; dynamic_foveation_possible
- Evidence: validity_or_gating_hits_14; strong_foveation_hits_2; eye_or_gaze_keyword_boost_only; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_74; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; module_bonus_keyword_support_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\JustAnotherCookingGame\manual-review-pack\B_high_priority\013_p158_Unity.XR.Oculus.Utils$$SetFoveationLevel.c

### 14. Unity.XR.Oculus.Utils$$GetFoveationLevel

- Manual priority score: 158
- Manual tier: B_high_priority
- Original scanner score: 74
- Original scanner label: 70_high_framework_foveated_rendering_support_or_attempt_high
- Modules: validity_gate; foveation_rendering; keyword_support; attempted_use; dynamic_foveation_possible
- Evidence: validity_or_gating_hits_6; strong_foveation_hits_2; eye_or_gaze_keyword_boost_only; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_74; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; module_bonus_keyword_support_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\JustAnotherCookingGame\manual-review-pack\B_high_priority\014_p158_Unity.XR.Oculus.Utils$$GetFoveationLevel.c
