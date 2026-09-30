/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<MatchInfo>
ENTRY_POINT: 037290d8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<MatchInfo>
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined4 in_w9;
  undefined8 in_x10;
  undefined8 *unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 5) = in_w9;
  unaff_x19[4] = in_x10;
  unaff_x19[1] = param_2._8_8_;
  *unaff_x19 = param_2._0_8_;
  unaff_x19[3] = param_1._8_8_;
  unaff_x19[2] = param_1._0_8_;
  return;
}


