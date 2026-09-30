/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$SaveSceneToJsonString
ENTRY_POINT: 04de95fc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUK__SaveSceneToJsonString(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_02f41ef8();
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  iVar1 = FUN_04de6e60();
  FUN_0609bf0c(unaff_x20 + 4,unaff_x19 + 4,(long)iVar1,0);
  return 0;
}


