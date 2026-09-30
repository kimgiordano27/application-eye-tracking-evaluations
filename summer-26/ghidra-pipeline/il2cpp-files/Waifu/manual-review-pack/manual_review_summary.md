# Manual Review Pack Summary: Waifu

Selected functions: 100

## Tier counts

- A_must_review: 100

## Top functions

### 1. OVRPlugin$$GetHeadPoseModifier

- Manual priority score: 234
- Manual tier: A_must_review
- Original scanner score: 157
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_3; strong_pose_or_ray_construction_hits_1; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_157; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\001_p234_OVRPlugin$$GetHeadPoseModifier.c

### 2. OVRPlugin.UnityOpenXR$$OnSessionDestroy

- Manual priority score: 232
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_5; validity_or_gating_hits_10; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\002_p232_OVRPlugin.UnityOpenXR$$OnSessionDestroy.c

### 3. OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy

- Manual priority score: 232
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_5; validity_or_gating_hits_10; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\003_p232_OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy.c

### 4. OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionCreate

- Manual priority score: 232
- Manual tier: A_must_review
- Original scanner score: 121
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_9; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_121; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\004_p232_OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionCreate.c

### 5. OVRPlugin$$IsPerfMetricsSupported

- Manual priority score: 231
- Manual tier: A_must_review
- Original scanner score: 154
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_1; ray_or_cast_sink_hits_3; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_3
- Priority reasons: base_scanner_score_154; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\005_p231_OVRPlugin$$IsPerfMetricsSupported.c

### 6. System.Collections.Generic.EqualityComparer<OVRPlugin.Qpl.Annotation.Builder.Entry>$$.ctor

- Manual priority score: 230
- Manual tier: A_must_review
- Original scanner score: 156
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; structure_combo; ordered_structure
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_2; ui_or_gameplay_sink_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; ordered_eye_source_validity_pose_interaction_sink; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_156; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\006_p230_System.Collections.Generic.EqualityComparer_OVRPlugin.Qpl.Annotation.Builder.Entry_$$.ctor.c

### 7. Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray

- Manual priority score: 228
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; paired_state_refs; data_collection; telemetry; frame_behavior
- Evidence: validity_or_gating_hits_16; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_structure_only; strong_file_logging_hits_2; telemetry_or_network_hits_2; frame_or_lifecycle_behavior; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\007_p228_Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray.c

### 8. OVRPlugin$$SetDeveloperTelemetryConsent

- Manual priority score: 224
- Manual tier: A_must_review
- Original scanner score: 119
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_21; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_119; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\008_p224_OVRPlugin$$SetDeveloperTelemetryConsent.c

### 9. OVRPlugin.Media$$SetMrcHeadsetControllerPose

- Manual priority score: 222
- Manual tier: A_must_review
- Original scanner score: 148
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_3; validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_2; ui_or_gameplay_sink_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_148; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\009_p222_OVRPlugin.Media$$SetMrcHeadsetControllerPose.c

### 10. OVRManager$$get_eyeTrackedFoveatedRenderingEnabled

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_6; validity_or_gating_hits_5; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\010_p219_OVRManager$$get_eyeTrackedFoveatedRenderingEnabled.c

### 11. OVRManager$$GetEyeTrackedFoveatedRenderingSupported

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_4; validity_or_gating_hits_4; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\011_p219_OVRManager$$GetEyeTrackedFoveatedRenderingSupported.c

### 12. OVRManager$$GetEyeTrackedFoveatedRenderingEnabled

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 153
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_6; validity_or_gating_hits_4; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_153; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\012_p219_OVRManager$$GetEyeTrackedFoveatedRenderingEnabled.c

### 13. Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnStart

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 115
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; paired_state_refs; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_4; paired_field_refs_with_eye_source; telemetry_or_network_hits_4; frame_or_lifecycle_behavior; functionality_data_collection_or_telemetry_hits_4
- Priority reasons: base_scanner_score_115; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\013_p219_Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnStart.c

### 14. Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$Init

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 115
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; validity_gate; paired_state_refs; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_5; paired_field_refs_with_eye_source; telemetry_or_network_hits_6; frame_or_lifecycle_behavior; functionality_data_collection_or_telemetry_hits_6
- Priority reasons: base_scanner_score_115; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\014_p219_Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$Init.c

### 15. OVRManager$$set_eyeTrackedFoveatedRenderingEnabled

- Manual priority score: 216
- Manual tier: A_must_review
- Original scanner score: 150
- Original scanner label: 90_plus_attempted_dynamic_eye_tracked_foveation_near_certain
- Modules: eye_source; weak_source_state; validity_gate; foveation_rendering; attempted_use; dynamic_foveation_possible
- Evidence: strong_eye_source_hits_6; weak_xr_or_state_hits_4; validity_or_gating_hits_3; strong_foveation_hits_2; attempted_eye_tracking_permission_or_feature_enable; attempted_eye_tracking_with_foveated_rendering_path; functionality_foveated_rendering
- Priority reasons: base_scanner_score_150; module_bonus_validity_gate_8; module_bonus_foveation_rendering_20; sensitive_sink_foveation_bonus_12; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\015_p216_OVRManager$$set_eyeTrackedFoveatedRenderingEnabled.c

### 16. Meta.XR.BuildingBlocks.RoomMeshController.<Start>d__4$$System.IDisposable.Dispose

- Manual priority score: 216
- Manual tier: A_must_review
- Original scanner score: 143
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; validity_gate; pose_vector; ui_interaction; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_13; strong_pose_or_ray_construction_hits_2; ui_or_gameplay_sink_hits_2; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_interaction_hits_2
- Priority reasons: base_scanner_score_143; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\016_p216_Meta.XR.BuildingBlocks.RoomMeshController._Start_d__4$$System.IDisposable.Dispose.c

### 17. Estrada.DefaultMicrophoneController.MacOSMicrophonePermissionRequester.<RequestPermission>d__2$$System.IDisposable.Dispose

- Manual priority score: 216
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_attempted_eye_tracking_permission_or_feature_high
- Modules: weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo; attempted_use
- Evidence: weak_xr_or_state_hits_4; validity_or_gating_hits_16; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_structure_only; telemetry_or_network_hits_4; source_validity_pose_sink_structure; attempted_eye_tracking_permission_or_feature_enable; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\017_p216_Estrada.DefaultMicrophoneController.MacOSMicrophonePermissionRequester._RequestPermission_d__2$$System.IDisposable.Dispose.c

### 18. Estrada.DefaultMicrophoneController.<RequestPermission>d__3$$System.IDisposable.Dispose

- Manual priority score: 216
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_attempted_eye_tracking_permission_or_feature_high
- Modules: weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo; attempted_use
- Evidence: weak_xr_or_state_hits_2; validity_or_gating_hits_12; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_structure_only; telemetry_or_network_hits_2; source_validity_pose_sink_structure; attempted_eye_tracking_permission_or_feature_enable; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\018_p216_Estrada.DefaultMicrophoneController._RequestPermission_d__3$$System.IDisposable.Dispose.c

### 19. ShadowGroveGames.WebhooksForDiscord.Scripts.DiscordWebhook.<SendHttpRequestAsync>d__26$$MoveNext

- Manual priority score: 213
- Manual tier: A_must_review
- Original scanner score: 87
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; ui_interaction; telemetry; keyword_support
- Evidence: weak_xr_or_state_hits_5; validity_or_gating_hits_21; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_2; eye_or_gaze_keyword_boost_only
- Priority reasons: base_scanner_score_87; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\019_p213_ShadowGroveGames.WebhooksForDiscord.Scripts.DiscordWebhook._SendHttpRequestAsync_d__26$$MoveNext.c

### 20. OVRPlugin.UnityOpenXR$$OnSessionExiting

- Manual priority score: 212
- Manual tier: A_must_review
- Original scanner score: 109
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_5; validity_or_gating_hits_13; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_109; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\020_p212_OVRPlugin.UnityOpenXR$$OnSessionExiting.c

### 21. OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionExiting

- Manual priority score: 212
- Manual tier: A_must_review
- Original scanner score: 109
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_5; validity_or_gating_hits_11; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_109; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\021_p212_OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionExiting.c

### 22. OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd

- Manual priority score: 212
- Manual tier: A_must_review
- Original scanner score: 109
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_5; validity_or_gating_hits_13; telemetry_or_network_hits_2; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_109; module_bonus_validity_gate_8; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_4_bonus_12; keyword_support_collection_or_telemetry_4_bonus_16
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\022_p212_OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd.c

### 23. System.Array$$InternalArray__ICollection_Add<OVRPlugin.Qpl.Annotation>

- Manual priority score: 211
- Manual tier: A_must_review
- Original scanner score: 137
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ui_interaction; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_2; ui_or_gameplay_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_137; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\023_p211_System.Array$$InternalArray__ICollection_Add_OVRPlugin.Qpl.Annotation_.c

### 24. Newtonsoft.Json.Serialization.JsonContract$$InvokeOnDeserialized

- Manual priority score: 211
- Manual tier: A_must_review
- Original scanner score: 87
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; data_collection; telemetry
- Evidence: validity_or_gating_hits_1; ui_or_gameplay_sink_hits_2; strong_file_logging_hits_2; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_87; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\024_p211_Newtonsoft.Json.Serialization.JsonContract$$InvokeOnDeserialized.c

### 25. Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorRay

- Manual priority score: 210
- Manual tier: A_must_review
- Original scanner score: 142
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; validity_gate; pose_vector; ui_interaction; structure_combo
- Evidence: strong_eye_source_hits_1; validity_or_gating_hits_2; strong_pose_or_ray_construction_hits_4; ui_or_gameplay_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_142; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\025_p210_Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorRay.c

### 26. Unity.VisualScripting.UnityMessageListener$$OnMove

- Manual priority score: 210
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; data_collection; telemetry; frame_behavior
- Evidence: validity_or_gating_hits_4; strong_file_logging_hits_4; telemetry_or_network_hits_3; frame_or_lifecycle_behavior; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\026_p210_Unity.VisualScripting.UnityMessageListener$$OnMove.c

### 27. Unity.VisualScripting.UnityMessageListener$$OnBecameInvisible

- Manual priority score: 210
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; data_collection; telemetry; frame_behavior
- Evidence: validity_or_gating_hits_3; strong_file_logging_hits_4; telemetry_or_network_hits_2; frame_or_lifecycle_behavior; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\027_p210_Unity.VisualScripting.UnityMessageListener$$OnBecameInvisible.c

### 28. FUN_07675858

- Manual priority score: 210
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; data_collection; telemetry; frame_behavior
- Evidence: validity_or_gating_hits_4; strong_file_logging_hits_4; telemetry_or_network_hits_3; frame_or_lifecycle_behavior; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\028_p210_FUN_07675858.c

### 29. FUN_06600648

- Manual priority score: 210
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; data_collection; telemetry; frame_behavior
- Evidence: validity_or_gating_hits_13; strong_file_logging_hits_2; telemetry_or_network_hits_4; frame_or_lifecycle_behavior; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\029_p210_FUN_06600648.c

### 30. Estrada.Microphone.<RequestPermission>d__5$$System.IDisposable.Dispose

- Manual priority score: 208
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_attempted_eye_tracking_permission_or_feature_high
- Modules: weak_source_state; validity_gate; pose_vector; telemetry; structure_combo; attempted_use
- Evidence: weak_xr_or_state_hits_3; validity_or_gating_hits_8; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_2; source_validity_pose_sink_structure; attempted_eye_tracking_permission_or_feature_enable; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\Waifu\manual-review-pack\A_must_review\030_p208_Estrada.Microphone._RequestPermission_d__5$$System.IDisposable.Dispose.c
