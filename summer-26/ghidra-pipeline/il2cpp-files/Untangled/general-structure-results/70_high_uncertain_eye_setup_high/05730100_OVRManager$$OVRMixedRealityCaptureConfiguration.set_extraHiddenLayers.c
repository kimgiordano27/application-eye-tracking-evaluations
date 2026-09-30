/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers
ENTRY_POINT: 05730100
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *in_x10;
  int *piVar3;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar3 * 0x10 + 0x138);
        goto 
        OVRManager__OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 != 0);
  }
  puVar1 = (undefined8 *)FUN_02eea86c();
OVRManager__OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift:
  (*(code *)*puVar1)();
  FUN_0572d83c();
  return;
}


