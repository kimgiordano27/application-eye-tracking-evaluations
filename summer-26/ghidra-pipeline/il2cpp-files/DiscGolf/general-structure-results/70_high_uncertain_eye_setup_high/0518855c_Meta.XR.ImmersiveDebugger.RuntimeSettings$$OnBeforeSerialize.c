/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnBeforeSerialize
ENTRY_POINT: 0518855c
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


bool Meta_XR_ImmersiveDebugger_RuntimeSettings__OnBeforeSerialize(long param_1)

{
  long *plVar1;
  long *unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *unaff_x19;
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_02dcfd18();
  }
  plVar1 = (long *)(lVar2 + (long)unaff_w21 * 0x20);
  lVar4 = plVar1[1];
  lVar3 = *plVar1;
  lVar2 = plVar1[2];
  unaff_x19[6] = plVar1[3];
  unaff_x19[5] = lVar2;
  unaff_x19[4] = lVar4;
  unaff_x19[3] = lVar3;
  return unaff_w21 < unaff_w20;
}


