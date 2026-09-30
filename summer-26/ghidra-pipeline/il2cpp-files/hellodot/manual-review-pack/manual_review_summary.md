# Manual Review Pack Summary: hellodot

Selected functions: 100

## Tier counts

- A_must_review: 100

## Top functions

### 1. Meta.XR.MetaXRFoveationFeature$$set_useDynamicFoveatedRendering

- Manual priority score: 302
- Manual tier: A_must_review
- Original scanner score: 174
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; frame_behavior; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_16; telemetry_or_network_hits_2; strong_foveation_hits_8; frame_or_lifecycle_behavior; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_174; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\001_p302_Meta.XR.MetaXRFoveationFeature$$set_useDynamicFoveatedRendering.c

### 2. Meta.XR.MetaXRFoveationFeature$$get_useDynamicFoveatedRendering

- Manual priority score: 302
- Manual tier: A_must_review
- Original scanner score: 174
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; frame_behavior; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_16; telemetry_or_network_hits_2; strong_foveation_hits_8; frame_or_lifecycle_behavior; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_174; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\002_p302_Meta.XR.MetaXRFoveationFeature$$get_useDynamicFoveatedRendering.c

### 3. Meta.XR.MetaXRFoveationFeature$$FBSetFoveationLevel

- Manual priority score: 302
- Manual tier: A_must_review
- Original scanner score: 174
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; frame_behavior; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_14; telemetry_or_network_hits_2; strong_foveation_hits_4; frame_or_lifecycle_behavior; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_174; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\003_p302_Meta.XR.MetaXRFoveationFeature$$FBSetFoveationLevel.c

### 4. Meta.XR.MetaXRFoveationFeature$$FBGetFoveationLevel

- Manual priority score: 302
- Manual tier: A_must_review
- Original scanner score: 174
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; frame_behavior; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_13; telemetry_or_network_hits_2; strong_foveation_hits_4; frame_or_lifecycle_behavior; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_174; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\004_p302_Meta.XR.MetaXRFoveationFeature$$FBGetFoveationLevel.c

### 5. System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.get_Current

- Manual priority score: 287
- Manual tier: A_must_review
- Original scanner score: 170
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_17; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_eye_api_context_without_clear_sink_hits_2
- Priority reasons: base_scanner_score_170; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\005_p287_System.Array.InternalEnumerator_OVRPassthroughLayer.SerializedSurfaceGeometry_$$System.Collections.IEnumerator.get_Current.c

### 6. System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.Reset

- Manual priority score: 287
- Manual tier: A_must_review
- Original scanner score: 170
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_17; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_eye_api_context_without_clear_sink_hits_2
- Priority reasons: base_scanner_score_170; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\006_p287_System.Array.InternalEnumerator_OVRPassthroughLayer.SerializedSurfaceGeometry_$$System.Collections.IEnumerator.Reset.c

### 7. FUN_05e5720c

- Manual priority score: 278
- Manual tier: A_must_review
- Original scanner score: 152
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_1; telemetry_or_network_hits_1; strong_foveation_hits_1; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_permission_setup; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_152; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\007_p278_FUN_05e5720c.c

### 8. FUN_05e27be0

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 200
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_10; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_200; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\008_p277_FUN_05e27be0.c

### 9. System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$get_Current

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 192
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_192; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\009_p277_System.Array.EmptyInternalEnumerator_OVRPlugin.VirtualKeyboardModelAnimationState_$$get_Current.c

### 10. System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$System.Collections.IEnumerator.get_Current

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 192
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_5; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_6
- Priority reasons: base_scanner_score_192; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\010_p277_System.Array.EmptyInternalEnumerator_OVRPlugin.VirtualKeyboardModelAnimationState_$$System.Collections.IEnumerator.get_Current.c

### 11. System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$MoveNext

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 192
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_192; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\011_p277_System.Array.EmptyInternalEnumerator_OVRPlugin.VirtualKeyboardModelAnimationState_$$MoveNext.c

### 12. System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$Dispose

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 192
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_6; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_192; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\012_p277_System.Array.EmptyInternalEnumerator_OVRPlugin.VirtualKeyboardModelAnimationState_$$Dispose.c

### 13. System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$get_Current

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 192
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_8; strong_pose_or_ray_construction_hits_6; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_8; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_8
- Priority reasons: base_scanner_score_192; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\013_p277_System.Array.EmptyInternalEnumerator_OVRPlugin.Vector4s_$$get_Current.c

### 14. System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$System.Collections.IEnumerator.get_Current

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 192
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_5; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_6
- Priority reasons: base_scanner_score_192; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\014_p277_System.Array.EmptyInternalEnumerator_OVRPlugin.Vector4s_$$System.Collections.IEnumerator.get_Current.c

### 15. System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$System.Collections.IEnumerator.Reset

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 192
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_5; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_6
- Priority reasons: base_scanner_score_192; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\015_p277_System.Array.EmptyInternalEnumerator_OVRPlugin.Vector4s_$$System.Collections.IEnumerator.Reset.c

### 16. System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$MoveNext

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 192
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_8; strong_pose_or_ray_construction_hits_6; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_8; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_8
- Priority reasons: base_scanner_score_192; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\016_p277_System.Array.EmptyInternalEnumerator_OVRPlugin.Vector4s_$$MoveNext.c

### 17. System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$Dispose

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 192
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_8; strong_pose_or_ray_construction_hits_8; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_8; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_8
- Priority reasons: base_scanner_score_192; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\017_p277_System.Array.EmptyInternalEnumerator_OVRPlugin.Vector4s_$$Dispose.c

### 18. System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$.ctor

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 192
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_5; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_6
- Priority reasons: base_scanner_score_192; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\018_p277_System.Array.EmptyInternalEnumerator_OVRPlugin.Vector4s_$$.ctor.c

### 19. System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$.cctor

- Manual priority score: 277
- Manual tier: A_must_review
- Original scanner score: 192
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; ray_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_7; strong_pose_or_ray_construction_hits_5; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_6
- Priority reasons: base_scanner_score_192; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\019_p277_System.Array.EmptyInternalEnumerator_OVRPlugin.Vector4s_$$.cctor.c

### 20. Meta.XR.MetaXRFoveationFeature$$set_foveatedRenderingLevel

- Manual priority score: 270
- Manual tier: A_must_review
- Original scanner score: 142
- Original scanner label: 90_plus_uncertain_foveated_rendering_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; frame_behavior
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_14; telemetry_or_network_hits_2; strong_foveation_hits_4; frame_or_lifecycle_behavior; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_142; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\020_p270_Meta.XR.MetaXRFoveationFeature$$set_foveatedRenderingLevel.c

### 21. Meta.XR.MetaXRFoveationFeature$$get_foveatedRenderingLevel

- Manual priority score: 270
- Manual tier: A_must_review
- Original scanner score: 142
- Original scanner label: 90_plus_uncertain_foveated_rendering_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; frame_behavior
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_13; telemetry_or_network_hits_2; strong_foveation_hits_4; frame_or_lifecycle_behavior; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_142; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\021_p270_Meta.XR.MetaXRFoveationFeature$$get_foveatedRenderingLevel.c

### 22. Meta.XR.MetaXRFoveationFeature$$OnSessionCreate

- Manual priority score: 270
- Manual tier: A_must_review
- Original scanner score: 142
- Original scanner label: 90_plus_uncertain_foveated_rendering_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry; foveation_rendering; frame_behavior
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_13; telemetry_or_network_hits_4; strong_foveation_hits_2; frame_or_lifecycle_behavior; functionality_foveated_rendering; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_142; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; sensitive_sink_foveation_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\022_p270_Meta.XR.MetaXRFoveationFeature$$OnSessionCreate.c

### 23. Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition

- Manual priority score: 254
- Manual tier: A_must_review
- Original scanner score: 145
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; pose_vector; data_collection; structure_combo
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_2; strong_file_logging_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_145; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\023_p254_Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition.c

### 24. Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition

- Manual priority score: 251
- Manual tier: A_must_review
- Original scanner score: 142
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; pose_vector; data_collection; structure_combo
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_2; strong_file_logging_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_142; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_structure_combo_18; sensitive_sink_data_collection_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\024_p251_Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition.c

### 25. OVRManager$$get_eyeTrackedFoveatedRenderingSupported

- Manual priority score: 250
- Manual tier: A_must_review
- Original scanner score: 170
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_12; weak_xr_or_state_hits_10; validity_or_gating_hits_6; paired_field_refs_with_eye_source; strong_foveation_hits_4; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_170; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\025_p250_OVRManager$$get_eyeTrackedFoveatedRenderingSupported.c

### 26. OVRManager$$GetEyeTrackedFoveatedRenderingSupported

- Manual priority score: 250
- Manual tier: A_must_review
- Original scanner score: 170
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_12; weak_xr_or_state_hits_10; validity_or_gating_hits_4; paired_field_refs_with_eye_source; strong_foveation_hits_4; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_170; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\026_p250_OVRManager$$GetEyeTrackedFoveatedRenderingSupported.c

### 27. FUN_05f756e4

- Manual priority score: 246
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; data_collection; telemetry; frame_behavior; keyword_support
- Evidence: validity_or_gating_hits_21; strong_file_logging_hits_4; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; eye_or_gaze_keyword_boost_only; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12; evidence_bonus_eye_or_gaze_keyword_boost_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\027_p246_FUN_05f756e4.c

### 28. OVRManager$$set_eyeTextureFormat

- Manual priority score: 245
- Manual tier: A_must_review
- Original scanner score: 165
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_8; weak_xr_or_state_hits_8; validity_or_gating_hits_7; paired_field_refs_with_eye_source; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_165; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\028_p245_OVRManager$$set_eyeTextureFormat.c

### 29. OVRManager$$get_eyeTextureFormat

- Manual priority score: 245
- Manual tier: A_must_review
- Original scanner score: 165
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_8; weak_xr_or_state_hits_8; validity_or_gating_hits_7; paired_field_refs_with_eye_source; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_165; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\029_p245_OVRManager$$get_eyeTextureFormat.c

### 30. OVRManager$$set_eyeTrackedFoveatedRenderingEnabled

- Manual priority score: 239
- Manual tier: A_must_review
- Original scanner score: 165
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_4; validity_or_gating_hits_7; paired_field_refs_with_eye_source; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_165; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\hellodot\manual-review-pack\A_must_review\030_p239_OVRManager$$set_eyeTrackedFoveatedRenderingEnabled.c
