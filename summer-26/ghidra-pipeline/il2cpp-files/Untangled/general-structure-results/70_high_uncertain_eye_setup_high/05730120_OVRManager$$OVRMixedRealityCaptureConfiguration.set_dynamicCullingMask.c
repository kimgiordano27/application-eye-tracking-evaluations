/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_dynamicCullingMask
ENTRY_POINT: 05730120
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


void OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  long in_x9;
  int *in_x10;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_02eea86c();
      goto OVRManager__OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
OVRManager__OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift:
  (*(code *)*puVar3)();
  FUN_0572d83c();
  return;
}


