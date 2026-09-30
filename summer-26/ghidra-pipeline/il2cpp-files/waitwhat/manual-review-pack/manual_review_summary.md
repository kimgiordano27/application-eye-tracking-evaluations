# Manual Review Pack Summary: waitwhat

Selected functions: 100

## Tier counts

- A_must_review: 100

## Top functions

### 1. UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch3startPosition

- Manual priority score: 516
- Manual tier: A_must_review
- Original scanner score: 353
- Original scanner label: 90_plus_confirmed_eye_data_collection_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; attempted_use; active_gaze_retrieval; active_gaze_interaction; active_gaze_collection; possible_biometrics
- Evidence: strong_eye_source_hits_8; weak_xr_or_state_hits_21; validity_or_gating_hits_3; strong_pose_or_ray_construction_hits_2; ray_or_cast_sink_hits_4; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_17; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; attempted_eye_tracking_permission_or_feature_enable; active_gaze_state_retrieval_with_validity_and_pose; active_gaze_values_flow_to_interaction_sink; active_gaze_values_flow_to_collection_or_telemetry_sink; possible_biometric_feature_from_active_eye_context; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_21; functionality_data_collection_or_telemetry_hits_12; functionality_possible_biometrics_hits_4
- Priority reasons: base_scanner_score_353; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\001_p516_UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch3startPosition.c

### 2. FUN_06bbe694

- Manual priority score: 463
- Manual tier: A_must_review
- Original scanner score: 300
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_21; ray_or_cast_sink_hits_10; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_12; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_14; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_300; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\002_p463_FUN_06bbe694.c

### 3. UnityEngine.EventSystems.PointerInputModule$$RemovePointerData

- Manual priority score: 443
- Manual tier: A_must_review
- Original scanner score: 280
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_5; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_15; ray_or_cast_sink_hits_9; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_8; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_13; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_280; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\003_p443_UnityEngine.EventSystems.PointerInputModule$$RemovePointerData.c

### 4. UnityEngine.EventSystems.PointerInputModule$$GetTouchPointerEventData

- Manual priority score: 443
- Manual tier: A_must_review
- Original scanner score: 280
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_7; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_15; ray_or_cast_sink_hits_9; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_8; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_13; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_280; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\004_p443_UnityEngine.EventSystems.PointerInputModule$$GetTouchPointerEventData.c

### 5. UnityEngine.EventSystems.PointerInputModule$$GetPointerData

- Manual priority score: 443
- Manual tier: A_must_review
- Original scanner score: 280
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_8; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_16; ray_or_cast_sink_hits_10; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_9; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_14; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_280; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\005_p443_UnityEngine.EventSystems.PointerInputModule$$GetPointerData.c

### 6. UnityEngine.EventSystems.BaseInputModule$$UpdateModule

- Manual priority score: 443
- Manual tier: A_must_review
- Original scanner score: 280
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_16; ray_or_cast_sink_hits_10; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_9; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_14; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_280; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\006_p443_UnityEngine.EventSystems.BaseInputModule$$UpdateModule.c

### 7. UnityEngine.EventSystems.BaseInputModule$$ShouldActivateModule

- Manual priority score: 443
- Manual tier: A_must_review
- Original scanner score: 280
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_16; ray_or_cast_sink_hits_10; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_9; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_14; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_280; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\007_p443_UnityEngine.EventSystems.BaseInputModule$$ShouldActivateModule.c

### 8. UnityEngine.EventSystems.BaseInputModule$$IsPointerOverGameObject

- Manual priority score: 443
- Manual tier: A_must_review
- Original scanner score: 280
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_16; ray_or_cast_sink_hits_10; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_9; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_14; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_280; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\008_p443_UnityEngine.EventSystems.BaseInputModule$$IsPointerOverGameObject.c

### 9. UnityEngine.EventSystems.BaseInputModule$$IsModuleSupported

- Manual priority score: 443
- Manual tier: A_must_review
- Original scanner score: 280
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_8; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_16; ray_or_cast_sink_hits_10; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_9; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_14; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_280; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\009_p443_UnityEngine.EventSystems.BaseInputModule$$IsModuleSupported.c

### 10. UnityEngine.EventSystems.BaseInputModule$$GetNavigationEventDeviceType

- Manual priority score: 443
- Manual tier: A_must_review
- Original scanner score: 280
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_16; ray_or_cast_sink_hits_10; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_9; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_14; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_280; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\010_p443_UnityEngine.EventSystems.BaseInputModule$$GetNavigationEventDeviceType.c

### 11. UnityEngine.EventSystems.BaseInputModule$$GetBaseEventData

- Manual priority score: 443
- Manual tier: A_must_review
- Original scanner score: 280
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_8; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_16; ray_or_cast_sink_hits_10; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_9; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_14; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_280; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\011_p443_UnityEngine.EventSystems.BaseInputModule$$GetBaseEventData.c

### 12. UnityEngine.EventSystems.BaseInputModule$$GetAxisEventData

- Manual priority score: 443
- Manual tier: A_must_review
- Original scanner score: 280
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_8; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_21; ray_or_cast_sink_hits_10; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_11; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_14; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_280; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\012_p443_UnityEngine.EventSystems.BaseInputModule$$GetAxisEventData.c

### 13. UnityEngine.EventSystems.BaseInputModule$$DeactivateModule

- Manual priority score: 443
- Manual tier: A_must_review
- Original scanner score: 280
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_16; ray_or_cast_sink_hits_10; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_9; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_14; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_280; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\013_p443_UnityEngine.EventSystems.BaseInputModule$$DeactivateModule.c

### 14. UnityEngine.EventSystems.BaseInputModule$$ConvertUIToolkitPointerId

- Manual priority score: 443
- Manual tier: A_must_review
- Original scanner score: 280
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_16; ray_or_cast_sink_hits_10; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_9; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_14; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_280; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\014_p443_UnityEngine.EventSystems.BaseInputModule$$ConvertUIToolkitPointerId.c

### 15. UnityEngine.EventSystems.BaseInputModule$$ConvertPointerEventScrollDeltaToTicks

- Manual priority score: 443
- Manual tier: A_must_review
- Original scanner score: 280
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_16; ray_or_cast_sink_hits_10; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_9; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_14; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_280; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\015_p443_UnityEngine.EventSystems.BaseInputModule$$ConvertPointerEventScrollDeltaToTicks.c

### 16. UnityEngine.EventSystems.BaseInputModule$$ActivateModule

- Manual priority score: 443
- Manual tier: A_must_review
- Original scanner score: 280
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_16; ray_or_cast_sink_hits_10; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_9; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_14; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_280; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\016_p443_UnityEngine.EventSystems.BaseInputModule$$ActivateModule.c

### 17. UnityEngine.EventSystems.BaseInputModule$$.ctor

- Manual priority score: 443
- Manual tier: A_must_review
- Original scanner score: 280
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_6; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_16; ray_or_cast_sink_hits_10; ui_or_gameplay_sink_hits_4; telemetry_or_network_hits_9; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_collection_sink; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_14; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_280; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\017_p443_UnityEngine.EventSystems.BaseInputModule$$.ctor.c

### 18. FUN_064f3e98

- Manual priority score: 399
- Manual tier: A_must_review
- Original scanner score: 266
- Original scanner label: 90_plus_confirmed_eye_data_collection_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo; active_gaze_retrieval; active_gaze_collection; possible_biometrics
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_6; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; active_gaze_state_retrieval_with_validity_and_pose; active_gaze_values_flow_to_collection_or_telemetry_sink; possible_biometric_feature_from_active_eye_context; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_2; functionality_possible_biometrics_hits_4
- Priority reasons: base_scanner_score_266; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\018_p399_FUN_064f3e98.c

### 19. FUN_0642e830

- Manual priority score: 387
- Manual tier: A_must_review
- Original scanner score: 215
- Original scanner label: 90_plus_attempted_eye_tracking_permission_or_feature_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; data_collection; telemetry; frame_behavior; attempted_use
- Evidence: strong_eye_source_hits_10; weak_xr_or_state_hits_21; validity_or_gating_hits_5; ray_or_cast_sink_hits_4; ui_or_gameplay_sink_hits_21; strong_file_logging_hits_2; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; attempted_eye_tracking_permission_or_feature_enable; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_20; functionality_possible_biometrics_hits_4
- Priority reasons: base_scanner_score_215; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\019_p387_FUN_0642e830.c

### 20. UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch3delta

- Manual priority score: 367
- Manual tier: A_must_review
- Original scanner score: 195
- Original scanner label: 90_plus_framework_eye_tracking_support_or_permission_path_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; data_collection; telemetry; frame_behavior; attempted_use
- Evidence: strong_eye_source_hits_10; weak_xr_or_state_hits_21; validity_or_gating_hits_5; ray_or_cast_sink_hits_4; ui_or_gameplay_sink_hits_21; strong_file_logging_hits_2; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; attempted_eye_tracking_permission_or_feature_enable; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_20; functionality_possible_biometrics_hits_4
- Priority reasons: base_scanner_score_195; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\020_p367_UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch3delta.c

### 21. UnityEngine.TextSelectingUtilities$$MoveParagraphForward

- Manual priority score: 359
- Manual tier: A_must_review
- Original scanner score: 192
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; data_collection; telemetry; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; strong_file_logging_hits_11; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_1; functionality_data_collection_or_telemetry_hits_13
- Priority reasons: base_scanner_score_192; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\021_p359_UnityEngine.TextSelectingUtilities$$MoveParagraphForward.c

### 22. UnityEngine.ConfigurableJoint$$get_targetPosition

- Manual priority score: 359
- Manual tier: A_must_review
- Original scanner score: 192
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; data_collection; telemetry; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; strong_file_logging_hits_6; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_1; functionality_data_collection_or_telemetry_hits_8
- Priority reasons: base_scanner_score_192; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\022_p359_UnityEngine.ConfigurableJoint$$get_targetPosition.c

### 23. UnityEngine.Collider$$Raycast_Injected

- Manual priority score: 346
- Manual tier: A_must_review
- Original scanner score: 177
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; ray_interaction; ui_interaction; data_collection; telemetry
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_6; validity_or_gating_hits_21; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_4; ui_or_gameplay_sink_hits_3; strong_file_logging_hits_21; telemetry_or_network_hits_7; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21
- Priority reasons: base_scanner_score_177; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\023_p346_UnityEngine.Collider$$Raycast_Injected.c

### 24. UnityEngine.Collider$$Raycast

- Manual priority score: 346
- Manual tier: A_must_review
- Original scanner score: 177
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; ray_interaction; ui_interaction; data_collection; telemetry
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_6; validity_or_gating_hits_21; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_4; ui_or_gameplay_sink_hits_3; strong_file_logging_hits_21; telemetry_or_network_hits_7; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21
- Priority reasons: base_scanner_score_177; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\024_p346_UnityEngine.Collider$$Raycast.c

### 25. UnityEngine.Collider$$Raycast

- Manual priority score: 346
- Manual tier: A_must_review
- Original scanner score: 177
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; ray_interaction; ui_interaction; data_collection; telemetry
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_6; validity_or_gating_hits_21; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_4; ui_or_gameplay_sink_hits_3; strong_file_logging_hits_21; telemetry_or_network_hits_7; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21
- Priority reasons: base_scanner_score_177; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\025_p346_UnityEngine.Collider$$Raycast.c

### 26. UnityEngine.Collider$$get_bounds_Injected

- Manual priority score: 342
- Manual tier: A_must_review
- Original scanner score: 173
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; ray_interaction; ui_interaction; data_collection; telemetry
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_6; validity_or_gating_hits_21; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_2; ui_or_gameplay_sink_hits_3; strong_file_logging_hits_21; telemetry_or_network_hits_7; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21
- Priority reasons: base_scanner_score_173; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\026_p342_UnityEngine.Collider$$get_bounds_Injected.c

### 27. UnityEngine.Collider$$ClosestPointOnBounds

- Manual priority score: 342
- Manual tier: A_must_review
- Original scanner score: 173
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; ray_interaction; ui_interaction; data_collection; telemetry
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_6; validity_or_gating_hits_21; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_2; ui_or_gameplay_sink_hits_3; strong_file_logging_hits_21; telemetry_or_network_hits_7; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21
- Priority reasons: base_scanner_score_173; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\027_p342_UnityEngine.Collider$$ClosestPointOnBounds.c

### 28. FUN_06b545ac

- Manual priority score: 341
- Manual tier: A_must_review
- Original scanner score: 203
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; telemetry; structure_combo
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_16; ray_or_cast_sink_hits_2; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_203; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\028_p341_FUN_06b545ac.c

### 29. UnityEngine.ConfigurableJoint$$set_targetPosition

- Manual priority score: 339
- Manual tier: A_must_review
- Original scanner score: 180
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; data_collection; telemetry; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; strong_file_logging_hits_6; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_8
- Priority reasons: base_scanner_score_180; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\029_p339_UnityEngine.ConfigurableJoint$$set_targetPosition.c

### 30. UnityEngine.Collider$$set_enabled_Injected

- Manual priority score: 334
- Manual tier: A_must_review
- Original scanner score: 167
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; data_collection; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_16; validity_or_gating_hits_21; ray_or_cast_sink_hits_2; ui_or_gameplay_sink_hits_8; strong_file_logging_hits_21; telemetry_or_network_hits_18; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21
- Priority reasons: base_scanner_score_167; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\waitwhat\manual-review-pack\A_must_review\030_p334_UnityEngine.Collider$$set_enabled_Injected.c
