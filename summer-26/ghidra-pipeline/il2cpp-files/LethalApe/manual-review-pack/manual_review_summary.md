# Manual Review Pack Summary: LethalApe

Selected functions: 85

## Tier counts

- A_must_review: 63
- B_high_priority: 18
- C_likely_review: 4

## Top functions

### 1. System.Array.EmptyInternalEnumerator<OnScreenControl.OnScreenDeviceInfo>$$Dispose

- Manual priority score: 196
- Manual tier: A_must_review
- Original scanner score: 77
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo
- Evidence: weak_xr_or_state_hits_4; validity_or_gating_hits_8; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_structure_only; telemetry_or_network_hits_4; source_validity_pose_sink_structure; negative_framework_namespace_without_eye_use_flow
- Priority reasons: base_scanner_score_77; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\001_p196_System.Array.EmptyInternalEnumerator_OnScreenControl.OnScreenDeviceInfo_$$Dispose.c

### 2. System.Array.EmptyInternalEnumerator<MemoryHelpers.BitRegion>$$Dispose

- Manual priority score: 196
- Manual tier: A_must_review
- Original scanner score: 77
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo
- Evidence: weak_xr_or_state_hits_7; validity_or_gating_hits_18; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_structure_only; telemetry_or_network_hits_7; source_validity_pose_sink_structure; negative_framework_namespace_without_eye_use_flow
- Priority reasons: base_scanner_score_77; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\002_p196_System.Array.EmptyInternalEnumerator_MemoryHelpers.BitRegion_$$Dispose.c

### 3. Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingEnabled

- Manual priority score: 193
- Manual tier: A_must_review
- Original scanner score: 133
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_4; validity_or_gating_hits_5; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_133; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\003_p193_Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingEnabled.c

### 4. Unity.XR.Oculus.NativeMethods.Internal$$SetEyeTrackedFoveatedRenderingEnabled

- Manual priority score: 191
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_5; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\004_p191_Unity.XR.Oculus.NativeMethods.Internal$$SetEyeTrackedFoveatedRenderingEnabled.c

### 5. Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingSupported

- Manual priority score: 191
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_6; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\005_p191_Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingSupported.c

### 6. Unity.XR.Oculus.NativeMethods$$SetEyeTrackedFoveatedRenderingEnabled

- Manual priority score: 191
- Manual tier: A_must_review
- Original scanner score: 131
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_4; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_131; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\006_p191_Unity.XR.Oculus.NativeMethods$$SetEyeTrackedFoveatedRenderingEnabled.c

### 7. UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$get_pose

- Manual priority score: 187
- Manual tier: A_must_review
- Original scanner score: 135
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; attempted_use
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_4; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; attempted_eye_tracking_permission_or_feature_enable; functionality_gaze_retrieval_or_extraction
- Priority reasons: base_scanner_score_135; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\007_p187_UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$get_pose.c

### 8. Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingEnabled

- Manual priority score: 187
- Manual tier: A_must_review
- Original scanner score: 127
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_4; validity_or_gating_hits_2; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_127; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\008_p187_Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingEnabled.c

### 9. UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$set_pose

- Manual priority score: 185
- Manual tier: A_must_review
- Original scanner score: 133
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; attempted_use
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; attempted_eye_tracking_permission_or_feature_enable; functionality_gaze_retrieval_or_extraction
- Priority reasons: base_scanner_score_133; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\009_p185_UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$set_pose.c

### 10. Unity.XR.Oculus.Utils$$set_eyeTrackedFoveatedRenderingEnabled

- Manual priority score: 185
- Manual tier: A_must_review
- Original scanner score: 125
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_2; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_125; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\010_p185_Unity.XR.Oculus.Utils$$set_eyeTrackedFoveatedRenderingEnabled.c

### 11. Unity.XR.Oculus.Utils$$get_eyeTrackedFoveatedRenderingEnabled

- Manual priority score: 184
- Manual tier: A_must_review
- Original scanner score: 124
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_4; validity_or_gating_hits_1; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_124; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\011_p184_Unity.XR.Oculus.Utils$$get_eyeTrackedFoveatedRenderingEnabled.c

### 12. Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingSupported

- Manual priority score: 182
- Manual tier: A_must_review
- Original scanner score: 122
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_1; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_122; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\012_p182_Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingSupported.c

### 13. UnityEngine.InputSystem.XR.EyesControl$$set_rightEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\013_p178_UnityEngine.InputSystem.XR.EyesControl$$set_rightEyeRotation.c

### 14. UnityEngine.InputSystem.XR.EyesControl$$get_rightEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\014_p178_UnityEngine.InputSystem.XR.EyesControl$$get_rightEyeRotation.c

### 15. UnityEngine.InputSystem.XR.Eyes$$set_rightEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_7; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\015_p178_UnityEngine.InputSystem.XR.Eyes$$set_rightEyeRotation.c

### 16. UnityEngine.InputSystem.XR.Eyes$$set_rightEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_7; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\016_p178_UnityEngine.InputSystem.XR.Eyes$$set_rightEyePosition.c

### 17. UnityEngine.InputSystem.XR.Eyes$$set_leftEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_8; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\017_p178_UnityEngine.InputSystem.XR.Eyes$$set_leftEyeRotation.c

### 18. UnityEngine.InputSystem.XR.Eyes$$set_leftEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_8; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\018_p178_UnityEngine.InputSystem.XR.Eyes$$set_leftEyePosition.c

### 19. UnityEngine.InputSystem.XR.Eyes$$get_rightEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_7; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\019_p178_UnityEngine.InputSystem.XR.Eyes$$get_rightEyeRotation.c

### 20. UnityEngine.InputSystem.XR.Eyes$$get_rightEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_7; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\020_p178_UnityEngine.InputSystem.XR.Eyes$$get_rightEyePosition.c

### 21. UnityEngine.InputSystem.XR.Eyes$$get_leftEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_8; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\021_p178_UnityEngine.InputSystem.XR.Eyes$$get_leftEyeRotation.c

### 22. UnityEngine.InputSystem.XR.Eyes$$get_leftEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_9; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\022_p178_UnityEngine.InputSystem.XR.Eyes$$get_leftEyePosition.c

### 23. Unity.XR.Oculus.Input.OculusHMD$$set_rightEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\023_p178_Unity.XR.Oculus.Input.OculusHMD$$set_rightEyeRotation.c

### 24. Unity.XR.Oculus.Input.OculusHMD$$set_rightEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\024_p178_Unity.XR.Oculus.Input.OculusHMD$$set_rightEyePosition.c

### 25. Unity.XR.Oculus.Input.OculusHMD$$set_leftEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\025_p178_Unity.XR.Oculus.Input.OculusHMD$$set_leftEyeRotation.c

### 26. Unity.XR.Oculus.Input.OculusHMD$$set_leftEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\026_p178_Unity.XR.Oculus.Input.OculusHMD$$set_leftEyePosition.c

### 27. Unity.XR.Oculus.Input.OculusHMD$$get_rightEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\027_p178_Unity.XR.Oculus.Input.OculusHMD$$get_rightEyeRotation.c

### 28. Unity.XR.Oculus.Input.OculusHMD$$get_rightEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\028_p178_Unity.XR.Oculus.Input.OculusHMD$$get_rightEyePosition.c

### 29. Unity.XR.Oculus.Input.OculusHMD$$get_leftEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\029_p178_Unity.XR.Oculus.Input.OculusHMD$$get_leftEyeRotation.c

### 30. Unity.XR.Oculus.Input.OculusHMD$$get_leftEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\LethalApe\manual-review-pack\A_must_review\030_p178_Unity.XR.Oculus.Input.OculusHMD$$get_leftEyePosition.c
