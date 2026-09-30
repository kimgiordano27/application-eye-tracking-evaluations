/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcInputVideoBufferType
ENTRY_POINT: 076db114
PROGRAM: m3ar-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_Media__GetMrcInputVideoBufferType(void)

{
  bool bVar1;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar2;
  float unaff_s9;
  
  FUN_0403162c();
  *(undefined1 *)(unaff_x20 + 0xc10) = 1;
  uVar2 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
  *(undefined8 *)(unaff_x19 + 0xc) = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
  *(undefined4 *)(unaff_x19 + 0x14) = uVar2;
  if (unaff_s9 <= 0.0) {
    bVar1 = true;
  }
  else {
    bVar1 = *(float *)(unaff_x19 + 0x18) <= unaff_s9;
  }
  return bVar1;
}


