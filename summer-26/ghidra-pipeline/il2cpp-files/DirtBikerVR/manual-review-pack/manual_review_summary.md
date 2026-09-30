# Manual Review Pack Summary: DirtBikerVR

Selected functions: 100

## Tier counts

- A_must_review: 100

## Top functions

### 1. UnityEngine.UI.VertexHelper$$Dispose

- Manual priority score: 379
- Manual tier: A_must_review
- Original scanner score: 216
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; ui_interaction; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_4; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_2; ray_or_cast_sink_hits_8; ui_or_gameplay_sink_hits_20; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_20; functionality_data_collection_or_telemetry_hits_21; functionality_possible_biometrics_hits_6
- Priority reasons: base_scanner_score_216; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\001_p379_UnityEngine.UI.VertexHelper$$Dispose.c

### 2. System.Array$$InternalArray__ICollection_Remove<OVRPlugin.EyeGazeState>

- Manual priority score: 369
- Manual tier: A_must_review
- Original scanner score: 244
- Original scanner label: 90_plus_confirmed_eye_data_collection_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; structure_combo; attempted_use; active_gaze_retrieval; active_gaze_collection
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_1; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; attempted_eye_tracking_permission_or_feature_enable; active_gaze_state_retrieval_with_validity_and_pose; active_gaze_values_flow_to_collection_or_telemetry_sink; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_244; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\002_p369_System.Array$$InternalArray__ICollection_Remove_OVRPlugin.EyeGazeState_.c

### 3. thunk_FUN_07e4925c

- Manual priority score: 351
- Manual tier: A_must_review
- Original scanner score: 185
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; data_collection; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_6; validity_or_gating_hits_6; ray_or_cast_sink_hits_2; ui_or_gameplay_sink_hits_18; strong_file_logging_hits_2; telemetry_or_network_hits_12; frame_or_lifecycle_behavior; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_14; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_185; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\003_p351_thunk_FUN_07e4925c.c

### 4. FUN_07e4925c

- Manual priority score: 351
- Manual tier: A_must_review
- Original scanner score: 185
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; data_collection; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_6; validity_or_gating_hits_6; ray_or_cast_sink_hits_2; ui_or_gameplay_sink_hits_18; strong_file_logging_hits_2; telemetry_or_network_hits_12; frame_or_lifecycle_behavior; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_14; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_185; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\004_p351_FUN_07e4925c.c

### 5. UnityEngine.UIElements.DefaultEventSystem.LegacyInputProcessor$$SendIMGUIEvents

- Manual priority score: 315
- Manual tier: A_must_review
- Original scanner score: 152
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; data_collection; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_4; validity_or_gating_hits_3; ray_or_cast_sink_hits_1; ui_or_gameplay_sink_hits_15; strong_file_logging_hits_2; telemetry_or_network_hits_8; frame_or_lifecycle_behavior; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_10; functionality_possible_biometrics_hits_2
- Priority reasons: base_scanner_score_152; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\005_p315_UnityEngine.UIElements.DefaultEventSystem.LegacyInputProcessor$$SendIMGUIEvents.c

### 6. FUN_07eaa3d4

- Manual priority score: 308
- Manual tier: A_must_review
- Original scanner score: 173
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_6; validity_or_gating_hits_6; ray_or_cast_sink_hits_14; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21; functionality_possible_biometrics_hits_13
- Priority reasons: base_scanner_score_173; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\006_p308_FUN_07eaa3d4.c

### 7. FUN_077a7944

- Manual priority score: 305
- Manual tier: A_must_review
- Original scanner score: 170
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_21; validity_or_gating_hits_3; ray_or_cast_sink_hits_21; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_18; functionality_possible_biometrics_hits_6
- Priority reasons: base_scanner_score_170; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\007_p305_FUN_077a7944.c

### 8. FUN_07df00bc

- Manual priority score: 302
- Manual tier: A_must_review
- Original scanner score: 167
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_12; weak_xr_or_state_hits_21; validity_or_gating_hits_2; ray_or_cast_sink_hits_21; ui_or_gameplay_sink_hits_12; telemetry_or_network_hits_18; frame_or_lifecycle_behavior; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_16
- Priority reasons: base_scanner_score_167; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\008_p302_FUN_07df00bc.c

### 9. UnityEngine.Rendering.RenderPipeline$$Dispose

- Manual priority score: 297
- Manual tier: A_must_review
- Original scanner score: 229
- Original scanner label: 90_plus_possible_eye_biometrics_near_certain
- Modules: eye_source; validity_gate; pose_vector; ui_interaction; structure_combo; attempted_use; active_gaze_retrieval; active_gaze_interaction; possible_biometrics
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_2; ui_or_gameplay_sink_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; attempted_eye_tracking_permission_or_feature_enable; active_gaze_state_retrieval_with_validity_and_pose; active_gaze_values_flow_to_interaction_sink; possible_biometric_feature_from_active_eye_context; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_2; functionality_possible_biometrics_hits_1
- Priority reasons: base_scanner_score_229; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\009_p297_UnityEngine.Rendering.RenderPipeline$$Dispose.c

### 10. Unity.Services.Multiplayer.SessionHandler.<>c__DisplayClass128_0$$.ctor

- Manual priority score: 297
- Manual tier: A_must_review
- Original scanner score: 167
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_2; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_167; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\010_p297_Unity.Services.Multiplayer.SessionHandler._c__DisplayClass128_0$$.ctor.c

### 11. Unity.Services.Multiplayer.SessionHandler.<>c$$.cctor

- Manual priority score: 297
- Manual tier: A_must_review
- Original scanner score: 167
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_2; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_167; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\011_p297_Unity.Services.Multiplayer.SessionHandler._c$$.cctor.c

### 12. Unity.Services.Multiplayer.SessionHandler$$OnQuitting

- Manual priority score: 296
- Manual tier: A_must_review
- Original scanner score: 171
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_4; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_171; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\012_p296_Unity.Services.Multiplayer.SessionHandler$$OnQuitting.c

### 13. Unity.Services.Multiplayer.LobbyHandler.<InitLobbyEventsAsync>d__71$$MoveNext

- Manual priority score: 296
- Manual tier: A_must_review
- Original scanner score: 161
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_21; validity_or_gating_hits_2; ray_or_cast_sink_hits_14; ui_or_gameplay_sink_hits_14; telemetry_or_network_hits_17; frame_or_lifecycle_behavior; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_13; functionality_possible_biometrics_hits_4
- Priority reasons: base_scanner_score_161; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\013_p296_Unity.Services.Multiplayer.LobbyHandler._InitLobbyEventsAsync_d__71$$MoveNext.c

### 14. Unity.Services.Multiplayer.LobbyHandler.<GetJoinedLobbiesAsync>d__82$$SetStateMachine

- Manual priority score: 296
- Manual tier: A_must_review
- Original scanner score: 161
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_3; weak_xr_or_state_hits_21; validity_or_gating_hits_2; ray_or_cast_sink_hits_18; ui_or_gameplay_sink_hits_15; telemetry_or_network_hits_17; frame_or_lifecycle_behavior; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_13; functionality_possible_biometrics_hits_4
- Priority reasons: base_scanner_score_161; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\014_p296_Unity.Services.Multiplayer.LobbyHandler._GetJoinedLobbiesAsync_d__82$$SetStateMachine.c

### 15. UnityEngine.UIElements.UIR.DetachedAllocator$$Dispose

- Manual priority score: 293
- Manual tier: A_must_review
- Original scanner score: 163
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_3; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; telemetry_or_network_hits_21; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_data_collection_or_telemetry_hits_21
- Priority reasons: base_scanner_score_163; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\015_p293_UnityEngine.UIElements.UIR.DetachedAllocator$$Dispose.c

### 16. Unity.Services.Multiplayer.SessionHandler$$<UpdateDerivedProperties>b__128_0

- Manual priority score: 288
- Manual tier: A_must_review
- Original scanner score: 161
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_2; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_2; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_161; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\016_p288_Unity.Services.Multiplayer.SessionHandler$$_UpdateDerivedProperties_b__128_0.c

### 17. UnityEngine.UI.VertexHelper$$get_currentVertCount

- Manual priority score: 288
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_4; validity_or_gating_hits_4; ray_or_cast_sink_hits_8; ui_or_gameplay_sink_hits_20; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21; functionality_possible_biometrics_hits_6
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\017_p288_UnityEngine.UI.VertexHelper$$get_currentVertCount.c

### 18. UnityEngine.UI.VertexHelper$$get_currentIndexCount

- Manual priority score: 288
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_4; validity_or_gating_hits_4; ray_or_cast_sink_hits_8; ui_or_gameplay_sink_hits_20; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21; functionality_possible_biometrics_hits_6
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\018_p288_UnityEngine.UI.VertexHelper$$get_currentIndexCount.c

### 19. UnityEngine.UI.VertexHelper$$SetUIVertex

- Manual priority score: 288
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_4; validity_or_gating_hits_4; ray_or_cast_sink_hits_8; ui_or_gameplay_sink_hits_20; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21; functionality_possible_biometrics_hits_6
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\019_p288_UnityEngine.UI.VertexHelper$$SetUIVertex.c

### 20. UnityEngine.UI.VertexHelper$$PopulateUIVertex

- Manual priority score: 288
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_4; validity_or_gating_hits_4; ray_or_cast_sink_hits_8; ui_or_gameplay_sink_hits_20; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21; functionality_possible_biometrics_hits_6
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\020_p288_UnityEngine.UI.VertexHelper$$PopulateUIVertex.c

### 21. UnityEngine.UI.VertexHelper$$InitializeListIfRequired

- Manual priority score: 288
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_4; validity_or_gating_hits_5; ray_or_cast_sink_hits_9; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21; functionality_possible_biometrics_hits_8
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\021_p288_UnityEngine.UI.VertexHelper$$InitializeListIfRequired.c

### 22. UnityEngine.UI.VertexHelper$$FillMesh

- Manual priority score: 288
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_4; validity_or_gating_hits_4; ray_or_cast_sink_hits_8; ui_or_gameplay_sink_hits_20; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21; functionality_possible_biometrics_hits_6
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\022_p288_UnityEngine.UI.VertexHelper$$FillMesh.c

### 23. UnityEngine.UI.VertexHelper$$AddVert

- Manual priority score: 288
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_4; validity_or_gating_hits_4; ray_or_cast_sink_hits_8; ui_or_gameplay_sink_hits_20; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21; functionality_possible_biometrics_hits_6
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\023_p288_UnityEngine.UI.VertexHelper$$AddVert.c

### 24. UnityEngine.UI.VertexHelper$$.ctor

- Manual priority score: 288
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_5; ray_or_cast_sink_hits_9; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21; functionality_possible_biometrics_hits_8
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\024_p288_UnityEngine.UI.VertexHelper$$.ctor.c

### 25. UnityEngine.UI.VertexHelper$$.ctor

- Manual priority score: 288
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_5; ray_or_cast_sink_hits_9; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21; functionality_possible_biometrics_hits_8
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\025_p288_UnityEngine.UI.VertexHelper$$.ctor.c

### 26. UnityEngine.UI.ReflectionMethodsCache.RaycastAllCallback$$Invoke

- Manual priority score: 288
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_5; ray_or_cast_sink_hits_11; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21; functionality_possible_biometrics_hits_8
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\026_p288_UnityEngine.UI.ReflectionMethodsCache.RaycastAllCallback$$Invoke.c

### 27. UnityEngine.UI.ReflectionMethodsCache.RaycastAllCallback$$EndInvoke

- Manual priority score: 288
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_5; ray_or_cast_sink_hits_11; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21; functionality_possible_biometrics_hits_8
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\027_p288_UnityEngine.UI.ReflectionMethodsCache.RaycastAllCallback$$EndInvoke.c

### 28. UnityEngine.UI.ReflectionMethodsCache.RaycastAllCallback$$BeginInvoke

- Manual priority score: 288
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_5; ray_or_cast_sink_hits_11; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21; functionality_possible_biometrics_hits_8
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\028_p288_UnityEngine.UI.ReflectionMethodsCache.RaycastAllCallback$$BeginInvoke.c

### 29. UnityEngine.UI.ReflectionMethodsCache.RaycastAllCallback$$.ctor

- Manual priority score: 288
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_5; ray_or_cast_sink_hits_11; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21; functionality_possible_biometrics_hits_8
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\029_p288_UnityEngine.UI.ReflectionMethodsCache.RaycastAllCallback$$.ctor.c

### 30. UnityEngine.UI.ReflectionMethodsCache.Raycast3DCallback$$Invoke

- Manual priority score: 288
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; ray_interaction; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_5; weak_xr_or_state_hits_5; validity_or_gating_hits_6; ray_or_cast_sink_hits_12; ui_or_gameplay_sink_hits_21; telemetry_or_network_hits_21; frame_or_lifecycle_behavior; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_21; functionality_possible_biometrics_hits_10
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\DirtBikerVR\manual-review-pack\A_must_review\030_p288_UnityEngine.UI.ReflectionMethodsCache.Raycast3DCallback$$Invoke.c
