# Manual Review Pack Summary: TruckParkingSimulatorVRDemo

Selected functions: 69

## Tier counts

- A_must_review: 52
- B_high_priority: 9
- C_likely_review: 8

## Top functions

### 1. Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingEnabled

- Manual priority score: 224
- Manual tier: A_must_review
- Original scanner score: 151
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; foveation_rendering; frame_behavior; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_4; validity_or_gating_hits_21; paired_field_refs_with_eye_source; strong_foveation_hits_2; frame_or_lifecycle_behavior; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_151; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_foveation_rendering_20; module_bonus_frame_behavior_5; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\001_p224_Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingEnabled.c

### 2. Unity.XR.Oculus.NativeMethods.Internal$$SetEyeTrackedFoveatedRenderingEnabled

- Manual priority score: 222
- Manual tier: A_must_review
- Original scanner score: 149
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; foveation_rendering; frame_behavior; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_21; paired_field_refs_with_eye_source; strong_foveation_hits_2; frame_or_lifecycle_behavior; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_149; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_foveation_rendering_20; module_bonus_frame_behavior_5; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\002_p222_Unity.XR.Oculus.NativeMethods.Internal$$SetEyeTrackedFoveatedRenderingEnabled.c

### 3. Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingSupported

- Manual priority score: 222
- Manual tier: A_must_review
- Original scanner score: 149
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; foveation_rendering; frame_behavior; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_21; paired_field_refs_with_eye_source; strong_foveation_hits_2; frame_or_lifecycle_behavior; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_149; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_foveation_rendering_20; module_bonus_frame_behavior_5; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\003_p222_Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingSupported.c

### 4. UnityEngine.InputSystem.XR.XRHMD$$set_rightEyeRotation

- Manual priority score: 198
- Manual tier: A_must_review
- Original scanner score: 152
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; paired_state_refs; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_152; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\004_p198_UnityEngine.InputSystem.XR.XRHMD$$set_rightEyeRotation.c

### 5. UnityEngine.InputSystem.XR.XRHMD$$set_rightEyePosition

- Manual priority score: 198
- Manual tier: A_must_review
- Original scanner score: 152
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; paired_state_refs; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_152; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\005_p198_UnityEngine.InputSystem.XR.XRHMD$$set_rightEyePosition.c

### 6. UnityEngine.InputSystem.XR.XRHMD$$set_leftEyeRotation

- Manual priority score: 198
- Manual tier: A_must_review
- Original scanner score: 152
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; paired_state_refs; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_152; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\006_p198_UnityEngine.InputSystem.XR.XRHMD$$set_leftEyeRotation.c

### 7. UnityEngine.InputSystem.XR.XRHMD$$set_leftEyePosition

- Manual priority score: 198
- Manual tier: A_must_review
- Original scanner score: 152
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; paired_state_refs; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_152; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\007_p198_UnityEngine.InputSystem.XR.XRHMD$$set_leftEyePosition.c

### 8. UnityEngine.InputSystem.XR.XRHMD$$get_rightEyeRotation

- Manual priority score: 198
- Manual tier: A_must_review
- Original scanner score: 152
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; paired_state_refs; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_152; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\008_p198_UnityEngine.InputSystem.XR.XRHMD$$get_rightEyeRotation.c

### 9. UnityEngine.InputSystem.XR.XRHMD$$get_rightEyePosition

- Manual priority score: 198
- Manual tier: A_must_review
- Original scanner score: 152
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; paired_state_refs; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_152; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\009_p198_UnityEngine.InputSystem.XR.XRHMD$$get_rightEyePosition.c

### 10. UnityEngine.InputSystem.XR.XRHMD$$get_leftEyeRotation

- Manual priority score: 198
- Manual tier: A_must_review
- Original scanner score: 152
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; paired_state_refs; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_152; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\010_p198_UnityEngine.InputSystem.XR.XRHMD$$get_leftEyeRotation.c

### 11. UnityEngine.InputSystem.XR.XRHMD$$get_leftEyePosition

- Manual priority score: 198
- Manual tier: A_must_review
- Original scanner score: 152
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; paired_state_refs; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_152; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\011_p198_UnityEngine.InputSystem.XR.XRHMD$$get_leftEyePosition.c

### 12. UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$set_pose

- Manual priority score: 193
- Manual tier: A_must_review
- Original scanner score: 135
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; attempted_use
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_7; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; attempted_eye_tracking_permission_or_feature_enable; functionality_gaze_retrieval_or_extraction
- Priority reasons: base_scanner_score_135; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\012_p193_UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$set_pose.c

### 13. UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$get_pose

- Manual priority score: 193
- Manual tier: A_must_review
- Original scanner score: 135
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; attempted_use
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; attempted_eye_tracking_permission_or_feature_enable; functionality_gaze_retrieval_or_extraction
- Priority reasons: base_scanner_score_135; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\013_p193_UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$get_pose.c

### 14. UnityEngine.UI.GraphicRaycaster$$set_ignoreReversedGraphics

- Manual priority score: 179
- Manual tier: A_must_review
- Original scanner score: 112
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: eye_source; weak_source_state; ray_interaction; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; ray_or_cast_sink_hits_2; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_112; module_bonus_ray_interaction_15; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\014_p179_UnityEngine.UI.GraphicRaycaster$$set_ignoreReversedGraphics.c

### 15. UnityEngine.UI.GraphicRaycaster$$get_ignoreReversedGraphics

- Manual priority score: 179
- Manual tier: A_must_review
- Original scanner score: 112
- Original scanner label: 90_plus_framework_foveated_rendering_support_or_attempt_near_certain
- Modules: eye_source; weak_source_state; ray_interaction; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; ray_or_cast_sink_hits_2; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; negative_framework_support_context_without_confirmed_app_level_gaze_flow; framework_foveation_support_not_confirmed_dynamic_eye_tracking; functionality_foveated_rendering
- Priority reasons: base_scanner_score_112; module_bonus_ray_interaction_15; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\015_p179_UnityEngine.UI.GraphicRaycaster$$get_ignoreReversedGraphics.c

### 16. UnityEngine.InputSystem.XR.Eyes$$set_rightEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\016_p178_UnityEngine.InputSystem.XR.Eyes$$set_rightEyeRotation.c

### 17. UnityEngine.InputSystem.XR.Eyes$$set_rightEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\017_p178_UnityEngine.InputSystem.XR.Eyes$$set_rightEyePosition.c

### 18. UnityEngine.InputSystem.XR.Eyes$$set_leftEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\018_p178_UnityEngine.InputSystem.XR.Eyes$$set_leftEyeRotation.c

### 19. UnityEngine.InputSystem.XR.Eyes$$set_leftEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\019_p178_UnityEngine.InputSystem.XR.Eyes$$set_leftEyePosition.c

### 20. UnityEngine.InputSystem.XR.Eyes$$get_rightEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\020_p178_UnityEngine.InputSystem.XR.Eyes$$get_rightEyeRotation.c

### 21. UnityEngine.InputSystem.XR.Eyes$$get_rightEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\021_p178_UnityEngine.InputSystem.XR.Eyes$$get_rightEyePosition.c

### 22. UnityEngine.InputSystem.XR.Eyes$$get_leftEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\022_p178_UnityEngine.InputSystem.XR.Eyes$$get_leftEyeRotation.c

### 23. UnityEngine.InputSystem.XR.Eyes$$get_leftEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\023_p178_UnityEngine.InputSystem.XR.Eyes$$get_leftEyePosition.c

### 24. Unity.XR.Oculus.Input.OculusHMD$$set_rightEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\024_p178_Unity.XR.Oculus.Input.OculusHMD$$set_rightEyeRotation.c

### 25. Unity.XR.Oculus.Input.OculusHMD$$set_rightEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\025_p178_Unity.XR.Oculus.Input.OculusHMD$$set_rightEyePosition.c

### 26. Unity.XR.Oculus.Input.OculusHMD$$set_leftEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\026_p178_Unity.XR.Oculus.Input.OculusHMD$$set_leftEyeRotation.c

### 27. Unity.XR.Oculus.Input.OculusHMD$$set_leftEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\027_p178_Unity.XR.Oculus.Input.OculusHMD$$set_leftEyePosition.c

### 28. Unity.XR.Oculus.Input.OculusHMD$$get_rightEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\028_p178_Unity.XR.Oculus.Input.OculusHMD$$get_rightEyeRotation.c

### 29. Unity.XR.Oculus.Input.OculusHMD$$get_rightEyePosition

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\029_p178_Unity.XR.Oculus.Input.OculusHMD$$get_rightEyePosition.c

### 30. Unity.XR.Oculus.Input.OculusHMD$$get_leftEyeRotation

- Manual priority score: 178
- Manual tier: A_must_review
- Original scanner score: 140
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; active_gaze_retrieval; possible_biometrics
- Evidence: strong_eye_source_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; active_gaze_state_retrieval_with_validity_and_pose; possible_biometric_feature_from_active_eye_context; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_140; module_bonus_validity_gate_8; module_bonus_pose_vector_10; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\TruckParkingSimulatorVRDemo\manual-review-pack\A_must_review\030_p178_Unity.XR.Oculus.Input.OculusHMD$$get_leftEyeRotation.c
