# Manual Review Pack Summary: vrfs

Selected functions: 100

## Tier counts

- A_must_review: 100

## Top functions

### 1. OVRPlugin$$EnumerateSpaceSupportedComponents

- Manual priority score: 299
- Manual tier: A_must_review
- Original scanner score: 214
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_214; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\001_p299_OVRPlugin$$EnumerateSpaceSupportedComponents.c

### 2. OVRPlugin$$EnumerateSpaceSupportedComponents

- Manual priority score: 299
- Manual tier: A_must_review
- Original scanner score: 214
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_214; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\002_p299_OVRPlugin$$EnumerateSpaceSupportedComponents.c

### 3. System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Quatf>

- Manual priority score: 299
- Manual tier: A_must_review
- Original scanner score: 166
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_166; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\003_p299_System.Array$$InternalArray__ICollection_CopyTo_OVRPlugin.Quatf_.c

### 4. Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSeatPose

- Manual priority score: 289
- Manual tier: A_must_review
- Original scanner score: 172
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; data_collection; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_2; validity_or_gating_hits_13; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; strong_file_logging_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_172; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\004_p289_Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSeatPose.c

### 5. FUN_02cfd03c

- Manual priority score: 278
- Manual tier: A_must_review
- Original scanner score: 152
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_1; telemetry_or_network_hits_1; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_152; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\005_p278_FUN_02cfd03c.c

### 6. OVRPlugin$$SaveSpace

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 200
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_4; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_200; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\006_p277_OVRPlugin$$SaveSpace.c

### 7. OVRPlugin$$RetrieveSpaceQueryResults

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 200
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_4; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_200; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\007_p277_OVRPlugin$$RetrieveSpaceQueryResults.c

### 8. OVRPlugin$$QuerySpacesWithResult

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 200
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_4; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_200; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\008_p277_OVRPlugin$$QuerySpacesWithResult.c

### 9. OVRPlugin$$GetSpaceUuid

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 200
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_4; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_200; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\009_p277_OVRPlugin$$GetSpaceUuid.c

### 10. OVRPlugin$$EraseSpaceWithResult

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 200
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_4; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_200; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\010_p277_OVRPlugin$$EraseSpaceWithResult.c

### 11. OVRPlugin$$EraseSpace

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 200
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_4; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_200; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\011_p277_OVRPlugin$$EraseSpace.c

### 12. System.ComponentModel.ReflectPropertyDescriptor$$get_ShouldSerializeMethodValue

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 155
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; weak_pose_support; paired_state_refs; telemetry; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; weak_vector_component_hits_1; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_eye_api_context_without_clear_sink_hits_1
- Priority reasons: base_scanner_score_155; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\012_p277_System.ComponentModel.ReflectPropertyDescriptor$$get_ShouldSerializeMethodValue.c

### 13. Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition

- Manual priority score: 260
- Manual tier: A_must_review
- Original scanner score: 151
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; pose_vector; data_collection; structure_combo
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_9; strong_pose_or_ray_construction_hits_2; strong_file_logging_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_151; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\013_p260_Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition.c

### 14. Meta.XR.MetaXREyeTrackedFoveationFeature$$OnSessionCreate

- Manual priority score: 259
- Manual tier: A_must_review
- Original scanner score: 136
- Original scanner label: 90_plus_uncertain_foveated_rendering_near_certain
- Modules: eye_source; validity_gate; telemetry; foveation_rendering
- Evidence: strong_eye_source_hits_3; validity_or_gating_hits_5; telemetry_or_network_hits_2; strong_foveation_hits_2; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_136; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\014_p259_Meta.XR.MetaXREyeTrackedFoveationFeature$$OnSessionCreate.c

### 15. OVRPlugin$$QuerySpaces

- Manual priority score: 247
- Manual tier: A_must_review
- Original scanner score: 170
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_4; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_170; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\015_p247_OVRPlugin$$QuerySpaces.c

### 16. OVRManager$$get_eyeTrackedFoveatedRenderingSupported

- Manual priority score: 239
- Manual tier: A_must_review
- Original scanner score: 165
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_4; validity_or_gating_hits_8; paired_field_refs_with_eye_source; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_165; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\016_p239_OVRManager$$get_eyeTrackedFoveatedRenderingSupported.c

### 17. OVRManager$$get_eyeTrackedFoveatedRenderingEnabled

- Manual priority score: 239
- Manual tier: A_must_review
- Original scanner score: 165
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_6; validity_or_gating_hits_5; paired_field_refs_with_eye_source; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_165; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\017_p239_OVRManager$$get_eyeTrackedFoveatedRenderingEnabled.c

### 18. OVRManager$$GetEyeTrackedFoveatedRenderingSupported

- Manual priority score: 239
- Manual tier: A_must_review
- Original scanner score: 165
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_4; validity_or_gating_hits_5; paired_field_refs_with_eye_source; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_165; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\018_p239_OVRManager$$GetEyeTrackedFoveatedRenderingSupported.c

### 19. System.ComponentModel.EnumConverter$$set_Values

- Manual priority score: 226
- Manual tier: A_must_review
- Original scanner score: 142
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ui_interaction; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; ui_or_gameplay_sink_hits_2; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_eye_api_context_without_clear_sink_hits_1
- Priority reasons: base_scanner_score_142; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ui_interaction_12; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\019_p226_System.ComponentModel.EnumConverter$$set_Values.c

### 20. System.ComponentModel.DoWorkEventHandler$$EndInvoke

- Manual priority score: 226
- Manual tier: A_must_review
- Original scanner score: 142
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ui_interaction; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; ui_or_gameplay_sink_hits_2; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_142; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ui_interaction_12; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\020_p226_System.ComponentModel.DoWorkEventHandler$$EndInvoke.c

### 21. OVRPlugin$$SendEvent

- Manual priority score: 224
- Manual tier: A_must_review
- Original scanner score: 119
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_9; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_119; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\021_p224_OVRPlugin$$SendEvent.c

### 22. System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.EyeGazeState>

- Manual priority score: 223
- Manual tier: A_must_review
- Original scanner score: 171
- Original scanner label: 90_plus_confirmed_gaze_retrieval_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; attempted_use; active_gaze_retrieval
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; attempted_eye_tracking_permission_or_feature_enable; active_gaze_state_retrieval_with_validity_and_pose; functionality_gaze_retrieval_or_extraction
- Priority reasons: base_scanner_score_171; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\022_p223_System.Array$$InternalArray__ICollection_CopyTo_OVRPlugin.EyeGazeState_.c

### 23. Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray

- Manual priority score: 220
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; data_collection; telemetry; frame_behavior
- Evidence: validity_or_gating_hits_10; strong_pose_or_ray_construction_hits_4; strong_file_logging_hits_2; telemetry_or_network_hits_2; frame_or_lifecycle_behavior; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\023_p220_Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray.c

### 24. System.Array$$InternalArray__ICollection_Contains<OVRPlugin.EyeGazeState>

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 167
- Original scanner label: 90_plus_confirmed_gaze_retrieval_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; attempted_use; active_gaze_retrieval
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_17; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; attempted_eye_tracking_permission_or_feature_enable; active_gaze_state_retrieval_with_validity_and_pose; functionality_gaze_retrieval_or_extraction
- Priority reasons: base_scanner_score_167; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\024_p219_System.Array$$InternalArray__ICollection_Contains_OVRPlugin.EyeGazeState_.c

### 25. OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_4; validity_or_gating_hits_21; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\025_p219_OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled.c

### 26. OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_4; validity_or_gating_hits_21; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\026_p219_OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported.c

### 27. OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_6; validity_or_gating_hits_21; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\027_p219_OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled.c

### 28. OVRManager$$SetEyeTrackedFoveatedRenderingEnabled

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_4; validity_or_gating_hits_12; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\028_p219_OVRManager$$SetEyeTrackedFoveatedRenderingEnabled.c

### 29. System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$Dispose

- Manual priority score: 218
- Manual tier: A_must_review
- Original scanner score: 166
- Original scanner label: 90_plus_confirmed_gaze_retrieval_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; attempted_use; active_gaze_retrieval
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_eye_source; attempted_eye_tracking_permission_or_feature_enable; active_gaze_state_retrieval_with_validity_and_pose; functionality_gaze_retrieval_or_extraction
- Priority reasons: base_scanner_score_166; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\029_p218_System.Array.EmptyInternalEnumerator_OVRPlugin.EyeGazeState_$$Dispose.c

### 30. Meta.XR.MetaXREyeTrackedFoveationFeature$$get_eyeTrackedFoveatedRenderingEnabled

- Manual priority score: 218
- Manual tier: A_must_review
- Original scanner score: 158
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_7; weak_xr_or_state_hits_4; validity_or_gating_hits_5; strong_foveation_hits_4; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_158; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\vrfs\manual-review-pack\A_must_review\030_p218_Meta.XR.MetaXREyeTrackedFoveationFeature$$get_eyeTrackedFoveatedRenderingEnabled.c
