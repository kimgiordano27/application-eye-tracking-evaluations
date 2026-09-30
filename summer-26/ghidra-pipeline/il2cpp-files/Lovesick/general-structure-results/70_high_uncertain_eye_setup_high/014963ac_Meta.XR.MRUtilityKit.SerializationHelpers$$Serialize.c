/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SerializationHelpers$$Serialize
ENTRY_POINT: 014963ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_SerializationHelpers__Serialize(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x24;
  long *unaff_x27;
  
  FUN_017a9608();
  FUN_01496a9c();
  uVar1 = FUN_01600424(*unaff_x24);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x27);
  }
  FUN_014dee34(uVar1,0,0);
  return 0;
}


