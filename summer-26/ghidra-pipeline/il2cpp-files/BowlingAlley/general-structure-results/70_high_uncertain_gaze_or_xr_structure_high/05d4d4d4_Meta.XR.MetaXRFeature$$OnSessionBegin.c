/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionBegin
ENTRY_POINT: 05d4d4d4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionBegin(long param_1)

{
  byte bVar1;
  long *plVar2;
  long in_x10;
  long *unaff_x19;
  long unaff_x20;
  
  bVar1 = *(byte *)(param_1 + 0x130);
  if (*(byte *)(in_x10 + 0x130) < bVar1) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = unaff_x19;
    if (*(long *)(*(long *)(in_x10 + 200) + (ulong)bVar1 * 8 + -8) != param_1) {
      plVar2 = (long *)0x0;
    }
  }
  *(long **)(unaff_x20 + 0x118) = plVar2;
  if (*(byte *)(*unaff_x19 + 0x130) < bVar1) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = unaff_x19;
    if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != param_1) {
      plVar2 = (long *)0x0;
    }
  }
  thunk_FUN_0333a630(unaff_x20 + 0x118,plVar2);
  *(long **)(unaff_x20 + 0x120) = unaff_x19;
  thunk_FUN_0333a630(unaff_x20 + 0x120);
  return;
}


