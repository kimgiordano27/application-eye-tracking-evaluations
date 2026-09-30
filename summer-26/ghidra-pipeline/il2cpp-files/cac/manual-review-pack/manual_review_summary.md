# Manual Review Pack Summary: cac

Selected functions: 100

## Tier counts

- A_must_review: 100

## Top functions

### 1. Newtonsoft.Json.JsonReader$$System.IDisposable.Dispose

- Manual priority score: 233
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; pose_vector; data_collection; telemetry; structure_combo
- Evidence: weak_xr_or_state_hits_1; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; strong_file_logging_hits_2; telemetry_or_network_hits_2; source_validity_pose_sink_structure; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\001_p233_Newtonsoft.Json.JsonReader$$System.IDisposable.Dispose.c

### 2. Newtonsoft.Json.JsonReader$$Dispose

- Manual priority score: 233
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; pose_vector; data_collection; telemetry; structure_combo
- Evidence: weak_xr_or_state_hits_2; validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_2; strong_file_logging_hits_2; telemetry_or_network_hits_2; source_validity_pose_sink_structure; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_structure_combo_18; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\002_p233_Newtonsoft.Json.JsonReader$$Dispose.c

### 3. Newtonsoft.Json.JsonSerializer$$set_ContractResolver

- Manual priority score: 229
- Manual tier: A_must_review
- Original scanner score: 81
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; data_collection; telemetry; keyword_support
- Evidence: validity_or_gating_hits_1; strong_file_logging_hits_2; telemetry_or_network_hits_2; eye_or_gaze_keyword_boost_only
- Priority reasons: base_scanner_score_81; module_bonus_validity_gate_8; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_data_collection_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\003_p229_Newtonsoft.Json.JsonSerializer$$set_ContractResolver.c

### 4. FoveationFeature$$SessionCreate

- Manual priority score: 227
- Manual tier: A_must_review
- Original scanner score: 88
- Original scanner label: 70_high_uncertain_foveated_rendering_high
- Modules: validity_gate; telemetry; foveation_rendering; keyword_support
- Evidence: validity_or_gating_hits_2; telemetry_or_network_hits_2; strong_foveation_hits_2; eye_or_gaze_keyword_boost_only; functionality_foveated_rendering
- Priority reasons: base_scanner_score_88; module_bonus_validity_gate_8; module_bonus_telemetry_20; module_bonus_foveation_rendering_20; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\004_p227_FoveationFeature$$SessionCreate.c

### 5. Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray

- Manual priority score: 220
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; data_collection; telemetry; frame_behavior
- Evidence: validity_or_gating_hits_1; strong_pose_or_ray_construction_hits_4; strong_file_logging_hits_2; telemetry_or_network_hits_2; frame_or_lifecycle_behavior; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\005_p220_Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray.c

### 6. AlterEyes.ColorACube.Analytics.AnalyticsTimer$$Handle

- Manual priority score: 219
- Manual tier: A_must_review
- Original scanner score: 87
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; telemetry; frame_behavior; keyword_support
- Evidence: validity_or_gating_hits_5; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_4; frame_or_lifecycle_behavior; eye_or_gaze_keyword_boost_only
- Priority reasons: base_scanner_score_87; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12; evidence_bonus_eye_or_gaze_keyword_boost_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\006_p219_AlterEyes.ColorACube.Analytics.AnalyticsTimer$$Handle.c

### 7. Newtonsoft.Json.Serialization.JsonContract$$InvokeOnError

- Manual priority score: 217
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; data_collection; telemetry
- Evidence: validity_or_gating_hits_13; ui_or_gameplay_sink_hits_6; strong_file_logging_hits_2; telemetry_or_network_hits_4; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\007_p217_Newtonsoft.Json.Serialization.JsonContract$$InvokeOnError.c

### 8. Newtonsoft.Json.Serialization.JsonContract$$InvokeOnDeserialized

- Manual priority score: 217
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; data_collection; telemetry
- Evidence: validity_or_gating_hits_2; ui_or_gameplay_sink_hits_2; strong_file_logging_hits_2; telemetry_or_network_hits_2; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\008_p217_Newtonsoft.Json.Serialization.JsonContract$$InvokeOnDeserialized.c

### 9. FUN_0855f848

- Manual priority score: 217
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; data_collection; telemetry
- Evidence: validity_or_gating_hits_21; ui_or_gameplay_sink_hits_2; strong_file_logging_hits_2; telemetry_or_network_hits_2; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\009_p217_FUN_0855f848.c

### 10. FUN_0855f068

- Manual priority score: 217
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; data_collection; telemetry
- Evidence: validity_or_gating_hits_21; ui_or_gameplay_sink_hits_2; strong_file_logging_hits_2; telemetry_or_network_hits_2; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\010_p217_FUN_0855f068.c

### 11. FUN_0855f020

- Manual priority score: 217
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; data_collection; telemetry
- Evidence: validity_or_gating_hits_21; ui_or_gameplay_sink_hits_2; strong_file_logging_hits_2; telemetry_or_network_hits_2; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\011_p217_FUN_0855f020.c

### 12. Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray

- Manual priority score: 215
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; pose_vector; data_collection; telemetry
- Evidence: validity_or_gating_hits_21; strong_pose_or_ray_construction_hits_4; strong_file_logging_hits_2; telemetry_or_network_hits_2; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\012_p215_Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray.c

### 13. AlterEyes.ColorACube.Analytics.AnalyticsTimer$$StartPaintingEvent

- Manual priority score: 213
- Manual tier: A_must_review
- Original scanner score: 81
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; telemetry; frame_behavior; keyword_support
- Evidence: validity_or_gating_hits_2; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_4; frame_or_lifecycle_behavior; eye_or_gaze_keyword_boost_only
- Priority reasons: base_scanner_score_81; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12; evidence_bonus_eye_or_gaze_keyword_boost_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\013_p213_AlterEyes.ColorACube.Analytics.AnalyticsTimer$$StartPaintingEvent.c

### 14. Newtonsoft.Json.Serialization.JsonContract$$InvokeOnSerialized

- Manual priority score: 211
- Manual tier: A_must_review
- Original scanner score: 87
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; data_collection; telemetry
- Evidence: validity_or_gating_hits_1; ui_or_gameplay_sink_hits_2; strong_file_logging_hits_2; telemetry_or_network_hits_2
- Priority reasons: base_scanner_score_87; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\014_p211_Newtonsoft.Json.Serialization.JsonContract$$InvokeOnSerialized.c

### 15. System.Xml.XmlEncodedRawTextWriter$$WriteStartNamespaceDeclaration

- Manual priority score: 210
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; data_collection; telemetry; frame_behavior
- Evidence: validity_or_gating_hits_11; strong_file_logging_hits_2; telemetry_or_network_hits_4; frame_or_lifecycle_behavior; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\015_p210_System.Xml.XmlEncodedRawTextWriter$$WriteStartNamespaceDeclaration.c

### 16. AlterEyes.ColorACube.Analytics.AnalyticsTimer$$.ctor

- Manual priority score: 210
- Manual tier: A_must_review
- Original scanner score: 78
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; telemetry; frame_behavior; keyword_support
- Evidence: validity_or_gating_hits_1; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_4; frame_or_lifecycle_behavior; eye_or_gaze_keyword_boost_only
- Priority reasons: base_scanner_score_78; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_frame_behavior_5; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12; evidence_bonus_eye_or_gaze_keyword_boost_12
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\016_p210_AlterEyes.ColorACube.Analytics.AnalyticsTimer$$.ctor.c

### 17. Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray

- Manual priority score: 207
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: pose_vector; data_collection; telemetry
- Evidence: strong_pose_or_ray_construction_hits_4; strong_file_logging_hits_2; telemetry_or_network_hits_4; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\017_p207_Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray.c

### 18. Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray

- Manual priority score: 207
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: pose_vector; data_collection; telemetry
- Evidence: strong_pose_or_ray_construction_hits_4; strong_file_logging_hits_2; telemetry_or_network_hits_4; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_pose_vector_10; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\018_p207_Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray.c

### 19. Newtonsoft.Json.JsonSerializerSettings$$get_MetadataPropertyHandling

- Manual priority score: 205
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; data_collection; telemetry
- Evidence: weak_xr_or_state_hits_2; validity_or_gating_hits_9; strong_file_logging_hits_2; telemetry_or_network_hits_2; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\019_p205_Newtonsoft.Json.JsonSerializerSettings$$get_MetadataPropertyHandling.c

### 20. Newtonsoft.Json.JsonReader$$SetStateBasedOnCurrent

- Manual priority score: 205
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; data_collection; telemetry
- Evidence: weak_xr_or_state_hits_2; validity_or_gating_hits_21; strong_file_logging_hits_2; telemetry_or_network_hits_2; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\020_p205_Newtonsoft.Json.JsonReader$$SetStateBasedOnCurrent.c

### 21. Newtonsoft.Json.JsonReader$$SetPostValueState

- Manual priority score: 205
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: weak_source_state; validity_gate; data_collection; telemetry
- Evidence: weak_xr_or_state_hits_2; validity_or_gating_hits_21; strong_file_logging_hits_2; telemetry_or_network_hits_4; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\021_p205_Newtonsoft.Json.JsonReader$$SetPostValueState.c

### 22. Newtonsoft.Json.JsonReader$$GetTypeForCloseToken

- Manual priority score: 205
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; data_collection; telemetry
- Evidence: validity_or_gating_hits_21; strong_file_logging_hits_4; telemetry_or_network_hits_2; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\022_p205_Newtonsoft.Json.JsonReader$$GetTypeForCloseToken.c

### 23. Newtonsoft.Json.JsonReader$$Close

- Manual priority score: 205
- Manual tier: A_must_review
- Original scanner score: 89
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; data_collection; telemetry
- Evidence: validity_or_gating_hits_21; strong_file_logging_hits_4; telemetry_or_network_hits_2; cap_below_near_certain_without_eye_anchor_or_ordered_structure
- Priority reasons: base_scanner_score_89; module_bonus_validity_gate_8; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_2_bonus_8
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\023_p205_Newtonsoft.Json.JsonReader$$Close.c

### 24. Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CalculatePropertyDetails

- Manual priority score: 205
- Manual tier: A_must_review
- Original scanner score: 88
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; data_collection; telemetry; frame_behavior
- Evidence: validity_or_gating_hits_14; strong_file_logging_hits_2; telemetry_or_network_hits_2; frame_or_lifecycle_behavior
- Priority reasons: base_scanner_score_88; module_bonus_validity_gate_8; module_bonus_data_collection_22; module_bonus_telemetry_20; module_bonus_frame_behavior_5; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\024_p205_Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CalculatePropertyDetails.c

### 25. AlterEyes.ColorACube.Analytics.AnalyticsTimer.<>c__DisplayClass14_0$$<SendUserProgressEvent>b__2

- Manual priority score: 205
- Manual tier: A_must_review
- Original scanner score: 78
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; telemetry; keyword_support
- Evidence: validity_or_gating_hits_3; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_4; eye_or_gaze_keyword_boost_only
- Priority reasons: base_scanner_score_78; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\025_p205_AlterEyes.ColorACube.Analytics.AnalyticsTimer._c__DisplayClass14_0$$_SendUserProgressEvent_b__2.c

### 26. AlterEyes.ColorACube.Analytics.AnalyticsTimer.<>c$$<SendUserProgressEvent>b__14_0

- Manual priority score: 205
- Manual tier: A_must_review
- Original scanner score: 78
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; telemetry; keyword_support
- Evidence: validity_or_gating_hits_3; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_4; eye_or_gaze_keyword_boost_only
- Priority reasons: base_scanner_score_78; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\026_p205_AlterEyes.ColorACube.Analytics.AnalyticsTimer._c$$_SendUserProgressEvent_b__14_0.c

### 27. AlterEyes.ColorACube.Analytics.AnalyticsTimer.<>c$$.cctor

- Manual priority score: 205
- Manual tier: A_must_review
- Original scanner score: 78
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; telemetry; keyword_support
- Evidence: validity_or_gating_hits_3; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_4; eye_or_gaze_keyword_boost_only
- Priority reasons: base_scanner_score_78; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\027_p205_AlterEyes.ColorACube.Analytics.AnalyticsTimer._c$$.cctor.c

### 28. AlterEyes.ColorACube.Analytics.AnalyticsTimer.<>c$$.ctor

- Manual priority score: 202
- Manual tier: A_must_review
- Original scanner score: 75
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; ui_interaction; telemetry; keyword_support
- Evidence: validity_or_gating_hits_2; ui_or_gameplay_sink_hits_2; telemetry_or_network_hits_4; eye_or_gaze_keyword_boost_only
- Priority reasons: base_scanner_score_75; module_bonus_validity_gate_8; module_bonus_ui_interaction_12; module_bonus_telemetry_20; module_bonus_keyword_support_12; evidence_bonus_telemetry_or_network_hits_12; evidence_bonus_eye_or_gaze_keyword_boost_12; sensitive_sink_telemetry_bonus_15
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\028_p202_AlterEyes.ColorACube.Analytics.AnalyticsTimer._c$$.ctor.c

### 29. System.Xml.XmlEncodedRawTextWriter$$get_SupportsNamespaceDeclarationInChunks

- Manual priority score: 199
- Manual tier: A_must_review
- Original scanner score: 87
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; data_collection; telemetry
- Evidence: validity_or_gating_hits_11; strong_file_logging_hits_2; telemetry_or_network_hits_4
- Priority reasons: base_scanner_score_87; module_bonus_validity_gate_8; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\029_p199_System.Xml.XmlEncodedRawTextWriter$$get_SupportsNamespaceDeclarationInChunks.c

### 30. Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldSerialize

- Manual priority score: 199
- Manual tier: A_must_review
- Original scanner score: 87
- Original scanner label: 70_high_general_structure_review_high
- Modules: validity_gate; data_collection; telemetry
- Evidence: validity_or_gating_hits_18; strong_file_logging_hits_2; telemetry_or_network_hits_4
- Priority reasons: base_scanner_score_87; module_bonus_validity_gate_8; module_bonus_data_collection_22; module_bonus_telemetry_20; evidence_bonus_telemetry_or_network_hits_12; sensitive_sink_data_collection_bonus_15; sensitive_sink_telemetry_bonus_15; keyword_support_eye_or_gaze_1_bonus_4
- Copied file: C:\realDesktop\manifest-evaluations\summer-26\ghidra-pipeline\il2cpp-files\cac\manual-review-pack\A_must_review\030_p199_Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldSerialize.c
