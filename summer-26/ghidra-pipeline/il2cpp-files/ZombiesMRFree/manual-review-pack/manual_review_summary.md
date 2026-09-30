# Manual Review Pack Summary: ZombiesMRFree

Selected functions: 100

## Tier counts

- A_must_review: 100

## Top functions

### 1. FUN_0675ec78

- Manual priority score: 334
- Manual tier: A_must_review
- Original scanner score: 196
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_16; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_196; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\001_p334_FUN_0675ec78.c

### 2. Unity.VisualScripting.TypeName$$ReplaceName

- Manual priority score: 325
- Manual tier: A_must_review
- Original scanner score: 187
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_2; validity_or_gating_hits_16; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; telemetry_or_network_hits_1; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_187; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\002_p325_Unity.VisualScripting.TypeName$$ReplaceName.c

### 3. System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.EyeGazeState>

- Manual priority score: 323
- Manual tier: A_must_review
- Original scanner score: 246
- Original scanner label: 90_plus_confirmed_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; ray_interaction; structure_combo; attempted_use; active_gaze_retrieval; active_gaze_interaction
- Evidence: strong_eye_source_hits_4; weak_xr_or_state_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; ray_or_cast_sink_hits_4; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; attempted_eye_tracking_permission_or_feature_enable; active_gaze_state_retrieval_with_validity_and_pose; active_gaze_values_flow_to_interaction_sink; functionality_gaze_retrieval_or_extraction; functionality_gaze_interaction_hits_4
- Priority reasons: base_scanner_score_246; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_ray_interaction_15; module_bonus_structure_combo_18; keyword_support_eye_or_gaze_5_bonus_20; keyword_support_sdk_2_bonus_6
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\003_p323_System.Array$$InternalArray__ICollection_CopyTo_OVRPlugin.EyeGazeState_.c

### 4. System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$Dispose

- Manual priority score: 304
- Manual tier: A_must_review
- Original scanner score: 182
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_16; strong_pose_or_ray_construction_hits_4; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_eye_api_context_without_clear_sink_hits_1
- Priority reasons: base_scanner_score_182; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\004_p304_System.Array.EmptyInternalEnumerator_OVRPassthroughLayer.SerializedSurfaceGeometry_$$Dispose.c

### 5. Unity.VisualScripting.LooseAssemblyNameConverter$$TrySerialize

- Manual priority score: 300
- Manual tier: A_must_review
- Original scanner score: 178
- Original scanner label: 90_plus_uncertain_eye_setup_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_eye_api_context_without_clear_sink_hits_1
- Priority reasons: base_scanner_score_178; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\005_p300_Unity.VisualScripting.LooseAssemblyNameConverter$$TrySerialize.c

### 6. Unity.VisualScripting.LooseAssemblyNameConverter$$TryDeserialize

- Manual priority score: 300
- Manual tier: A_must_review
- Original scanner score: 178
- Original scanner label: 90_plus_uncertain_eye_setup_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_3; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_eye_api_context_without_clear_sink_hits_1
- Priority reasons: base_scanner_score_178; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\006_p300_Unity.VisualScripting.LooseAssemblyNameConverter$$TryDeserialize.c

### 7. FUN_066cb090

- Manual priority score: 299
- Manual tier: A_must_review
- Original scanner score: 167
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; ray_interaction; ui_interaction; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_21; validity_or_gating_hits_21; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_14; ui_or_gameplay_sink_hits_10; telemetry_or_network_hits_10; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_9
- Priority reasons: base_scanner_score_167; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\007_p299_FUN_066cb090.c

### 8. System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$get_Current

- Manual priority score: 296
- Manual tier: A_must_review
- Original scanner score: 174
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_16; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_eye_api_context_without_clear_sink_hits_1
- Priority reasons: base_scanner_score_174; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\008_p296_System.Array.EmptyInternalEnumerator_OVRPassthroughLayer.SerializedSurfaceGeometry_$$get_Current.c

### 9. System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.get_Current

- Manual priority score: 296
- Manual tier: A_must_review
- Original scanner score: 174
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_9; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_eye_api_context_without_clear_sink_hits_1
- Priority reasons: base_scanner_score_174; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\009_p296_System.Array.EmptyInternalEnumerator_OVRPassthroughLayer.SerializedSurfaceGeometry_$$System.Collections.IEnumerator.get_Current.c

### 10. System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.Reset

- Manual priority score: 296
- Manual tier: A_must_review
- Original scanner score: 174
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_7; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_eye_api_context_without_clear_sink_hits_1
- Priority reasons: base_scanner_score_174; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\010_p296_System.Array.EmptyInternalEnumerator_OVRPassthroughLayer.SerializedSurfaceGeometry_$$System.Collections.IEnumerator.Reset.c

### 11. System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$MoveNext

- Manual priority score: 296
- Manual tier: A_must_review
- Original scanner score: 174
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_16; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_eye_api_context_without_clear_sink_hits_1
- Priority reasons: base_scanner_score_174; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\011_p296_System.Array.EmptyInternalEnumerator_OVRPassthroughLayer.SerializedSurfaceGeometry_$$MoveNext.c

### 12. System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$.ctor

- Manual priority score: 296
- Manual tier: A_must_review
- Original scanner score: 174
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_7; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_eye_api_context_without_clear_sink_hits_1
- Priority reasons: base_scanner_score_174; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\012_p296_System.Array.EmptyInternalEnumerator_OVRPassthroughLayer.SerializedSurfaceGeometry_$$.ctor.c

### 13. System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$.cctor

- Manual priority score: 296
- Manual tier: A_must_review
- Original scanner score: 174
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; paired_state_refs; telemetry; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_7; strong_pose_or_ray_construction_hits_2; paired_field_refs_with_eye_source; telemetry_or_network_hits_2; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_eye_api_context_without_clear_sink_hits_1
- Priority reasons: base_scanner_score_174; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_paired_state_refs_8; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\013_p296_System.Array.EmptyInternalEnumerator_OVRPassthroughLayer.SerializedSurfaceGeometry_$$.cctor.c

### 14. Unity.VisualScripting.TypeName$$ToElementTypeName

- Manual priority score: 290
- Manual tier: A_must_review
- Original scanner score: 163
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_11; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_1; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_163; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\014_p290_Unity.VisualScripting.TypeName$$ToElementTypeName.c

### 15. Unity.VisualScripting.TypeName$$ToArrayOrType

- Manual priority score: 290
- Manual tier: A_must_review
- Original scanner score: 163
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_7; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_1; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_163; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\015_p290_Unity.VisualScripting.TypeName$$ToArrayOrType.c

### 16. Unity.VisualScripting.TypeName$$SetAssemblyName

- Manual priority score: 290
- Manual tier: A_must_review
- Original scanner score: 163
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_2; telemetry_or_network_hits_1; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_gaze_retrieval_or_extraction; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_163; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\016_p290_Unity.VisualScripting.TypeName$$SetAssemblyName.c

### 17. Unity.VisualScripting.TypeName.<>c$$.cctor

- Manual priority score: 286
- Manual tier: A_must_review
- Original scanner score: 159
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_6; strong_pose_or_ray_construction_hits_1; telemetry_or_network_hits_1; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_159; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\017_p286_Unity.VisualScripting.TypeName._c$$.cctor.c

### 18. Unity.VisualScripting.TypeName$$ToString

- Manual priority score: 286
- Manual tier: A_must_review
- Original scanner score: 159
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_1; telemetry_or_network_hits_1; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_159; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\018_p286_Unity.VisualScripting.TypeName$$ToString.c

### 19. Unity.VisualScripting.TypeName$$ToString

- Manual priority score: 286
- Manual tier: A_must_review
- Original scanner score: 159
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_5; strong_pose_or_ray_construction_hits_1; telemetry_or_network_hits_1; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_159; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\019_p286_Unity.VisualScripting.TypeName$$ToString.c

### 20. Unity.VisualScripting.StringUtility$$ToHexString

- Manual priority score: 286
- Manual tier: A_must_review
- Original scanner score: 159
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; pose_vector; telemetry; frame_behavior; structure_combo
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_1; validity_or_gating_hits_4; strong_pose_or_ray_construction_hits_1; telemetry_or_network_hits_1; frame_or_lifecycle_behavior; source_validity_pose_sink_structure; strong_eye_source_validity_pose_sink_structure; functionality_data_collection_or_telemetry_hits_1
- Priority reasons: base_scanner_score_159; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\020_p286_Unity.VisualScripting.StringUtility$$ToHexString.c

### 21. TMPro.TextMeshPro$$add_OnPreRenderText

- Manual priority score: 279
- Manual tier: A_must_review
- Original scanner score: 147
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; ray_interaction; ui_interaction; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_21; validity_or_gating_hits_21; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_13; ui_or_gameplay_sink_hits_7; telemetry_or_network_hits_8; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_8
- Priority reasons: base_scanner_score_147; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_ui_interaction_12; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\021_p279_TMPro.TextMeshPro$$add_OnPreRenderText.c

### 22. FUN_0698802c

- Manual priority score: 265
- Manual tier: A_must_review
- Original scanner score: 145
- Original scanner label: 90_plus_uncertain_gaze_or_xr_structure_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; ray_interaction; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_16; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; telemetry_or_network_hits_2; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_145; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\022_p265_FUN_0698802c.c

### 23. FUN_066e57a0

- Manual priority score: 257
- Manual tier: A_must_review
- Original scanner score: 143
- Original scanner label: 90_plus_uncertain_gaze_interaction_near_certain
- Modules: eye_source; weak_source_state; pose_vector; ui_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; strong_pose_or_ray_construction_hits_21; ui_or_gameplay_sink_hits_14; telemetry_or_network_hits_4; frame_or_lifecycle_behavior; functionality_gaze_interaction_hits_14
- Priority reasons: base_scanner_score_143; module_bonus_pose_vector_10; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\023_p257_FUN_066e57a0.c

### 24. TMPro.TextMeshPro$$UpdateVertexData

- Manual priority score: 252
- Manual tier: A_must_review
- Original scanner score: 130
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; ray_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_21; validity_or_gating_hits_21; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_10; telemetry_or_network_hits_8; frame_or_lifecycle_behavior; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_8
- Priority reasons: base_scanner_score_130; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\024_p252_TMPro.TextMeshPro$$UpdateVertexData.c

### 25. TMPro.TextMeshPro$$UpdateFontAsset

- Manual priority score: 252
- Manual tier: A_must_review
- Original scanner score: 130
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; ray_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_20; validity_or_gating_hits_21; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_10; telemetry_or_network_hits_8; frame_or_lifecycle_behavior; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_8
- Priority reasons: base_scanner_score_130; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\025_p252_TMPro.TextMeshPro$$UpdateFontAsset.c

### 26. TMPro.TextMeshPro$$OnEnable

- Manual priority score: 252
- Manual tier: A_must_review
- Original scanner score: 130
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; ray_interaction; telemetry; frame_behavior
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_20; validity_or_gating_hits_21; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_10; telemetry_or_network_hits_8; frame_or_lifecycle_behavior; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_8
- Priority reasons: base_scanner_score_130; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\026_p252_TMPro.TextMeshPro$$OnEnable.c

### 27. UnityEngine.UIElements.IntegerField$$ApplyInputDeviceDelta

- Manual priority score: 251
- Manual tier: A_must_review
- Original scanner score: 125
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; ray_interaction; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_6; validity_or_gating_hits_16; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; telemetry_or_network_hits_2; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_125; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\027_p251_UnityEngine.UIElements.IntegerField$$ApplyInputDeviceDelta.c

### 28. UnityEngine.UIElements.IntegerField$$CanTryParse

- Manual priority score: 245
- Manual tier: A_must_review
- Original scanner score: 125
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; ray_interaction; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_16; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; telemetry_or_network_hits_2; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_125; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\028_p245_UnityEngine.UIElements.IntegerField$$CanTryParse.c

### 29. UnityEngine.UIElements.IntegerField$$.cctor

- Manual priority score: 245
- Manual tier: A_must_review
- Original scanner score: 125
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; ray_interaction; telemetry
- Evidence: strong_eye_source_hits_2; weak_xr_or_state_hits_4; validity_or_gating_hits_16; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_6; telemetry_or_network_hits_2; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_2
- Priority reasons: base_scanner_score_125; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\029_p245_UnityEngine.UIElements.IntegerField$$.cctor.c

### 30. TMPro.TextMeshPro$$OnDisable

- Manual priority score: 241
- Manual tier: A_must_review
- Original scanner score: 124
- Original scanner label: 90_plus_framework_support_only_near_certain
- Modules: eye_source; weak_source_state; validity_gate; paired_state_refs; ray_interaction; telemetry
- Evidence: strong_eye_source_hits_1; weak_xr_or_state_hits_20; validity_or_gating_hits_21; paired_field_refs_with_eye_source; ray_or_cast_sink_hits_10; telemetry_or_network_hits_8; negative_framework_support_context_without_confirmed_app_level_gaze_flow; functionality_permission_setup; functionality_data_collection_or_telemetry_hits_8
- Priority reasons: base_scanner_score_124; module_bonus_validity_gate_8; module_bonus_paired_state_refs_8; module_bonus_ray_interaction_15; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_5_bonus_20
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\ZombiesMRFree\manual-review-pack\A_must_review\030_p241_TMPro.TextMeshPro$$OnDisable.c
